#include <iostream>

using namespace std;

void getInput(int& feet, int& inches)
{
  cout << "Enter a length in feet and inches." << endl;
  cout << "Feet: ";
  cin >> feet;
  cout << "Inches: ";
  cin >> inches;
}

double calculate(int feet, int inches)
{
  double lengthStandard = feet + (inches / 12.0);
  return lengthStandard * 0.3048;
}

void standardToMetric(int feet, int inches, int& meters, float& centi)
{
  double lengthMetric = calculate(feet, inches);
  meters = lengthMetric;
  centi = (lengthMetric - meters) * 100.0;
}

void toOutput(int feet, int inches, int meters, float centi)
{
  cout << feet << "ft & " << inches << "in = " << meters << "m & " << centi << "cm." << endl;
}

int main(int argc, char** argv)
{
  string response;
  while(true)
  {
    int feet, inches, meters;
    float centi;

    getInput(feet, inches);
    standardToMetric(feet, inches, meters, centi);
    toOutput(feet, inches, meters, centi);

    cout << "Do you want to continue? Type \"exit\" to end this program. Type anything else to continue." << endl;
    cin >> response;
    if (response == "exit")
    {
      break;
    }
  }

  return 0;
}
