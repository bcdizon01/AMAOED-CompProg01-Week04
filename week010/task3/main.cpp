#include <cstdlib>
#include <iostream>
#include "polygon.h"

using namespace std;

int main()
{
  Polygon shape("Square", "Black", 4);

  cout << "[Polygon Details] \n" << shape.getInformation() << endl;

  cout << endl;
  return EXIT_SUCCESS;
}