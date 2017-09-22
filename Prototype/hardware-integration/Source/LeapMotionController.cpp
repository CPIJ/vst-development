#include "LeapMotionController.h"
#include "Leap.h"

void LeapMotionController::onConnect(const Leap::Controller&)
{
	std::cout << "Connected" << std::endl;
	this->isConnected = true;
}

void LeapMotionController::onFrame(const Leap::Controller& controller)
{
	Leap::Frame frame = controller.frame();

	this->isPlaying = frame.hands().count() == 1;
}

LeapMotionController::LeapMotionController()
{
	this->controller.addListener(*this);

	this->isConnected = false;
	this->isPlaying = false;
}

LeapMotionController::~LeapMotionController()
{
	std::cout << "Disconnected" << std::endl;
	this->controller.removeListener(*this);
}
