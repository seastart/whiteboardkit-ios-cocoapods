#!/bin/bash

die() {
    echo "$*" >&2
    exit 1
}

cd Build
chmod +x build.sh
./build.sh || die "发布失败"
