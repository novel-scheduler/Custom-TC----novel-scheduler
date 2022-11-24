# Custom-tc-novel-scheduler
We have modified Traffic Control to add new command line options 

We have modified Traffic Control to add new command line options

We have modified Traffic Control to add new command line options

works on kernel 5.15

configure and make options:

cd $<path to the scheduler folder>

./buildtc.sh will configure the tc and also add new comman line options to fq qdisc

new command line options that have been added:

f1_sourceport f2_sourceport f1_destport f2_destport

./reset.sh will build and load the kernel module
