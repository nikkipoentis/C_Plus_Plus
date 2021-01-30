#include <iostream>

using namespace std;

double getInput()
{
  int feet;
  int inches;

  cout << "Enter a length in feet and inches." << endl;
  cout << "Feet: ";
  cin >> feet;
  cout << "Inches: ";
  cin >> inches;

  return feet + (inches / 12.0);
}

double standardToMetric(double lengthStandard)
{
  return lengthStandard * 0.3048;
}

void toOutput(double lengthStandard, double lengthMetric)
{
  int feet;
  int inches;
  int meters;
  float centi;

  feet = lengthStandard;
  inches = (lengthStandard - feet) * 12.0;
  meters = lengthMetric;
  centi = (lengthMetric - meters) * 100.0;

  cout << feet << "ft and " << inches << "in = " << meters << "m and " << centi << "cm." << endl;
}

int main(int argc, char** argv)
{
  string response;
  while(true)
  {
    double lengthStandard = getInput();
    double lengthMetric = standardToMetric(lengthStandard);
    toOutput(lengthStandard, lengthMetric);

    cout << "Do you want to continue? Type \"exit\" to end this program. Type anything else to continue." << endl;
    cin >> response;
    if (response == "exit")
    {
      break;
    }
  }

  return 0;
}
