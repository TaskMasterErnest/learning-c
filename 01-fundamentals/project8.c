// A program that calculates remaining loan balance.

#include <stdio.h>

int main(void)
{
  float loanAmount,interestRate,monthlyPayment,monthlyInterestRate;
  float amountPayable,loanAmountLeft1,loanAmountLeft2,loanAmountLeft3;

  // first, calculate the total amount payable ie. loanAmount + interest
  // second, deduct the monthly payment for the month

  printf("Enter amount of loan: ");
  scanf("%f", &loanAmount);
  printf("Enter interest rate: ");
  scanf("%f", &interestRate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthlyPayment);

  // calculate monthly interest
  monthlyInterestRate = (interestRate / 100) / 12;

  //calculate interest
  amountPayable = loanAmount + (monthlyInterestRate * loanAmount);
  loanAmountLeft1 = amountPayable - monthlyPayment;

  loanAmount = loanAmountLeft1;
  amountPayable = loanAmount + (monthlyInterestRate * loanAmount);
  loanAmountLeft2 = amountPayable - monthlyPayment;

  loanAmount = loanAmountLeft2;
  amountPayable = loanAmount + (monthlyInterestRate * loanAmount);
  loanAmountLeft3 = amountPayable - monthlyPayment;

  printf("\nBalance remaining after first payment: %.2f\nBalance remaining after second payment: %.2f\nBalance remaining after third payment: %.2f\n", loanAmountLeft1, loanAmountLeft2, loanAmountLeft3);

  return 0;
}