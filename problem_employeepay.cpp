#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  const double REGULAR_PAY = 16.00;
  const double OVERTIME_PAY = (REGULAR_PAY * 1.5);
  int hoursWorked;
  double grossPay;
  double socialSecurity;
  double federalIncome;
  double stateIncome;
  double netPay;

  cout << "Number of hours worked this week: ";
  cin >> hoursWorked;

  // GROSS PAY
  if (hoursWorked <= 40)
  {
    grossPay = hoursWorked * REGULAR_PAY;
  }
  else
  {
    grossPay = (40 * REGULAR_PAY) + ((hoursWorked - 40) * OVERTIME_PAY);
  }

  // WITHHOLDING AMOUNTS
  socialSecurity = grossPay * 0.06;
  federalIncome = grossPay * 0.14;
  stateIncome = grossPay * 0.05;

  // NET PAY
  netPay = grossPay - socialSecurity - federalIncome - stateIncome - 10.00;

  cout << fixed << setprecision(2);
  cout << "Gross Pay: $" << grossPay << endl;

  cout << "\nWITHHOLDING AMOUNTS" << endl;
  cout << "Social Security tax: $" << socialSecurity << endl;
  cout << "Federal Income tax: $" << federalIncome << endl;
  cout << "State Income tax: $" << stateIncome << endl;
  cout << "Medical Insurace: $10.00" << endl;

  cout << "\nNet Take-home Pay: $" << netPay << endl;

  return 0;
}
