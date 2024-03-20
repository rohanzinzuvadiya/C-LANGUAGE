#include <stdio.h>

int main() {
  int units;
  float bill = 0;

  printf("Enter electricity units: ");
  scanf("%d", &units);

  if (units <= 50) 
  {
    bill = units * 0.50;
  } else if (units <= 150) 
  {
    bill = 50 * 0.50;
    bill += (units - 50) * 0.75;
  } else if (units <= 250) 
  {
    bill = 50 * 0.50;
    bill += 100 * 0.75;
    bill += (units - 150) * 1.20;
  } else 
  {
    bill = 50 * 0.50;
    bill += 100 * 0.75;
    bill += 100 * 1.20;
    bill += (units - 250) * 1.50;
  }

  bill += bill * 0.20; 
  printf("Electricity Bill = Rs. %.2f\n", bill);

  return 0;
}

// 30   90   144   277.5    55.5