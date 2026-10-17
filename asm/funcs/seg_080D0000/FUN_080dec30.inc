@ FUN_080dec30  entry 0x080dec30  size 62
.thumb
.org 0xdec30
FUN_080dec30:
	push {r4, r5, lr}	@ 000dec30 30b5
.org 0xdec32
	adds r5, r0, #0	@ 000dec32 051c
.org 0xdec34
	ldr r0, [pc, #56]	@ 000dec34 0e48
.org 0xdec36
	ldr r0, [r0, #0]	@ 000dec36 0068
.org 0xdec38
	bl 0x5500	@ 000dec38 26f762fc
.org 0xdec3c
	adds r4, r0, #0	@ 000dec3c 041c
.org 0xdec3e
	cmp r4, #0	@ 000dec3e 002c
.org 0xdec40
	beq.n 0xdec68	@ 000dec40 12d0
.org 0xdec42
	adds r0, #37	@ 000dec42 2530
.org 0xdec44
	movs r3, #0	@ 000dec44 0023
.org 0xdec46
	movs r2, #1	@ 000dec46 0122
.org 0xdec48
	strb r2, [r0, #0]	@ 000dec48 0270
.org 0xdec4a
	ldr r0, [pc, #40]	@ 000dec4a 0a48
.org 0xdec4c
	movs r1, #51	@ 000dec4c 3321
.org 0xdec4e
	strb r1, [r4, #9]	@ 000dec4e 6172
.org 0xdec50
	adds r0, #204	@ 000dec50 cc30
.org 0xdec52
	ldr r0, [r0, #0]	@ 000dec52 0068
.org 0xdec54
	ldr r0, [r0, #0]	@ 000dec54 0068
.org 0xdec56
	str r0, [r4, #20]	@ 000dec56 6061
.org 0xdec58
	movs r0, #0	@ 000dec58 0020
.org 0xdec5a
	strh r3, [r4, #32]	@ 000dec5a 2384
.org 0xdec5c
	adds r1, r4, #0	@ 000dec5c 211c
.org 0xdec5e
	adds r1, #34	@ 000dec5e 2231
.org 0xdec60
	strb r0, [r1, #0]	@ 000dec60 0870
.org 0xdec62
	str r5, [r4, #40]	@ 000dec62 a562
.org 0xdec64
	strb r2, [r4, #16]	@ 000dec64 2274
.org 0xdec66
	strb r0, [r4, #17]	@ 000dec66 6074
.org 0xdec68
	pop {r4, r5}	@ 000dec68 30bc
.org 0xdec6a
	pop {r0}	@ 000dec6a 01bc
.org 0xdec6c
	bx r0	@ 000dec6c 0047
