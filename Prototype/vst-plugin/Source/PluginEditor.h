/*
  ==============================================================================

	This file was auto-generated!

	It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class VstPluginAudioProcessorEditor : public AudioProcessorEditor, public Button::Listener
{
public:
	VstPluginAudioProcessorEditor(VstPluginAudioProcessor&);
	~VstPluginAudioProcessorEditor();

	//==============================================================================
	void paint(Graphics&) override;
	void resized() override;
	void buttonClicked(Button*) override;

private:
	void initializeComponents();

	VstPluginAudioProcessor& processor;

	Slider volumeSlider;

	ToggleButton sineButton;
	ToggleButton sawButton;
	ToggleButton squareButton;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(VstPluginAudioProcessorEditor)
};
