#include<stdio.h>

struct example_bitField {
 signed int val1;
  signed int val2;
};

struct example_bitField2 {
 signed int val1: 2;
  signed int val2: 3;
};

int main(void) {
  printf(" \n Size of memory engaged by example_bitField : %d ", sizeof(struct example_bitField));
  printf(" \n Size of memory engaged by example_bitField2: %d", sizeof(struct example_bitField2));
  return 0;
}
