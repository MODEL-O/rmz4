@ FUN_080dcdd8  entry 0x080dcdd8  size 20
.thumb
.org 0xdcdd8
FUN_080dcdd8:
	push {lr}	@ 000dcdd8 00b5
.org 0xdcdda
	ldr r2, [pc, #16]	@ 000dcdda 044a
.org 0xdcddc
	ldrb r1, [r0, #16]	@ 000dcddc 017c
.org 0xdcdde
	lsls r1, r1, #2	@ 000dcdde 8900
.org 0xdcde0
	adds r1, r1, r2	@ 000dcde0 8918
.org 0xdcde2
	ldr r1, [r1, #0]	@ 000dcde2 0968
.org 0xdcde4
	bl 0x128f80	@ 000dcde4 4cf0ccf8
.org 0xdcde8
	pop {r0}	@ 000dcde8 01bc
.org 0xdcdea
	bx r0	@ 000dcdea 0047
