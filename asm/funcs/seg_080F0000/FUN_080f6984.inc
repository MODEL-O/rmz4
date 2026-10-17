@ FUN_080f6984  entry 0x080f6984  size 154
.thumb
.org 0xf6984
FUN_080f6984:
	push {r4, lr}	@ 000f6984 10b5
.org 0xf6986
	adds r4, r0, #0	@ 000f6986 041c
.org 0xf6988
	ldrb r0, [r4, #14]	@ 000f6988 a07b
.org 0xf698a
	cmp r0, #1	@ 000f698a 0128
.org 0xf698c
	beq.n 0xf69ae	@ 000f698c 0fd0
.org 0xf698e
	cmp r0, #1	@ 000f698e 0128
.org 0xf6990
	bgt.n 0xf6998	@ 000f6990 02dc
.org 0xf6992
	cmp r0, #0	@ 000f6992 0028
.org 0xf6994
	beq.n 0xf69a2	@ 000f6994 05d0
.org 0xf6996
	b.n 0xf6a18	@ 000f6996 3fe0
.org 0xf6998
	cmp r0, #2	@ 000f6998 0228
.org 0xf699a
	beq.n 0xf69c2	@ 000f699a 12d0
.org 0xf699c
	cmp r0, #3	@ 000f699c 0328
.org 0xf699e
	beq.n 0xf69d0	@ 000f699e 17d0
.org 0xf69a0
	b.n 0xf6a18	@ 000f69a0 3ae0
.org 0xf69a2
	str r0, [r4, #92]	@ 000f69a2 e065
.org 0xf69a4
	movs r0, #60	@ 000f69a4 3c20
.org 0xf69a6
	strb r0, [r4, #18]	@ 000f69a6 a074
.org 0xf69a8
	ldrb r0, [r4, #14]	@ 000f69a8 a07b
.org 0xf69aa
	adds r0, #1	@ 000f69aa 0130
.org 0xf69ac
	strb r0, [r4, #14]	@ 000f69ac a073
.org 0xf69ae
	ldrb r0, [r4, #18]	@ 000f69ae a07c
.org 0xf69b0
	subs r0, #1	@ 000f69b0 0138
.org 0xf69b2
	strb r0, [r4, #18]	@ 000f69b2 a074
.org 0xf69b4
	lsls r0, r0, #24	@ 000f69b4 0006
.org 0xf69b6
	cmp r0, #0	@ 000f69b6 0028
.org 0xf69b8
	bne.n 0xf6a18	@ 000f69b8 2ed1
.org 0xf69ba
	ldrb r0, [r4, #14]	@ 000f69ba a07b
.org 0xf69bc
	adds r0, #1	@ 000f69bc 0130
.org 0xf69be
	strb r0, [r4, #14]	@ 000f69be a073
.org 0xf69c0
	b.n 0xf6a18	@ 000f69c0 2ae0
.org 0xf69c2
	movs r0, #0	@ 000f69c2 0020
.org 0xf69c4
	str r0, [r4, #92]	@ 000f69c4 e065
.org 0xf69c6
	movs r0, #16	@ 000f69c6 1020
.org 0xf69c8
	str r0, [r4, #100]	@ 000f69c8 6066
.org 0xf69ca
	ldrb r0, [r4, #14]	@ 000f69ca a07b
.org 0xf69cc
	adds r0, #1	@ 000f69cc 0130
.org 0xf69ce
	strb r0, [r4, #14]	@ 000f69ce a073
.org 0xf69d0
	ldr r0, [r4, #92]	@ 000f69d0 e06d
.org 0xf69d2
	ldr r1, [r4, #100]	@ 000f69d2 616e
.org 0xf69d4
	adds r0, r0, r1	@ 000f69d4 4018
.org 0xf69d6
	str r0, [r4, #92]	@ 000f69d6 e065
.org 0xf69d8
	movs r1, #192	@ 000f69d8 c021
.org 0xf69da
	lsls r1, r1, #2	@ 000f69da 8900
.org 0xf69dc
	cmp r0, r1	@ 000f69dc 8842
.org 0xf69de
	ble.n 0xf69e2	@ 000f69de 00dd
.org 0xf69e0
	str r1, [r4, #92]	@ 000f69e0 e165
.org 0xf69e2
	ldr r0, [r4, #84]	@ 000f69e2 606d
.org 0xf69e4
	ldr r1, [r4, #92]	@ 000f69e4 e16d
.org 0xf69e6
	adds r0, r0, r1	@ 000f69e6 4018
.org 0xf69e8
	str r0, [r4, #84]	@ 000f69e8 6065
.org 0xf69ea
	movs r2, #128	@ 000f69ea 8022
.org 0xf69ec
	lsls r2, r2, #5	@ 000f69ec 5201
.org 0xf69ee
	adds r0, r0, r2	@ 000f69ee 8018
.org 0xf69f0
	ldr r1, [r4, #88]	@ 000f69f0 a16d
.org 0xf69f2
	adds r1, r1, r2	@ 000f69f2 8918
.org 0xf69f4
	bl 0x834c	@ 000f69f4 11f7aafc
.org 0xf69f8
	cmp r0, #0	@ 000f69f8 0028
.org 0xf69fa
	beq.n 0xf6a18	@ 000f69fa 0dd0
.org 0xf69fc
	ldr r0, [r4, #84]	@ 000f69fc 606d
.org 0xf69fe
	ldr r1, [r4, #88]	@ 000f69fe a16d
.org 0xf6a00
	movs r2, #128	@ 000f6a00 8022
.org 0xf6a02
	lsls r2, r2, #5	@ 000f6a02 5201
.org 0xf6a04
	adds r1, r1, r2	@ 000f6a04 8918
.org 0xf6a06
	bl 0x8868	@ 000f6a06 11f72fff
.org 0xf6a0a
	ldr r1, [pc, #20]	@ 000f6a0a 0549
.org 0xf6a0c
	adds r0, r0, r1	@ 000f6a0c 4018
.org 0xf6a0e
	str r0, [r4, #84]	@ 000f6a0e 6065
.org 0xf6a10
	movs r1, #0	@ 000f6a10 0021
.org 0xf6a12
	movs r0, #2	@ 000f6a12 0220
.org 0xf6a14
	strb r0, [r4, #13]	@ 000f6a14 6073
.org 0xf6a16
	strb r1, [r4, #14]	@ 000f6a16 a173
.org 0xf6a18
	pop {r4}	@ 000f6a18 10bc
.org 0xf6a1a
	pop {r0}	@ 000f6a1a 01bc
.org 0xf6a1c
	bx r0	@ 000f6a1c 0047
