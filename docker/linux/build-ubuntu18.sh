#!/bin/bash

cd ubuntu-18
mkdir build
docker build -t shamrock:ubuntu18 .
docker run -d --name ubuntu18 shamrock:ubuntu18
docker cp ubuntu18:/opt/shamrock/src/cloverd  ./build/cloverd
docker cp ubuntu18:/opt/shamrock/src/clover-cli  ./build/clover-cli
docker cp ubuntu18:/opt/shamrock/src/qt/clover-qt  ./build/clover-qt