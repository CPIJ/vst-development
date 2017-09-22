#pragma once
#include "Leap.h"

class LeapMotionController : public Leap::Listener
{
	void onConnect(const Leap::Controller&) override;
	void onFrame(const Leap::Controller&) override;

public:
	LeapMotionController();
	~LeapMotionController();

	Leap::Controller controller;
	bool isPlaying;
	bool isConnected;
};
