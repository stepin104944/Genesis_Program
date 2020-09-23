//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"
#pragma once
#include<string>
enum color_t
{
	red, green, blue, black, white
};
class Color {
	int m_r;
	int m_g;
	int m_b;
public:
	Color();
	Color(int, int, int);
	Color(int);
	Color(color_t);
	color_t getClr();
	void invert();
	void display();
};