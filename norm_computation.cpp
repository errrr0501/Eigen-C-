#include <eigen3/Dense>
#include <iostream>
using namespace std;
using namespace Eigen;
int main()
{
  VectorXf v(2);
  MatrixXf m(2,2), n(2,2);
  
  v << -1,
       2;
  
  m << 1,-2,
       -3,4;
  cout << "v.squaredNorm() = " << v.squaredNorm() << endl;               //dot self
  cout << "v.norm() = " << v.norm() << endl;                            //squareroot of squaredNorm
  cout << "v.lpNorm<1>() = " << v.lpNorm<1>() << endl;                 //all the p power of coeff's sum and to the 1/p power 
  cout << "v.lpNorm<Infinity>() = " << v.lpNorm<Infinity>() << endl;  //the abs max of all coeff and abs
  cout << endl;
  cout << "m.squaredNorm() = " << m.squaredNorm() << endl;
  cout << "m.norm() = " << m.norm() << endl;
  cout << "m.lpNorm<1>() = " << m.lpNorm<1>() << endl;

  cout << "m.lpNorm<Infinity>() = " << m.lpNorm<Infinity>() << endl;
  cout << "1-norm(m)     = " << m.cwiseAbs().colwise().sum().maxCoeff()       //all coeff abs and the max value of each col's sum (4 and 6)
       << " == "             << m.colwise().lpNorm<1>().maxCoeff() << endl;  //the max value of the p power of each col coeff's sum and to the 1/p power
  cout << "infty-norm(m) = " << m.cwiseAbs().rowwise().sum().maxCoeff()     //all coeff abs and the max value of each row's sum (3 and 7)
       << " == "             << m.rowwise().lpNorm<1>().maxCoeff() << endl;
}