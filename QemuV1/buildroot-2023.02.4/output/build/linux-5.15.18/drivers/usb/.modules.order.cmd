cmd_drivers/usb/modules.order := {   cat drivers/usb/phy/modules.order;   cat drivers/usb/host/modules.order; :; } | awk '!x[$$0]++' - > drivers/usb/modules.order
