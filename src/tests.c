#include <check.h>
#include <math.h>

#include "./SmartCalc/calculator.h"

#define SUITE_NAME "Unit"
#define TCASE_NAME "Tests"

#define OK 0
#define FAIL 1

///////// BASE TESTS /////////

START_TEST(base_test_0) {
  char str[64] = "2+2*2";
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 6);
}

START_TEST(base_test_1) {
  char str[64] = "5-2+3+4/2*3";
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 12);
}

START_TEST(base_test_2) {
  char str[64] = "8*4+1+2+1+1";
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 37);
}

START_TEST(base_test_3) {
  char str[64] = "8*4+1+2";
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 35);
}

START_TEST(base_test_4) {
  char str[64] = "5+3*4+2*2*3+2";
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 31);
}

START_TEST(base_test_5) {
  char str[64] = "12031997+05101997";  // 17133994.000000
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 17133994);
}

START_TEST(base_test_6) {
  char str[64] = "2";
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 2);
}

START_TEST(base_test_7) {
  char str[64] = "15/(7-(1+1))*3-(2+(1+1))+15";
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 20);
}

/////// PARENTHESES /////////
START_TEST(parentheses_test_0) {
  char str[64] = "(2+2)*2";  // 8
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 8);
}

START_TEST(parentheses_test_1) {
  char str[64] = "(3+1)*4+((2+2)*((2+2)*2))/8";  // 20
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 20);
}

START_TEST(parentheses_test_2) {
  char str[64] = "255-(177+58-200)";
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 220);
}

START_TEST(parentheses_test_3) {
  char str[64] = "(930-480)*16+(2004-999)*17-18*101";
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 22467);
}

START_TEST(parentheses_test_4) {
  char str[64] = "(2+2)";
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 4);
}

START_TEST(parentheses_test_5) {
  char str[64] = "15/(7-(1+1))*3-(2+(1+1))*15/(7-(200+1))";
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - (9.309278)) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

///////// TRIGONIMETRIC FUNCTIONS /////////
START_TEST(trigonometric_test_0) {
  char str[64] = "sin(3.141592/2)";  // 1
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - (1)) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

START_TEST(trigonometric_test_1) {
  char str[64] = "cos(3.141592/2)";  // 0
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - 0) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

START_TEST(trigonometric_test_2) {
  char str[64] = "tg(0)";  // 0
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - 0) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

START_TEST(trigonometric_test_3) {
  char str[64] = "ctg(3.141592/2)";  // 0
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - 0) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

START_TEST(trigonometric_test_4) {
  char str[64] = "sin(3.141592/2)+cos(3.141592/2)";  // 1+0=1
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - 1) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

START_TEST(trigonometric_test_5) {
  char str[64] = "asin(sin(3.141592/2))";
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - 1.570796) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

START_TEST(trigonometric_test_6) {
  char str[64] = "acos(cos(0.7))";
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - 0.7) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

START_TEST(trigonometric_test_7) {
  char str[64] = "atan(tan(0.3))";
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - 0.3) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

///////// OTHER FUNCTIONS /////////

// SQRT TESTS
START_TEST(sqrt_test_0) {
  char str[64] = "sqrt(4)";  // 1.414213..
  double res;
  calculate(str, &res, 0);
  ck_assert_int_eq(res, 2);
}

START_TEST(sqrt_test_1) {
  char str[64] = "sqrt(2)";  // 1.414213..
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - (1.414213)) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

START_TEST(sqrt_test_2) {
  char str[64] = "sqrt(3)/2";  // 0.8660254..
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - (0.8660254)) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

START_TEST(sqrt_test_3) {
  char str[64] = "sqrt(3)+sqrt(1/2)";  // 2.4391575..
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - (2.4391575)) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

START_TEST(sqrt_test_4) {
  char str[64] = "sqrt(4)/1+sqrt(3)/2+sqrt(2)/4";  // 3.2195787..
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - (3.2195787)) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

START_TEST(sqrt_test_5) {
  char str[64] = "sqrt(((2+2)*4)*4)";  // 8
  double res;
  calculate(str, &res, 0);
  ck_assert_int_eq(res, 8);
}

// MOD TESTS
START_TEST(mod_test_0) {
  char str[64] = "4mod(2)";  // 0
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 0);
}

START_TEST(mod_test_1) {
  char str[64] = "5mod(2)";  // 1
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 1);
}

