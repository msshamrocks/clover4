#!/bin/bash

cd ubuntu-20
mkdir build
docker build -t shamrock:ubuntu20 .
docker run -d --name ubuntu20 shamrock:ubuntu20
docker cp ubuntu20:/opt/shamrock/src/cloverd  ./build/cloverd
docker cp ubuntu20:/opt/shamrock/src/clover-cli  ./build/clover-cli
docker cp ubuntu20:/opt/shamrock/src/qt/clover-qt  ./build/clover-qt