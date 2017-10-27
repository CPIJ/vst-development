#pragma once

class Generator
{
public:
	Generator();

	virtual void update() = 0;
	virtual void fillBuffer(float* buffer, int sample) = 0;

	virtual void setSampleRate(double sampleRate) = 0;
	virtual void setFrequency(double freq) = 0;

	bool isPlaying;
	double frequency;
	double sampleRate;
};