START_TEST(mod_test_2) {
  char str[64] = "7mod(5)+3.6mod(1.8)";  // 2
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 2);
}

START_TEST(mod_test_3) {
  char str[64] = "3.6mod(1.5)";  // 0.6
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - 0.6) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

// ln & log
START_TEST(log_test_0) {
  char str[64] = "log(10)";  // 1
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(res, 1);
}

START_TEST(ln_test_0) {
  char str[64] = "ln(2.718281)";  // 1
  double res;
  calculate(str, &res, 0);
  int test_res = fabsl(res - 1) < 1e-6 ? OK : FAIL;
  ck_assert_int_eq(test_res, OK);
}

///////// FUNCTION WITH VARIABLE /////////
START_TEST(var_test_0) {
  char str[64] = "2*x+1";
  double res;
  calculate(str, &res, 0);
  ck_assert_int_eq(res, 1);
}

START_TEST(var_test_1) {
  char str[64] = "2*x+1";
  double res;
  calculate(str, &res, 2);
  ck_assert_int_eq(res, 5);
}

START_TEST(var_test_2) {
  char str[64] = "x^0+x^2+x^3";  // 13
  double res;
  calculate(str, &res, 2);
  ck_assert_int_eq(res, 13);
}

START_TEST(var_test_3) {
  char str[64] = "x^0-x^2+x^3-x^4+x^5";  // 21
  double res;
  calculate(str, &res, 2);
  ck_assert_int_eq(res, 21);
}

// NEGATIVE NUMS
START_TEST(negative_test_0) {
  char str[64] = "-5-3";  //-8
  double res;
  calculate(str, &res, 0);
  ck_assert_int_eq(res, -8);
}

START_TEST(negative_test_1) {
  char str[64] = "-15-(2-10)";  //-7
  double res;
  calculate(str, &res, 0);
  ck_assert_int_eq(res, -7);
}

START_TEST(negative_test_2) {
  char str[64] = "-2-15";  //-17
  double res;
  calculate(str, &res, 0);
  ck_assert_int_eq(res, -17);
}

START_TEST(negative_test_3) {
  char str[64] = "-2-(-(-10-2))";  //-14
  double res;
  calculate(str, &res, 0);
  ck_assert_int_eq(res, -14);
}

START_TEST(negative_test_4) {
  char str[64] = "-(cos(0))";  //-1
  double res;
  calculate(str, &res, 0);
  ck_assert_int_eq(res, -1);
}

START_TEST(negative_test_5) {
  char str[64] = "1000/(5000/(200/(2^2)*5-300))-11";  //-21
  double res;
  calculate(str, &res, 0);
  ck_assert_int_eq(res, -21);
}

///////// ERRORS AND EXCEPTIONS /////////
START_TEST(err_test_0) {
  char str[64] = "+2";
  double res;
  ck_assert_int_eq(1, calculate(str, &res, 0));
}

START_TEST(err_test_1) {
  char str[64] = "2++2";
  double res;
  ck_assert_int_eq(1, calculate(str, &res, 0));
}

START_TEST(err_test_2) {
  char str[64] = "hello";
  double res;
  ck_assert_int_eq(1, calculate(str, &res, 0));
}

START_TEST(err_test_3) {
  char str[64] = "sin(*)";
  double res;
  ck_assert_int_eq(1, calculate(str, &res, 0));
}

START_TEST(err_test_4) {
  char str[64] = "sin(sin(0))";
  double res;
  calculate(str, &res, 0);
  ck_assert_ldouble_eq(0, res);
}

START_TEST(err_test_5) {
  char str[64] = "((2+2)";
  double res;
  ck_assert_int_eq(1, calculate(str, &res, 0));
}

START_TEST(err_test_6) {
  char str[64] = "sin(x";
  double res;
  ck_assert_int_eq(1, calculate(str, &res, 0));
}

START_TEST(err_test_7) {
  char str[64] = "sqr(x)";
  double res;
  ck_assert_int_eq(1, calculate(str, &res, 0));
}

START_TEST(err_test_8) {
  char str[64] = "xx";
  double res;
  ck_assert_int_eq(1, calculate(str, &res, 0));
}

START_TEST(err_test_9) {
  char str[64] = "x.2";
  double res;
  ck_assert_int_eq(1, calculate(str, &res, 0));
}

