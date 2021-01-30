#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
  int size;
  cout << "Size of array (up to 10): ";
  cin >> size;

  cout << "Enter " << size << " nonnegative integers: ";
  int numberArray[size];

  for (int i = 0; i < size; ++i)
  {
    cin >> numberArray[i];
    if (numberArray[i] < 0)
    {
      cout << "Values must be nonnegative." << endl;
      return -1;
    }
  }

  for (int i = 0; i < size; ++i)
  {
    if (i < size - 1)
    {
      cout << numberArray[i] << ", ";
    }
    else
    {
      cout << numberArray[i] << endl;
    }
  }

  return 0;
}
