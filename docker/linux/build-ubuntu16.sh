#!/bin/bash

cd ubuntu-16
mkdir build
chmod 777 build
docker build -t shamrock:ubuntu16 .
docker run -d --name ubuntu16 shamrock:ubuntu16name ubuntu16 -p 12295:12295 -p 11917:11917 shamrock:ubuntu16
docker cp ubuntu16:/opt/shamrock/src/cloverd  ./build/cloverd
docker cp ubuntu16:/opt/shamrock/src/clover-cli  ./build/clover-cli
docker cp ubuntu16:/opt/shamrock/src/qt/clover-qt  ./build/clover-qt