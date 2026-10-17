@ FUN_08042000  entry 0x08042000  size 20
.thumb
.org 0x42000
FUN_08042000:
	push {lr}	@ 00042000 00b5
.org 0x42002
	ldr r2, [pc, #16]	@ 00042002 044a
.org 0x42004
	ldrb r1, [r0, #16]	@ 00042004 017c
.org 0x42006
	lsls r1, r1, #2	@ 00042006 8900
.org 0x42008
	adds r1, r1, r2	@ 00042008 8918
.org 0x4200a
	ldr r1, [r1, #0]	@ 0004200a 0968
.org 0x4200c
	bl 0x128f80	@ 0004200c e6f0b8ff
.org 0x42010
	pop {r0}	@ 00042010 01bc
.org 0x42012
	bx r0	@ 00042012 0047
