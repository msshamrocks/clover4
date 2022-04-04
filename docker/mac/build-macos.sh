#!/bin/bash

cd macos
mkdir build
docker build -t shamrock:macos .
docker run -d --name macos -p 12295:12295 -p 11917:11917 shamrock:macos
docker cp macos:/opt/shamrock/src/cloverd  ./build/cloverd
docker cp macos:/opt/shamrock/src/clover-cli  ./build/clover-cli
docker cp macos:/opt/shamrock/src/qt/clover-qt  ./build/clover-qt
docker cp macos:/opt/shamrock/Shamrock-Core.dmg  ./build/Shamrock-Core.dmg