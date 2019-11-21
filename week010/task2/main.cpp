#include <cstdlib>
#include <iostream>
#include "person.h"

using namespace std;

int main()
{
  Person pip("Bryan Dizon", "Las Pinas, Metro Manila", "Male", 33, "IT Specialist");

  cout << "[Personal Details] \n" << pip.getInformation() << endl;

  cout << endl;
  return EXIT_SUCCESS;
}
