#include <iostream>
#include <string>
#include <stdio.h>
#include "shape.h"
#include "triangle.h"
#include "rectangle.h"
using namespace std;

int main()
{
	triangle TRI (3, 4);
	rectangle REC (3, 4);

	cout << "Triangle area is: " << TRI.area() << "\n";
	cout << "Rectangle area is: " << REC.area();
}
