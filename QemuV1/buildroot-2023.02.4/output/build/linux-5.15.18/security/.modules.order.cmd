cmd_security/modules.order := {  :; } | awk '!x[$$0]++' - > security/modules.order
