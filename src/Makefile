CC=gcc
FLAGS=-Wall -Werror -Wextra -std=c11
BD=../build
TESTS=tests
APP=$(BD)/SmartCalc.app
OS := $(shell uname)

all: test install

s21_covered:
	cd ./SmartCalc; $(CC) calculator.c -c $(FLAGS) --coverage
	ar rc s21_smartcalc.a ./SmartCalc/calculator.o
	ranlib s21_smartcalc.a

test: s21_covered
	$(CC) -o $(TESTS).o $(TESTS).c -c $(FLAGS) --coverage 
ifeq ($(OS), Darwin)
	$(CC) $(TESTS).o s21_smartcalc.a -o $(TESTS) -lcheck -lm --coverage $(FLAGS)
else 
	$(CC) $(TESTS).o s21_smartcalc.a -o $(TESTS) -lcheck -lsubunit -lm --coverage $(FLAGS)
endif
	./$(TESTS)

mem: test
	leaks --atExit -- ./$(TESTS) -fsanitize=address

gcov_report: test
	lcov -t "./gcov" -o s21_smartcalc.info -c -d .
	genhtml -o gcov s21_smartcalc.info
	open ./gcov/index.html

install: build

ifeq ($(OS), Darwin)
	cp -R ../build/SmartCalc.app ~/Desktop/SmartCalc.app
endif
	make clean
	make run

build: $(BD)/SmartCalc.pro
	cd ${BD}; qmake ../src/SmartCalc/SmartCalc.pro
	make -C ${BD}

./$(BD)/SmartCalc.pro:
	mkdir ${BD}
	cp ./SmartCalc/SmartCalc.pro $(BD)

run:
ifeq ($(OS), Darwin)
	${BD}/SmartCalc.app/Contents/MacOS/SmartCalc
else
	${BD}/SmartCalc
endif

uninstall:
	rm -rf ${BD}
	rm -rf ~/Desktop/SmartCalc.app

clean:
	rm -rf *.o
	rm -rf *.a
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf tests
	rm -rf ./SmartCalc/*.gcda
	rm -rf ./SmartCalc/*.gcno
	rm -rf ./SmartCalc/*.o
	rm -rf Archive_SmartCalc_v1.0
	rm -rf Archive_SmartCalc_v1.0.tgz

	rm -rf gcov
	rm -rf *.info
	rm -rf report

dvi:
	open dvi.pdf

dist:
	rm -rf Archive_SmartCalc_v1.0
	mkdir Archive_SmartCalc_v1.0
	mkdir Archive_SmartCalc_v1.0/build
	cp dvi.pdf Archive_SmartCalc_v1.0
ifeq ($(OS), Darwin) 
	cp -R ${BD}/SmartCalc.app Archive_SmartCalc_v1.0/build
else
	cp ${BD}/SmartCalc Archive_SmartCalc_v1.0/build
endif
	cp Makefile Archive_SmartCalc_v1.0
	cp -R SmartCalc Archive_SmartCalc_v1.0
	tar cvzf Archive_SmartCalc_v1.0.tgz Archive_SmartCalc_v1.0/
	rm -rf Archive_SmartCalc_v1.0
ifeq ($(OS), Darwin)
	cp Archive_SmartCalc_v1.0.tgz  ~/Desktop/Archive_SmartCalc_v1.0.tgz 
endif

cppcheck:
	cppcheck --enable=all --check-config --suppress=missingIncludeSystem ./SmartCalc/*.c ./SmartCalc/*.h tests.c

clang:
	cp ../materials/linters/.clang-format ../src/.clang-format; 
	clang-format -style=Google -n ./SmartCalc/*.c ./SmartCalc/*.h tests.c ./SmartCalc/*.cpp; 
	clang-format -style=Google -i ./SmartCalc/*.c ./SmartCalc/*.h tests.c ./SmartCalc/*.cpp; 
	rm .clang-format

push: clang
	git status
	git add .
	git commit -m 'fix'
	git push origin develop