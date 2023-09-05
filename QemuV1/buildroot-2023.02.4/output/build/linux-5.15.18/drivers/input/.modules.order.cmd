cmd_drivers/input/modules.order := {   cat drivers/input/keyboard/modules.order;   cat drivers/input/mouse/modules.order; :; } | awk '!x[$$0]++' - > drivers/input/modules.order
