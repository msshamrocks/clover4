#!/bin/bash

rm -rf dev
mkdir dev
cd dev

docker exec -it -w /opt/shamrock/ multi git pull
docker exec -it -w /opt/shamrock/ multi make clean
docker exec -it -w /opt/shamrock/ multi make -j16

docker cp multi:/opt/shamrock/src/cloverd  ./cloverd
docker cp multi:/opt/shamrock/src/clover-cli  ./clover-cli
docker cp multi:/opt/shamrock/src/qt/clover-qt  ./clover-qt

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

cp ./clover-cli ./shamrock-wallet/usr/bin/clover-cli
cp ./cloverd ./shamrock-wallet/usr/bin/cloverd
cp ./clover-qt ./shamrock-wallet/usr/bin/clover-qt

sudo dpkg-deb --build ./shamrock-wallet

sleep 2
./clover-qt