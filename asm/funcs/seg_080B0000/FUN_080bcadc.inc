@ FUN_080bcadc  entry 0x080bcadc  size 188
.thumb
.org 0xbcadc
FUN_080bcadc:
	push {r4, r5, r6, lr}	@ 000bcadc 70b5
.org 0xbcade
	adds r5, r0, #0	@ 000bcade 051c
.org 0xbcae0
	bl 0x1cc9c	@ 000bcae0 60f7dcf8
.org 0xbcae4
	ldrb r0, [r5, #10]	@ 000bcae4 a87a
.org 0xbcae6
	movs r2, #1	@ 000bcae6 0122
.org 0xbcae8
	movs r6, #0	@ 000bcae8 0026
.org 0xbcaea
	orrs r2, r0	@ 000bcaea 0243
.org 0xbcaec
	movs r0, #2	@ 000bcaec 0220
.org 0xbcaee
	orrs r2, r0	@ 000bcaee 0243
.org 0xbcaf0
	orrs r2, r6	@ 000bcaf0 3243
.org 0xbcaf2
	strb r2, [r5, #10]	@ 000bcaf2 aa72
.org 0xbcaf4
	ldr r1, [pc, #68]	@ 000bcaf4 1149
.org 0xbcaf6
	ldrb r0, [r5, #9]	@ 000bcaf6 687a
.org 0xbcaf8
	lsls r0, r0, #2	@ 000bcaf8 8000
.org 0xbcafa
	adds r0, r0, r1	@ 000bcafa 4018
.org 0xbcafc
	movs r1, #1	@ 000bcafc 0121
.org 0xbcafe
	str r1, [r5, #12]	@ 000bcafe e960
.org 0xbcb00
	ldr r0, [r0, #0]	@ 000bcb00 0068
.org 0xbcb02
	ldr r0, [r0, #4]	@ 000bcb02 4068
.org 0xbcb04
	str r0, [r5, #20]	@ 000bcb04 6861
.org 0xbcb06
	movs r0, #4	@ 000bcb06 0420
.org 0xbcb08
	orrs r2, r0	@ 000bcb08 0243
.org 0xbcb0a
	strb r2, [r5, #10]	@ 000bcb0a aa72
.org 0xbcb0c
	adds r4, r5, #0	@ 000bcb0c 2c1c
.org 0xbcb0e
	adds r4, #116	@ 000bcb0e 7434
.org 0xbcb10
	ldr r1, [pc, #44]	@ 000bcb10 0b49
.org 0xbcb12
	adds r2, r5, #0	@ 000bcb12 2a1c
.org 0xbcb14
	adds r2, #84	@ 000bcb14 5432
.org 0xbcb16
	adds r0, r4, #0	@ 000bcb16 201c
.org 0xbcb18
	movs r3, #20	@ 000bcb18 1423
.org 0xbcb1a
	bl 0x5760	@ 000bcb1a 48f721fe
.org 0xbcb1e
	str r5, [r4, #44]	@ 000bcb1e e562
.org 0xbcb20
	ldr r0, [pc, #32]	@ 000bcb20 0848
.org 0xbcb22
	str r0, [r4, #36]	@ 000bcb22 6062
.org 0xbcb24
	movs r1, #235	@ 000bcb24 eb21
.org 0xbcb26
	lsls r1, r1, #8	@ 000bcb26 0902
.org 0xbcb28
	adds r0, r5, #0	@ 000bcb28 281c
.org 0xbcb2a
	bl 0x1cf00	@ 000bcb2a 60f7e9f9
.org 0xbcb2e
	ldrb r2, [r5, #16]	@ 000bcb2e 2a7c
.org 0xbcb30
	cmp r2, #0	@ 000bcb30 002a
.org 0xbcb32
	beq.n 0xbcb48	@ 000bcb32 09d0
.org 0xbcb34
	ldrb r0, [r5, #10]	@ 000bcb34 a87a
.org 0xbcb36
	movs r1, #16	@ 000bcb36 1021
.org 0xbcb38
	orrs r0, r1	@ 000bcb38 0843
.org 0xbcb3a
	b.n 0xbcb4e	@ 000bcb3a 08e0
.org 0xbcb3c
	.byte 0x40,0xdb,0x85,0x08	@ 000bcb3c data
.org 0xbcb40
	.byte 0x0c,0x49,0x86,0x08	@ 000bcb40 data
.org 0xbcb44
	.byte 0xa5,0xcc,0x0b,0x08	@ 000bcb44 data
.org 0xbcb48
	ldrb r1, [r5, #10]	@ 000bcb48 a97a
.org 0xbcb4a
	movs r0, #239	@ 000bcb4a ef20
.org 0xbcb4c
	ands r0, r1	@ 000bcb4c 0840
.org 0xbcb4e
	strb r0, [r5, #10]	@ 000bcb4e a872
.org 0xbcb50
	movs r1, #1	@ 000bcb50 0121
.org 0xbcb52
	ands r1, r2	@ 000bcb52 1140
.org 0xbcb54
	adds r0, r5, #0	@ 000bcb54 281c
.org 0xbcb56
	adds r0, #76	@ 000bcb56 4c30
.org 0xbcb58
	strb r1, [r0, #0]	@ 000bcb58 0170
.org 0xbcb5a
	adds r3, r5, #0	@ 000bcb5a 2b1c
.org 0xbcb5c
	adds r3, #74	@ 000bcb5c 4a33
.org 0xbcb5e
	lsls r1, r1, #4	@ 000bcb5e 0901
.org 0xbcb60
	ldrb r2, [r3, #0]	@ 000bcb60 1a78
.org 0xbcb62
	movs r0, #17	@ 000bcb62 1120
.org 0xbcb64
	negs r0, r0	@ 000bcb64 4042
.org 0xbcb66
	ands r0, r2	@ 000bcb66 1040
.org 0xbcb68
	orrs r0, r1	@ 000bcb68 0843
.org 0xbcb6a
	strb r0, [r3, #0]	@ 000bcb6a 1870
.org 0xbcb6c
	adds r1, r5, #0	@ 000bcb6c 291c
.org 0xbcb6e
	adds r1, #180	@ 000bcb6e b431
.org 0xbcb70
	ldr r0, [r5, #84]	@ 000bcb70 686d
.org 0xbcb72
	str r0, [r1, #0]	@ 000bcb72 0860
.org 0xbcb74
	ldrb r1, [r5, #10]	@ 000bcb74 a97a
.org 0xbcb76
	movs r0, #16	@ 000bcb76 1020
.org 0xbcb78
	ands r0, r1	@ 000bcb78 0840
.org 0xbcb7a
	cmp r0, #0	@ 000bcb7a 0028
.org 0xbcb7c
	beq.n 0xbcb84	@ 000bcb7c 02d0
.org 0xbcb7e
	movs r0, #128	@ 000bcb7e 8020
.org 0xbcb80
	lsls r0, r0, #2	@ 000bcb80 8000
.org 0xbcb82
	b.n 0xbcb86	@ 000bcb82 00e0
.org 0xbcb84
	ldr r0, [pc, #28]	@ 000bcb84 0748
.org 0xbcb86
	str r0, [r5, #92]	@ 000bcb86 e865
.org 0xbcb88
	movs r1, #0	@ 000bcb88 0021
.org 0xbcb8a
	strb r1, [r5, #18]	@ 000bcb8a a974
.org 0xbcb8c
	adds r0, r5, #0	@ 000bcb8c 281c
.org 0xbcb8e
	adds r0, #184	@ 000bcb8e b830
.org 0xbcb90
	strb r1, [r0, #0]	@ 000bcb90 0170
.org 0xbcb92
	movs r0, #107	@ 000bcb92 6b20
.org 0xbcb94
	bl 0x2b10	@ 000bcb94 45f7bcff
