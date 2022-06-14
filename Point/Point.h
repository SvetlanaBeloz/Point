#include <iostream>

class Point
{
	int X;
	int Y;

public:
	void SetX(int x);
	void SetY(int y);
	int GetX() const;
	int GetY() const;

	Point();
	Point(int x);
	Point(int x, int y);

	void Show();
	void LeftShift(int c);
	void RightShift(int c);
	void UpShift(int c);
	void DownShift(int c);
};

