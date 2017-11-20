#include <stdio.h>

int main() {

  int num1 = 0;
  int num2 = 0;
  int result = 0;

  printf("Enter first number!\n");
  scanf("%d", &num1);

  printf("Enter second number!\n");
  scanf("%d", &num2);

  if (num1 % 2 != 0)
    result = result + num2;

  while (num1 > 1) {
    num1 = num1 / 2;
    num2 = num2 * 2;
    if (num1 % 2 != 0)
      result = result + num2;
  }
  printf("The peasant multiplicated result is %d!", result);
}
