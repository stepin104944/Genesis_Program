//
// pch.h
// Header for standard system include files.
//

#pragma once
#include<string>
#include "gtest/gtest.h"
class MyTime {
	int m_hours;
	int m_minutes;
	int m_seconds;
public:
	MyTime();
	MyTime(int, int, int);
	MyTime(int, int);
	MyTime operator + (const MyTime&);
	MyTime operator - (const MyTime&);
	MyTime operator + (int);
	MyTime operator - (int);
	void operator++ ();
	void operator++ (int);
	bool operator == (const MyTime&);
	MyTime& operator += (const MyTime&);
	bool operator < (const MyTime&);
	bool operator > (const MyTime&);
	void display();
};