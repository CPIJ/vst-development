#include "SineGenerator.h"
#include <complex>

#define double_Pi 3.14159265358979323846;

SineGenerator::SineGenerator()
{
	this->angleDelta = 0;
	this->currentAngle = 0;
	this->currentSampleRate = 0;
	this->frequency = 440;
	this->isPlaying = false;
}

void SineGenerator::update()
{
	const double cyclesPerSample = this->frequency / this->currentSampleRate;
	this->angleDelta = cyclesPerSample * 2.0 * double_Pi;
}

void SineGenerator::fillBuffer(float* buffer, int sample)
{
	const float	level = 0.125f;
	const float currentSample = std::sin(this->currentAngle);
	this->currentAngle += this->angleDelta;
	buffer[sample] = currentSample * level;
}

void SineGenerator::setSampleRate(double sampleRate)
{
	this->currentSampleRate = sampleRate;
}

void SineGenerator::setFrequency(double freq)
{
	this->frequency = freq;
}
