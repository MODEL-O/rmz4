@ FUN_08126f3a  entry 0x08126f3a  size 22
.thumb
.org 0x126f3a
FUN_08126f3a:
	push {r0}	@ 00126f3a 01b4
.org 0x126f3c
	lsrs r0, r2, #25	@ 00126f3c 500e
.org 0x126f3e
	bne.n 0x126f4c	@ 00126f3e 05d1
.org 0x126f40
	ldr r0, [pc, #12]	@ 00126f40 0348
.org 0x126f42
	cmp r2, r0	@ 00126f42 8242
.org 0x126f44
	bcc.n 0x126f4a	@ 00126f44 01d3
.org 0x126f46
	lsrs r0, r2, #14	@ 00126f46 900b
.org 0x126f48
	beq.n 0x126f4c	@ 00126f48 00d0
.org 0x126f4a
	movs r3, #0	@ 00126f4a 0023
.org 0x126f4c
	pop {r0}	@ 00126f4c 01bc
.org 0x126f4e
	bx lr	@ 00126f4e 7047