START_TEST(err_test_10) {
  char str[64] = "";
  double res;
  ck_assert_int_eq(1, calculate(str, &res, 0));
}

// SECONDARY FUNCTIONS
START_TEST(remove_lc_test) {
  char str1[64] = "1234567)";
  char str2[64] = "";
  strcpy(str2, removeLastChar(str1));
  ck_assert_str_eq("1234567", str2);
}

START_TEST(onlynums_test) {
  char str1[64] = "1234567)";
  int res = hasStringOnlyNums(str1);
  ck_assert_int_eq(0, res);
}

int main(void) {
  Suite *suite = suite_create(SUITE_NAME);
  TCase *tcase = tcase_create(TCASE_NAME);
  SRunner *srunner = srunner_create(suite);
  int counted_errors = 0;

  suite_add_tcase(suite, tcase);

  // BASE TESTS + - * /
  tcase_add_test(tcase, base_test_0);
  tcase_add_test(tcase, base_test_1);
  tcase_add_test(tcase, base_test_2);
  tcase_add_test(tcase, base_test_3);
  tcase_add_test(tcase, base_test_4);
  tcase_add_test(tcase, base_test_5);
  tcase_add_test(tcase, base_test_6);
  tcase_add_test(tcase, base_test_7);

  // PARENTHESES ( )
  tcase_add_test(tcase, parentheses_test_0);
  tcase_add_test(tcase, parentheses_test_1);
  tcase_add_test(tcase, parentheses_test_2);
  tcase_add_test(tcase, parentheses_test_3);
  tcase_add_test(tcase, parentheses_test_4);
  tcase_add_test(tcase, parentheses_test_5);

  // TRIGONOMETRIC FUNCTIONS
  tcase_add_test(tcase, trigonometric_test_0);
  tcase_add_test(tcase, trigonometric_test_1);
  tcase_add_test(tcase, trigonometric_test_2);
  tcase_add_test(tcase, trigonometric_test_3);
  tcase_add_test(tcase, trigonometric_test_4);
  tcase_add_test(tcase, trigonometric_test_5);
  tcase_add_test(tcase, trigonometric_test_6);
  tcase_add_test(tcase, trigonometric_test_7);

  // OTHER FUNCTIONS
  // sqrt
  tcase_add_test(tcase, sqrt_test_0);
  tcase_add_test(tcase, sqrt_test_1);
  tcase_add_test(tcase, sqrt_test_2);
  tcase_add_test(tcase, sqrt_test_3);
  tcase_add_test(tcase, sqrt_test_4);
  tcase_add_test(tcase, sqrt_test_5);
  // mod
  tcase_add_test(tcase, mod_test_0);
  tcase_add_test(tcase, mod_test_1);
  tcase_add_test(tcase, mod_test_2);
  tcase_add_test(tcase, mod_test_3);
  // ln & log
  tcase_add_test(tcase, ln_test_0);
  tcase_add_test(tcase, log_test_0);

  tcase_add_test(tcase, var_test_0);
  tcase_add_test(tcase, var_test_1);
  tcase_add_test(tcase, var_test_2);
  tcase_add_test(tcase, var_test_3);

  // NEGATIVE NUMS
  tcase_add_test(tcase, negative_test_0);
  tcase_add_test(tcase, negative_test_1);
  tcase_add_test(tcase, negative_test_2);
  tcase_add_test(tcase, negative_test_3);
  tcase_add_test(tcase, negative_test_4);
  tcase_add_test(tcase, negative_test_5);

  // ERRORS AND EXCEPTIONS
  tcase_add_test(tcase, err_test_0);
  tcase_add_test(tcase, err_test_1);
  tcase_add_test(tcase, err_test_2);
  tcase_add_test(tcase, err_test_3);
  tcase_add_test(tcase, err_test_4);
  tcase_add_test(tcase, err_test_5);
  tcase_add_test(tcase, err_test_6);
  tcase_add_test(tcase, err_test_7);
  tcase_add_test(tcase, err_test_8);
  tcase_add_test(tcase, err_test_9);
  tcase_add_test(tcase, err_test_10);

  tcase_add_test(tcase, remove_lc_test);
  tcase_add_test(tcase, onlynums_test);

  srunner_set_fork_status(srunner, CK_NOFORK);
  srunner_run_all(srunner, CK_VERBOSE);
  counted_errors = srunner_ntests_failed(srunner);
  srunner_free(srunner);

  return counted_errors == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}
