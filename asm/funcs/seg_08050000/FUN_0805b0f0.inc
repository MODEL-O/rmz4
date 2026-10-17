@ FUN_0805b0f0  entry 0x0805b0f0  size 78
.thumb
.org 0x5b0f0
FUN_0805b0f0:
	push {r4, lr}	@ 0005b0f0 10b5
.org 0x5b0f2
	adds r4, r0, #0	@ 0005b0f2 041c
.org 0x5b0f4
	ldrb r0, [r4, #15]	@ 0005b0f4 e07b
.org 0x5b0f6
	cmp r0, #0	@ 0005b0f6 0028
.org 0x5b0f8
	bne.n 0x5b11e	@ 0005b0f8 11d1
.org 0x5b0fa
	adds r0, r4, #0	@ 0005b0fa 201c
.org 0x5b0fc
	adds r0, #116	@ 0005b0fc 7430
.org 0x5b0fe
	ldr r1, [pc, #64]	@ 0005b0fe 1049
.org 0x5b100
	bl 0x5784	@ 0005b100 aaf740fb
.org 0x5b104
	ldr r1, [pc, #60]	@ 0005b104 0f49
.org 0x5b106
	adds r0, r4, #0	@ 0005b106 201c
.org 0x5b108
	bl 0x1cf00	@ 0005b108 c1f7fafe
.org 0x5b10c
	adds r1, r4, #0	@ 0005b10c 211c
.org 0x5b10e
	adds r1, #189	@ 0005b10e bd31
.org 0x5b110
	movs r0, #1	@ 0005b110 0120
.org 0x5b112
	strb r0, [r1, #0]	@ 0005b112 0870
.org 0x5b114
	movs r0, #48	@ 0005b114 3020
.org 0x5b116
	strb r0, [r4, #18]	@ 0005b116 a074
.org 0x5b118
	ldrb r0, [r4, #15]	@ 0005b118 e07b
.org 0x5b11a
	adds r0, #1	@ 0005b11a 0130
.org 0x5b11c
	strb r0, [r4, #15]	@ 0005b11c e073
.org 0x5b11e
	adds r0, r4, #0	@ 0005b11e 201c
.org 0x5b120
	bl 0x1cff0	@ 0005b120 c1f766ff
.org 0x5b124
	ldrb r0, [r4, #18]	@ 0005b124 a07c
.org 0x5b126
	subs r0, #1	@ 0005b126 0138
.org 0x5b128
	strb r0, [r4, #18]	@ 0005b128 a074
.org 0x5b12a
	lsls r0, r0, #24	@ 0005b12a 0006
.org 0x5b12c
	lsrs r1, r0, #24	@ 0005b12c 010e
.org 0x5b12e
	cmp r1, #0	@ 0005b12e 0029
.org 0x5b130
	bne.n 0x5b138	@ 0005b130 02d1
.org 0x5b132
	movs r0, #2	@ 0005b132 0220
.org 0x5b134
	strb r0, [r4, #14]	@ 0005b134 a073
.org 0x5b136
	strb r1, [r4, #15]	@ 0005b136 e173
.org 0x5b138
	pop {r4}	@ 0005b138 10bc
.org 0x5b13a
	pop {r0}	@ 0005b13a 01bc
.org 0x5b13c
	bx r0	@ 0005b13c 0047
