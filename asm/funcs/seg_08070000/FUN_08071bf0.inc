@ FUN_08071bf0  entry 0x08071bf0  size 30
.thumb
.org 0x71bf0
FUN_08071bf0:
	push {lr}	@ 00071bf0 00b5
.org 0x71bf2
	ldrb r1, [r0, #14]	@ 00071bf2 817b
.org 0x71bf4
	adds r1, #1	@ 00071bf4 0131
.org 0x71bf6
	movs r2, #0	@ 00071bf6 0022
.org 0x71bf8
	strb r1, [r0, #14]	@ 00071bf8 8173
.org 0x71bfa
	strb r2, [r0, #15]	@ 00071bfa c273
.org 0x71bfc
	ldr r2, [pc, #16]	@ 00071bfc 044a
.org 0x71bfe
	ldrb r1, [r0, #13]	@ 00071bfe 417b
.org 0x71c00
	lsls r1, r1, #2	@ 00071c00 8900
.org 0x71c02
	adds r1, r1, r2	@ 00071c02 8918
.org 0x71c04
	ldr r1, [r1, #0]	@ 00071c04 0968
.org 0x71c06
	bl 0x128f80	@ 00071c06 b7f0bbf9
.org 0x71c0a
	pop {r0}	@ 00071c0a 01bc
.org 0x71c0c
	bx r0	@ 00071c0c 0047
