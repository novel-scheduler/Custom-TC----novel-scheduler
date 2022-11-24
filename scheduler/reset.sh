#!/bin/bash

sudo tc qdisc del dev lo root

sudo rmmod sch_fq

make clean

make

sudo insmod sch_fq.ko 

sudo env TC_LIB_DIR=/home/bmk/Downloads/scheduler/iproute2/tc ./iproute2/tc/tc help

sudo env TC_LIB_DIR=/home/bmk/Downloads/scheduler/iproute2/tc ./iproute2/tc/tc qdisc add dev lo root fq f1_sourceport 3600 f2_sourceport 3800 f1_destport 5800 f2_destport 6000

sudo env TC_LIB_DIR=/home/bmk/Downloads/scheduler/iproute2/tc ./iproute2/tc/tc qdisc show


