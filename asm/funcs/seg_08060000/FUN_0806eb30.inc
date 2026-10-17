@ FUN_0806eb30  entry 0x0806eb30  size 184
.thumb
.org 0x6eb30
FUN_0806eb30:
	push {r4, r5, r6, lr}	@ 0006eb30 70b5
.org 0x6eb32
	sub sp, #16	@ 0006eb32 84b0
.org 0x6eb34
	adds r6, r0, #0	@ 0006eb34 061c
.org 0x6eb36
	ldr r1, [pc, #76]	@ 0006eb36 1349
.org 0x6eb38
	mov r0, sp	@ 0006eb38 6846
.org 0x6eb3a
	movs r2, #5	@ 0006eb3a 0522
.org 0x6eb3c
	bl 0x129258	@ 0006eb3c baf08cfb
.org 0x6eb40
	ldrb r4, [r6, #15]	@ 0006eb40 f47b
.org 0x6eb42
	cmp r4, #0	@ 0006eb42 002c
.org 0x6eb44
	bne.n 0x6eb66	@ 0006eb44 0fd1
.org 0x6eb46
	adds r0, r6, #0	@ 0006eb46 301c
.org 0x6eb48
	adds r0, #116	@ 0006eb48 7430
.org 0x6eb4a
	ldr r1, [pc, #60]	@ 0006eb4a 0f49
.org 0x6eb4c
	bl 0x5784	@ 0006eb4c 96f71afe
.org 0x6eb50
	movs r1, #173	@ 0006eb50 ad21
.org 0x6eb52
	lsls r1, r1, #8	@ 0006eb52 0902
.org 0x6eb54
	adds r0, r6, #0	@ 0006eb54 301c
.org 0x6eb56
	bl 0x1cf00	@ 0006eb56 aef7d3f9
.org 0x6eb5a
	str r4, [r6, #100]	@ 0006eb5a 7466
.org 0x6eb5c
	movs r0, #5	@ 0006eb5c 0520
.org 0x6eb5e
	strb r0, [r6, #18]	@ 0006eb5e b074
.org 0x6eb60
	ldrb r0, [r6, #15]	@ 0006eb60 f07b
.org 0x6eb62
	adds r0, #1	@ 0006eb62 0130
.org 0x6eb64
	strb r0, [r6, #15]	@ 0006eb64 f073
.org 0x6eb66
	adds r0, r6, #0	@ 0006eb66 301c
.org 0x6eb68
	bl 0x1cff0	@ 0006eb68 aef742fa
.org 0x6eb6c
	ldr r0, [r6, #100]	@ 0006eb6c 706e
.org 0x6eb6e
	subs r0, #1	@ 0006eb6e 0138
.org 0x6eb70
	str r0, [r6, #100]	@ 0006eb70 7066
.org 0x6eb72
	cmp r0, #0	@ 0006eb72 0028
.org 0x6eb74
	bgt.n 0x6ebe8	@ 0006eb74 38dc
.org 0x6eb76
	ldrb r1, [r6, #18]	@ 0006eb76 b17c
.org 0x6eb78
	cmp r1, #0	@ 0006eb78 0029
.org 0x6eb7a
	bne.n 0x6eb8c	@ 0006eb7a 07d1
.org 0x6eb7c
	movs r0, #2	@ 0006eb7c 0220
.org 0x6eb7e
	strb r0, [r6, #14]	@ 0006eb7e b073
.org 0x6eb80
	strb r1, [r6, #15]	@ 0006eb80 f173
.org 0x6eb82
	b.n 0x6ebe8	@ 0006eb82 31e0
.org 0x6eb84
	.byte 0x03,0x99,0x12,0x08	@ 0006eb84 data
.org 0x6eb88
	.byte 0xf4,0xc5,0x85,0x08	@ 0006eb88 data
.org 0x6eb8c
	ldr r0, [pc, #96]	@ 0006eb8c 1848
.org 0x6eb8e
	bl 0x2b10	@ 0006eb8e 93f7bfff
.org 0x6eb92
	ldr r0, [r6, #84]	@ 0006eb92 706d
.org 0x6eb94
	ldr r1, [pc, #92]	@ 0006eb94 1749
.org 0x6eb96
	adds r0, r0, r1	@ 0006eb96 4018
.org 0x6eb98
	str r0, [sp, #8]	@ 0006eb98 0290
.org 0x6eb9a
	ldr r0, [r6, #88]	@ 0006eb9a b06d
.org 0x6eb9c
	add r5, sp, #8	@ 0006eb9c 02ad
.org 0x6eb9e
	str r0, [r5, #4]	@ 0006eb9e 6860
.org 0x6eba0
	ldrb r1, [r6, #18]	@ 0006eba0 b17c
.org 0x6eba2
	movs r0, #5	@ 0006eba2 0520
.org 0x6eba4
	subs r0, r0, r1	@ 0006eba4 401a
.org 0x6eba6
	lsls r0, r0, #24	@ 0006eba6 0006
.org 0x6eba8
	lsrs r0, r0, #24	@ 0006eba8 000e
.org 0x6ebaa
	add r0, sp	@ 0006ebaa 6844
.org 0x6ebac
	ldrb r4, [r0, #0]	@ 0006ebac 0478
.org 0x6ebae
	adds r0, r6, #0	@ 0006ebae 301c
.org 0x6ebb0
	adds r1, r5, #0	@ 0006ebb0 291c
.org 0x6ebb2
	movs r2, #2	@ 0006ebb2 0222
.org 0x6ebb4
	adds r3, r4, #0	@ 0006ebb4 231c
.org 0x6ebb6
	bl 0xbd94c	@ 0006ebb6 4ef0c9fe
.org 0x6ebba
	ldr r0, [r6, #84]	@ 0006ebba 706d
.org 0x6ebbc
	movs r1, #128	@ 0006ebbc 8021
.org 0x6ebbe
	lsls r1, r1, #5	@ 0006ebbe 4901
.org 0x6ebc0
	adds r0, r0, r1	@ 0006ebc0 4018
.org 0x6ebc2
	str r0, [sp, #8]	@ 0006ebc2 0290
.org 0x6ebc4
	movs r0, #160	@ 0006ebc4 a020
.org 0x6ebc6
	lsls r0, r0, #1	@ 0006ebc6 4000
.org 0x6ebc8
	subs r0, r0, r4	@ 0006ebc8 001b
.org 0x6ebca
	lsls r0, r0, #1	@ 0006ebca 4000
.org 0x6ebcc
	adds r4, r4, r0	@ 0006ebcc 2418
.org 0x6ebce
	lsls r4, r4, #24	@ 0006ebce 2406
.org 0x6ebd0
	lsrs r4, r4, #24	@ 0006ebd0 240e
.org 0x6ebd2
	adds r0, r6, #0	@ 0006ebd2 301c
.org 0x6ebd4
	adds r1, r5, #0	@ 0006ebd4 291c
.org 0x6ebd6
	movs r2, #2	@ 0006ebd6 0222
.org 0x6ebd8
	adds r3, r4, #0	@ 0006ebd8 231c
.org 0x6ebda
	bl 0xbd94c	@ 0006ebda 4ef0b7fe
.org 0x6ebde
	ldrb r0, [r6, #18]	@ 0006ebde b07c
.org 0x6ebe0
	subs r0, #1	@ 0006ebe0 0138
.org 0x6ebe2
	strb r0, [r6, #18]	@ 0006ebe2 b074
.org 0x6ebe4
	movs r0, #80	@ 0006ebe4 5020
.org 0x6ebe6
	str r0, [r6, #100]	@ 0006ebe6 7066
