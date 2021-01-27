#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
  const double OZ_TO_TON = 35273.92;
  int weightOz;
  double weightTon;
  int numBoxes;

  cout << "Cereal box weight in ounces: ";
  cin >> weightOz;

  weightTon = weightOz / OZ_TO_TON;
  numBoxes = OZ_TO_TON / weightOz;
  if ((int) OZ_TO_TON % weightOz != 0)
  {
    ++numBoxes;
  }

  cout << "This box of cereal weights " << weightTon << " metric tons.\nIt would take " << numBoxes
  << " boxes to fill a one ton box." << endl;

  return 0;
}
