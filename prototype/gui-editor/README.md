# GUI Editor
JUCE provides a nice way of designing GUI's, The GUI editor. 
In this prototype I created a new audio plugin and changed the default GUI to a GUI that has the editor enabled.

## Setting up the project.
1. Open Projucer.
2. Create a new project. `File > New project...`
3. Select `Audio Plug-In`.
4. Give it a fitting name.
5. In the File explorer, right-click on `Source`.
6. Choose `Add new GUI Component...`.
7. Choose a name, like `GUI`.
8. In 'GUI.h' add `{your-project-name}AudioProcessor& processor` in the private section. Make sure it is between the `[UserVariables]` comments, otherwise it will be overwritten.
9. Include `PluginProcessor`.
10. In the File explorer, select `GUI.cpp`.
11. In the Class tab change `Parent classes` to `public AudioProcessorEditor`.
12. Change the Constructor params to `{your-project-name}AudioProcessor& p`
13. Change the Member initialisers to `AudioProcessorEditor (&p), processor (p)`
14. In 'PluginProcessor.cpp' find the method called 'createEditor'.
15. In this method change the current return value to your newly created GUI class.
16. Make sure to #include it :)
17. Cleanup! remove the old GUI files, wich are now unused.

That's it, you are now ready to start using JUCE's GUI Editor in combination with an Audio Plug-In!
