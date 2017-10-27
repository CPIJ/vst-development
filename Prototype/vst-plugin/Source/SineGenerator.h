#pragma once
#include "Generator.h"

class SineGenerator : public Generator
{
public:
	SineGenerator();

	void update() override;
	void fillBuffer(float* buffer, int sample) override;
	void setSampleRate(double sampleRate) override;
	void setFrequency(double freq) override;

	double currentAngle;
	double angleDelta;
	
	bool isPlaying;

private:
	double frequency;
	double currentSampleRate;
};
