@ FUN_080ec5e0  entry 0x080ec5e0  size 20
.thumb
.org 0xec5e0
FUN_080ec5e0:
	push {lr}	@ 000ec5e0 00b5
.org 0xec5e2
	ldr r2, [pc, #16]	@ 000ec5e2 044a
.org 0xec5e4
	ldrb r1, [r0, #16]	@ 000ec5e4 017c
.org 0xec5e6
	lsls r1, r1, #2	@ 000ec5e6 8900
.org 0xec5e8
	adds r1, r1, r2	@ 000ec5e8 8918
.org 0xec5ea
	ldr r1, [r1, #0]	@ 000ec5ea 0968
.org 0xec5ec
	bl 0x128f80	@ 000ec5ec 3cf0c8fc
.org 0xec5f0
	pop {r0}	@ 000ec5f0 01bc
.org 0xec5f2
	bx r0	@ 000ec5f2 0047
