@ FUN_080c29f0  entry 0x080c29f0  size 20
.thumb
.org 0xc29f0
FUN_080c29f0:
	push {lr}	@ 000c29f0 00b5
.org 0xc29f2
	ldr r2, [pc, #16]	@ 000c29f2 044a
.org 0xc29f4
	ldrb r1, [r0, #16]	@ 000c29f4 017c
.org 0xc29f6
	lsls r1, r1, #2	@ 000c29f6 8900
.org 0xc29f8
	adds r1, r1, r2	@ 000c29f8 8918
.org 0xc29fa
	ldr r1, [r1, #0]	@ 000c29fa 0968
.org 0xc29fc
	bl 0x128f80	@ 000c29fc 66f0c0fa
.org 0xc2a00
	pop {r0}	@ 000c2a00 01bc
.org 0xc2a02
	bx r0	@ 000c2a02 0047
