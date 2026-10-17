@ FUN_0810bd40  entry 0x0810bd40  size 114
.thumb
.org 0x10bd40
FUN_0810bd40:
	push {r4, lr}	@ 0010bd40 10b5
.org 0x10bd42
	adds r4, r0, #0	@ 0010bd42 041c
.org 0x10bd44
	bl 0x1cc9c	@ 0010bd44 10f7aaff
.org 0x10bd48
	ldrb r1, [r4, #10]	@ 0010bd48 a17a
.org 0x10bd4a
	movs r0, #1	@ 0010bd4a 0120
.org 0x10bd4c
	orrs r0, r1	@ 0010bd4c 0843
.org 0x10bd4e
	movs r1, #2	@ 0010bd4e 0221
.org 0x10bd50
	orrs r0, r1	@ 0010bd50 0843
.org 0x10bd52
	strb r0, [r4, #10]	@ 0010bd52 a072
.org 0x10bd54
	adds r2, r4, #0	@ 0010bd54 221c
.org 0x10bd56
	adds r2, #73	@ 0010bd56 4932
.org 0x10bd58
	ldrb r1, [r2, #0]	@ 0010bd58 1178
.org 0x10bd5a
	movs r0, #13	@ 0010bd5a 0d20
.org 0x10bd5c
	negs r0, r0	@ 0010bd5c 4042
.org 0x10bd5e
	ands r0, r1	@ 0010bd5e 0840
.org 0x10bd60
	strb r0, [r2, #0]	@ 0010bd60 1070
.org 0x10bd62
	adds r1, r4, #0	@ 0010bd62 211c
.org 0x10bd64
	adds r1, #37	@ 0010bd64 2531
.org 0x10bd66
	movs r0, #17	@ 0010bd66 1120
.org 0x10bd68
	strb r0, [r1, #0]	@ 0010bd68 0870
.org 0x10bd6a
	ldrb r0, [r4, #17]	@ 0010bd6a 607c
.org 0x10bd6c
	cmp r0, #0	@ 0010bd6c 0028
.org 0x10bd6e
	bne.n 0x10bd80	@ 0010bd6e 07d1
.org 0x10bd70
	ldr r1, [pc, #8]	@ 0010bd70 0249
.org 0x10bd72
	adds r0, r4, #0	@ 0010bd72 201c
.org 0x10bd74
	bl 0x1cf00	@ 0010bd74 11f7c4f8
.org 0x10bd78
	b.n 0x10bda2	@ 0010bd78 13e0
.org 0x10bd7a
	.byte 0x00	@ 0010bd7a data
.org 0x10bd7b
	.byte 0x00	@ 0010bd7b data
.org 0x10bd7c
	.byte 0x04,0x65,0x00,0x00	@ 0010bd7c data
.org 0x10bd80
	ldr r0, [pc, #52]	@ 0010bd80 0d48
.org 0x10bd82
	ldr r2, [r0, #0]	@ 0010bd82 0268
.org 0x10bd84
	ldr r1, [pc, #52]	@ 0010bd84 0d49
.org 0x10bd86
	ldrb r0, [r4, #17]	@ 0010bd86 607c
.org 0x10bd88
	adds r0, r0, r1	@ 0010bd88 4018
.org 0x10bd8a
	movs r1, #1	@ 0010bd8a 0121
.org 0x10bd8c
	ldrb r0, [r0, #0]	@ 0010bd8c 0078
.org 0x10bd8e
	lsls r1, r0	@ 0010bd8e 8140
.org 0x10bd90
	ldr r0, [r2, #16]	@ 0010bd90 1069
.org 0x10bd92
	ands r0, r1	@ 0010bd92 0840
.org 0x10bd94
	ldr r1, [pc, #40]	@ 0010bd94 0a49
.org 0x10bd96
	cmp r0, #0	@ 0010bd96 0028
.org 0x10bd98
	beq.n 0x10bd9c	@ 0010bd98 00d0
.org 0x10bd9a
	subs r1, #1	@ 0010bd9a 0139
.org 0x10bd9c
	adds r0, r4, #0	@ 0010bd9c 201c
.org 0x10bd9e
	bl 0x1cf00	@ 0010bd9e 11f7aff8
.org 0x10bda2
	ldr r0, [pc, #32]	@ 0010bda2 0848
.org 0x10bda4
	ldrb r1, [r4, #17]	@ 0010bda4 617c
.org 0x10bda6
	lsls r1, r1, #3	@ 0010bda6 c900
.org 0x10bda8
	adds r1, r1, r0	@ 0010bda8 0918
.org 0x10bdaa
	ldr r0, [r1, #0]	@ 0010bdaa 0868
.org 0x10bdac
	ldr r1, [r1, #4]	@ 0010bdac 4968
.org 0x10bdae
	str r0, [r4, #84]	@ 0010bdae 6065
.org 0x10bdb0
	str r1, [r4, #88]	@ 0010bdb0 a165
