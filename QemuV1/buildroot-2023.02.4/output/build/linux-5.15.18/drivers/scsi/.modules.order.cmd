cmd_drivers/scsi/modules.order := {   cat drivers/scsi/sym53c8xx_2/modules.order;   cat drivers/scsi/arm/modules.order; :; } | awk '!x[$$0]++' - > drivers/scsi/modules.order
