#!/bin/bash

cd win64
mkdir build
docker build -t shamrock:win64 .
docker run -d --name win64 -p 12295:12295 -p 11917:11917 shamrock:win64
docker cp win64:/opt/shamrock/src/cloverd.exe  ./build/cloverd.exe
docker cp win64:/opt/shamrock/src/clover-cli.exe  ./build/clover-cli.exe
docker cp win64:/opt/shamrock/src/qt/clover-qt.exe  ./build/clover-qt.exe