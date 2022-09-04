#include <cmath>
#include <iostream>
#include <iomanip>


using namespace std;

template <typename T>
void test()
{
   T x = 1.0e-8;
   T y, z;

   y = 1.0 - cos(x);
   z = 2.0*pow(sin(x/2.0), 2);

   cout << std::setprecision(30);
   cout << "y = " << y << endl;
   cout << "z = " << z << endl;
}

int main()
{
   cout << "Single precision:" << endl;
   test<float>();

   cout << "Double precision:" << endl;
   test<double>();
}
