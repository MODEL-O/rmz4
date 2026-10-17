@ FUN_080382e4  entry 0x080382e4  size 34
.thumb
.org 0x382e4
FUN_080382e4:
	push {r4, r5, lr}	@ 000382e4 30b5
.org 0x382e6
	adds r4, r0, #0	@ 000382e6 041c
.org 0x382e8
	adds r5, r1, #0	@ 000382e8 0d1c
.org 0x382ea
	adds r0, #180	@ 000382ea b430
.org 0x382ec
	movs r2, #16	@ 000382ec 1022
.org 0x382ee
	bl 0x128be0	@ 000382ee f0f077fc
.org 0x382f2
	adds r4, #244	@ 000382f2 f434
.org 0x382f4
	adds r5, #64	@ 000382f4 4035
.org 0x382f6
	ldr r2, [pc, #16]	@ 000382f6 044a
.org 0x382f8
	adds r0, r4, #0	@ 000382f8 201c
.org 0x382fa
	adds r1, r5, #0	@ 000382fa 291c
.org 0x382fc
	bl 0x128be4	@ 000382fc f0f072fc
.org 0x38300
	pop {r4, r5}	@ 00038300 30bc
.org 0x38302
	pop {r0}	@ 00038302 01bc
.org 0x38304
	bx r0	@ 00038304 0047
