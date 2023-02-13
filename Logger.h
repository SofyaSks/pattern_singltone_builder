#pragma once

#include <iostream>
#include <fstream>
using namespace std;
class Logger
{
private:
	Logger() { pobj = NULL; };
	~Logger();
	static Logger* pobj;
public:
	void Message(string message);
	static Logger* GetInstance();
};

