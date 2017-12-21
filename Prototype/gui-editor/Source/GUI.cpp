/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.2.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "GUI.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GUI::GUI (GuiDemoAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (lblA = new Label ("lblA",
                                         TRANS("A\n")));
    lblA->setTooltip (TRANS("Adjust the attack of the sound."));
    lblA->setFont (Font ("Segoe UI", 35.90f, Font::plain).withTypefaceStyle ("Regular"));
    lblA->setJustificationType (Justification::centredLeft);
    lblA->setEditable (false, false, false);
    lblA->setColour (TextEditor::textColourId, Colours::black);
    lblA->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (lblD = new Label ("lblD",
                                         TRANS("D")));
    lblD->setTooltip (TRANS("Adjust the decay of the sound."));
    lblD->setFont (Font ("Segoe UI", 35.90f, Font::plain).withTypefaceStyle ("Regular"));
    lblD->setJustificationType (Justification::centredLeft);
    lblD->setEditable (false, false, false);
    lblD->setColour (TextEditor::textColourId, Colours::black);
    lblD->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (lblA3 = new Label ("lblA",
                                          TRANS("S")));
    lblA3->setTooltip (TRANS("Adjust the attack of the sound."));
    lblA3->setFont (Font ("Segoe UI", 35.90f, Font::plain).withTypefaceStyle ("Regular"));
    lblA3->setJustificationType (Justification::centredLeft);
    lblA3->setEditable (false, false, false);
    lblA3->setColour (TextEditor::textColourId, Colours::black);
    lblA3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (lblA4 = new Label ("lblA",
                                          TRANS("R")));
    lblA4->setTooltip (TRANS("Adjust the attack of the sound."));
    lblA4->setFont (Font ("Segoe UI", 35.90f, Font::plain).withTypefaceStyle ("Regular"));
    lblA4->setJustificationType (Justification::centredLeft);
    lblA4->setEditable (false, false, false);
    lblA4->setColour (TextEditor::textColourId, Colours::black);
    lblA4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (slider = new Slider ("new slider"));
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::LinearVertical);
    slider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider->addListener (this);

    addAndMakeVisible (slider2 = new Slider ("new slider"));
    slider2->setRange (0, 10, 0);
    slider2->setSliderStyle (Slider::LinearVertical);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->addListener (this);

    addAndMakeVisible (slider3 = new Slider ("new slider"));
    slider3->setRange (0, 10, 0);
    slider3->setSliderStyle (Slider::LinearVertical);
    slider3->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider3->addListener (this);

    addAndMakeVisible (slider4 = new Slider ("new slider"));
    slider4->setRange (0, 10, 0);
    slider4->setSliderStyle (Slider::LinearVertical);
    slider4->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider4->addListener (this);

    addAndMakeVisible (lblOsc1 = new Label ("lblOsc1",
                                            TRANS("OSC\n")));
    lblOsc1->setTooltip (TRANS("Oscillator 1"));
    lblOsc1->setFont (Font ("Segoe UI", 35.90f, Font::plain).withTypefaceStyle ("Light"));
    lblOsc1->setJustificationType (Justification::centredLeft);
    lblOsc1->setEditable (false, false, false);
    lblOsc1->setColour (TextEditor::textColourId, Colours::black);
    lblOsc1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (btnSine = new TextButton ("btnSine"));
    btnSine->setTooltip (TRANS("Set OSC1 to output a sinewave."));
    btnSine->setButtonText (TRANS("Sine"));
    btnSine->setRadioGroupId (1);
    btnSine->addListener (this);
    btnSine->setColour (TextButton::buttonColourId, Colour (0xff5c85a4));

    addAndMakeVisible (btnSaw = new TextButton ("btnSaw"));
    btnSaw->setTooltip (TRANS("Set OSC1 to output a sawwave."));
    btnSaw->setButtonText (TRANS("Saw"));
    btnSaw->setRadioGroupId (1);
    btnSaw->addListener (this);
    btnSaw->setColour (TextButton::buttonColourId, Colour (0xff5c85a4));

    addAndMakeVisible (btnSquare = new TextButton ("btnSquare"));
    btnSquare->setTooltip (TRANS("Set OSC1 to output a squarewave."));
    btnSquare->setButtonText (TRANS("Square"));
    btnSquare->setRadioGroupId (1);
    btnSquare->addListener (this);
    btnSquare->setColour (TextButton::buttonColourId, Colour (0xff5c85a4));

    addAndMakeVisible (slrOSC1Vol = new Slider ("slrOSC1Vol"));
    slrOSC1Vol->setTooltip (TRANS("Determine the volume of OSC1"));
    slrOSC1Vol->setRange (0, 10, 0);
    slrOSC1Vol->setSliderStyle (Slider::RotaryHorizontalVerticalDrag);
    slrOSC1Vol->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    slrOSC1Vol->addListener (this);

    addAndMakeVisible (lblOsc2 = new Label ("lblOsc2",
                                            TRANS("OSC\n"
                                            "\n"
                                            "\n")));
    lblOsc2->setTooltip (TRANS("Oscillator 2"));
    lblOsc2->setFont (Font ("Segoe UI", 35.90f, Font::plain).withTypefaceStyle ("Light"));
    lblOsc2->setJustificationType (Justification::centredLeft);
    lblOsc2->setEditable (false, false, false);
    lblOsc2->setColour (TextEditor::textColourId, Colours::black);
    lblOsc2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (btnSine2 = new TextButton ("btnSine"));
    btnSine2->setTooltip (TRANS("Set OSC2 to output a sinewave."));
    btnSine2->setButtonText (TRANS("Sine"));
    btnSine2->setRadioGroupId (1);
    btnSine2->addListener (this);
    btnSine2->setColour (TextButton::buttonColourId, Colour (0xff5c85a4));

    addAndMakeVisible (btnSaw2 = new TextButton ("btnSaw"));
    btnSaw2->setTooltip (TRANS("Set OSC2 to output a sawwave."));
    btnSaw2->setButtonText (TRANS("Saw"));
    btnSaw2->setRadioGroupId (1);
    btnSaw2->addListener (this);
    btnSaw2->setColour (TextButton::buttonColourId, Colour (0xff5c85a4));

    addAndMakeVisible (btnSquare2 = new TextButton ("btnSquare"));
    btnSquare2->setTooltip (TRANS("Set OSC2 to output a squarewave."));
    btnSquare2->setButtonText (TRANS("Square"));
    btnSquare2->setRadioGroupId (1);
    btnSquare2->addListener (this);
    btnSquare2->setColour (TextButton::buttonColourId, Colour (0xff5c85a4));

    addAndMakeVisible (slrOSC1Vol2 = new Slider ("slrOSC1Vol"));
    slrOSC1Vol2->setTooltip (TRANS("Determine the volume of OSC1"));
    slrOSC1Vol2->setRange (0, 10, 0);
    slrOSC1Vol2->setSliderStyle (Slider::RotaryHorizontalVerticalDrag);
    slrOSC1Vol2->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    slrOSC1Vol2->addListener (this);

    addAndMakeVisible (lblOsc3 = new Label ("lblOsc1",
                                            TRANS("1\n")));
    lblOsc3->setTooltip (TRANS("Oscillator 1"));
    lblOsc3->setFont (Font ("Segoe UI", 35.90f, Font::plain).withTypefaceStyle ("Bold"));
    lblOsc3->setJustificationType (Justification::centredLeft);
    lblOsc3->setEditable (false, false, false);
    lblOsc3->setColour (TextEditor::textColourId, Colours::black);
    lblOsc3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (lblOsc4 = new Label ("lblOsc1",
                                            TRANS("2\n")));
    lblOsc4->setTooltip (TRANS("Oscillator 1"));
    lblOsc4->setFont (Font ("Segoe UI", 35.90f, Font::plain).withTypefaceStyle ("Bold"));
    lblOsc4->setJustificationType (Justification::centredLeft);
    lblOsc4->setEditable (false, false, false);
    lblOsc4->setColour (TextEditor::textColourId, Colours::black);
    lblOsc4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GUI::~GUI()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    lblA = nullptr;
    lblD = nullptr;
    lblA3 = nullptr;
    lblA4 = nullptr;
    slider = nullptr;
    slider2 = nullptr;
    slider3 = nullptr;
    slider4 = nullptr;
    lblOsc1 = nullptr;
    btnSine = nullptr;
    btnSaw = nullptr;
    btnSquare = nullptr;
    slrOSC1Vol = nullptr;
    lblOsc2 = nullptr;
    btnSine2 = nullptr;
    btnSaw2 = nullptr;
    btnSquare2 = nullptr;
    slrOSC1Vol2 = nullptr;
    lblOsc3 = nullptr;
    lblOsc4 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GUI::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GUI::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    lblA->setBounds (192, 24, 32, 24);
    lblD->setBounds (224, 24, 32, 24);
    lblA3->setBounds (256, 24, 32, 24);
    lblA4->setBounds (288, 24, 32, 24);
    slider->setBounds (192, 56, 24, 224);
    slider2->setBounds (224, 56, 24, 224);
    slider3->setBounds (256, 56, 24, 224);
    slider4->setBounds (288, 56, 24, 224);
    lblOsc1->setBounds (16, 24, 88, 24);
    btnSine->setBounds (24, 72, 152, 24);
    btnSaw->setBounds (24, 104, 152, 24);
    btnSquare->setBounds (24, 136, 152, 24);
    slrOSC1Vol->setBounds (16, 160, 176, 128);
    lblOsc2->setBounds (340, 22, 88, 24);
    btnSine2->setBounds (348, 70, 152, 24);
    btnSaw2->setBounds (348, 102, 152, 24);
    btnSquare2->setBounds (348, 134, 152, 24);
    slrOSC1Vol2->setBounds (340, 158, 176, 128);
    lblOsc3->setBounds (72, 24, 24, 24);
    lblOsc4->setBounds (399, 22, 24, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void GUI::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider)
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }
    else if (sliderThatWasMoved == slider2)
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..
        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider3)
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..
        //[/UserSliderCode_slider3]
    }
    else if (sliderThatWasMoved == slider4)
    {
        //[UserSliderCode_slider4] -- add your slider handling code here..
        //[/UserSliderCode_slider4]
    }
    else if (sliderThatWasMoved == slrOSC1Vol)
    {
        //[UserSliderCode_slrOSC1Vol] -- add your slider handling code here..
        //[/UserSliderCode_slrOSC1Vol]
    }
    else if (sliderThatWasMoved == slrOSC1Vol2)
    {
        //[UserSliderCode_slrOSC1Vol2] -- add your slider handling code here..
        //[/UserSliderCode_slrOSC1Vol2]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void GUI::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == btnSine)
    {
        //[UserButtonCode_btnSine] -- add your button handler code here..
        //[/UserButtonCode_btnSine]
    }
    else if (buttonThatWasClicked == btnSaw)
    {
        //[UserButtonCode_btnSaw] -- add your button handler code here..
        //[/UserButtonCode_btnSaw]
    }
    else if (buttonThatWasClicked == btnSquare)
    {
        //[UserButtonCode_btnSquare] -- add your button handler code here..
        //[/UserButtonCode_btnSquare]
    }
    else if (buttonThatWasClicked == btnSine2)
    {
        //[UserButtonCode_btnSine2] -- add your button handler code here..
        //[/UserButtonCode_btnSine2]
    }
    else if (buttonThatWasClicked == btnSaw2)
    {
        //[UserButtonCode_btnSaw2] -- add your button handler code here..
        //[/UserButtonCode_btnSaw2]
    }
    else if (buttonThatWasClicked == btnSquare2)
    {
        //[UserButtonCode_btnSquare2] -- add your button handler code here..
        //[/UserButtonCode_btnSquare2]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GUI" componentName="" parentClasses="public AudioProcessorEditor"
                 constructorParams="GuiDemoAudioProcessor&amp; p" variableInitialisers="AudioProcessorEditor (&amp;p), processor (p)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <LABEL name="lblA" id="fc3f9ce56420405d" memberName="lblA" virtualName=""
         explicitFocusOrder="0" pos="192 24 32 24" tooltip="Adjust the attack of the sound."
         edTextCol="ff000000" edBkgCol="0" labelText="A&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Segoe UI"
         fontsize="35.899999999999998579" kerning="0" bold="0" italic="0"
         justification="33"/>
  <LABEL name="lblD" id="b7045c36e9a26c92" memberName="lblD" virtualName=""
         explicitFocusOrder="0" pos="224 24 32 24" tooltip="Adjust the decay of the sound."
         edTextCol="ff000000" edBkgCol="0" labelText="D" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Segoe UI"
         fontsize="35.899999999999998579" kerning="0" bold="0" italic="0"
         justification="33"/>
  <LABEL name="lblA" id="63c7e4a7bd5d4b86" memberName="lblA3" virtualName=""
         explicitFocusOrder="0" pos="256 24 32 24" tooltip="Adjust the attack of the sound."
         edTextCol="ff000000" edBkgCol="0" labelText="S" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Segoe UI"
         fontsize="35.899999999999998579" kerning="0" bold="0" italic="0"
         justification="33"/>
  <LABEL name="lblA" id="c5dbaf0ee696a2b9" memberName="lblA4" virtualName=""
         explicitFocusOrder="0" pos="288 24 32 24" tooltip="Adjust the attack of the sound."
         edTextCol="ff000000" edBkgCol="0" labelText="R" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Segoe UI"
         fontsize="35.899999999999998579" kerning="0" bold="0" italic="0"
         justification="33"/>
  <SLIDER name="new slider" id="90fc3491983c8ee1" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="192 56 24 224" min="0" max="10" int="0"
          style="LinearVertical" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="818cdefe7ff9c901" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="224 56 24 224" min="0"
          max="10" int="0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="new slider" id="22f5a6f8a4dd8d38" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="256 56 24 224" min="0"
          max="10" int="0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="new slider" id="986f8e86e74945ff" memberName="slider4"
          virtualName="" explicitFocusOrder="0" pos="288 56 24 224" min="0"
          max="10" int="0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="lblOsc1" id="283e5a1e2b19e756" memberName="lblOsc1" virtualName=""
         explicitFocusOrder="0" pos="16 24 88 24" tooltip="Oscillator 1"
         edTextCol="ff000000" edBkgCol="0" labelText="OSC&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Segoe UI"
         fontsize="35.899999999999998579" kerning="0" bold="0" italic="0"
         justification="33" typefaceStyle="Light"/>
  <TEXTBUTTON name="btnSine" id="6da22a2de748d09e" memberName="btnSine" virtualName=""
              explicitFocusOrder="0" pos="24 72 152 24" tooltip="Set OSC1 to output a sinewave."
              bgColOff="ff5c85a4" buttonText="Sine" connectedEdges="0" needsCallback="1"
              radioGroupId="1"/>
  <TEXTBUTTON name="btnSaw" id="7fe06153ecaba125" memberName="btnSaw" virtualName=""
              explicitFocusOrder="0" pos="24 104 152 24" tooltip="Set OSC1 to output a sawwave."
              bgColOff="ff5c85a4" buttonText="Saw" connectedEdges="0" needsCallback="1"
              radioGroupId="1"/>
  <TEXTBUTTON name="btnSquare" id="ab5035c55effab31" memberName="btnSquare"
              virtualName="" explicitFocusOrder="0" pos="24 136 152 24" tooltip="Set OSC1 to output a squarewave."
              bgColOff="ff5c85a4" buttonText="Square" connectedEdges="0" needsCallback="1"
              radioGroupId="1"/>
  <SLIDER name="slrOSC1Vol" id="3b355a839847e847" memberName="slrOSC1Vol"
          virtualName="" explicitFocusOrder="0" pos="16 160 176 128" tooltip="Determine the volume of OSC1"
          min="0" max="10" int="0" style="RotaryHorizontalVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="lblOsc2" id="8c08f7daff2387c2" memberName="lblOsc2" virtualName=""
         explicitFocusOrder="0" pos="340 22 88 24" tooltip="Oscillator 2"
         edTextCol="ff000000" edBkgCol="0" labelText="OSC&#10;&#10;&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Segoe UI" fontsize="35.899999999999998579" kerning="0"
         bold="0" italic="0" justification="33" typefaceStyle="Light"/>
  <TEXTBUTTON name="btnSine" id="b918feb1d31930ee" memberName="btnSine2" virtualName=""
              explicitFocusOrder="0" pos="348 70 152 24" tooltip="Set OSC2 to output a sinewave."
              bgColOff="ff5c85a4" buttonText="Sine" connectedEdges="0" needsCallback="1"
              radioGroupId="1"/>
  <TEXTBUTTON name="btnSaw" id="222f88b9a05fbe1a" memberName="btnSaw2" virtualName=""
              explicitFocusOrder="0" pos="348 102 152 24" tooltip="Set OSC2 to output a sawwave."
              bgColOff="ff5c85a4" buttonText="Saw" connectedEdges="0" needsCallback="1"
              radioGroupId="1"/>
  <TEXTBUTTON name="btnSquare" id="ce308bdcd386b3f0" memberName="btnSquare2"
              virtualName="" explicitFocusOrder="0" pos="348 134 152 24" tooltip="Set OSC2 to output a squarewave."
              bgColOff="ff5c85a4" buttonText="Square" connectedEdges="0" needsCallback="1"
              radioGroupId="1"/>
  <SLIDER name="slrOSC1Vol" id="3020304f9e038849" memberName="slrOSC1Vol2"
          virtualName="" explicitFocusOrder="0" pos="340 158 176 128" tooltip="Determine the volume of OSC1"
          min="0" max="10" int="0" style="RotaryHorizontalVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="lblOsc1" id="9a664db77fca8711" memberName="lblOsc3" virtualName=""
         explicitFocusOrder="0" pos="72 24 24 24" tooltip="Oscillator 1"
         edTextCol="ff000000" edBkgCol="0" labelText="1&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Segoe UI"
         fontsize="35.899999999999998579" kerning="0" bold="1" italic="0"
         justification="33" typefaceStyle="Bold"/>
  <LABEL name="lblOsc1" id="35351e15c7eba3b8" memberName="lblOsc4" virtualName=""
         explicitFocusOrder="0" pos="399 22 24 24" tooltip="Oscillator 1"
         edTextCol="ff000000" edBkgCol="0" labelText="2&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Segoe UI"
         fontsize="35.899999999999998579" kerning="0" bold="1" italic="0"
         justification="33" typefaceStyle="Bold"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
