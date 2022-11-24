#!/bin/bash

cd iproute2
./configure
cd ..

cp q_fq.c iproute2/tc/

cd iproute2
make TCSO=q_fq.so

echo "TC_LIB_DIR=$pwd/tc"

cd ..

cd ..
