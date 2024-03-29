#include <iostream>
#include <math.h>


//Christmas Tree

void print_space(int a);

void print_star(int a);

void BuildLeft(int ht, int sh);

void print_row_down(int a, int sh1, int check, int ht1);

void BuildDown(int ht,int sh);

void BuildRight(int ht, int sh);

void print_row1(int a, int sh1, int check);

void BuildUp(int ht, int sh);

void buildTree(int height, int shift, int rotate);
