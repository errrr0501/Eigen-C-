#include <iostream>
#include <eigen3/Dense>
using namespace std;
using namespace Eigen;
int main()
{
  MatrixXf mat(2,4);
  mat << 1, 2, 6, 9,
         3, 1, 7, 2;
  
  MatrixXf::Index   maxIndex;                                   // colwise().sum()   |1, 2, 6, 9|      ==   |4, 3, 13, 11|
  float maxNorm = mat.colwise().sum().maxCoeff(&maxIndex);     //                    |3, 1, 7, 2|
  
  std::cout << "Maximum sum at position " << maxIndex << std::endl;            // 13's position is at col 2
  std::cout << "The corresponding vector is: " << std::endl;
  std::cout << mat.col( maxIndex ) << std::endl;
  std::cout << "And its sum is is: " << maxNorm << std::endl;
}
