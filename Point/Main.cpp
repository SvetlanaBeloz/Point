#include "Point.h"

int main()
{
	Point A;
	A.Show();

	Point H(8);
	H.Show();

	Point B(3, 5);
	B.Show();

	Point C(10, 15);
	C.LeftShift(5);
	
	Point D(5, 4);
	D.RightShift(3);

	Point E(5, -7);
	E.UpShift(5);

	Point F(9, 0);
	F.DownShift(6);
}