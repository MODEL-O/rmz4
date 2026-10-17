@ FUN_080c4548  entry 0x080c4548  size 186
.thumb
.org 0xc4548
FUN_080c4548:
	push {r4, r5, r6, lr}	@ 000c4548 70b5
.org 0xc454a
	sub sp, #4	@ 000c454a 81b0
.org 0xc454c
	adds r6, r0, #0	@ 000c454c 061c
.org 0xc454e
	ldr r1, [pc, #100]	@ 000c454e 1949
.org 0xc4550
	mov r0, sp	@ 000c4550 6846
.org 0xc4552
	movs r2, #2	@ 000c4552 0222
.org 0xc4554
	bl 0x129258	@ 000c4554 64f080fe
.org 0xc4558
	ldr r3, [r6, #40]	@ 000c4558 b36a
.org 0xc455a
	ldrb r5, [r6, #17]	@ 000c455a 757c
.org 0xc455c
	ldrb r4, [r3, #10]	@ 000c455c 9c7a
.org 0xc455e
	lsrs r4, r4, #4	@ 000c455e 2409
.org 0xc4560
	movs r2, #1	@ 000c4560 0122
.org 0xc4562
	ands r4, r2	@ 000c4562 1440
.org 0xc4564
	ldr r1, [pc, #80]	@ 000c4564 1449
.org 0xc4566
	ldrb r0, [r6, #9]	@ 000c4566 707a
.org 0xc4568
	lsls r0, r0, #2	@ 000c4568 8000
.org 0xc456a
	adds r0, r0, r1	@ 000c456a 4018
.org 0xc456c
	str r2, [r6, #12]	@ 000c456c f260
.org 0xc456e
	ldr r0, [r0, #0]	@ 000c456e 0068
.org 0xc4570
	ldr r0, [r0, #4]	@ 000c4570 4068
.org 0xc4572
	str r0, [r6, #20]	@ 000c4572 7061
.org 0xc4574
	mov r1, sp	@ 000c4574 6946
.org 0xc4576
	adds r0, r1, r5	@ 000c4576 4819
.org 0xc4578
	ldrb r0, [r0, #0]	@ 000c4578 0078
.org 0xc457a
	movs r2, #0	@ 000c457a 0022
.org 0xc457c
	strb r0, [r6, #13]	@ 000c457c 7073
.org 0xc457e
	strb r2, [r6, #14]	@ 000c457e b273
.org 0xc4580
	strb r2, [r6, #15]	@ 000c4580 f273
.org 0xc4582
	ldrb r0, [r6, #10]	@ 000c4582 b07a
.org 0xc4584
	movs r1, #1	@ 000c4584 0121
.org 0xc4586
	movs r5, #0	@ 000c4586 0025
.org 0xc4588
	orrs r0, r1	@ 000c4588 0843
.org 0xc458a
	movs r1, #2	@ 000c458a 0221
.org 0xc458c
	orrs r0, r1	@ 000c458c 0843
.org 0xc458e
	strb r0, [r6, #10]	@ 000c458e b072
.org 0xc4590
	adds r1, r6, #0	@ 000c4590 311c
.org 0xc4592
	adds r1, #180	@ 000c4592 b431
.org 0xc4594
	adds r3, #180	@ 000c4594 b433
.org 0xc4596
	ldr r0, [r3, #0]	@ 000c4596 1868
.org 0xc4598
	str r0, [r1, #0]	@ 000c4598 0860
.org 0xc459a
	adds r0, r6, #0	@ 000c459a 301c
.org 0xc459c
	adds r0, #184	@ 000c459c b830
.org 0xc459e
	strb r2, [r0, #0]	@ 000c459e 0270
.org 0xc45a0
	adds r0, r6, #0	@ 000c45a0 301c
.org 0xc45a2
	bl 0x1cc9c	@ 000c45a2 58f77bfb
.org 0xc45a6
	cmp r4, #0	@ 000c45a6 002c
.org 0xc45a8
	beq.n 0xc45bc	@ 000c45a8 08d0
.org 0xc45aa
	ldrb r0, [r6, #10]	@ 000c45aa b07a
.org 0xc45ac
	movs r1, #16	@ 000c45ac 1021
.org 0xc45ae
	orrs r0, r1	@ 000c45ae 0843
.org 0xc45b0
	b.n 0xc45c2	@ 000c45b0 07e0
.org 0xc45b2
	.byte 0x00	@ 000c45b2 data
.org 0xc45b3
	.byte 0x00	@ 000c45b3 data
.org 0xc45b4
	.byte 0x64,0xa1,0x12,0x08	@ 000c45b4 data
.org 0xc45b8
	.byte 0xf4,0x49,0x86,0x08	@ 000c45b8 data
.org 0xc45bc
	ldrb r1, [r6, #10]	@ 000c45bc b17a
.org 0xc45be
	movs r0, #239	@ 000c45be ef20
.org 0xc45c0
	ands r0, r1	@ 000c45c0 0840
.org 0xc45c2
	strb r0, [r6, #10]	@ 000c45c2 b072
.org 0xc45c4
	adds r1, r4, #0	@ 000c45c4 211c
.org 0xc45c6
	adds r0, r6, #0	@ 000c45c6 301c
.org 0xc45c8
	adds r0, #76	@ 000c45c8 4c30
.org 0xc45ca
	movs r5, #0	@ 000c45ca 0025
.org 0xc45cc
	strb r1, [r0, #0]	@ 000c45cc 0170
.org 0xc45ce
	adds r3, r6, #0	@ 000c45ce 331c
.org 0xc45d0
	adds r3, #74	@ 000c45d0 4a33
.org 0xc45d2
	lsls r1, r1, #4	@ 000c45d2 0901
.org 0xc45d4
	ldrb r2, [r3, #0]	@ 000c45d4 1a78
.org 0xc45d6
	movs r0, #17	@ 000c45d6 1120
.org 0xc45d8
	negs r0, r0	@ 000c45d8 4042
.org 0xc45da
	ands r0, r2	@ 000c45da 1040
.org 0xc45dc
	orrs r0, r1	@ 000c45dc 0843
.org 0xc45de
	strb r0, [r3, #0]	@ 000c45de 1870
.org 0xc45e0
	ldrb r1, [r6, #10]	@ 000c45e0 b17a
.org 0xc45e2
	movs r0, #4	@ 000c45e2 0420
.org 0xc45e4
	orrs r0, r1	@ 000c45e4 0843
.org 0xc45e6
	strb r0, [r6, #10]	@ 000c45e6 b072
.org 0xc45e8
	adds r4, r6, #0	@ 000c45e8 341c
.org 0xc45ea
	adds r4, #116	@ 000c45ea 7434
.org 0xc45ec
	ldr r1, [pc, #28]	@ 000c45ec 0749
.org 0xc45ee
	adds r2, r6, #0	@ 000c45ee 321c
.org 0xc45f0
	adds r2, #84	@ 000c45f0 5432
.org 0xc45f2
	adds r0, r4, #0	@ 000c45f2 201c
.org 0xc45f4
	movs r3, #64	@ 000c45f4 4023
.org 0xc45f6
	bl 0x5760	@ 000c45f6 41f7b3f8
.org 0xc45fa
	str r6, [r4, #44]	@ 000c45fa e662
.org 0xc45fc
	str r5, [r4, #36]	@ 000c45fc 6562
.org 0xc45fe
	adds r0, r6, #0	@ 000c45fe 301c
.org 0xc4600
	bl 0xc4684	@ 000c4600 00f040f8
