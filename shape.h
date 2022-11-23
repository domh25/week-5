#pragma once
class shape
{
public:
	shape(int w, int h);
	~shape();
	virtual int area() = 0;
protected:
	int width;
	int height;

	
	
};

