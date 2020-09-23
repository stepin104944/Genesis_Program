#pragma once
#include<string>

class Point {
	int m_x;
	int m_y;
public:
	Point();
	Point(int, int);
	Point(const Point&);
	int distanceFromorigin();
	int quadrant();
	int isOrigin();
	int isOnXaxis();
	int isOnYaxis();
	void display()
};