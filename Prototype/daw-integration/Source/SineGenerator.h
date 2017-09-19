#pragma once

class SineGenerator
{
public:
	SineGenerator();
	void updateAngleDelta();
	void setSampleRate(double sampleRate);

	double currentSampleRate;
	double currentAngle;
	double angleDelta;
};
