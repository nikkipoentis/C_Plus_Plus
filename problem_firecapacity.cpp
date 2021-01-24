#include <iostream>

using namespace std;

int main ()
{
  int maxPeople;
  int numPeople;

  cout << "Maximum room capacity: ";
  cin >> maxPeople;

  cout << "Number of people attending: ";
  cin >> numPeople;

  if (numPeople <= maxPeople)
  {
    cout << "It is legal to hold this meeting. " << maxPeople - numPeople << " more person(s) may attend.";
  }
  else
  {
    cout << "This meeting cannot be held as planned due to fire regulations. The attendance is "
      << numPeople - maxPeople << " person(s) above the room's maximum capacity.";
  }

  cout << endl;

  return 0;
}
