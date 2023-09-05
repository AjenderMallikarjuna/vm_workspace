cmd_arch/arm/boot/dts/versatile-ab-ib2.dtb := /usr/bin/gcc -O2 -isystem /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/include -L/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wl,-rpath,/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -E -Wp,-MMD,arch/arm/boot/dts/.versatile-ab-ib2.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.versatile-ab-ib2.dtb.dts.tmp arch/arm/boot/dts/versatile-ab-ib2.dts ; ./scripts/dtc/dtc -o arch/arm/boot/dts/versatile-ab-ib2.dtb -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm/boot/dts/.versatile-ab-ib2.dtb.d.dtc.tmp arch/arm/boot/dts/.versatile-ab-ib2.dtb.dts.tmp ; cat arch/arm/boot/dts/.versatile-ab-ib2.dtb.d.pre.tmp arch/arm/boot/dts/.versatile-ab-ib2.dtb.d.dtc.tmp > arch/arm/boot/dts/.versatile-ab-ib2.dtb.d

source_arch/arm/boot/dts/versatile-ab-ib2.dtb := arch/arm/boot/dts/versatile-ab-ib2.dts

deps_arch/arm/boot/dts/versatile-ab-ib2.dtb := \
  arch/arm/boot/dts/versatile-ab.dts \

arch/arm/boot/dts/versatile-ab-ib2.dtb: $(deps_arch/arm/boot/dts/versatile-ab-ib2.dtb)

$(deps_arch/arm/boot/dts/versatile-ab-ib2.dtb):
