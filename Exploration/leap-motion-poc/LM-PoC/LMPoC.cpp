#include "stdafx.h"
#include <iostream>
#include "Leap.h"
#include "SampleListener.h";

int main(int argc, char** argv) {

	SampleListener listener;
	Leap::Controller controller;

	controller.addListener(listener);

	// Keep this process running until Enter is pressed
	std::cout << "Press Enter to quit..." << std::endl;
	std::cin.get();

	controller.removeListener(listener);

	return 0;
}

