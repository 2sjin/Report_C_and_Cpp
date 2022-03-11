#pragma once
#include <iostream>
#include "Seat.h"
using namespace std;

class Schedule {
	Seat* seat;
	string time;
public:
	Schedule();
	~Schedule();
	void setTime(string time);
	string getTime();
	void book();
	void cancel();
	void show();
};