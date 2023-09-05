cmd_drivers/hid/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/hid/modules.order
