cmd_arch/arm/plat-versatile/modules.order := {  :; } | awk '!x[$$0]++' - > arch/arm/plat-versatile/modules.order
