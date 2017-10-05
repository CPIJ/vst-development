/*
  ==============================================================================

	This file was auto-generated!

	It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
VstPluginAudioProcessor::VstPluginAudioProcessor()
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
	sineGenerator = new SineGenerator();
}

VstPluginAudioProcessor::~VstPluginAudioProcessor()
{
	delete sineGenerator;
}

//==============================================================================
const String VstPluginAudioProcessor::getName() const
{
	return JucePlugin_Name;
}

bool VstPluginAudioProcessor::acceptsMidi() const
{
#if JucePlugin_WantsMidiInput
	return true;
#else
	return false;
#endif
}

bool VstPluginAudioProcessor::producesMidi() const
{
#if JucePlugin_ProducesMidiOutput
	return true;
#else
	return false;
#endif
}

double VstPluginAudioProcessor::getTailLengthSeconds() const
{
	return 0.0;
}

int VstPluginAudioProcessor::getNumPrograms()
{
	return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
				// so this should be at least 1, even if you're not really implementing programs.
}

int VstPluginAudioProcessor::getCurrentProgram()
{
	return 0;
}

void VstPluginAudioProcessor::setCurrentProgram(int index)
{
}

const String VstPluginAudioProcessor::getProgramName(int index)
{
	return {};
}

void VstPluginAudioProcessor::changeProgramName(int index, const String& newName)
{
}

//==============================================================================
void VstPluginAudioProcessor::prepareToPlay(double sampleRate, int samplesPerBlock)
{
	sineGenerator->setSampleRate(sampleRate);
}

void VstPluginAudioProcessor::releaseResources()
{
	// When playback stops, you can use this as an opportunity to free up any
	// spare memory, etc.
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool VstPluginAudioProcessor::isBusesLayoutSupported(const BusesLayout& layouts) const
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
void VstPluginAudioProcessor::processBlock(AudioSampleBuffer& buffer, MidiBuffer& midiMessages)
{
	MidiMessage m;
	MidiBuffer	processedMidi;
	int			time = 0;

	for (MidiBuffer::Iterator i(midiMessages); i.getNextEvent(m, time);)
	{
		if (m.isNoteOn()) 
		{
			sineGenerator->isPlaying = true;
			
			sineGenerator->setFrequency(m.getMidiNoteInHertz(m.getNoteNumber()));
			sineGenerator->updateAngleDelta();
		}
		else if (m.isNoteOff()) 
		{
			sineGenerator->isPlaying = false;
		}
	}

	if (sineGenerator->isPlaying)
	{
		const	float	level = 0.125f;
		float*	const	bufferLeft = buffer.getWritePointer(0, buffer.getSample(0, time));
		float*	const	bufferRight = buffer.getWritePointer(1, buffer.getSample(1, time));

		for (int sample = 0; sample < buffer.getNumSamples(); ++sample)
		{
			const float currentSample = std::sin(sineGenerator->currentAngle);
			sineGenerator->currentAngle += sineGenerator->angleDelta;
			bufferLeft[sample] = currentSample * level;
			bufferRight[sample] = currentSample * level;

		}
	}
}

//==============================================================================
bool VstPluginAudioProcessor::hasEditor() const
{
	return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* VstPluginAudioProcessor::createEditor()
{
	return new VstPluginAudioProcessorEditor(*this);
}

//==============================================================================
void VstPluginAudioProcessor::getStateInformation(MemoryBlock& destData)
{
	// You should use this method to store your parameters in the memory block.
	// You could do that either as raw data, or use the XML or ValueTree classes
	// as intermediaries to make it easy to save and load complex data.
}

void VstPluginAudioProcessor::setStateInformation(const void* data, int sizeInBytes)
{
	// You should use this method to restore your parameters from this memory block,
	// whose contents will have been created by the getStateInformation() call.
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
	return new VstPluginAudioProcessor();
}
