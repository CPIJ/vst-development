#include "stdafx.h"
#include <iostream>
#include "Leap.h"
#include "SampleListener.h";
#include <cstdlib>

Leap::Controller controller;
SampleListener listener;

void exiting()
{
	controller.removeListener(listener);
}

int main(int argc, char** argv) {

	atexit(exiting);

	controller.addListener(listener);

	// Keep this process running until Enter is pressed
	std::cout << "Press Enter to quit..." << std::endl;
	std::cin.get();

	controller.removeListener(listener);

	return 0;
}



