@ FUN_0808a110  entry 0x0808a110  size 94
.thumb
.org 0x8a110
FUN_0808a110:
	push {r4, r5, r6, lr}	@ 0008a110 70b5
.org 0x8a112
	adds r4, r0, #0	@ 0008a112 041c
.org 0x8a114
	ldr r5, [r4, #44]	@ 0008a114 e56a
.org 0x8a116
	movs r2, #0	@ 0008a116 0022
.org 0x8a118
	ldr r6, [pc, #84]	@ 0008a118 154e
.org 0x8a11a
	ldr r0, [r6, #0]	@ 0008a11a 3068
.org 0x8a11c
	ldr r0, [r0, #84]	@ 0008a11c 406d
.org 0x8a11e
	ldr r1, [r5, #84]	@ 0008a11e 696d
.org 0x8a120
	subs r0, r0, r1	@ 0008a120 401a
.org 0x8a122
	cmp r0, #0	@ 0008a122 0028
.org 0x8a124
	ble.n 0x8a128	@ 0008a124 00dd
.org 0x8a126
	movs r2, #1	@ 0008a126 0122
.org 0x8a128
	adds r0, r5, #0	@ 0008a128 281c
.org 0x8a12a
	adds r0, #180	@ 0008a12a b430
.org 0x8a12c
	strb r2, [r0, #0]	@ 0008a12c 0270
.org 0x8a12e
	ldr r0, [r4, #20]	@ 0008a12e 6069
.org 0x8a130
	movs r1, #1	@ 0008a130 0121
.org 0x8a132
	ands r0, r1	@ 0008a132 0840
.org 0x8a134
	cmp r0, #0	@ 0008a134 0028
.org 0x8a136
	beq.n 0x8a168	@ 0008a136 17d0
.org 0x8a138
	movs r0, #32	@ 0008a138 2020
.org 0x8a13a
	bl 0x6984	@ 0008a13a 7cf723fc
.org 0x8a13e
	ldr r1, [r4, #20]	@ 0008a13e 6169
.org 0x8a140
	movs r0, #128	@ 0008a140 8020
.org 0x8a142
	lsls r0, r0, #2	@ 0008a142 8000
.org 0x8a144
	ands r0, r1	@ 0008a144 0840
.org 0x8a146
	cmp r0, #0	@ 0008a146 0028
.org 0x8a148
	beq.n 0x8a168	@ 0008a148 0ed0
.org 0x8a14a
	movs r0, #128	@ 0008a14a 8020
.org 0x8a14c
	lsls r0, r0, #10	@ 0008a14c 8002
.org 0x8a14e
	ands r1, r0	@ 0008a14e 0140
.org 0x8a150
	cmp r1, #0	@ 0008a150 0029
.org 0x8a152
	beq.n 0x8a168	@ 0008a152 09d0
.org 0x8a154
	ldr r0, [r6, #0]	@ 0008a154 3068
.org 0x8a156
	cmp r0, #0	@ 0008a156 0028
.org 0x8a158
	beq.n 0x8a168	@ 0008a158 06d0
.org 0x8a15a
	movs r1, #3	@ 0008a15a 0321
.org 0x8a15c
	movs r2, #8	@ 0008a15c 0822
.org 0x8a15e
	bl 0x3a578	@ 0008a15e b0f70bfa
.org 0x8a162
	adds r1, r5, #0	@ 0008a162 291c
.org 0x8a164
	adds r1, #195	@ 0008a164 c331
.org 0x8a166
	strb r0, [r1, #0]	@ 0008a166 0870
.org 0x8a168
	pop {r4, r5, r6}	@ 0008a168 70bc
.org 0x8a16a
	pop {r0}	@ 0008a16a 01bc
.org 0x8a16c
	bx r0	@ 0008a16c 0047
