@ FUN_0809b0e0  entry 0x0809b0e0  size 112
.thumb
.org 0x9b0e0
FUN_0809b0e0:
	push {r4, lr}	@ 0009b0e0 10b5
.org 0x9b0e2
	adds r4, r0, #0	@ 0009b0e2 041c
.org 0x9b0e4
	ldrb r1, [r4, #15]	@ 0009b0e4 e17b
.org 0x9b0e6
	cmp r1, #0	@ 0009b0e6 0029
.org 0x9b0e8
	bne.n 0x9b10c	@ 0009b0e8 10d1
.org 0x9b0ea
	adds r0, #183	@ 0009b0ea b730
.org 0x9b0ec
	strb r1, [r0, #0]	@ 0009b0ec 0170
.org 0x9b0ee
	subs r0, #67	@ 0009b0ee 4338
.org 0x9b0f0
	ldr r1, [pc, #92]	@ 0009b0f0 1749
.org 0x9b0f2
	ldr r1, [r1, #0]	@ 0009b0f2 0968
.org 0x9b0f4
	bl 0x5784	@ 0009b0f4 6af746fb
.org 0x9b0f8
	movs r1, #200	@ 0009b0f8 c821
.org 0x9b0fa
	lsls r1, r1, #7	@ 0009b0fa c901
.org 0x9b0fc
	adds r0, r4, #0	@ 0009b0fc 201c
.org 0x9b0fe
	bl 0x1cf00	@ 0009b0fe 81f7fffe
.org 0x9b102
	movs r0, #1	@ 0009b102 0120
.org 0x9b104
	strb r0, [r4, #18]	@ 0009b104 a074
.org 0x9b106
	ldrb r0, [r4, #15]	@ 0009b106 e07b
.org 0x9b108
	adds r0, #1	@ 0009b108 0130
.org 0x9b10a
	strb r0, [r4, #15]	@ 0009b10a e073
.org 0x9b10c
	adds r0, r4, #0	@ 0009b10c 201c
.org 0x9b10e
	bl 0x1cff0	@ 0009b10e 81f76fff
.org 0x9b112
	ldrb r0, [r4, #18]	@ 0009b112 a07c
.org 0x9b114
	cmp r0, #0	@ 0009b114 0028
.org 0x9b116
	beq.n 0x9b136	@ 0009b116 0ed0
.org 0x9b118
	adds r0, r4, #0	@ 0009b118 201c
.org 0x9b11a
	adds r0, #113	@ 0009b11a 7130
.org 0x9b11c
	ldrb r0, [r0, #0]	@ 0009b11c 0078
.org 0x9b11e
	lsls r0, r0, #24	@ 0009b11e 0006
.org 0x9b120
	asrs r0, r0, #24	@ 0009b120 0016
.org 0x9b122
	cmp r0, #4	@ 0009b122 0428
.org 0x9b124
	bne.n 0x9b136	@ 0009b124 07d1
.org 0x9b126
	adds r0, r4, #0	@ 0009b126 201c
.org 0x9b128
	adds r0, #116	@ 0009b128 7430
.org 0x9b12a
	ldr r1, [pc, #36]	@ 0009b12a 0949
.org 0x9b12c
	ldr r1, [r1, #8]	@ 0009b12c 8968
.org 0x9b12e
	bl 0x5784	@ 0009b12e 6af729fb
.org 0x9b132
	movs r0, #0	@ 0009b132 0020
.org 0x9b134
	strb r0, [r4, #18]	@ 0009b134 a074
.org 0x9b136
	adds r0, r4, #0	@ 0009b136 201c
.org 0x9b138
	adds r0, #180	@ 0009b138 b430
.org 0x9b13a
	ldrb r0, [r0, #0]	@ 0009b13a 0078
.org 0x9b13c
	cmp r0, #0	@ 0009b13c 0028
.org 0x9b13e
	beq.n 0x9b14a	@ 0009b13e 04d0
.org 0x9b140
	movs r1, #0	@ 0009b140 0021
.org 0x9b142
	movs r0, #1	@ 0009b142 0120
.org 0x9b144
	strb r0, [r4, #13]	@ 0009b144 6073
.org 0x9b146
	strb r1, [r4, #14]	@ 0009b146 a173
.org 0x9b148
	strb r1, [r4, #15]	@ 0009b148 e173
.org 0x9b14a
	pop {r4}	@ 0009b14a 10bc
.org 0x9b14c
	pop {r0}	@ 0009b14c 01bc
.org 0x9b14e
	bx r0	@ 0009b14e 0047
