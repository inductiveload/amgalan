#include <iostream>

#include "amgalan_config.h"
#include "amgalan.h"

using namespace std;

int main ()
{
  cout << "amgalan version " << AMGALAN_VERSION << endl;
  getSource();
  return 0;
}
