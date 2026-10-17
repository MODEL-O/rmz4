@ FUN_080b03bc  entry 0x080b03bc  size 102
.thumb
.org 0xb03bc
FUN_080b03bc:
	push {r4, lr}	@ 000b03bc 10b5
.org 0xb03be
	adds r4, r0, #0	@ 000b03be 041c
.org 0xb03c0
	bl 0x1cc9c	@ 000b03c0 6cf76cfc
.org 0xb03c4
	ldrb r1, [r4, #10]	@ 000b03c4 a17a
.org 0xb03c6
	movs r0, #1	@ 000b03c6 0120
.org 0xb03c8
	orrs r0, r1	@ 000b03c8 0843
.org 0xb03ca
	movs r1, #2	@ 000b03ca 0221
.org 0xb03cc
	orrs r0, r1	@ 000b03cc 0843
.org 0xb03ce
	movs r3, #0	@ 000b03ce 0023
.org 0xb03d0
	movs r1, #239	@ 000b03d0 ef21
.org 0xb03d2
	ands r0, r1	@ 000b03d2 0840
.org 0xb03d4
	strb r0, [r4, #10]	@ 000b03d4 a072
.org 0xb03d6
	movs r2, #1	@ 000b03d6 0122
.org 0xb03d8
	adds r0, r4, #0	@ 000b03d8 201c
.org 0xb03da
	adds r0, #76	@ 000b03da 4c30
.org 0xb03dc
	strb r3, [r0, #0]	@ 000b03dc 0370
.org 0xb03de
	movs r0, #74	@ 000b03de 4a20
.org 0xb03e0
	adds r0, r0, r4	@ 000b03e0 0019
.org 0xb03e2
	mov ip, r0	@ 000b03e2 8446
.org 0xb03e4
	ldrb r1, [r0, #0]	@ 000b03e4 0178
.org 0xb03e6
	movs r0, #17	@ 000b03e6 1120
.org 0xb03e8
	negs r0, r0	@ 000b03e8 4042
.org 0xb03ea
	ands r0, r1	@ 000b03ea 0840
.org 0xb03ec
	mov r1, ip	@ 000b03ec 6146
.org 0xb03ee
	strb r0, [r1, #0]	@ 000b03ee 0870
.org 0xb03f0
	ldr r1, [pc, #48]	@ 000b03f0 0c49
.org 0xb03f2
	ldrb r0, [r4, #9]	@ 000b03f2 607a
.org 0xb03f4
	lsls r0, r0, #2	@ 000b03f4 8000
.org 0xb03f6
	adds r0, r0, r1	@ 000b03f6 4018
.org 0xb03f8
	str r2, [r4, #12]	@ 000b03f8 e260
.org 0xb03fa
	ldr r0, [r0, #0]	@ 000b03fa 0068
.org 0xb03fc
	ldr r0, [r0, #4]	@ 000b03fc 4068
.org 0xb03fe
	str r0, [r4, #20]	@ 000b03fe 6061
.org 0xb0400
	adds r0, r4, #0	@ 000b0400 201c
.org 0xb0402
	adds r0, #192	@ 000b0402 c030
.org 0xb0404
	str r3, [r0, #0]	@ 000b0404 0360
.org 0xb0406
	ldr r1, [pc, #32]	@ 000b0406 0849
.org 0xb0408
	ldrb r0, [r4, #16]	@ 000b0408 207c
.org 0xb040a
	lsls r0, r0, #2	@ 000b040a 8000
.org 0xb040c
	adds r0, r0, r1	@ 000b040c 4018
.org 0xb040e
	ldr r1, [r0, #0]	@ 000b040e 0168
.org 0xb0410
	adds r0, r4, #0	@ 000b0410 201c
.org 0xb0412
	bl 0x128f80	@ 000b0412 78f0b5fd
.org 0xb0416
	adds r0, r4, #0	@ 000b0416 201c
.org 0xb0418
	bl 0xb042c	@ 000b0418 00f008f8
.org 0xb041c
	pop {r4}	@ 000b041c 10bc
.org 0xb041e
	pop {r0}	@ 000b041e 01bc
.org 0xb0420
	bx r0	@ 000b0420 0047
