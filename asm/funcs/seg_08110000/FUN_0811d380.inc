@ FUN_0811d380  entry 0x0811d380  size 208
.thumb
.org 0x11d380
FUN_0811d380:
	push {r4, r5, r6, r7, lr}	@ 0011d380 f0b5
.org 0x11d382
	adds r4, r0, #0	@ 0011d382 041c
.org 0x11d384
	movs r2, #0	@ 0011d384 0022
.org 0x11d386
	ldr r0, [pc, #108]	@ 0011d386 1b48
.org 0x11d388
	adds r7, r4, r0	@ 0011d388 2718
.org 0x11d38a
	adds r3, r7, #0	@ 0011d38a 3b1c
.org 0x11d38c
	movs r5, #255	@ 0011d38c ff25
.org 0x11d38e
	adds r0, r3, r2	@ 0011d38e 9818
.org 0x11d390
	ldrb r1, [r0, #0]	@ 0011d390 0178
.org 0x11d392
	orrs r1, r5	@ 0011d392 2943
.org 0x11d394
	strb r1, [r0, #0]	@ 0011d394 0170
.org 0x11d396
	adds r0, r2, #1	@ 0011d396 501c
.org 0x11d398
	lsls r0, r0, #24	@ 0011d398 0006
.org 0x11d39a
	lsrs r2, r0, #24	@ 0011d39a 020e
.org 0x11d39c
	cmp r2, #6	@ 0011d39c 062a
.org 0x11d39e
	bls.n 0x11d38e	@ 0011d39e f6d9
.org 0x11d3a0
	ldr r1, [pc, #84]	@ 0011d3a0 1549
.org 0x11d3a2
	adds r0, r4, r1	@ 0011d3a2 6018
.org 0x11d3a4
	movs r1, #0	@ 0011d3a4 0021
.org 0x11d3a6
	strb r1, [r0, #23]	@ 0011d3a6 c175
.org 0x11d3a8
	strb r1, [r0, #24]	@ 0011d3a8 0176
.org 0x11d3aa
	strb r1, [r0, #3]	@ 0011d3aa c170
.org 0x11d3ac
	movs r2, #0	@ 0011d3ac 0022
.org 0x11d3ae
	movs r6, #0	@ 0011d3ae 0026
.org 0x11d3b0
	movs r3, #0	@ 0011d3b0 0023
.org 0x11d3b2
	ldr r0, [pc, #72]	@ 0011d3b2 1248
.org 0x11d3b4
	ldr r0, [r0, #0]	@ 0011d3b4 0068
.org 0x11d3b6
	mov ip, r0	@ 0011d3b6 8446
.org 0x11d3b8
	movs r5, #1	@ 0011d3b8 0125
.org 0x11d3ba
	lsrs r0, r2, #1	@ 0011d3ba 5008
.org 0x11d3bc
	add r0, ip	@ 0011d3bc 6044
.org 0x11d3be
	ldrb r1, [r0, #0]	@ 0011d3be 0178
.org 0x11d3c0
	adds r0, r2, #0	@ 0011d3c0 101c
.org 0x11d3c2
	ands r0, r5	@ 0011d3c2 2840
.org 0x11d3c4
	lsls r0, r0, #2	@ 0011d3c4 8000
.org 0x11d3c6
	asrs r1, r0	@ 0011d3c6 0141
.org 0x11d3c8
	movs r0, #15	@ 0011d3c8 0f20
.org 0x11d3ca
	ands r1, r0	@ 0011d3ca 0140
.org 0x11d3cc
	cmp r1, #0	@ 0011d3cc 0029
.org 0x11d3ce
	beq.n 0x11d414	@ 0011d3ce 21d0
.org 0x11d3d0
	ldr r0, [pc, #36]	@ 0011d3d0 0948
.org 0x11d3d2
	adds r1, r4, r0	@ 0011d3d2 2118
.org 0x11d3d4
	ldrb r0, [r1, #22]	@ 0011d3d4 887d
.org 0x11d3d6
	adds r0, r0, r3	@ 0011d3d6 c018
.org 0x11d3d8
	cmp r6, r0	@ 0011d3d8 8642
.org 0x11d3da
	bne.n 0x11d400	@ 0011d3da 11d1
.org 0x11d3dc
	adds r0, r7, r3	@ 0011d3dc f818
.org 0x11d3de
	strb r2, [r0, #0]	@ 0011d3de 0270
.org 0x11d3e0
	ldrb r0, [r1, #3]	@ 0011d3e0 c878
.org 0x11d3e2
	adds r0, #1	@ 0011d3e2 0130
.org 0x11d3e4
	strb r0, [r1, #3]	@ 0011d3e4 c870
.org 0x11d3e6
	cmp r3, #5	@ 0011d3e6 052b
.org 0x11d3e8
	bhi.n 0x11d40e	@ 0011d3e8 11d8
.org 0x11d3ea
	adds r0, r3, #1	@ 0011d3ea 581c
.org 0x11d3ec
	lsls r0, r0, #24	@ 0011d3ec 0006
.org 0x11d3ee
	lsrs r3, r0, #24	@ 0011d3ee 030e
.org 0x11d3f0
	b.n 0x11d40e	@ 0011d3f0 0de0
.org 0x11d3f2
	.byte 0x00	@ 0011d3f2 data
.org 0x11d3f3
	.byte 0x00	@ 0011d3f3 data
.org 0x11d3f4
	.byte 0xd2,0x0d,0x00,0x00	@ 0011d3f4 data
.org 0x11d3f8
	.byte 0xcc,0x0d,0x00,0x00	@ 0011d3f8 data
.org 0x11d3fc
	.byte 0xa8,0xed,0x02,0x02	@ 0011d3fc data
.org 0x11d400
	cmp r3, #0	@ 0011d400 002b
.org 0x11d402
	beq.n 0x11d40c	@ 0011d402 03d0
.org 0x11d404
	cmp r3, #6	@ 0011d404 062b
.org 0x11d406
	bne.n 0x11d40e	@ 0011d406 02d1
.org 0x11d408
	strb r5, [r1, #24]	@ 0011d408 0d76
.org 0x11d40a
	b.n 0x11d41e	@ 0011d40a 08e0
.org 0x11d40c
	strb r5, [r1, #23]	@ 0011d40c cd75
.org 0x11d40e
	adds r0, r6, #1	@ 0011d40e 701c
.org 0x11d410
	lsls r0, r0, #24	@ 0011d410 0006
.org 0x11d412
	lsrs r6, r0, #24	@ 0011d412 060e
.org 0x11d414
	adds r0, r2, #1	@ 0011d414 501c
.org 0x11d416
	lsls r0, r0, #24	@ 0011d416 0006
.org 0x11d418
	lsrs r2, r0, #24	@ 0011d418 020e
.org 0x11d41a
	cmp r2, #50	@ 0011d41a 322a
.org 0x11d41c
	bls.n 0x11d3ba	@ 0011d41c cdd9
.org 0x11d41e
	ldr r0, [pc, #24]	@ 0011d41e 0648
.org 0x11d420
	adds r1, r4, r0	@ 0011d420 2118
.org 0x11d422
	ldrb r0, [r1, #12]	@ 0011d422 087b
.org 0x11d424
	cmp r0, #255	@ 0011d424 ff28
.org 0x11d426
	bne.n 0x11d43c	@ 0011d426 09d1
.org 0x11d428
	ldrb r0, [r1, #23]	@ 0011d428 c87d
.org 0x11d42a
	cmp r0, #0	@ 0011d42a 0028
.org 0x11d42c
	beq.n 0x11d43c	@ 0011d42c 06d0
.org 0x11d42e
	ldrb r0, [r1, #22]	@ 0011d42e 887d
.org 0x11d430
	subs r0, #1	@ 0011d430 0138
.org 0x11d432
	strb r0, [r1, #22]	@ 0011d432 8875
.org 0x11d434
	b.n 0x11d384	@ 0011d434 a6e7
.org 0x11d436
	.byte 0x00	@ 0011d436 data
.org 0x11d437
	.byte 0x00	@ 0011d437 data
.org 0x11d438
	.byte 0xcc,0x0d,0x00,0x00	@ 0011d438 data
.org 0x11d43c
	ldr r0, [pc, #36]	@ 0011d43c 0948
.org 0x11d43e
	adds r1, r4, r0	@ 0011d43e 2118
.org 0x11d440
	ldrb r0, [r1, #2]	@ 0011d440 8878
.org 0x11d442
	cmp r0, #0	@ 0011d442 0028
.org 0x11d444
	beq.n 0x11d45e	@ 0011d444 0bd0
.org 0x11d446
	adds r2, r1, #0	@ 0011d446 0a1c
.org 0x11d448
	adds r3, r7, #0	@ 0011d448 3b1c
.org 0x11d44a
	ldrb r1, [r2, #2]	@ 0011d44a 9178
.org 0x11d44c
	adds r0, r3, r1	@ 0011d44c 5818
.org 0x11d44e
	ldrb r0, [r0, #0]	@ 0011d44e 0078
