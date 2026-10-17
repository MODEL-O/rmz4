@ FUN_080ac2cc  entry 0x080ac2cc  size 44
.thumb
.org 0xac2cc
FUN_080ac2cc:
	push {r4, lr}	@ 000ac2cc 10b5
.org 0xac2ce
	adds r4, r0, #0	@ 000ac2ce 041c
.org 0xac2d0
	adds r0, #116	@ 000ac2d0 7430
.org 0xac2d2
	ldr r1, [pc, #36]	@ 000ac2d2 0949
.org 0xac2d4
	bl 0x5784	@ 000ac2d4 59f756fa
.org 0xac2d8
	adds r3, r4, #0	@ 000ac2d8 231c
.org 0xac2da
	adds r3, #180	@ 000ac2da b433
.org 0xac2dc
	ldr r0, [pc, #28]	@ 000ac2dc 0748
.org 0xac2de
	ldr r2, [r0, #0]	@ 000ac2de 0268
.org 0xac2e0
	ldr r0, [r2, #84]	@ 000ac2e0 506d
.org 0xac2e2
	ldr r1, [r4, #84]	@ 000ac2e2 616d
.org 0xac2e4
	subs r0, r0, r1	@ 000ac2e4 401a
.org 0xac2e6
	str r0, [r3, #0]	@ 000ac2e6 1860
.org 0xac2e8
	adds r3, #4	@ 000ac2e8 0433
.org 0xac2ea
	ldr r0, [r2, #88]	@ 000ac2ea 906d
.org 0xac2ec
	ldr r1, [r4, #88]	@ 000ac2ec a16d
.org 0xac2ee
	subs r0, r0, r1	@ 000ac2ee 401a
.org 0xac2f0
	str r0, [r3, #0]	@ 000ac2f0 1860
.org 0xac2f2
	pop {r4}	@ 000ac2f2 10bc
.org 0xac2f4
	pop {r0}	@ 000ac2f4 01bc
.org 0xac2f6
	bx r0	@ 000ac2f6 0047
