#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[]) {

  if(argc < 2){
    cout << "This program need a file to work\n";
    return 1;
  }

  // Text file opened
  ifstream inputFile;
  inputFile.open(argv[1]);

  // Initialice this three variables with the file information
  int n_steps, accuracy, n_bodies;
  char buffer[50];
  inputFile.getline(buffer,0,' ');
  n_steps = atoi(buffer);
  inputFile.getline(buffer,0,' ');
  accuracy = atof(buffer);
  inputFile.getline(buffer,0,'\n');
  n_bodies = atoi(buffer);

  // Initialice the important vectors.

  static double * body_mass = new double [n_bodies];
  static double * positionX = new double [n_bodies];
  static double * nextPositionX = new double [n_bodies];
  static double * positionY = new double [n_bodies];
  static double * nextPositionY = new double [n_bodies];
  static double * velocityX = new double [n_bodies];
  static double * nextVelocityX = new double [n_bodies];
  static double * velocityY = new double [n_bodies];
  static double * nextVelocityY = new double [n_bodies];

  // Getting the information of the file of each body.

  for(int i = 0; i < n_bodies; i++){
    inputFile.getline(buffer,0,' ');
    body_mass[i] = atof(buffer);
    inputFile.getline(buffer,0,' ');
    positionX[i] = atof(buffer);
    inputFile.getline(buffer,0,' ');
    positionY[i] = atof(buffer);
    inputFile.getline(buffer,0,' ');
    velocityX[i] = atof(buffer);
    inputFile.getline(buffer,0,'\n');
    velocityY[i] = atof(buffer);
  }






  delete body_mass;
  delete positionX ;
  delete nextPositionX ;
  delete positionY ;
  delete nextPositionY ;
  delete velocityX ;
  delete nextVelocityX ;
  delete velocityY ;
  delete nextPositionY ;

  inputFile.close();

  return 0;
}
