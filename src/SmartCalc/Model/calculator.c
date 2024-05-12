#include "calculator.h"

node* createNode(double data) {
  node* new_node = (node*)malloc(sizeof(node));
  new_node->data = data;
  new_node->next = NULL;
  new_node->type = 0;
  new_node->priority = 0;
  return new_node;
}

void pushNode(node** stack, double data, int type) {
  node* new_node = createNode(data);
  new_node->next = *stack;
  new_node->type = type;
  *stack = new_node;
}

double popNode(node** stack) {
  double res;
  res = (*stack)->data;
  node* tmp = (*stack)->next;
  free(*stack);
  *stack = tmp;
  return res;
}

void free_stack(node** head) {
  while (*head != NULL) {
    node* temp = *head;
    *head = (*head)->next;
    free(temp);
  }
}

void dropNode(node** stack, node** stack_2) {
  pushNode(stack_2, (*stack)->data, (*stack)->type);
  popNode(stack);
}

void printNodes(node** stack) {
  int i = 0;
  printf("--------\n");
  node* tmp = *stack;
  while (tmp->next != NULL) {
    if (tmp->type > 0) {
      printf("%d | %c, %d\n", i, (char)tmp->data, tmp->type);
    } else {
      printf("%d | %.2lf, %d\n", i, tmp->data, tmp->type);
    }
    i++;
    tmp = tmp->next;
  }
  printf("--------\n");
}

int getType(node** stack) {
  node* tmp = *stack;
  return tmp->type;
}

void fromStackToAnother(node** stack, node** stack_2) {
  node* tmp = *stack;
  while (tmp->next != NULL) {
    tmp = tmp->next;
    dropNode(stack, stack_2);
  }
}

int hasStackBracket(node** stack) {
  int flag = 0;
  node* tmp = *stack;
  while (tmp->next != NULL) {
    if (tmp->type == 5) {
      flag = 1;
    }
    tmp = tmp->next;
  }
  return flag;
}

int countNodes(node** stack) {
  int counter = 0;
  node* tmp = *stack;
  while (tmp->next != NULL) {
    counter++;
    tmp = tmp->next;
  }
  return counter;
}

void pushOperationCheckPriority(char c, node** stack, node** stack_2,
                                int priority) {
  while (priority <= getType(stack_2)) {
    dropNode(stack_2, stack);
  }
  pushNode(stack_2, c, priority);
}

int toPolishNotation(const char* str, node** stack, node** stack_2, double x) {
  int error = 0;

  for (int i = 0; *(str + i); i++) {
    if ((str[i] >= '0' && (int)str[i] <= '9')) {
      char num_str[64] = "";
      double float_num = 0;

      int j = 0;
      while ((str[i] >= '0' && (int)str[i] <= '9') || str[i] == '.') {
        num_str[j] = str[i];
        i++;
        j++;
      }

      float_num = atof(num_str);
      pushNode(stack, float_num, 0);
    }

    if (str[i] == 'x') {
      pushNode(stack, x, 0);
    }

    if (str[i] == 's' || str[i] == 'c' || str[i] == 't' || str[i] == 'm' ||
        str[i] == 'l' || str[i] == 'a') {
      char func_str[64] = "";

      int j = 0;
      while (str[i] >= 'a' && (int)str[i] <= 'z') {
        func_str[j] = str[i];
        i++;
        j++;
      }

      if (strcmp(func_str, "sin") == 0) {
        pushNode(stack_2, 'a', 6);
      } else if (strcmp(func_str, "cos") == 0) {
        pushNode(stack_2, 'b', 6);
      } else if (strcmp(func_str, "tan") == 0) {
        pushNode(stack_2, 'c', 6);
      } else if (strcmp(func_str, "asin") == 0) {
        pushNode(stack_2, 'e', 6);
      } else if (strcmp(func_str, "acos") == 0) {
        pushNode(stack_2, 'f', 6);
      } else if (strcmp(func_str, "atan") == 0) {
        pushNode(stack_2, 'g', 6);
      } else if (strcmp(func_str, "ctg") == 0) {
        pushNode(stack_2, 'd', 6);
      } else if (strcmp(func_str, "sqrt") == 0) {
        pushNode(stack_2, 'q', 6);
      } else if (strcmp(func_str, "mod") == 0) {
        pushNode(stack_2, 'm', 6);
      } else if (strcmp(func_str, "log") == 0) {
        pushNode(stack_2, 'l', 6);
      } else if (strcmp(func_str, "ln") == 0) {
        pushNode(stack_2, 'n', 6);
      } else {
        error = 1;
      }
    }

    if (str[i] == '(') {
      int priority = 1;
      pushNode(stack_2, str[i], priority);
    }

    if (str[i] == '+' || ((str[i] == '-') && !(i == 0 || str[i - 1] == '('))) {
      int priority = 2;
      pushOperationCheckPriority(str[i], stack, stack_2, priority);
    }
    if (str[i] == '*' || str[i] == '/') {
      int priority = 3;
      pushOperationCheckPriority(str[i], stack, stack_2, priority);
    }
    if (str[i] == '^') {
      int priority = 4;
      pushOperationCheckPriority(str[i], stack, stack_2, priority);
    }

    if ((str[i] == '-') && (i == 0 || str[i - 1] == '(')) {
      int priority = 5;
      pushOperationCheckPriority('~', stack, stack_2, priority);
    }

    if (str[i] == ')') {
      node* tmp = *stack_2;
      while (tmp->next != NULL) {
        if (tmp->data == 40) {
          popNode(stack_2);
          break;
        }
        dropNode(stack_2, stack);
        tmp = tmp->next;
      }
    }
  }

  fromStackToAnother(stack_2, stack);

  return error;
}

