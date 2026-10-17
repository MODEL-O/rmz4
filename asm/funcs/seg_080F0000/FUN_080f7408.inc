@ FUN_080f7408  entry 0x080f7408  size 20
.thumb
.org 0xf7408
FUN_080f7408:
	push {lr}	@ 000f7408 00b5
.org 0xf740a
	ldr r2, [pc, #16]	@ 000f740a 044a
.org 0xf740c
	ldrb r1, [r0, #16]	@ 000f740c 017c
.org 0xf740e
	lsls r1, r1, #2	@ 000f740e 8900
.org 0xf7410
	adds r1, r1, r2	@ 000f7410 8918
.org 0xf7412
	ldr r1, [r1, #0]	@ 000f7412 0968
.org 0xf7414
	bl 0x128f80	@ 000f7414 31f0b4fd
.org 0xf7418
	pop {r0}	@ 000f7418 01bc
.org 0xf741a
	bx r0	@ 000f741a 0047
