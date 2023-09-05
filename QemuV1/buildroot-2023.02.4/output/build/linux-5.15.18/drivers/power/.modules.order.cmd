cmd_drivers/power/modules.order := {   cat drivers/power/reset/modules.order; :; } | awk '!x[$$0]++' - > drivers/power/modules.order
