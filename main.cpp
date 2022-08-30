/*project: 2.6
Program: kineticEnergy.cpp
Author: Gaston Honomou
Compute an object kinetic and its momentum.

1. The input are:
        Object’s mass (in kilograms)
        Velocity (in meters per second)
        
2. Computations:

        Kinetic is equal to (1/2) times mass times velocity to the power of 2.
        Momentum is equal to Mass of object in killogram times the velocity in meter per second.

3. Output:
         The kinetic and momentum of the object*/


// Initiate the header
#include <iostream>
#include <cmath>
using namespace std;

// Initiate the main entry point
int main() 
{
  // Initiate the variables
  int mass, velocity, momentum;
  float kinetic;

  // Prompt the user for the mass of the object
  std::cout << "Enter the mass of the object: ";
  cin>>mass;

  // Prompt the user for the velocity of the object
  std::cout << "Enter the velocity of the object: ";
  cin>>velocity;

  // Compute the kinetic
  kinetic = (mass * pow(velocity, 2))/2;
  cout<<"\n\nThe kinetic is: "<<kinetic<<" J.\n\n";

  // Compute the momentum
  momentum = mass * velocity;
  cout<<"The momentum is: "<<momentum<<" kgm/s\n\n";
  cout<<"Program successfully executed.";

  return 0;
  
}