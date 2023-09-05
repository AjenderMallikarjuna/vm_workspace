cmd_drivers/soc/versatile/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/soc/versatile/modules.order
