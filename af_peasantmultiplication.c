// to test the various cases they are decommented/commented one by one.

#include <stdio.h>

int main() {

  /*
  //	Case 1: 19 * 33
  //	expected result is 627
  */
  int num1 = 19;
  int num2 = 33;

  /*
  //	Case 2: 0*0
  //	expected result is 0
  /
          int num1 = 0;
          int num2 = 0;
  */

  /*
  //	Case 3: 10 * 10
  //	expected result is 100
  /
          int num1 = 10;
          int num2 = 10;
  */
  int result = 0;
  if (num1 % 2 != 0) {
    result = result + num2;
  }
  while (num1 > 1) {
    num1 = num1 / 2;
    num2 = num2 * 2;
    if (num1 % 2 != 0) {
      result = result + num2;
    }
  }
  printf("The result is %d", result);
  return 0;
}
