cmd_sound/arm/modules.order := {   echo sound/arm/snd-aaci.ko; :; } | awk '!x[$$0]++' - > sound/arm/modules.order
