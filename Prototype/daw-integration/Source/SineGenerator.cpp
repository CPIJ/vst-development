#include "SineGenerator.h"

#define double_Pi 3.14159265358979323846;

SineGenerator::SineGenerator()
{
	angleDelta = 0;
	currentAngle = 0;
	currentSampleRate = 0;

	isPlaying = false;
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
