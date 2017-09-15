# VST Development 
In this repository you will find my explorations in VST development. At the moment of writing I followed an open course at school in wich I was allowed to explore any topic. Being an avid electronic music producer I ofcourse choose to make my own plugins!

## JUCE
To start off I did some research into the available frameworks. After some searching I stumbled upon JUCE and started experimenting with it. 

I like the way the framework handles projectmanagement via their Projucer application, it's a very fast way of getting started with making a cool plugin. Their [website](https://www.juce.com) also features some great quality documentation and tutorials.

After trying the framework for a bit I created a simple deployment strategy for quick testing. More about this below...

## Local Deployement
To make it easy to test and try out your newly created plugin, I devised a little plan on how to deploy your plugin from Visual Studio and make it available in both JUCE's Plugin Host and (optionally) your DAW. 

Before you can start, make sure you have..
* Installed JUCE
* Installed Projucer
* Set up [Plugin host](https://www.juce.com/doc/tutorial_create_projucer_basic_plugin)

#### Project settings
1. Create a new Audio Plugin project via Projucer, name it something like `PROJECT_TEMPLATE`
2. Open the settings tab
3. Edit all fields to your liking. Like, company name, project name and what kind of builds you want.

#### Export settings
1. Open the Exporter settings. (located in the left bar)
2. Add a configuration and name it `Prototype` or whatever name you like.
3. Set the binary location to a folder of your liking (ex: `~\Documents\Prototype\$(SolutionName)`   
3.1 `SolutionName` is a variable from Visual Studio, it puts your binary files in a folder named after your solution.
4. Enable any settings you like.

#### Configuring Project Host and (optionally) your DAW.
1. Open Project Host.
2. Go to `Options > Edit list of available plug-Ins...`
3. Click Options and choose `Scan for new VST plug-Ins`. If you work with VST3, choose that option instead.
4. Click on the `+` symbol and add your binary location, from step 3 of Export settings (ex: `~\Documents\Prototype\`)
5. Click on Scan and your plugin should show up!

All DAW's are different, so when you want to test your plugin in it you could either: Copy the buildfiles to your DAW's VST directory or add a additional VST folder in the settings of your DAW -- add the binary location from step 4 here.

#### Creating a new project
In this part of the process we use the project we just set up, in my case called `PROJECT_TEMPLATE`. I use notepad++ to quickly edit all the names. It's a bit of manual work, but it's not too bad.

1. Copy the original folder and rename it to fit your new plugin.
2. Rename the .projucer file.
3. Open the following files in Notepad++: `PluginEditor.cpp`, `PluginEditor.h`, `PluginProcessor.cpp`, `PluginProcessor.h` (these are all located in the `~/Source/` folder.) Also open the .projucer file.
4. Do a Find and Replace on all open documents and replace `PROJECT_TEMPLATE` with your plugin name.
5. Save all files.

That's it! You can now start coding your VST. When you're ready to test, just build to project using your newly made configuration and it will be available in the Plugin Host!

## Contact
If you have any questions regarding this project you van contact me casper.pijnenburg@student.fontys.nl!
