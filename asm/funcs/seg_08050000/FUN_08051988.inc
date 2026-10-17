@ FUN_08051988  entry 0x08051988  size 156
.thumb
.org 0x51988
FUN_08051988:
	push {r4, r5, r6, lr}	@ 00051988 70b5
.org 0x5198a
	adds r5, r0, #0	@ 0005198a 051c
.org 0x5198c
	ldrb r6, [r5, #14]	@ 0005198c ae7b
.org 0x5198e
	cmp r6, #0	@ 0005198e 002e
.org 0x51990
	bne.n 0x519e4	@ 00051990 28d1
.org 0x51992
	adds r0, #116	@ 00051992 7430
.org 0x51994
	ldr r1, [pc, #64]	@ 00051994 1049
.org 0x51996
	bl 0x5784	@ 00051996 b3f7f5fe
.org 0x5199a
	ldr r1, [pc, #64]	@ 0005199a 1049
.org 0x5199c
	adds r0, r5, #0	@ 0005199c 281c
.org 0x5199e
	bl 0x1cf00	@ 0005199e cbf7affa
.org 0x519a2
	adds r1, r5, #0	@ 000519a2 291c
.org 0x519a4
	adds r1, #84	@ 000519a4 5431
.org 0x519a6
	movs r0, #4	@ 000519a6 0420
.org 0x519a8
	bl 0x1fe64	@ 000519a8 cef75cfa
.org 0x519ac
	ldr r0, [r5, #84]	@ 000519ac 686d
.org 0x519ae
	ldr r1, [pc, #48]	@ 000519ae 0c49
.org 0x519b0
	adds r0, r0, r1	@ 000519b0 4018
.org 0x519b2
	adds r4, r5, #0	@ 000519b2 2c1c
.org 0x519b4
	adds r4, #180	@ 000519b4 b434
.org 0x519b6
	ldr r1, [r4, #4]	@ 000519b6 6168
.org 0x519b8
	movs r2, #0	@ 000519b8 0022
.org 0x519ba
	movs r3, #8	@ 000519ba 0823
.org 0x519bc
	bl 0xc1a78	@ 000519bc 70f05cf8
.org 0x519c0
	ldr r0, [r5, #84]	@ 000519c0 686d
.org 0x519c2
	movs r1, #192	@ 000519c2 c021
.org 0x519c4
	lsls r1, r1, #5	@ 000519c4 4901
.org 0x519c6
	adds r0, r0, r1	@ 000519c6 4018
.org 0x519c8
	ldr r1, [r4, #4]	@ 000519c8 6168
.org 0x519ca
	movs r2, #1	@ 000519ca 0122
.org 0x519cc
	movs r3, #8	@ 000519cc 0823
.org 0x519ce
	bl 0xc1a78	@ 000519ce 70f053f8
.org 0x519d2
	strb r6, [r5, #18]	@ 000519d2 ae74
.org 0x519d4
	b.n 0x51a00	@ 000519d4 14e0
.org 0x519d6
	.byte 0x00	@ 000519d6 data
.org 0x519d7
	.byte 0x00	@ 000519d7 data
.org 0x519d8
	.byte 0x14,0x7f,0x85,0x08	@ 000519d8 data
.org 0x519dc
	.byte 0x04,0xa1,0x00,0x00	@ 000519dc data
.org 0x519e0
	.byte 0x00,0xe8,0xff,0xff	@ 000519e0 data
.org 0x519e4
	cmp r6, #1	@ 000519e4 012e
.org 0x519e6
	bne.n 0x51a06	@ 000519e6 0ed1
.org 0x519e8
	adds r0, r5, #0	@ 000519e8 281c
.org 0x519ea
	adds r0, #113	@ 000519ea 7130
.org 0x519ec
	ldrb r0, [r0, #0]	@ 000519ec 0078
.org 0x519ee
	lsls r0, r0, #24	@ 000519ee 0006
.org 0x519f0
	asrs r0, r0, #24	@ 000519f0 0016
.org 0x519f2
	cmp r0, #1	@ 000519f2 0128
.org 0x519f4
	ble.n 0x51a06	@ 000519f4 07dd
.org 0x519f6
	adds r0, r5, #0	@ 000519f6 281c
.org 0x519f8
	adds r0, #116	@ 000519f8 7430
.org 0x519fa
	ldr r1, [pc, #56]	@ 000519fa 0e49
.org 0x519fc
	bl 0x5784	@ 000519fc b3f7c2fe
.org 0x51a00
	ldrb r0, [r5, #14]	@ 00051a00 a87b
.org 0x51a02
	adds r0, #1	@ 00051a02 0130
.org 0x51a04
	strb r0, [r5, #14]	@ 00051a04 a873
.org 0x51a06
	adds r0, r5, #0	@ 00051a06 281c
.org 0x51a08
	bl 0x1cff0	@ 00051a08 cbf7f2fa
.org 0x51a0c
	ldrb r0, [r5, #18]	@ 00051a0c a87c
.org 0x51a0e
	adds r0, #1	@ 00051a0e 0130
.org 0x51a10
	strb r0, [r5, #18]	@ 00051a10 a874
.org 0x51a12
	lsls r0, r0, #24	@ 00051a12 0006
.org 0x51a14
	lsrs r0, r0, #24	@ 00051a14 000e
.org 0x51a16
	cmp r0, #24	@ 00051a16 1828
.org 0x51a18
	bls.n 0x51a2c	@ 00051a18 08d9
.org 0x51a1a
	adds r0, r5, #0	@ 00051a1a 281c
.org 0x51a1c
	adds r0, #115	@ 00051a1c 7330
.org 0x51a1e
	ldrb r0, [r0, #0]	@ 00051a1e 0078
.org 0x51a20
	cmp r0, #3	@ 00051a20 0328
.org 0x51a22
	bne.n 0x51a2c	@ 00051a22 03d1
