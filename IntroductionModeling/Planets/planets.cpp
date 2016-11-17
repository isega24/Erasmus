#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]) {

  if(argc < 2){
    cout << "This program need a file to work\n";
    break;
  }
  ifstream inputFile = ifstream()

  int n_steps, accuracy, n_bodies;

  // Initialice this three variables with the file information
  double * body_mass = new double [n_bodies];
  double * positionX = new double [n_bodies];
  double * nextPositionX = new double [n_bodies];
  double * positionY = new double [n_bodies];
  double * nextPositionY = new double [n_bodies];
  double * velocityX = new double [n_bodies];
  double * nextVelocityX = new double [n_bodies];
  double * velocityY = new double [n_bodies];
  double * nextVelocityY = new double [n_bodies];





  delete body_mass;
  delete positionX ;
  delete nextPositionX ;
  delete positionY ;
  delete nextPositionY ;
  delete velocityX ;
  delete nextVelocityX ;
  delete velocityY ;
  delete nextPositionY ;

  return 0;
}
