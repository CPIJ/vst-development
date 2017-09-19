#include "SineGenerator.h"

#define double_Pi 3.14159265358979323846;

SineGenerator::SineGenerator()
{
	this->angleDelta = 0;
	this->currentAngle = 0;
	this->currentSampleRate = 0;
}

void SineGenerator::updateAngleDelta()
{
	const double cyclesPerSample = 440 / currentSampleRate; // [2]
	angleDelta = cyclesPerSample * 2.0 * double_Pi;
}

void SineGenerator::setSampleRate(double sampleRate)
{
	currentSampleRate = sampleRate;
}
