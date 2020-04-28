#!/bin/bash
cd ..
if [[ -d "build-debug" ]]
then
  rm -r "build-debug"
fi
mkdir "build-debug"
cd "build-debug"
cmake ..
cmake --build .
mkdir "Storyboards.app"
cd "Storyboards.app"
mkdir "Contents"
cd "Contents"
mkdir "MacOS"
mkdir "Resources"
cd ../..
mv "StoryBuilder" "Storyboards.app/Contents/MacOS"
cd ..
cp "osx_bundle/res/Info.plist" "build-debug/Storyboards.app/Contents"
cp "osx_bundle/res/SB.icns" "build-debug/Storyboards.app/Contents/Resources"
cd "osx_bundle"