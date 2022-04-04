#!/bin/bash

cd multi
mkdir build
docker build -t shamrock:multi .
docker run -d --name multi shamrock:multi
docker cp multi:/opt/shamrock/src/cloverd  ./build/cloverd
docker cp multi:/opt/shamrock/src/clover-cli  ./build/clover-cli
docker cp multi:/opt/shamrock/src/qt/clover-qt  ./build/clover-qt

rm -rf shamrock-wallet
rm shamrock-wallet.deb
mkdir shamrock-wallet
cd shamrock-wallet

mkdir DEBIAN
cd DEBIAN
touch control
echo "Package: shamrock-wallet
Version: 2.0.1
Section: custom
Priority: optional
Architecture: all
Essential: no
Installed-Size: 1024
Maintainer: Shamrock Foundation
Description: FullNode Wallet for Shamrock Blockchain" >> control

cd ..
mkdir usr
mkdir usr/bin/
cd ..

cp ./build/clover-cli ./shamrock-wallet/usr/bin/clover-cli
cp ./build/cloverd ./shamrock-wallet/usr/bin/cloverd
cp ./build/clover-qt ./shamrock-wallet/usr/bin/clover-qt

sudo dpkg-deb --build ./shamrock-wallet