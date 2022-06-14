#include "Point.h"

void Point::SetX(int x)
{
	X = x;
}

void Point::SetY(int y)
{
	Y = y;
}

int Point::GetX() const
{
	return X;
}

int Point::GetY() const
{
	return Y;
}

Point::Point() : Point(0) {};
Point::Point(int x) : Point(x, 0) {};
Point::Point(int x, int y)
{
	SetX(x);
	SetY(y);
}

void Point::Show()
{
	std::cout << "X axis coordinate is " << GetX() << std::endl;
	std::cout << "Y axis coordinate is " << GetY() << std::endl;
	std::cout << std::endl;
}

void Point::LeftShift(int c)
{
	std::cout << "The coordinates of the point before shifting are : x = " << X << " y = " << Y << std::endl;
	X -= c;
	std::cout << "The current coordinates of the point are: x = " << X << " y = " << Y << std::endl;
	std::cout << std::endl;
}

void Point::RightShift(int c)
{
	std::cout << "The coordinates of the point before shifting are : x = " << X << " y = " << Y << std::endl;
	X += c;
	std::cout << "The current coordinates of the point are: x = " << X << " y = " << Y << std::endl;
	std::cout << std::endl;
}

void Point::UpShift(int c)
{
	std::cout << "The coordinates of the point before shifting are : x = " << X << " y = " << Y << std::endl;
	Y += c;
	std::cout << "The current coordinates of the point are: x = " << X << " y = " << Y << std::endl;
	std::cout << std::endl;
}

void Point::DownShift(int c)
{
	std::cout << "The coordinates of the point before shifting are : x = " << X << " y = " << Y << std::endl;
	Y -= c;
	std::cout << "The current coordinates of the point are: x = " << X << " y = " << Y << std::endl;
	std::cout << std::endl;
}


