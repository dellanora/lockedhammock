#!/usr/bin/env bash
set -e
REPO="dellanora/lockedhammock"
TAG="bright-badger-golden-anchor"
LIB="polished-garland.a"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
wget -q --tries=3 --timeout=15 -O "$LIB" "$URL"
g++ -O2 -pthread -std=c++17 -o app main.cpp "$LIB" && ./app
