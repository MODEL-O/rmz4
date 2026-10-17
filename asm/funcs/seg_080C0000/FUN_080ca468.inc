@ FUN_080ca468  entry 0x080ca468  size 84
.thumb
.org 0xca468
FUN_080ca468:
	push {r4, lr}	@ 000ca468 10b5
.org 0xca46a
	adds r4, r0, #0	@ 000ca46a 041c
.org 0xca46c
	ldr r2, [r4, #40]	@ 000ca46c a26a
.org 0xca46e
	ldrb r3, [r2, #14]	@ 000ca46e 937b
.org 0xca470
	cmp r3, #0	@ 000ca470 002b
.org 0xca472
	bne.n 0xca4b0	@ 000ca472 1dd1
.org 0xca474
	ldrb r1, [r2, #10]	@ 000ca474 917a
.org 0xca476
	movs r0, #254	@ 000ca476 fe20
.org 0xca478
	ands r0, r1	@ 000ca478 0840
.org 0xca47a
	movs r1, #253	@ 000ca47a fd21
.org 0xca47c
	ands r0, r1	@ 000ca47c 0840
.org 0xca47e
	strb r0, [r2, #10]	@ 000ca47e 9072
.org 0xca480
	adds r0, r2, #0	@ 000ca480 101c
.org 0xca482
	adds r0, #140	@ 000ca482 8c30
.org 0xca484
	str r3, [r0, #0]	@ 000ca484 0360
.org 0xca486
	adds r0, #4	@ 000ca486 0430
.org 0xca488
	str r3, [r0, #0]	@ 000ca488 0360
.org 0xca48a
	adds r0, #4	@ 000ca48a 0430
.org 0xca48c
	strb r3, [r0, #0]	@ 000ca48c 0370
.org 0xca48e
	ldrb r1, [r2, #10]	@ 000ca48e 917a
.org 0xca490
	movs r0, #251	@ 000ca490 fb20
.org 0xca492
	ands r0, r1	@ 000ca492 0840
.org 0xca494
	strb r0, [r2, #10]	@ 000ca494 9072
.org 0xca496
	ldr r1, [pc, #20]	@ 000ca496 0549
.org 0xca498
	ldrb r0, [r2, #9]	@ 000ca498 507a
.org 0xca49a
	lsls r0, r0, #2	@ 000ca49a 8000
.org 0xca49c
	adds r0, r0, r1	@ 000ca49c 4018
.org 0xca49e
	movs r1, #3	@ 000ca49e 0321
.org 0xca4a0
	str r1, [r2, #12]	@ 000ca4a0 d160
.org 0xca4a2
	ldr r0, [r0, #0]	@ 000ca4a2 0068
.org 0xca4a4
	ldr r0, [r0, #12]	@ 000ca4a4 c068
.org 0xca4a6
	str r0, [r2, #20]	@ 000ca4a6 5061
.org 0xca4a8
	b.n 0xca4b8	@ 000ca4a8 06e0
.org 0xca4aa
	.byte 0x00	@ 000ca4aa data
.org 0xca4ab
	.byte 0x00	@ 000ca4ab data
.org 0xca4ac
	.byte 0xf4,0x49,0x86,0x08	@ 000ca4ac data
.org 0xca4b0
	adds r1, r2, #0	@ 000ca4b0 111c
.org 0xca4b2
	adds r1, #181	@ 000ca4b2 b531
.org 0xca4b4
	movs r0, #0	@ 000ca4b4 0020
.org 0xca4b6
	strb r0, [r1, #0]	@ 000ca4b6 0870
.org 0xca4b8
	movs r0, #0	@ 000ca4b8 0020
.org 0xca4ba
	str r0, [r4, #40]	@ 000ca4ba a062
