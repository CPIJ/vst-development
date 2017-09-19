#include "SineGenerator.h"

#define double_Pi 3.14159265358979323846;

SineGenerator::SineGenerator()
{
	this->angleDelta = 0;
	this->currentAngle = 0;
	this->currentSampleRate = 0;
	this->frequency = 440;
	this->isPlaying = false;
}

void SineGenerator::updateAngleDelta()
{
	const double cyclesPerSample = this->frequency / this->currentSampleRate;
	this->angleDelta = cyclesPerSample * 2.0 * double_Pi;
}

void SineGenerator::setSampleRate(double sampleRate)
{
	this->currentSampleRate = sampleRate;
}

void SineGenerator::setFrequency(double freq)
{
	this->frequency = freq;
}
