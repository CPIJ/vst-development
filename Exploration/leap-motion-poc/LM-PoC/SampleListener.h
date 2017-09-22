#pragma once
#include <Leap.h>

class SampleListener : public Leap::Listener
{
public:
	void onConnect(const Leap::Controller&) override;
	void onFrame(const Leap::Controller&) override;
};
