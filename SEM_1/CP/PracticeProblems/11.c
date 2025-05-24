// Find the gross salary and net salary of an employee
#include <stdio.h>

int main() {
  float basic_salary, hra, da, ta, pf, tax, gross_salary, net_salary;

  printf("Enter basic salary: ");
  scanf("%f", &basic_salary);

  hra = 0.1 * basic_salary;
  da = 0.2 * basic_salary;
  ta = 0.05 * basic_salary;
  pf = 0.12 * basic_salary;
  tax = 0.05 * basic_salary;

  gross_salary = basic_salary + hra + da + ta;
  net_salary = gross_salary - pf - tax;

  printf("Gross salary: %.2f\n", gross_salary);
  printf("Net salary: %.2f\n", net_salary);

  return 0;
}