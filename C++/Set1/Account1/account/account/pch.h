//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"
#include<string>
using namespace std;
class Account {
    int m_accNumber;
    std::string m_accName;
    double m_balance;

public:
    Account();
    Account(int, std::string, double);
    Account(int, std::string);
    Account(const Account&);
    void debit(double);
    void credit(double);
    double getBalance() const;
    void display();
};
