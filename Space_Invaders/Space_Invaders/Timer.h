#pragma once

#include <Time.h>

class Timer{
private:
	int time;
	int delay;

public:
	// Constructeur
	Timer(int delay);

	// M�thode
	bool isReady();
};