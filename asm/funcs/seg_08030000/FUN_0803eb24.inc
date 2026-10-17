@ FUN_0803eb24  entry 0x0803eb24  size 186
.thumb
.org 0x3eb24
FUN_0803eb24:
	push {r4, r5, lr}	@ 0003eb24 30b5
.org 0x3eb26
	adds r4, r0, #0	@ 0003eb26 041c
.org 0x3eb28
	adds r0, #180	@ 0003eb28 b430
.org 0x3eb2a
	ldr r5, [r0, #0]	@ 0003eb2a 0568
.org 0x3eb2c
	ldrb r0, [r4, #13]	@ 0003eb2c 607b
.org 0x3eb2e
	cmp r0, #1	@ 0003eb2e 0128
.org 0x3eb30
	beq.n 0x3eb84	@ 0003eb30 28d0
.org 0x3eb32
	cmp r0, #1	@ 0003eb32 0128
.org 0x3eb34
	bgt.n 0x3eb3c	@ 0003eb34 02dc
.org 0x3eb36
	cmp r0, #0	@ 0003eb36 0028
.org 0x3eb38
	beq.n 0x3eb46	@ 0003eb38 05d0
.org 0x3eb3a
	b.n 0x3ebdc	@ 0003eb3a 4fe0
.org 0x3eb3c
	cmp r0, #2	@ 0003eb3c 0228
.org 0x3eb3e
	beq.n 0x3eba4	@ 0003eb3e 31d0
.org 0x3eb40
	cmp r0, #3	@ 0003eb40 0328
.org 0x3eb42
	beq.n 0x3ebc0	@ 0003eb42 3dd0
.org 0x3eb44
	b.n 0x3ebdc	@ 0003eb44 4ae0
.org 0x3eb46
	ldr r1, [pc, #88]	@ 0003eb46 1649
.org 0x3eb48
	adds r0, r4, #0	@ 0003eb48 201c
.org 0x3eb4a
	bl 0x1cf00	@ 0003eb4a def7d9f9
.org 0x3eb4e
	adds r2, r5, #0	@ 0003eb4e 2a1c
.org 0x3eb50
	adds r2, #230	@ 0003eb50 e632
.org 0x3eb52
	ldrb r0, [r2, #0]	@ 0003eb52 1078
.org 0x3eb54
	adds r1, r0, #0	@ 0003eb54 011c
.org 0x3eb56
	cmp r1, #0	@ 0003eb56 0029
.org 0x3eb58
	beq.n 0x3eb70	@ 0003eb58 0ad0
.org 0x3eb5a
	cmp r1, #255	@ 0003eb5a ff29
.org 0x3eb5c
	beq.n 0x3eb62	@ 0003eb5c 01d0
.org 0x3eb5e
	subs r0, #1	@ 0003eb5e 0138
.org 0x3eb60
	strb r0, [r2, #0]	@ 0003eb60 1070
.org 0x3eb62
	adds r0, r5, #0	@ 0003eb62 281c
.org 0x3eb64
	adds r1, r4, #0	@ 0003eb64 211c
.org 0x3eb66
	bl 0x44ebc	@ 0003eb66 06f0a9f9
.org 0x3eb6a
	movs r0, #72	@ 0003eb6a 4820
.org 0x3eb6c
	bl 0x2b10	@ 0003eb6c c3f7d0ff
.org 0x3eb70
	movs r0, #170	@ 0003eb70 aa20
.org 0x3eb72
	lsls r0, r0, #1	@ 0003eb72 4000
.org 0x3eb74
	adds r1, r5, r0	@ 0003eb74 2918
.org 0x3eb76
	movs r0, #0	@ 0003eb76 0020
.org 0x3eb78
	strb r0, [r1, #0]	@ 0003eb78 0870
.org 0x3eb7a
	movs r0, #2	@ 0003eb7a 0220
.org 0x3eb7c
	strb r0, [r4, #18]	@ 0003eb7c a074
.org 0x3eb7e
	ldrb r0, [r4, #13]	@ 0003eb7e 607b
.org 0x3eb80
	adds r0, #1	@ 0003eb80 0130
.org 0x3eb82
	strb r0, [r4, #13]	@ 0003eb82 6073
.org 0x3eb84
	ldrb r0, [r4, #18]	@ 0003eb84 a07c
.org 0x3eb86
	subs r0, #1	@ 0003eb86 0138
.org 0x3eb88
	strb r0, [r4, #18]	@ 0003eb88 a074
.org 0x3eb8a
	lsls r0, r0, #24	@ 0003eb8a 0006
.org 0x3eb8c
	cmp r0, #0	@ 0003eb8c 0028
.org 0x3eb8e
	bne.n 0x3ebdc	@ 0003eb8e 25d1
.org 0x3eb90
	movs r0, #170	@ 0003eb90 aa20
.org 0x3eb92
	lsls r0, r0, #1	@ 0003eb92 4000
.org 0x3eb94
	adds r1, r5, r0	@ 0003eb94 2918
.org 0x3eb96
	movs r0, #1	@ 0003eb96 0120
.org 0x3eb98
	strb r0, [r1, #0]	@ 0003eb98 0870
.org 0x3eb9a
	movs r0, #64	@ 0003eb9a 4020
.org 0x3eb9c
	strb r0, [r4, #18]	@ 0003eb9c a074
.org 0x3eb9e
	b.n 0x3ebd6	@ 0003eb9e 1ae0
.org 0x3eba0
	.byte 0x0d,0x82,0x00,0x00	@ 0003eba0 data
.org 0x3eba4
	ldrb r0, [r4, #18]	@ 0003eba4 a07c
.org 0x3eba6
	subs r0, #1	@ 0003eba6 0138
.org 0x3eba8
	strb r0, [r4, #18]	@ 0003eba8 a074
.org 0x3ebaa
	lsls r0, r0, #24	@ 0003ebaa 0006
.org 0x3ebac
	cmp r0, #0	@ 0003ebac 0028
.org 0x3ebae
	bne.n 0x3ebdc	@ 0003ebae 15d1
.org 0x3ebb0
	movs r0, #170	@ 0003ebb0 aa20
.org 0x3ebb2
	lsls r0, r0, #1	@ 0003ebb2 4000
.org 0x3ebb4
	adds r1, r5, r0	@ 0003ebb4 2918
.org 0x3ebb6
	movs r0, #3	@ 0003ebb6 0320
.org 0x3ebb8
	strb r0, [r1, #0]	@ 0003ebb8 0870
.org 0x3ebba
	movs r0, #16	@ 0003ebba 1020
.org 0x3ebbc
	strb r0, [r4, #18]	@ 0003ebbc a074
.org 0x3ebbe
	b.n 0x3ebd6	@ 0003ebbe 0ae0
.org 0x3ebc0
	ldrb r0, [r4, #18]	@ 0003ebc0 a07c
.org 0x3ebc2
	subs r0, #1	@ 0003ebc2 0138
.org 0x3ebc4
	strb r0, [r4, #18]	@ 0003ebc4 a074
.org 0x3ebc6
	lsls r0, r0, #24	@ 0003ebc6 0006
.org 0x3ebc8
	cmp r0, #0	@ 0003ebc8 0028
.org 0x3ebca
	bne.n 0x3ebdc	@ 0003ebca 07d1
.org 0x3ebcc
	movs r0, #170	@ 0003ebcc aa20
.org 0x3ebce
	lsls r0, r0, #1	@ 0003ebce 4000
.org 0x3ebd0
	adds r1, r5, r0	@ 0003ebd0 2918
.org 0x3ebd2
	movs r0, #4	@ 0003ebd2 0420
.org 0x3ebd4
	strb r0, [r1, #0]	@ 0003ebd4 0870
.org 0x3ebd6
	ldrb r0, [r4, #13]	@ 0003ebd6 607b
.org 0x3ebd8
	adds r0, #1	@ 0003ebd8 0130
.org 0x3ebda
	strb r0, [r4, #13]	@ 0003ebda 6073
.org 0x3ebdc
	pop {r4, r5}	@ 0003ebdc 30bc
