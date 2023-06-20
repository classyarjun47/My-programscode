
#include<math.h>
#include<stdio.h>
int main() {
   double base, exponent, value;
   printf("Enter a base value: ");
   scanf("%lf", &base);
   printf("Enter an exponent value: ");
   scanf("%lf", &exponent);
   // calculates the power
   value = pow(base, exponent);
   printf("%.1lf^%.1lf = %.2lf", base, exponent, value);
   return 0;
}