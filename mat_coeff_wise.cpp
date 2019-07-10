#include <eigen3/Dense>
#include <iostream>
using namespace Eigen;
using namespace std;
int main()
{
  ArrayXf a = ArrayXf::Random(5);
  a *= 2;
  cout << "a =" << endl 
       << a << endl;
  cout << "a.abs() =" << endl         //takes the absolute value of each coefficient
       << a.abs() << endl;
  cout << "a.abs().sqrt() =" << endl  //computes the square root of the coefficients
       << a.abs().sqrt() << endl;
  cout << "a.min(a.abs().sqrt()) =" << endl  // all min in coefficients in a, abs,sqrt 
       << a.min(a.abs().sqrt()) << endl;  
}