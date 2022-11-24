cmd_/home/bmk/Downloads/scheduler/modules.order := {   echo /home/bmk/Downloads/scheduler/sch_fq.ko; :; } | awk '!x[$$0]++' - > /home/bmk/Downloads/scheduler/modules.order
