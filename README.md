# chili
The legendary chili game engine

## How to get you up & running?
Checkout the current masterbranch & execute the provided GenerateProjects.bat.
This was created with VisualStudio 2019, if you another version of VisualStudio please edit this in the GenerateProjects.bat before starting!

After this everything should be setup for you to enjoy!

## What is this?
This are basics steps along the "The Cherno Hazel Engine" tutorial. Up until the point of including Layers.
So the functionality is pretty restricted but what does work is:
- Events of different type are used to propagate events from the GLFW library and other sources.
- Exposing the existing functionality as shared library over a single easy to use entry point (as shown in the Sandbox project)
- Semi-sophisticated logging with different Threat levels (Warning, Info, Error, ...) 
- Using precompiled headers to reduce repetitive compilation of unchange code thus speeding up compile time
- Basic Layers for debugging / UI / .. with a stack based approach
- Using premake5 to conveniently setup the whole project  

## License Info
The whole project was done after the youtube series from The Cherno (https://www.youtube.com/channel/UCQ-W1KE9EYfdxhL6S4twUNw) and is generally under the GNU GENERAL PUBLIC LICENSE, so have fun & no warranty whatsoever ;)
