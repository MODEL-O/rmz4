@ FUN_0807fc2c  entry 0x0807fc2c  size 250
.thumb
.org 0x7fc2c
FUN_0807fc2c:
	push {r4, r5, r6, lr}	@ 0007fc2c 70b5
.org 0x7fc2e
	adds r4, r0, #0	@ 0007fc2e 041c
.org 0x7fc30
	adds r0, #140	@ 0007fc30 8c30
.org 0x7fc32
	ldr r0, [r0, #0]	@ 0007fc32 0068
.org 0x7fc34
	movs r1, #128	@ 0007fc34 8021
.org 0x7fc36
	lsls r1, r1, #2	@ 0007fc36 8900
.org 0x7fc38
	ands r0, r1	@ 0007fc38 0840
.org 0x7fc3a
	cmp r0, #0	@ 0007fc3a 0028
.org 0x7fc3c
	beq.n 0x7fc68	@ 0007fc3c 14d0
.org 0x7fc3e
	ldrb r0, [r4, #13]	@ 0007fc3e 607b
.org 0x7fc40
	cmp r0, #3	@ 0007fc40 0328
.org 0x7fc42
	beq.n 0x7fc48	@ 0007fc42 01d0
.org 0x7fc44
	movs r0, #0	@ 0007fc44 0020
.org 0x7fc46
	str r0, [r4, #96]	@ 0007fc46 2066
.org 0x7fc48
	ldr r1, [pc, #24]	@ 0007fc48 0649
.org 0x7fc4a
	ldrb r0, [r4, #9]	@ 0007fc4a 607a
.org 0x7fc4c
	lsls r0, r0, #2	@ 0007fc4c 8000
.org 0x7fc4e
	adds r0, r0, r1	@ 0007fc4e 4018
.org 0x7fc50
	movs r1, #2	@ 0007fc50 0221
.org 0x7fc52
	str r1, [r4, #12]	@ 0007fc52 e160
.org 0x7fc54
	ldr r0, [r0, #0]	@ 0007fc54 0068
.org 0x7fc56
	ldr r0, [r0, #8]	@ 0007fc56 8068
.org 0x7fc58
	str r0, [r4, #20]	@ 0007fc58 6061
.org 0x7fc5a
	adds r0, r4, #0	@ 0007fc5a 201c
.org 0x7fc5c
	bl 0x7fd44	@ 0007fc5c 00f072f8
.org 0x7fc60
	b.n 0x7fd38	@ 0007fc60 6ae0
.org 0x7fc62
	.byte 0x00	@ 0007fc62 data
.org 0x7fc63
	.byte 0x00	@ 0007fc63 data
.org 0x7fc64
	.byte 0x40,0xdb,0x85,0x08	@ 0007fc64 data
.org 0x7fc68
	ldrb r0, [r4, #17]	@ 0007fc68 607c
.org 0x7fc6a
	cmp r0, #0	@ 0007fc6a 0028
.org 0x7fc6c
	bne.n 0x7fc88	@ 0007fc6c 0cd1
.org 0x7fc6e
	adds r1, r4, #0	@ 0007fc6e 211c
.org 0x7fc70
	adds r1, #185	@ 0007fc70 b931
.org 0x7fc72
	ldrb r0, [r1, #0]	@ 0007fc72 0878
.org 0x7fc74
	subs r0, #1	@ 0007fc74 0138
.org 0x7fc76
	strb r0, [r1, #0]	@ 0007fc76 0870
.org 0x7fc78
	lsls r0, r0, #24	@ 0007fc78 0006
.org 0x7fc7a
	lsrs r0, r0, #24	@ 0007fc7a 000e
.org 0x7fc7c
	cmp r0, #255	@ 0007fc7c ff28
.org 0x7fc7e
	bne.n 0x7fc88	@ 0007fc7e 03d1
.org 0x7fc80
	movs r0, #1	@ 0007fc80 0120
.org 0x7fc82
	strb r0, [r4, #17]	@ 0007fc82 6074
.org 0x7fc84
	movs r0, #60	@ 0007fc84 3c20
.org 0x7fc86
	strb r0, [r1, #0]	@ 0007fc86 0870
.org 0x7fc88
	ldrb r0, [r4, #15]	@ 0007fc88 e07b
.org 0x7fc8a
	cmp r0, #0	@ 0007fc8a 0028
.org 0x7fc8c
	bne.n 0x7fca0	@ 0007fc8c 08d1
.org 0x7fc8e
	adds r0, r4, #0	@ 0007fc8e 201c
.org 0x7fc90
	bl 0x7f90c	@ 0007fc90 fff73cfe
.org 0x7fc94
	adds r6, r0, #0	@ 0007fc94 061c
.org 0x7fc96
	cmp r6, #0	@ 0007fc96 002e
.org 0x7fc98
	beq.n 0x7fcae	@ 0007fc98 09d0
.org 0x7fc9a
	movs r0, #1	@ 0007fc9a 0120
.org 0x7fc9c
	strb r0, [r4, #15]	@ 0007fc9c e073
.org 0x7fc9e
	b.n 0x7fd38	@ 0007fc9e 4be0
.org 0x7fca0
	adds r0, r4, #0	@ 0007fca0 201c
.org 0x7fca2
	bl 0x7f90c	@ 0007fca2 fff733fe
.org 0x7fca6
	cmp r0, #0	@ 0007fca6 0028
.org 0x7fca8
	bne.n 0x7fd38	@ 0007fca8 46d1
.org 0x7fcaa
	strb r0, [r4, #15]	@ 0007fcaa e073
.org 0x7fcac
	b.n 0x7fd38	@ 0007fcac 44e0
.org 0x7fcae
	adds r5, r4, #0	@ 0007fcae 251c
.org 0x7fcb0
	adds r5, #188	@ 0007fcb0 bc35
.org 0x7fcb2
	ldr r0, [r5, #0]	@ 0007fcb2 2868
.org 0x7fcb4
	cmp r0, #0	@ 0007fcb4 0028
.org 0x7fcb6
	bne.n 0x7fd20	@ 0007fcb6 33d1
.org 0x7fcb8
	adds r0, r4, #0	@ 0007fcb8 201c
.org 0x7fcba
	adds r0, #193	@ 0007fcba c130
.org 0x7fcbc
	strb r6, [r0, #0]	@ 0007fcbc 0670
.org 0x7fcbe
	ldr r1, [pc, #80]	@ 0007fcbe 1449
.org 0x7fcc0
	ldrb r0, [r4, #13]	@ 0007fcc0 607b
.org 0x7fcc2
	lsls r0, r0, #2	@ 0007fcc2 8000
.org 0x7fcc4
	adds r0, r0, r1	@ 0007fcc4 4018
.org 0x7fcc6
	ldr r1, [r0, #0]	@ 0007fcc6 0168
.org 0x7fcc8
	adds r0, r4, #0	@ 0007fcc8 201c
.org 0x7fcca
	bl 0x128f80	@ 0007fcca a9f059f9
.org 0x7fcce
	ldr r1, [pc, #68]	@ 0007fcce 1149
.org 0x7fcd0
	ldrb r0, [r4, #13]	@ 0007fcd0 607b
.org 0x7fcd2
	lsls r0, r0, #2	@ 0007fcd2 8000
.org 0x7fcd4
	adds r0, r0, r1	@ 0007fcd4 4018
.org 0x7fcd6
	ldr r1, [r0, #0]	@ 0007fcd6 0168
.org 0x7fcd8
	adds r0, r4, #0	@ 0007fcd8 201c
.org 0x7fcda
	bl 0x128f80	@ 0007fcda a9f051f9
.org 0x7fcde
	adds r0, r4, #0	@ 0007fcde 201c
.org 0x7fce0
	adds r0, #140	@ 0007fce0 8c30
.org 0x7fce2
	ldr r0, [r0, #0]	@ 0007fce2 0068
.org 0x7fce4
	movs r1, #1	@ 0007fce4 0121
.org 0x7fce6
	ands r0, r1	@ 0007fce6 0840
.org 0x7fce8
	cmp r0, #0	@ 0007fce8 0028
.org 0x7fcea
	beq.n 0x7fd38	@ 0007fcea 25d0
.org 0x7fcec
	ldr r2, [pc, #40]	@ 0007fcec 0a4a
.org 0x7fcee
	movs r0, #0	@ 0007fcee 0020
.org 0x7fcf0
	adds r1, r4, #0	@ 0007fcf0 211c
.org 0x7fcf2
	bl 0x2adac	@ 0007fcf2 abf75bf8
.org 0x7fcf6
	str r0, [r5, #0]	@ 0007fcf6 2860
.org 0x7fcf8
	cmp r0, #0	@ 0007fcf8 0028
.org 0x7fcfa
	beq.n 0x7fd38	@ 0007fcfa 1dd0
.org 0x7fcfc
	adds r0, r4, #0	@ 0007fcfc 201c
.org 0x7fcfe
	adds r0, #116	@ 0007fcfe 7430
.org 0x7fd00
	ldr r1, [pc, #24]	@ 0007fd00 0649
.org 0x7fd02
	bl 0x5784	@ 0007fd02 85f73ffd
.org 0x7fd06
	ldr r0, [r4, #96]	@ 0007fd06 206e
.org 0x7fd08
	str r0, [r4, #104]	@ 0007fd08 a066
.org 0x7fd0a
	str r6, [r4, #96]	@ 0007fd0a 2666
.org 0x7fd0c
	b.n 0x7fd38	@ 0007fd0c 14e0
.org 0x7fd0e
	.byte 0x00	@ 0007fd0e data
.org 0x7fd0f
	.byte 0x00	@ 0007fd0f data
.org 0x7fd10
	.byte 0x34,0xdd,0x85,0x08	@ 0007fd10 data
.org 0x7fd14
	.byte 0x44,0xdd,0x85,0x08	@ 0007fd14 data
.org 0x7fd18
	.byte 0x90,0xdd,0x85,0x08	@ 0007fd18 data
.org 0x7fd1c
	.byte 0x78,0xdd,0x85,0x08	@ 0007fd1c data
.org 0x7fd20
	bl 0x2b3e4	@ 0007fd20 abf760fb
.org 0x7fd24
	cmp r0, #0	@ 0007fd24 0028
