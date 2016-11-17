#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

static double * body_mass, * positionX, * nextPositionX, * positionY, * nextPositionY,
              * velocityX, * nextVelocityX, * velocityY, * nextVelocityY;

static int n_steps, accuracy, n_bodies;

double [2] calcGForce(int j){
  double G[2] = {0,0};
  double Gi = 0;
  for(int i = 0; i < n_bodies){
    if(i != j){
      // Module of the force. 
      Gi = body_mass[i]*body_mass[j]/(((positionX[i]-positionX[j])^2+
                                      (positionY[i]-positionY[j])^2) ^(1.0/2);
    }
  }
}

int main(int argc, char const *argv[]) {

  if(argc < 2){
    cout << "This program need a file to work\n";
    return 1;
  }

  // Text file opened
  ifstream inputFile;
  inputFile.open(argv[1]);

  // Initialice this three variables with the file information

  char buffer[50];
  inputFile.getline(buffer,0,' ');
  n_steps = atoi(buffer);
  inputFile.getline(buffer,0,' ');
  accuracy = atof(buffer);
  inputFile.getline(buffer,0,'\n');
  n_bodies = atoi(buffer);

  // Initialice the important vectors.

  body_mass = new double [n_bodies];
  positionX = new double [n_bodies];
  nextPositionX = new double [n_bodies];
  positionY = new double [n_bodies];
  nextPositionY = new double [n_bodies];
  velocityX = new double [n_bodies];
  nextVelocityX = new double [n_bodies];
  velocityY = new double [n_bodies];
  nextVelocityY = new double [n_bodies];

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
