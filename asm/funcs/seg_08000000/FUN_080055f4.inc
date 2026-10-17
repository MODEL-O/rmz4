@ FUN_080055f4  entry 0x080055f4  size 20
.thumb
.org 0x55f4
FUN_080055f4:
	push {lr}	@ 000055f4 00b5
.org 0x55f6
	ldr r1, [pc, #16]	@ 000055f6 0449
.org 0x55f8
	movs r0, #0	@ 000055f8 0020
.org 0x55fa
	strb r0, [r1, #0]	@ 000055fa 0870
.org 0x55fc
	strb r0, [r1, #1]	@ 000055fc 4870
.org 0x55fe
	strb r0, [r1, #2]	@ 000055fe 8870
.org 0x5600
	bl 0x560c	@ 00005600 00f004f8
.org 0x5604
	pop {r0}	@ 00005604 01bc
.org 0x5606
	bx r0	@ 00005606 0047
