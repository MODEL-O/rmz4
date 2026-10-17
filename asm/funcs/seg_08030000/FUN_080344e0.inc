@ FUN_080344e0  entry 0x080344e0  size 130
.thumb
.org 0x344e0
FUN_080344e0:
	push {r4, r5, lr}	@ 000344e0 30b5
.org 0x344e2
	adds r4, r0, #0	@ 000344e2 041c
.org 0x344e4
	movs r0, #129	@ 000344e4 8120
.org 0x344e6
	lsls r0, r0, #1	@ 000344e6 4000
.org 0x344e8
	adds r5, r4, r0	@ 000344e8 2518
.org 0x344ea
	ldrb r0, [r5, #0]	@ 000344ea 2878
.org 0x344ec
	cmp r0, #0	@ 000344ec 0028
.org 0x344ee
	bne.n 0x344fe	@ 000344ee 06d1
.org 0x344f0
	ldr r1, [pc, #68]	@ 000344f0 1149
.org 0x344f2
	adds r0, r4, #0	@ 000344f2 201c
.org 0x344f4
	bl 0x1cf00	@ 000344f4 e8f704fd
.org 0x344f8
	ldrb r0, [r5, #0]	@ 000344f8 2878
.org 0x344fa
	adds r0, #1	@ 000344fa 0130
.org 0x344fc
	strb r0, [r5, #0]	@ 000344fc 2870
.org 0x344fe
	ldr r1, [pc, #60]	@ 000344fe 0f49
.org 0x34500
	adds r2, r4, r1	@ 00034500 6218
.org 0x34502
	ldrb r0, [r2, #0]	@ 00034502 1078
.org 0x34504
	movs r1, #8	@ 00034504 0821
.org 0x34506
	orrs r0, r1	@ 00034506 0843
.org 0x34508
	strb r0, [r2, #0]	@ 00034508 1070
.org 0x3450a
	movs r2, #162	@ 0003450a a222
.org 0x3450c
	lsls r2, r2, #1	@ 0003450c 5200
.org 0x3450e
	adds r1, r4, r2	@ 0003450e a118
.org 0x34510
	adds r0, r4, #0	@ 00034510 201c
.org 0x34512
	bl 0x39fd8	@ 00034512 05f061fd
.org 0x34516
	lsls r0, r0, #24	@ 00034516 0006
.org 0x34518
	lsrs r1, r0, #24	@ 00034518 010e
.org 0x3451a
	cmp r1, #0	@ 0003451a 0029
.org 0x3451c
	beq.n 0x34540	@ 0003451c 10d0
.org 0x3451e
	movs r1, #128	@ 0003451e 8021
.org 0x34520
	lsls r1, r1, #1	@ 00034520 4900
.org 0x34522
	adds r0, r4, r1	@ 00034522 6018
.org 0x34524
	movs r2, #0	@ 00034524 0022
.org 0x34526
	movs r1, #3	@ 00034526 0321
.org 0x34528
	strb r1, [r0, #0]	@ 00034528 0170
.org 0x3452a
	adds r1, #254	@ 0003452a fe31
.org 0x3452c
	adds r0, r4, r1	@ 0003452c 6018
.org 0x3452e
	strb r2, [r0, #0]	@ 0003452e 0270
.org 0x34530
	adds r0, r4, #0	@ 00034530 201c
.org 0x34532
	bl 0x334dc	@ 00034532 fef7d3ff
.org 0x34536
	b.n 0x34564	@ 00034536 15e0
.org 0x34538
	.byte 0x02,0x1e,0x00,0x00	@ 00034538 data
.org 0x3453c
	.byte 0x53,0x01,0x00,0x00	@ 0003453c data
.org 0x34540
	adds r0, r4, #0	@ 00034540 201c
.org 0x34542
	adds r0, #115	@ 00034542 7330
.org 0x34544
	ldrb r0, [r0, #0]	@ 00034544 0078
.org 0x34546
	cmp r0, #3	@ 00034546 0328
.org 0x34548
	bne.n 0x34564	@ 00034548 0cd1
.org 0x3454a
	movs r2, #128	@ 0003454a 8022
.org 0x3454c
	lsls r2, r2, #1	@ 0003454c 5200
.org 0x3454e
	adds r0, r4, r2	@ 0003454e a018
.org 0x34550
	strb r1, [r0, #0]	@ 00034550 0170
.org 0x34552
	adds r0, r4, #0	@ 00034552 201c
.org 0x34554
	bl 0x2b7d8	@ 00034554 f7f740f9
.org 0x34558
	adds r1, r0, #0	@ 00034558 011c
.org 0x3455a
	lsls r1, r1, #16	@ 0003455a 0904
.org 0x3455c
	lsrs r1, r1, #16	@ 0003455c 090c
.org 0x3455e
	adds r0, r4, #0	@ 0003455e 201c
.org 0x34560
	bl 0x1cf00	@ 00034560 e8f7cefc
