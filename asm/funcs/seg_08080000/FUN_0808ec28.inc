@ FUN_0808ec28  entry 0x0808ec28  size 294
.thumb
.org 0x8ec28
FUN_0808ec28:
	push {r4, r5, r6, r7, lr}	@ 0008ec28 f0b5
.org 0x8ec2a
	adds r6, r0, #0	@ 0008ec2a 061c
.org 0x8ec2c
	ldrb r0, [r6, #10]	@ 0008ec2c b07a
.org 0x8ec2e
	lsrs r7, r0, #4	@ 0008ec2e 0709
.org 0x8ec30
	movs r4, #1	@ 0008ec30 0124
.org 0x8ec32
	ands r7, r4	@ 0008ec32 2740
.org 0x8ec34
	ldrb r0, [r6, #15]	@ 0008ec34 f07b
.org 0x8ec36
	cmp r0, #0	@ 0008ec36 0028
.org 0x8ec38
	bne.n 0x8ec6a	@ 0008ec38 17d1
.org 0x8ec3a
	ldr r0, [pc, #208]	@ 0008ec3a 3448
.org 0x8ec3c
	bl 0x2b10	@ 0008ec3c 73f768ff
.org 0x8ec40
	adds r0, r6, #0	@ 0008ec40 301c
.org 0x8ec42
	movs r1, #0	@ 0008ec42 0021
.org 0x8ec44
	movs r2, #16	@ 0008ec44 1022
.org 0x8ec46
	adds r3, r7, #0	@ 0008ec46 3b1c
.org 0x8ec48
	bl 0x8fad0	@ 0008ec48 00f042ff
.org 0x8ec4c
	movs r1, #228	@ 0008ec4c e421
.org 0x8ec4e
	lsls r1, r1, #6	@ 0008ec4e 8901
.org 0x8ec50
	adds r0, r6, #0	@ 0008ec50 301c
.org 0x8ec52
	bl 0x1cf00	@ 0008ec52 8ef755f9
.org 0x8ec56
	adds r1, r6, #0	@ 0008ec56 311c
.org 0x8ec58
	adds r1, #188	@ 0008ec58 bc31
.org 0x8ec5a
	ldr r0, [r6, #84]	@ 0008ec5a 706d
.org 0x8ec5c
	str r0, [r1, #0]	@ 0008ec5c 0860
.org 0x8ec5e
	adds r0, r6, #0	@ 0008ec5e 301c
.org 0x8ec60
	adds r0, #187	@ 0008ec60 bb30
.org 0x8ec62
	strb r4, [r0, #0]	@ 0008ec62 0470
.org 0x8ec64
	ldrb r0, [r6, #15]	@ 0008ec64 f07b
.org 0x8ec66
	adds r0, #1	@ 0008ec66 0130
.org 0x8ec68
	strb r0, [r6, #15]	@ 0008ec68 f073
.org 0x8ec6a
	adds r0, r6, #0	@ 0008ec6a 301c
.org 0x8ec6c
	bl 0x1cff0	@ 0008ec6c 8ef7c0f9
.org 0x8ec70
	adds r0, r6, #0	@ 0008ec70 301c
.org 0x8ec72
	adds r0, #116	@ 0008ec72 7430
.org 0x8ec74
	ldr r3, [pc, #152]	@ 0008ec74 264b
.org 0x8ec76
	ldrb r1, [r6, #30]	@ 0008ec76 b17f
.org 0x8ec78
	lsls r1, r1, #8	@ 0008ec78 0902
.org 0x8ec7a
	adds r2, r6, #0	@ 0008ec7a 321c
.org 0x8ec7c
	adds r2, #112	@ 0008ec7c 7032
.org 0x8ec7e
	ldrb r2, [r2, #0]	@ 0008ec7e 1278
.org 0x8ec80
	orrs r1, r2	@ 0008ec80 1143
.org 0x8ec82
	ldr r2, [pc, #144]	@ 0008ec82 244a
.org 0x8ec84
	adds r1, r1, r2	@ 0008ec84 8918
.org 0x8ec86
	lsls r1, r1, #2	@ 0008ec86 8900
.org 0x8ec88
	adds r1, r1, r3	@ 0008ec88 c918
.org 0x8ec8a
	adds r2, r6, #0	@ 0008ec8a 321c
.org 0x8ec8c
	adds r2, #113	@ 0008ec8c 7132
.org 0x8ec8e
	ldrb r2, [r2, #0]	@ 0008ec8e 1278
.org 0x8ec90
	lsls r2, r2, #24	@ 0008ec90 1206
.org 0x8ec92
	asrs r2, r2, #24	@ 0008ec92 1216
.org 0x8ec94
	ldr r1, [r1, #0]	@ 0008ec94 0968
.org 0x8ec96
	lsls r2, r2, #2	@ 0008ec96 9200
.org 0x8ec98
	adds r2, r2, r1	@ 0008ec98 5218
.org 0x8ec9a
	ldr r1, [r2, #0]	@ 0008ec9a 1168
.org 0x8ec9c
	ldrb r2, [r1, #0]	@ 0008ec9c 0a78
.org 0x8ec9e
	lsls r1, r2, #1	@ 0008ec9e 5100
.org 0x8eca0
	adds r1, r1, r2	@ 0008eca0 8918
.org 0x8eca2
	lsls r1, r1, #3	@ 0008eca2 c900
.org 0x8eca4
	ldr r2, [pc, #112]	@ 0008eca4 1c4a
.org 0x8eca6
	adds r1, r1, r2	@ 0008eca6 8918
.org 0x8eca8
	bl 0x5784	@ 0008eca8 76f76cfd
.org 0x8ecac
	adds r4, r6, #0	@ 0008ecac 341c
.org 0x8ecae
	adds r4, #187	@ 0008ecae bb34
.org 0x8ecb0
	ldrb r0, [r4, #0]	@ 0008ecb0 2078
.org 0x8ecb2
	cmp r0, #0	@ 0008ecb2 0028
.org 0x8ecb4
	beq.n 0x8ecca	@ 0008ecb4 09d0
.org 0x8ecb6
	adds r0, r6, #0	@ 0008ecb6 301c
.org 0x8ecb8
	adds r0, #115	@ 0008ecb8 7330
.org 0x8ecba
	ldrb r0, [r0, #0]	@ 0008ecba 0078
.org 0x8ecbc
	cmp r0, #3	@ 0008ecbc 0328
.org 0x8ecbe
	bne.n 0x8ecca	@ 0008ecbe 04d1
.org 0x8ecc0
	adds r0, r6, #0	@ 0008ecc0 301c
.org 0x8ecc2
	bl 0x8fc18	@ 0008ecc2 00f0a9ff
.org 0x8ecc6
	movs r0, #0	@ 0008ecc6 0020
.org 0x8ecc8
	strb r0, [r4, #0]	@ 0008ecc8 2070
.org 0x8ecca
	adds r0, r6, #0	@ 0008ecca 301c
.org 0x8eccc
	bl 0x8faf4	@ 0008eccc 00f012ff
.org 0x8ecd0
	ldr r5, [r6, #100]	@ 0008ecd0 756e
.org 0x8ecd2
	negs r5, r5	@ 0008ecd2 6d42
.org 0x8ecd4
	ldr r4, [r6, #92]	@ 0008ecd4 f46d
.org 0x8ecd6
	adds r0, r4, #0	@ 0008ecd6 201c
.org 0x8ecd8
	adds r1, r5, #0	@ 0008ecd8 291c
.org 0x8ecda
	bl 0x128fb8	@ 0008ecda 9af06df9
.org 0x8ecde
	negs r0, r0	@ 0008ecde 4042
.org 0x8ece0
	lsls r4, r4, #1	@ 0008ece0 6400
.org 0x8ece2
	adds r1, r0, #1	@ 0008ece2 411c
.org 0x8ece4
	muls r1, r5	@ 0008ece4 6943
.org 0x8ece6
	adds r4, r4, r1	@ 0008ece6 6418
.org 0x8ece8
	muls r0, r4	@ 0008ece8 6043
.org 0x8ecea
	asrs r0, r0, #1	@ 0008ecea 4010
.org 0x8ecec
	ldr r1, [r6, #84]	@ 0008ecec 716d
.org 0x8ecee
	adds r1, r1, r0	@ 0008ecee 0918
.org 0x8ecf0
	cmp r7, #0	@ 0008ecf0 002f
.org 0x8ecf2
	bne.n 0x8ed20	@ 0008ecf2 15d1
.org 0x8ecf4
	adds r0, r6, #0	@ 0008ecf4 301c
.org 0x8ecf6
	adds r0, #180	@ 0008ecf6 b430
.org 0x8ecf8
	ldr r0, [r0, #0]	@ 0008ecf8 0068
.org 0x8ecfa
	ldr r2, [pc, #32]	@ 0008ecfa 084a
.org 0x8ecfc
	adds r0, r0, r2	@ 0008ecfc 8018
.org 0x8ecfe
	cmp r1, r0	@ 0008ecfe 8142
.org 0x8ed00
	bgt.n 0x8ed36	@ 0008ed00 19dc
.org 0x8ed02
	movs r0, #2	@ 0008ed02 0220
.org 0x8ed04
	strb r0, [r6, #14]	@ 0008ed04 b073
.org 0x8ed06
	strb r7, [r6, #15]	@ 0008ed06 f773
.org 0x8ed08
	b.n 0x8ed5e	@ 0008ed08 29e0
.org 0x8ed0a
	.byte 0x00	@ 0008ed0a data
.org 0x8ed0b
	.byte 0x00	@ 0008ed0b data
.org 0x8ed0c
	.byte 0x71,0x01,0x00,0x00	@ 0008ed0c data
.org 0x8ed10
	.byte 0xac,0xff,0x85,0x08	@ 0008ed10 data
.org 0x8ed14
	.byte 0x00,0xc7,0xff,0xff	@ 0008ed14 data
.org 0x8ed18
	.byte 0xd8,0xfb,0x85,0x08	@ 0008ed18 data
.org 0x8ed1c
	.byte 0x00,0x40,0xff,0xff	@ 0008ed1c data
.org 0x8ed20
	adds r0, r6, #0	@ 0008ed20 301c
.org 0x8ed22
	adds r0, #180	@ 0008ed22 b430
.org 0x8ed24
	ldr r0, [r0, #0]	@ 0008ed24 0068
.org 0x8ed26
	movs r2, #192	@ 0008ed26 c022
.org 0x8ed28
	lsls r2, r2, #8	@ 0008ed28 1202
.org 0x8ed2a
	adds r0, r0, r2	@ 0008ed2a 8018
.org 0x8ed2c
	cmp r1, r0	@ 0008ed2c 8142
.org 0x8ed2e
	blt.n 0x8ed36	@ 0008ed2e 02db
.org 0x8ed30
	movs r1, #0	@ 0008ed30 0021
.org 0x8ed32
	movs r0, #2	@ 0008ed32 0220
.org 0x8ed34
	b.n 0x8ed5a	@ 0008ed34 11e0
.org 0x8ed36
	adds r0, r6, #0	@ 0008ed36 301c
.org 0x8ed38
	adds r0, #184	@ 0008ed38 b830
.org 0x8ed3a
	ldrb r0, [r0, #0]	@ 0008ed3a 0078
.org 0x8ed3c
	cmp r0, #1	@ 0008ed3c 0128
.org 0x8ed3e
	beq.n 0x8ed5e	@ 0008ed3e 0ed0
.org 0x8ed40
	adds r0, r6, #0	@ 0008ed40 301c
.org 0x8ed42
	adds r0, #188	@ 0008ed42 bc30
.org 0x8ed44
	ldr r0, [r0, #0]	@ 0008ed44 0068
.org 0x8ed46
	subs r0, r0, r1	@ 0008ed46 401a
.org 0x8ed48
	movs r1, #128	@ 0008ed48 8021
.org 0x8ed4a
	lsls r1, r1, #7	@ 0008ed4a c901
.org 0x8ed4c
	adds r0, r0, r1	@ 0008ed4c 4018
