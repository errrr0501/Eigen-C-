#include <iostream>
#include <eigen3/Dense>
using namespace std;
int main()
{
  Eigen::Matrix2d mat;
  mat << 1, 2,
         3, 5;
  cout << "Here is mat.sum():       " << mat.sum()       << endl;
  cout << "Here is mat.prod():      " << mat.prod()      << endl; //all coeff multiply
  cout << "Here is mat.mean():      " << mat.mean()      << endl; //average
  cout << "Here is mat.minCoeff():  " << mat.minCoeff()  << endl; 
  cout << "Here is mat.maxCoeff():  " << mat.maxCoeff()  << endl;
  cout << "Here is mat.trace():     " << mat.trace()     << endl; //(0,0)+(1,1)+(2,2)+(3,3).........
}