/*
  ==============================================================================

	This file was auto-generated!

	It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
HardwareIntegrationAudioProcessor::HardwareIntegrationAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
	: AudioProcessor(BusesProperties()
#if ! JucePlugin_IsMidiEffect
#if ! JucePlugin_IsSynth
		.withInput("Input", AudioChannelSet::stereo(), true)
#endif
		.withOutput("Output", AudioChannelSet::stereo(), true)
#endif
	)
#endif
{
	this->controller = new LeapMotionController();
}

HardwareIntegrationAudioProcessor::~HardwareIntegrationAudioProcessor()
{
	try
	{
		delete this->controller;
	}
	catch (int e)
	{
		// Yeah this is bad, i know..
	}
}

//==============================================================================
const String HardwareIntegrationAudioProcessor::getName() const
{
	return JucePlugin_Name;
}

bool HardwareIntegrationAudioProcessor::acceptsMidi() const
{
#if JucePlugin_WantsMidiInput
	return true;
#else
	return false;
#endif
}

bool HardwareIntegrationAudioProcessor::producesMidi() const
{
#if JucePlugin_ProducesMidiOutput
	return true;
#else
	return false;
#endif
}

double HardwareIntegrationAudioProcessor::getTailLengthSeconds() const
{
	return 0.0;
}

int HardwareIntegrationAudioProcessor::getNumPrograms()
{
	return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
				// so this should be at least 1, even if you're not really implementing programs.
}

int HardwareIntegrationAudioProcessor::getCurrentProgram()
{
	return 0;
}

void HardwareIntegrationAudioProcessor::setCurrentProgram(int index)
{
}

const String HardwareIntegrationAudioProcessor::getProgramName(int index)
{
	return {};
}

void HardwareIntegrationAudioProcessor::changeProgramName(int index, const String& newName)
{
}

//==============================================================================
void HardwareIntegrationAudioProcessor::prepareToPlay(double sampleRate, int samplesPerBlock)
{
	// Use this method as the place to do any pre-playback
	// initialisation that you need..
}

void HardwareIntegrationAudioProcessor::releaseResources()
{
	delete this->controller;
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool HardwareIntegrationAudioProcessor::isBusesLayoutSupported(const BusesLayout& layouts) const
{
#if JucePlugin_IsMidiEffect
	ignoreUnused(layouts);
	return true;
#else
	// This is the place where you check if the layout is supported.
	// In this template code we only support mono or stereo.
	if (layouts.getMainOutputChannelSet() != AudioChannelSet::mono()
		&& layouts.getMainOutputChannelSet() != AudioChannelSet::stereo())
		return false;

	// This checks if the input layout matches the output layout
#if ! JucePlugin_IsSynth
	if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
		return false;
#endif

	return true;
#endif
}
#endif

void HardwareIntegrationAudioProcessor::processBlock(AudioSampleBuffer& buffer, MidiBuffer& midiMessages)
{
	const int channels = buffer.getNumChannels();

	for (int channel = 0; channel < channels; ++channel) {

		float* const currentBuffer = buffer.getWritePointer(channel, buffer.getSample(channel, 0));

		for (int sample = 0; sample < buffer.getNumSamples(); ++sample)
		{
			if (this->controller->isPlaying)
			{
				currentBuffer[sample] = random.nextFloat() * 0.25f - 1.25f;
			}
		}
	}
}

//==============================================================================
bool HardwareIntegrationAudioProcessor::hasEditor() const
{
	return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* HardwareIntegrationAudioProcessor::createEditor()
{
	return new HardwareIntegrationAudioProcessorEditor(*this);
}

//==============================================================================
void HardwareIntegrationAudioProcessor::getStateInformation(MemoryBlock& destData)
{
	// You should use this method to store your parameters in the memory block.
	// You could do that either as raw data, or use the XML or ValueTree classes
	// as intermediaries to make it easy to save and load complex data.
}

void HardwareIntegrationAudioProcessor::setStateInformation(const void* data, int sizeInBytes)
{
	// You should use this method to restore your parameters from this memory block,
	// whose contents will have been created by the getStateInformation() call.
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
	return new HardwareIntegrationAudioProcessor();
}
