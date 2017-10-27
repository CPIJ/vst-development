/*
  ==============================================================================

	This file was auto-generated!

	It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include <list>
#include "Generators.h"

#define MARGIN 30
#define ROW 30
#define GENERATOR_GROUP 1

//==============================================================================
VstPluginAudioProcessorEditor::VstPluginAudioProcessorEditor(VstPluginAudioProcessor& p)
	: AudioProcessorEditor(&p), processor(p)
{
	setSize(480, 360);
	initializeComponents();
}

VstPluginAudioProcessorEditor::~VstPluginAudioProcessorEditor()
{
}

int Row(int number)
{
	return MARGIN + ROW * (number - 1);
}

//==============================================================================
void VstPluginAudioProcessorEditor::paint(Graphics& g)
{
	//g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
	g.fillAll(Colours::lightgrey);
}

void VstPluginAudioProcessorEditor::resized()
{
	volumeSlider.setBounds(Row(1), 15, 15, getHeight() - MARGIN);

	const int buttonHeight = 50;

	sineButton.setBounds(Row(2), 15, Row(4), buttonHeight);
	sawButton.setBounds(Row(2), 75, Row(4), buttonHeight);
	squareButton.setBounds(Row(2), 135, Row(4), buttonHeight);
}

void VstPluginAudioProcessorEditor::buttonClicked(Button* button)
{
	if (button == &sineButton)
	{
		processor.generator = Generators::sine();
	}
	else if (button == &sawButton)
	{
		processor.generator = Generators::sine();
	}
	else if (button == &squareButton)
	{
		processor.generator = Generators::sine();
	}
	else
	{
		throw std::invalid_argument("No button of this type exists.");
	}
}

#pragma region Initialize

void VstPluginAudioProcessorEditor::initializeComponents()
{
	// VolumeSlider
	volumeSlider.setSliderStyle(Slider::LinearBarVertical);
	volumeSlider.setRange(0.0, 127, 1.0);
	volumeSlider.setTextBoxStyle(Slider::NoTextBox, false, 90, 0);
	volumeSlider.setTextValueSuffix(" Volume");
	volumeSlider.setValue(95);
	volumeSlider.getLookAndFeel().setColour(Slider::ColourIds::trackColourId, Colours::darkgrey);
	volumeSlider.getLookAndFeel().setColour(Slider::ColourIds::backgroundColourId, Colours::black);

	addAndMakeVisible(&volumeSlider);

	// Generator Button Group
	//  Sine Button
	sineButton.setButtonText("Sine");
	sineButton.setRadioGroupId(GENERATOR_GROUP);
	sineButton.setToggleState(true, dontSendNotification);
	sineButton.addListener(this);
	sineButton.getLookAndFeel().setColour(ToggleButton::ColourIds::textColourId, Colours::darkgrey);
	sineButton.getLookAndFeel().setColour(ToggleButton::ColourIds::tickColourId, Colours::darkgrey);
	sineButton.getLookAndFeel().setColour(ToggleButton::ColourIds::tickDisabledColourId, Colours::darkgrey);

	//  Saw Button
	sawButton.setButtonText("Saw");
	sawButton.setRadioGroupId(GENERATOR_GROUP);
	sawButton.addListener(this);
	sawButton.getLookAndFeel().setColour(ToggleButton::ColourIds::textColourId, Colours::darkgrey);
	sawButton.getLookAndFeel().setColour(ToggleButton::ColourIds::tickColourId, Colours::darkgrey);
	sawButton.getLookAndFeel().setColour(ToggleButton::ColourIds::tickDisabledColourId, Colours::darkgrey);

	//  Square Button
	squareButton.setButtonText("Square");
	squareButton.setRadioGroupId(GENERATOR_GROUP);
	squareButton.addListener(this);
	squareButton.getLookAndFeel().setColour(ToggleButton::ColourIds::textColourId, Colours::darkgrey);
	squareButton.getLookAndFeel().setColour(ToggleButton::ColourIds::tickColourId, Colours::darkgrey);
	squareButton.getLookAndFeel().setColour(ToggleButton::ColourIds::tickDisabledColourId, Colours::darkgrey);

	addAndMakeVisible(&sineButton);
	addAndMakeVisible(&sawButton);
	addAndMakeVisible(&squareButton);
}
#pragma endregion 
