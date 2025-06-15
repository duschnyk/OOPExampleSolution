#pragma once
#include <iostream>
using namespace std;

class Integer
{
private:
	int value;
	int b;
	int c;

public:
	Integer() :value(0) {}
	Integer(int value) :value(0) {}

	Integer add(Integer number);
	Integer sub(Integer number);
	Integer mul(Integer number);
	Integer div(Integer number);
	Integer mod(Integer number);
	Integer minus();
	Integer increment();
	Integer decrement();

	int getValue();
	void setValue(int value);

};

