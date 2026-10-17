@ FUN_080c5198  entry 0x080c5198  size 108
.thumb
.org 0xc5198
FUN_080c5198:
	push {r4, r5, r6, lr}	@ 000c5198 70b5
.org 0xc519a
	adds r4, r0, #0	@ 000c519a 041c
.org 0xc519c
	ldrb r0, [r4, #15]	@ 000c519c e07b
.org 0xc519e
	cmp r0, #0	@ 000c519e 0028
.org 0xc51a0
	bne.n 0xc51f0	@ 000c51a0 26d1
.org 0xc51a2
	ldr r0, [pc, #24]	@ 000c51a2 0648
.org 0xc51a4
	bl 0x2b10	@ 000c51a4 3df7b4fc
.org 0xc51a8
	adds r0, r4, #0	@ 000c51a8 201c
.org 0xc51aa
	adds r0, #116	@ 000c51aa 7430
.org 0xc51ac
	ldr r1, [pc, #16]	@ 000c51ac 0449
.org 0xc51ae
	bl 0x5784	@ 000c51ae 40f7e9fa
.org 0xc51b2
	movs r5, #0	@ 000c51b2 0025
.org 0xc51b4
	adds r6, r4, #0	@ 000c51b4 261c
.org 0xc51b6
	adds r6, #184	@ 000c51b6 b836
.org 0xc51b8
	b.n 0xc51cc	@ 000c51b8 08e0
.org 0xc51ba
	.byte 0x00	@ 000c51ba data
.org 0xc51bb
	.byte 0x00	@ 000c51bb data
.org 0xc51bc
	.byte 0x3f,0x01,0x00,0x00	@ 000c51bc data
.org 0xc51c0
	.byte 0xa4,0x57,0x86,0x08	@ 000c51c0 data
.org 0xc51c4
	ldrb r0, [r6, #0]	@ 000c51c4 3078
.org 0xc51c6
	adds r0, #1	@ 000c51c6 0130
.org 0xc51c8
	strb r0, [r6, #0]	@ 000c51c8 3070
.org 0xc51ca
	adds r5, #1	@ 000c51ca 0135
.org 0xc51cc
	cmp r5, #1	@ 000c51cc 012d
.org 0xc51ce
	bgt.n 0xc51e2	@ 000c51ce 08dc
.org 0xc51d0
	lsls r2, r5, #24	@ 000c51d0 2a06
.org 0xc51d2
	lsrs r2, r2, #24	@ 000c51d2 120e
.org 0xc51d4
	adds r0, r4, #0	@ 000c51d4 201c
.org 0xc51d6
	adds r1, r4, #0	@ 000c51d6 211c
.org 0xc51d8
	adds r1, #84	@ 000c51d8 5431
.org 0xc51da
	bl 0xc4c7c	@ 000c51da fff74ffd
.org 0xc51de
	cmp r0, #0	@ 000c51de 0028
.org 0xc51e0
	bne.n 0xc51c4	@ 000c51e0 f0d1
.org 0xc51e2
	ldr r1, [pc, #44]	@ 000c51e2 0b49
.org 0xc51e4
	adds r0, r4, #0	@ 000c51e4 201c
.org 0xc51e6
	bl 0x1cf00	@ 000c51e6 57f78bfe
.org 0xc51ea
	ldrb r0, [r4, #15]	@ 000c51ea e07b
.org 0xc51ec
	adds r0, #1	@ 000c51ec 0130
.org 0xc51ee
	strb r0, [r4, #15]	@ 000c51ee e073
.org 0xc51f0
	adds r0, r4, #0	@ 000c51f0 201c
.org 0xc51f2
	bl 0x1cff0	@ 000c51f2 57f7fdfe
.org 0xc51f6
	adds r0, r4, #0	@ 000c51f6 201c
.org 0xc51f8
	adds r0, #115	@ 000c51f8 7330
.org 0xc51fa
	ldrb r1, [r0, #0]	@ 000c51fa 0178
.org 0xc51fc
	cmp r1, #3	@ 000c51fc 0329
.org 0xc51fe
	bne.n 0xc5208	@ 000c51fe 03d1
.org 0xc5200
	movs r0, #0	@ 000c5200 0020
.org 0xc5202
	strb r1, [r4, #13]	@ 000c5202 6173
