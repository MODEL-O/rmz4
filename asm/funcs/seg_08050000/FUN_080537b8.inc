@ FUN_080537b8  entry 0x080537b8  size 20
.thumb
.org 0x537b8
FUN_080537b8:
	push {lr}	@ 000537b8 00b5
.org 0x537ba
	ldr r2, [pc, #16]	@ 000537ba 044a
.org 0x537bc
	ldrb r1, [r0, #14]	@ 000537bc 817b
.org 0x537be
	lsls r1, r1, #2	@ 000537be 8900
.org 0x537c0
	adds r1, r1, r2	@ 000537c0 8918
.org 0x537c2
	ldr r1, [r1, #0]	@ 000537c2 0968
.org 0x537c4
	bl 0x128f80	@ 000537c4 d5f0dcfb
.org 0x537c8
	pop {r0}	@ 000537c8 01bc
.org 0x537ca
	bx r0	@ 000537ca 0047
