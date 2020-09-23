//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"
#include<iostream>

box::box() :m_length(0), m_breadth(0), m_height(0) {
}
box::box(int l, int b, int h) {
}
box::box(int l) : m_length(l), m_breadth(l), m_height(l)
{

}
box::box(const box& ref) : m_length(ref.m_length), m_breadth(ref.m_breadth), m_height(ref.m_height)
{

}
int box::length()
{
    return m_length;
}
int box::breadth()
{
    return m_breadth;

}
int box::height()
{
    return m_height;
}
int box::volume()
{
    int v;
    v = m_length * m_breadth * m_height;
    return v;
}
void box::display()
{
    std::cout << m_length << "," << m_breadth << "," << m_height;
}
