//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"

#include<iostream>

image::image() :m_x(0), m_y(0), m_height(0), m_width(0) {

}
image::image(int a, int b, int c, int d) :
	m_x(a), m_y(b), m_height(c), m_width(d) {

}
image::image(const image& ref)
{
	m_x = ref.m_x;
	m_y = ref.m_y;
	m_height = ref.m_height;
	m_width = ref.m_width;
}
void image::move(int a, int b, int c, int d)
{
	m_x = a;
	m_y = b;
	m_height = c;
	m_width = d;

}
void image::scale(int a, int b)
{
	m_x = a;
	m_y = b;

}
void image::resize(int c, int d)
{
	m_height = c;
	m_width = d;
}
void image::display()
{
	std::cout << m_x << "," << m_y << "," << m_height << "," << m_width;
}