cmd_lib/modules.order := {   cat lib/math/modules.order;   cat lib/crypto/modules.order;   cat lib/fonts/modules.order; :; } | awk '!x[$$0]++' - > lib/modules.order
