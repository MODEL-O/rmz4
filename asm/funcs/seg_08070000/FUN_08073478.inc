@ FUN_08073478  entry 0x08073478  size 50
.thumb
.org 0x73478
FUN_08073478:
	push {r4, r5, r6, lr}	@ 00073478 70b5
.org 0x7347a
	sub sp, #24	@ 0007347a 86b0
.org 0x7347c
	adds r5, r0, #0	@ 0007347c 051c
.org 0x7347e
	ldr r0, [pc, #36]	@ 0007347e 0948
.org 0x73480
	ldr r1, [r0, #4]	@ 00073480 4168
.org 0x73482
	ldr r0, [r0, #0]	@ 00073482 0068
.org 0x73484
	str r0, [sp, #0]	@ 00073484 0090
.org 0x73486
	str r1, [sp, #4]	@ 00073486 0191
.org 0x73488
	ldrb r0, [r5, #10]	@ 00073488 a87a
.org 0x7348a
	lsrs r6, r0, #4	@ 0007348a 0609
.org 0x7348c
	movs r0, #1	@ 0007348c 0120
.org 0x7348e
	ands r6, r0	@ 0007348e 0640
.org 0x73490
	ldrb r0, [r5, #15]	@ 00073490 e87b
.org 0x73492
	cmp r0, #7	@ 00073492 0728
.org 0x73494
	bls.n 0x73498	@ 00073494 00d9
.org 0x73496
	b.n 0x7366a	@ 00073496 e8e0
.org 0x73498
	lsls r0, r0, #2	@ 00073498 8000
.org 0x7349a
	ldr r1, [pc, #12]	@ 0007349a 0349
.org 0x7349c
	adds r0, r0, r1	@ 0007349c 4018
.org 0x7349e
	ldr r0, [r0, #0]	@ 0007349e 0068
.org 0x734a0
	mov pc, r0	@ 000734a0 8746
.org 0x734a2
	.byte 0x00	@ 000734a2 data
.org 0x734a3
	.byte 0x00	@ 000734a3 data
.org 0x734a4
	.byte 0x74,0x99,0x12,0x08	@ 000734a4 data
.org 0x734a8
	.byte 0xac,0x34,0x07,0x08	@ 000734a8 data
