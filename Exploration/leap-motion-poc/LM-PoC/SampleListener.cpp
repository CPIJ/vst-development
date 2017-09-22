#include "stdafx.h"
#include "SampleListener.h"
#include <Leap.h>
#include "StringBuilder.h"

void SampleListener::onConnect(const Leap::Controller&)
{
	std::cout << "Connected" << std::endl;
}

void SampleListener::onFrame(const Leap::Controller& controller)
{
	const Leap::Frame frame = controller.frame();

	std::cout 
		<< "Hands: " << frame.hands().count() << std::endl;
}