int checkErrors(const char* str) {
  int error = 0;

  if (strlen(str) == 0) {
    error = 1;
  }

  int counter_br1 = 0;
  int counter_br2 = 0;
  for (size_t i = 0; i < strlen(str); i++) {
    if (str[i] == '(') {
      counter_br1++;
    } else if (str[i] == ')') {
      counter_br2++;
    }
  }
  if (counter_br1 != counter_br2) {
    error = 1;
  }

  if (!((str[strlen(str) - 1] >= '0' && str[strlen(str) - 1] <= '9') ||
        str[strlen(str) - 1] == ')' || str[strlen(str) - 1] == 'x')) {
    error = 1;
  }

  for (size_t i = 1; i < strlen(str); i++) {
    if (str[i] == str[i - 1] && !(str[i] >= '0' && str[i] <= '9') &&
        !(str[i] == '(' || str[i] == ')')) {
      error = 1;
    }

    if (str[i] == '.') {
      if (!(str[i - 1] >= '0' && str[i - 1] <= '9')) {
        error = 1;
      }
    }

    if (str[i - 1] == '(') {
      if (str[i] != 'x' && str[i] != '-' && str[i] != '(' &&
          !(str[i] >= '0' && str[i] <= '9') &&
          !(str[i] == 's' || str[i] == 'c' || str[i] == 't' || str[i] == 'm' ||
            str[i] == 'l' || str[i] == 'a')) {
        error = 1;
      }
    }
  }

  if (str[0] != 'x' && str[0] != '-' && str[0] != '(' &&
      !(str[0] >= '0' && str[0] <= '9') &&
      !(str[0] == 's' || str[0] == 'c' || str[0] == 't' || str[0] == 'm' ||
        str[0] == 'l' || str[0] == 'a')) {
    error = 1;
  }

  return error;
}

int calculate(const char* str, double* res, double x) {
  int error = 0;

  node* nums = createNode(1);
  node* nums_reverse = createNode(1);
  node* operations = createNode(1);

  if (checkErrors(str) == 0 &&
      toPolishNotation(str, &nums, &operations, x) == 0) {
    fromStackToAnother(&nums, &nums_reverse);
    node* calculates = createNode(1);

    if (countNodes(&nums_reverse) == 1 && countNodes(&calculates) == 0) {
      *res = popNode(&nums_reverse);
      free_stack(&nums);
      free_stack(&nums_reverse);
      free_stack(&operations);
      free_stack(&calculates);
      return error;
    }

    while (nums_reverse->next != NULL) {
      while (nums_reverse->type == 0) {
        dropNode(&nums_reverse, &calculates);
      }

      double n1 = popNode(&calculates);

      double n2 = 0;
      char operation = '+';
      double res = 0;
      operation = popNode(&nums_reverse);

      if (operation == '+' || operation == '-' || operation == '*' ||
          operation == '/' || operation == '^' || operation == 'm') {
        n2 = popNode(&calculates);
      }

      switch (operation) {
        case '+':
          res = n2 + n1;
          break;
        case '-':
          res = n2 - n1;
          break;
        case '*':
          res = n2 * n1;
          break;
        case '/':
          res = n2 / n1;
          break;
        case '^':
          res = pow(n2, n1);
          break;
        case '~':
          res = n1 * (-1);
          break;
        case 'a':
          res = sin(n1);
          break;
        case 'b':
          res = cos(n1);
          break;
        case 'c':
          res = tan(n1);
          break;
        case 'd':
          res = 1 / tan(n1);
          break;
        case 'e':
          res = asin(n1);
          break;
        case 'f':
          res = acos(n1);
          break;
        case 'g':
          res = atan(n1);
          break;
        case 'q':
          res = sqrt(n1);
          break;
        case 'm':
          res = fmod(n2, n1);
          break;
        case 'l':
          res = log10(n1);
          break;
        case 'n':
          res = log(n1);
          break;
      }
      pushNode(&calculates, res, 0);
    }
    *res = popNode(&calculates);

    free_stack(&calculates);
  } else {
    error = 1;
  }

  free_stack(&nums);
  free_stack(&nums_reverse);
  free_stack(&operations);

  return error;
}

char* removeLastChar(char* str) {
  str[strlen(str) - 1] = '\0';
  return str;
}

int hasStringOnlyNums(const char* str) {
  int res = 1;
  for (int i = 0; *(str + i); i++) {
    if (!((str[i] >= '0' && str[i] <= '9') || str[i] == '.' || str[0] == '-')) {
      res = 0;
    }
  }
  return res;
}
