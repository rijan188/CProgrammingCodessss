#include <stdio.h>
// Define a complex number structure
typedef struct {
double real;
double imag;
} complex;
// Function to read a complex number from the user
complex readComplexNumber() {
complex num;
printf("Enter real part: ");
scanf("%lf", &num.real);
printf("Enter imaginary part: ");
scanf("%lf", &num.imag);
return num;
}
// Function to add two complex numbers
complex addComplexNumbers(complex num1, complex num2)
{
complex result;
result.real = num1.real + num2.real;
result.imag = num1.imag + num2.imag;
return result;
}
// Function to subtract two complex numbers
complex subtractComplexNumbers(complex num1, complex num2)
{
complex result;
result.real = num1.real - num2.real;
result.imag = num1.imag - num2.imag;
return result;
}
// Function to display a complex number
void displayComplexNumber(complex num) {
if (num.imag >= 0) {
printf("%lf + %lfi\n", num.real, num.imag);
  } else {
printf("%lf - %lfi\n", num.real, -num.imag);
  }
}int main() {
complex num1, num2, result;
// Read first complex number
printf("Enter first complex number:\n");
num1 = readComplexNumber();
// Read second complex number
printf("Enter second complex number:\n");
num2 = readComplexNumber();
// Perform addition and display result
result = addComplexNumbers(num1, num2);
printf("Sum of complex numbers: ");
displayComplexNumber(result);
// Perform subtraction and display result
result = subtractComplexNumbers(num1, num2);
printf("Difference of complex numbers: ");
displayComplexNumber(result);
return 0;
}










