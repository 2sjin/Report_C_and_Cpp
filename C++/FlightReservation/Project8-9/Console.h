#pragma once
#include <iostream>
using namespace std;

class Console {
public:
	static void Intro();
	static int showMenu();
	static int showTime();
	static int showInputNum();
	static string showInputName();
};