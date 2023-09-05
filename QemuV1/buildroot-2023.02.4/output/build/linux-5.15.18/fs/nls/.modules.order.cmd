cmd_fs/nls/modules.order := {   echo fs/nls/nls_base.ko; :; } | awk '!x[$$0]++' - > fs/nls/modules.order
