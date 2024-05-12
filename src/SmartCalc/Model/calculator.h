#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  double data;
  int priority;
  struct node* next;
  int type;
} node;

node* createNode(double data);
void pushNode(node** stack, double data, int type);
double popNode(node** stack);
void dropNode(node** stack, node** stack_2);
void printNodes(node** stack);
void freeStack(node** stack);
int getType(node** stack);
void fromStackToAnother(node** stack, node** stack_2);
int hasStackBracket(node** stack);
void pushOperationCheckPriority(char c, node** stack, node** stack_2,
                                int priority);
int toPolishNotation(const char* str, node** stack, node** stack_2, double x);
int calculate(const char* str, double* res, double x);
int countNodes(node** stack);
char* removeLastChar(char* str);
int checkErrors(const char* str);
int hasStringOnlyNums(const char* str);

#endif  // CALCULATOR_H
