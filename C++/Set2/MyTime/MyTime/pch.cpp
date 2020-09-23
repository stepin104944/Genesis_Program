//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"
#include<iostream>

MyTime::MyTime() :m_hours(0), m_minutes(0), m_seconds(0)
{

}

MyTime::MyTime(int h, int m, int s) : m_hours(h), m_minutes(m), m_seconds(s)
{

}

MyTime::MyTime(int h, int m) : m_hours(h), m_minutes(m), m_seconds(0)
{

}
MyTime MyTime :: operator+(const MyTime& ref_val)
{
	int tmins = m_minutes + ref_val.m_minutes;
	int thrs = m_hours + ref_val.m_hours;
	return MyTime(thrs, tmins);
}
MyTime MyTime :: operator-(const MyTime& ref_val)
{
	int tmins = m_minutes - ref_val.m_minutes;
	int thrs = m_hours - ref_val.m_hours;
	return MyTime(thrs, tmins);
}
MyTime  MyTime:: operator + (int nmins)
{
	int tmins = minutes + nmins; // TODO: tmins > 60
	int thrs = hrs;
	return MyTime(thrs, tmins);
}
MyTime  MyTime ::operator - (int nmins)
{
	int tmins = minutes - nmins; // TODO: tmins > 60
	int thrs = hrs;
	return MyTime(thrs, tmins);
}
void  MyTime :: operator++ ()
{

	this->minutes = (this->minutes) + 1;
	if ((this->minutes) > 60)
	{
		this->hrs += 1;
		this->minutes -= 60;
	}
}
void  MyTime ::operator++ (int data)
{
	this->minutes += data;
	if ((this->minutes) > 60)
	{
		this->hrs += 1;
		this->minutes -= 60;
	}

}
bool MyTime ::   operator == (const MyTime& ref_val)
{
	return hrs == ref_val.hrs && minutes == ref_val.minutes;
}
/*MyTime :: MyTime & operator += ()
{
	return *this;
}
*/
MyTime& MyTime :: operator += (const MyTime& ref_val)
{
	hrs += ref_val.hrs;
	minutes += ref_val.minutes;
	return *this;
}
bool MyTime  MyTime:: operator + (int nmins)
{
	int tmins = minutes + nmins; // TODO: tmins > 60
	int thrs = hrs;
	return MyTime(thrs, tmins);
}
MyTime  MyTime ::operator - (int nmins)
{
	int tmins = minutes - nmins; // TODO: tmins > 60
	int thrs = hrs;
	return MyTime(thrs, tmins);
}
void  MyTime :: operator++ ()
{

	this->minutes = (this->minutes) + 1;
	if ((this->minutes) > 60)
	{
		this->hrs += 1;
		this->minutes -= 60;
	}
}
void  MyTime ::operator++ (int data)
{
	this->minutes += data;
	if ((this->minutes) > 60)
	{
		this->hrs += 1;
		this->minutes -= 60;
	}

}
bool MyTime ::   operator == (const MyTime& ref_val)
{
	return hrs == ref_val.hrs && minutes == ref_val.minutes;
}
/*MyTime :: MyTime & operator += ()
{
	return *this;
}
*/
MyTime& MyTime :: operator += (const MyTime& ref_val)
{
	hrs += ref_val.hrs;
	minutes += ref_val.minutes;
	return *this;
}
bool MyTime ::  operator < (const MyTime& ref_val)
{
	return hrs < ref_val.hrs && minutes < ref_val.minutes;
}
bool MyTime ::  operator > (const MyTime& ref_val)
{
	return hrs > ref_val.hrs && minutes > ref_val.minutes;
}
void MyTime::display()
{
	cout << " Hours: " << hrs << "Minutes: " << minutes << "Minutes: " << sec;
} ::  operator < (const MyTime& ref_val)
{
	return hrs < ref_val.hrs&& minutes < ref_val.minutes;
}
bool MyTime ::  operator > (const MyTime& ref_val)
{
	return hrs > ref_val.hrs && minutes > ref_val.minutes;
}
void MyTime::display()
{
	cout << " Hours: " << hrs << "Minutes: " << minutes << "Minutes: " << sec;
}