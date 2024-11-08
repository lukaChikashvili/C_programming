#include <stdio.h>

int addNumbers(int number1, int number2) {
   return number1 + number2;

}

int main() {
   
    int sum = addNumbers(2, 5);
    printf("Result = %d", sum);
    return 0;

}
