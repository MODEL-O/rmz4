@ FUN_0803ecb0  entry 0x0803ecb0  size 196
.thumb
.org 0x3ecb0
FUN_0803ecb0:
	push {r4, r5, r6, lr}	@ 0003ecb0 70b5
.org 0x3ecb2
	adds r4, r0, #0	@ 0003ecb2 041c
.org 0x3ecb4
	adds r0, #180	@ 0003ecb4 b430
.org 0x3ecb6
	ldr r6, [r0, #0]	@ 0003ecb6 0668
.org 0x3ecb8
	ldrb r5, [r4, #13]	@ 0003ecb8 657b
.org 0x3ecba
	cmp r5, #1	@ 0003ecba 012d
.org 0x3ecbc
	beq.n 0x3ecec	@ 0003ecbc 16d0
.org 0x3ecbe
	cmp r5, #1	@ 0003ecbe 012d
.org 0x3ecc0
	bgt.n 0x3ecc8	@ 0003ecc0 02dc
.org 0x3ecc2
	cmp r5, #0	@ 0003ecc2 002d
.org 0x3ecc4
	beq.n 0x3ecd2	@ 0003ecc4 05d0
.org 0x3ecc6
	b.n 0x3ed74	@ 0003ecc6 55e0
.org 0x3ecc8
	cmp r5, #2	@ 0003ecc8 022d
.org 0x3ecca
	beq.n 0x3ed3c	@ 0003ecca 37d0
.org 0x3eccc
	cmp r5, #3	@ 0003eccc 032d
.org 0x3ecce
	beq.n 0x3ed58	@ 0003ecce 43d0
.org 0x3ecd0
	b.n 0x3ed74	@ 0003ecd0 50e0
.org 0x3ecd2
	ldr r1, [pc, #100]	@ 0003ecd2 1949
.org 0x3ecd4
	adds r0, r4, #0	@ 0003ecd4 201c
.org 0x3ecd6
	bl 0x1cf00	@ 0003ecd6 def713f9
.org 0x3ecda
	movs r1, #170	@ 0003ecda aa21
.org 0x3ecdc
	lsls r1, r1, #1	@ 0003ecdc 4900
.org 0x3ecde
	adds r0, r6, r1	@ 0003ecde 7018
.org 0x3ece0
	strb r5, [r0, #0]	@ 0003ece0 0570
.org 0x3ece2
	movs r0, #6	@ 0003ece2 0620
.org 0x3ece4
	strb r0, [r4, #18]	@ 0003ece4 a074
.org 0x3ece6
	ldrb r0, [r4, #13]	@ 0003ece6 607b
.org 0x3ece8
	adds r0, #1	@ 0003ece8 0130
.org 0x3ecea
	strb r0, [r4, #13]	@ 0003ecea 6073
.org 0x3ecec
	ldrb r0, [r4, #18]	@ 0003ecec a07c
.org 0x3ecee
	subs r0, #1	@ 0003ecee 0138
.org 0x3ecf0
	strb r0, [r4, #18]	@ 0003ecf0 a074
.org 0x3ecf2
	lsls r0, r0, #24	@ 0003ecf2 0006
.org 0x3ecf4
	cmp r0, #0	@ 0003ecf4 0028
.org 0x3ecf6
	bne.n 0x3ed74	@ 0003ecf6 3dd1
.org 0x3ecf8
	adds r2, r6, #0	@ 0003ecf8 321c
.org 0x3ecfa
	adds r2, #230	@ 0003ecfa e632
.org 0x3ecfc
	ldrb r0, [r2, #0]	@ 0003ecfc 1078
.org 0x3ecfe
	adds r1, r0, #0	@ 0003ecfe 011c
.org 0x3ed00
	cmp r1, #0	@ 0003ed00 0029
.org 0x3ed02
	beq.n 0x3ed26	@ 0003ed02 10d0
.org 0x3ed04
	cmp r1, #255	@ 0003ed04 ff29
.org 0x3ed06
	beq.n 0x3ed0c	@ 0003ed06 01d0
.org 0x3ed08
	subs r0, #1	@ 0003ed08 0138
.org 0x3ed0a
	strb r0, [r2, #0]	@ 0003ed0a 1070
.org 0x3ed0c
	adds r0, r6, #0	@ 0003ed0c 301c
.org 0x3ed0e
	adds r1, r4, #0	@ 0003ed0e 211c
.org 0x3ed10
	movs r2, #0	@ 0003ed10 0022
.org 0x3ed12
	bl 0x46174	@ 0003ed12 07f02ffa
.org 0x3ed16
	adds r0, r6, #0	@ 0003ed16 301c
.org 0x3ed18
	adds r1, r4, #0	@ 0003ed18 211c
.org 0x3ed1a
	movs r2, #1	@ 0003ed1a 0122
.org 0x3ed1c
	bl 0x46174	@ 0003ed1c 07f02afa
.org 0x3ed20
	movs r0, #18	@ 0003ed20 1220
.org 0x3ed22
	bl 0x2b10	@ 0003ed22 c3f7f5fe
.org 0x3ed26
	movs r0, #170	@ 0003ed26 aa20
.org 0x3ed28
	lsls r0, r0, #1	@ 0003ed28 4000
.org 0x3ed2a
	adds r1, r6, r0	@ 0003ed2a 3118
.org 0x3ed2c
	movs r0, #1	@ 0003ed2c 0120
.org 0x3ed2e
	strb r0, [r1, #0]	@ 0003ed2e 0870
.org 0x3ed30
	movs r0, #48	@ 0003ed30 3020
.org 0x3ed32
	strb r0, [r4, #18]	@ 0003ed32 a074
.org 0x3ed34
	b.n 0x3ed6e	@ 0003ed34 1be0
.org 0x3ed36
	.byte 0x00	@ 0003ed36 data
.org 0x3ed37
	.byte 0x00	@ 0003ed37 data
.org 0x3ed38
	.byte 0x05,0x83,0x00,0x00	@ 0003ed38 data
.org 0x3ed3c
	ldrb r0, [r4, #18]	@ 0003ed3c a07c
.org 0x3ed3e
	subs r0, #1	@ 0003ed3e 0138
.org 0x3ed40
	strb r0, [r4, #18]	@ 0003ed40 a074
.org 0x3ed42
	lsls r0, r0, #24	@ 0003ed42 0006
.org 0x3ed44
	cmp r0, #0	@ 0003ed44 0028
.org 0x3ed46
	bne.n 0x3ed74	@ 0003ed46 15d1
.org 0x3ed48
	movs r0, #170	@ 0003ed48 aa20
.org 0x3ed4a
	lsls r0, r0, #1	@ 0003ed4a 4000
.org 0x3ed4c
	adds r1, r6, r0	@ 0003ed4c 3118
.org 0x3ed4e
	movs r0, #3	@ 0003ed4e 0320
.org 0x3ed50
	strb r0, [r1, #0]	@ 0003ed50 0870
.org 0x3ed52
	movs r0, #16	@ 0003ed52 1020
.org 0x3ed54
	strb r0, [r4, #18]	@ 0003ed54 a074
.org 0x3ed56
	b.n 0x3ed6e	@ 0003ed56 0ae0
.org 0x3ed58
	ldrb r0, [r4, #18]	@ 0003ed58 a07c
.org 0x3ed5a
	subs r0, #1	@ 0003ed5a 0138
.org 0x3ed5c
	strb r0, [r4, #18]	@ 0003ed5c a074
.org 0x3ed5e
	lsls r0, r0, #24	@ 0003ed5e 0006
.org 0x3ed60
	cmp r0, #0	@ 0003ed60 0028
.org 0x3ed62
	bne.n 0x3ed74	@ 0003ed62 07d1
.org 0x3ed64
	movs r0, #170	@ 0003ed64 aa20
.org 0x3ed66
	lsls r0, r0, #1	@ 0003ed66 4000
.org 0x3ed68
	adds r1, r6, r0	@ 0003ed68 3118
.org 0x3ed6a
	movs r0, #4	@ 0003ed6a 0420
.org 0x3ed6c
	strb r0, [r1, #0]	@ 0003ed6c 0870
.org 0x3ed6e
	ldrb r0, [r4, #13]	@ 0003ed6e 607b
.org 0x3ed70
	adds r0, #1	@ 0003ed70 0130
.org 0x3ed72
	strb r0, [r4, #13]	@ 0003ed72 6073
