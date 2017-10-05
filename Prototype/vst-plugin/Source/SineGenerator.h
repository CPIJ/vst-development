#pragma once

class SineGenerator
{
public:
	SineGenerator();
	void updateAngleDelta();
	void setSampleRate(double sampleRate);
	void setFrequency(double freq);

	double currentAngle;
	double angleDelta;
	
	bool isPlaying;

private:
	double frequency;
	double currentSampleRate;
};
