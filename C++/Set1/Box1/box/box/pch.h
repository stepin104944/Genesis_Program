//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"
#include<string>
class box {
    int m_length;
    int m_breadth;
    int m_height;

public:
    box();
    box(int, int, int);
    box(int);
    box(const box&);
    int length();
    int breadth();
    int height();
    int volume();
    void display();

};
