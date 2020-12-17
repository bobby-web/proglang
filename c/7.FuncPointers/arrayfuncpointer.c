#include <stdio.h>

// Function Declaration
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

// Function Entrance
int main() 
{
  int x, y, choice, result;
  // Function Pointer Declaration (Local In main Funct)
  int (*op[4])(int, int);
  // Function Pointer Definition (Pointing To Each Function In The Array)
  op[0] = add;
  op[1] = subtract;
  op[2] = multiply;
  op[3] = divide;
  printf("Enter two integers: ");
  scanf("%d%d", &x, &y);
  printf("Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide: ");
  scanf("%d", &choice);
  result = op[choice](x, y);
  printf("\n %d", result);
    
  return 0;
}

// Function Definition
int add (int x, int y) {
  return(x + y);
}

int subtract (int x, int y) {
  return(x - y);
}

int multiply (int x, int y) {
  return(x * y);
}

int divide (int x, int y) {
  if (y != 0)
    return (x / y);
  else
    return 0;
} 