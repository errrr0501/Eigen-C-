#include <eigen3/Dense>
#include <iostream>
using namespace Eigen;
using namespace std;
int main()
{
  MatrixXf m(2,2);
  MatrixXf n(2,2);
  MatrixXf result(2,2);
  m << 1,2,
       3,4;
  n << 5,6,
       7,8;
  
  result = (m.array() + 4).matrix() * m;                                           //5 , 6  * 1 , 2
  cout << "-- Combination 1: --" << endl << result << endl << endl;                //7 , 8    3 , 4
  result = (m.array() * n.array()).matrix() * m;                                   //5 , 12 * 1 , 2
  cout << "-- Combination 2: --" << endl << result << endl << endl;                //21, 32   3 , 4
}