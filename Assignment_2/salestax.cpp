#include <iostream>
#include <iomanip>

using namespace std;

float addTax(float taxRate, float cost)
{
  return cost + (cost * taxRate);
}

int main(int argc, char** argv)
{
  float caliTax = 0.0725;
  float hawaiiTax = 0.04;
  float initialCost = 20.00;

  cout << "An item that is $" << initialCost << " costs $";
  cout << fixed << setprecision(2) << addTax(caliTax, initialCost);
  cout << " in California and $";
  cout << fixed << setprecision(2) << addTax(hawaiiTax, initialCost);
  cout << " in Hawaii with tax." << endl;

  return 0;
}
