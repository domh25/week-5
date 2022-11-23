#include "shape.h"
include <iostream>
shape::shape(int w, int h)
{
	this -> width = w;
	this -> width = h;
}

shape:: ~shape()
{
  std::cout << "\nshape has been destroyed" << std::endl;	
}
