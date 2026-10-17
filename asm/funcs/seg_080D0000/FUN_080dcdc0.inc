@ FUN_080dcdc0  entry 0x080dcdc0  size 20
.thumb
.org 0xdcdc0
FUN_080dcdc0:
	push {lr}	@ 000dcdc0 00b5
.org 0xdcdc2
	ldr r2, [pc, #16]	@ 000dcdc2 044a
.org 0xdcdc4
	ldrb r1, [r0, #16]	@ 000dcdc4 017c
.org 0xdcdc6
	lsls r1, r1, #2	@ 000dcdc6 8900
.org 0xdcdc8
	adds r1, r1, r2	@ 000dcdc8 8918
.org 0xdcdca
	ldr r1, [r1, #0]	@ 000dcdca 0968
.org 0xdcdcc
	bl 0x128f80	@ 000dcdcc 4cf0d8f8
.org 0xdcdd0
	pop {r0}	@ 000dcdd0 01bc
.org 0xdcdd2
	bx r0	@ 000dcdd2 0047
