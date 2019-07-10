#include <eigen3/Dense>
#include <iostream>
using namespace Eigen;
using namespace std;
int main()
{
  ArrayXXf a(2,2);
  ArrayXXf b(2,2);
  a << 1,2,
       3,4;    ////each coeff position multiply like a(0,0)*b(0,0)
  b << 5,6,
       7,8;
  cout << "a * b = " << endl << a * b << endl;
}