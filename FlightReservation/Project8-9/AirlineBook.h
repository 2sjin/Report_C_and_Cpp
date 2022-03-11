#pragma once
#include <iostream>
#include "Schedule.h"

using namespace std;

#pragma once
class AirlineBook {
	Schedule* schedule;
public:
	AirlineBook();
	~AirlineBook();
	void start();
};

