#include <iostream>
#include <eigen3/Dense>
using namespace std;
using namespace Eigen;
int main()
{
  Eigen::MatrixXf m(2,4);
  Eigen::VectorXf v(2);
  
  m << 1, 23, 6, 9,
       3, 11, 7, 2;
       
  v << 2,
       3;
  MatrixXf::Index index;                                   //      (m.colwise() - v)       squaredNorm()
  // find nearest neighbour                                         |-1, 21, 4,  7|  ==  |1, 505, 32, 50|
  (m.colwise() - v).colwise().squaredNorm().minCoeff(&index);    // | 0, 18, 4, -1|      

  cout << "Nearest neighbour is column " << index << ":" << endl;

  cout << m.col(index) << endl;
}