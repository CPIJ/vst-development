/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.1.2

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class GUI  : public AudioProcessorEditor,
             public Slider::Listener,
             public Button::Listener
{
public:
    //==============================================================================
    GUI (GuiDemoAudioProcessor& p);
    ~GUI();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    GuiDemoAudioProcessor& processor;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> lblA;
    ScopedPointer<Label> lblD;
    ScopedPointer<Label> lblA3;
    ScopedPointer<Label> lblA4;
    ScopedPointer<Slider> slider;
    ScopedPointer<Slider> slider2;
    ScopedPointer<Slider> slider3;
    ScopedPointer<Slider> slider4;
    ScopedPointer<Label> lblOsc1;
    ScopedPointer<TextButton> btnSine;
    ScopedPointer<TextButton> btnSaw;
    ScopedPointer<TextButton> btnSquare;
    ScopedPointer<Slider> slrOSC1Vol;
    ScopedPointer<Label> lblOsc2;
    ScopedPointer<TextButton> btnSine2;
    ScopedPointer<TextButton> btnSaw2;
    ScopedPointer<TextButton> btnSquare2;
    ScopedPointer<Slider> slrOSC1Vol2;
    ScopedPointer<Label> lblOsc3;
    ScopedPointer<Label> lblOsc4;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GUI)
};

//[EndFile] You can add extra defines here...
//[/EndFile]