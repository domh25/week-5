#include <iostream>
#include <string>
#include <stdio.h>
#include "shape.h"
#include "triangle.h"
#include "rectangle.h"
using namespace std;

int main()
{
	class triangle TRI;
	class rectangle REC;

	TRI.height = 5;
	TRI.width = 5;

	REC.height = 5;
	REC.width = 5;

	cout << "Triangle area is: " << TRI.area() << "\n";
	cout << "Rectangle area is: " << REC.area();
}