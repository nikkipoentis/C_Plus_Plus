#include <iostream>

using namespace std;

void zeroBoth(int &val1, int &val2)
{
  val1 = 0;
  val2 = 0;
}

int main(int argc, char** argv)
{
  int num1 = 24;
  int num2 = 31;

  cout << "Before: #1 = " << num1 << " & #2 = " << num2 << endl;
  zeroBoth(num1, num2);
  cout << "After: #1 = " << num1 << " & #2 = " << num2 << endl;

  return 0;
}
