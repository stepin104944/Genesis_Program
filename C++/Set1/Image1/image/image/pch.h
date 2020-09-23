//
// pch.h
// Header for standard system include files.
//

#pragma once


#include<string>
#include "gtest/gtest.h"
class image {
	int m_x;
	int m_y;
	int m_height;
	int m_width;
public:
	image();
	image(int, int, int, int);
	image(const image&);
	void move(int, int, int, int);
	void scale(int, int);
	void resize(int, int);
	void display();
};