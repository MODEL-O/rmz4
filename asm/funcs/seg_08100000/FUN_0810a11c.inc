@ FUN_0810a11c  entry 0x0810a11c  size 72
.thumb
.org 0x10a11c
FUN_0810a11c:
	push {lr}	@ 0010a11c 00b5
.org 0x10a11e
	adds r2, r0, #0	@ 0010a11e 021c
.org 0x10a120
	adds r3, r2, #0	@ 0010a120 131c
.org 0x10a122
	adds r3, #140	@ 0010a122 8c33
.org 0x10a124
	ldr r0, [r3, #0]	@ 0010a124 1868
.org 0x10a126
	movs r1, #4	@ 0010a126 0421
.org 0x10a128
	ands r0, r1	@ 0010a128 0840
.org 0x10a12a
	cmp r0, #0	@ 0010a12a 0028
.org 0x10a12c
	beq.n 0x10a144	@ 0010a12c 0ad0
.org 0x10a12e
	movs r1, #0	@ 0010a12e 0021
.org 0x10a130
	str r1, [r3, #0]	@ 0010a130 1960
.org 0x10a132
	adds r0, r2, #0	@ 0010a132 101c
.org 0x10a134
	adds r0, #144	@ 0010a134 9030
.org 0x10a136
	str r1, [r0, #0]	@ 0010a136 0160
.org 0x10a138
	adds r0, #4	@ 0010a138 0430
.org 0x10a13a
	strb r1, [r0, #0]	@ 0010a13a 0170
.org 0x10a13c
	ldrb r1, [r2, #10]	@ 0010a13c 917a
.org 0x10a13e
	movs r0, #251	@ 0010a13e fb20
.org 0x10a140
	ands r0, r1	@ 0010a140 0840
.org 0x10a142
	strb r0, [r2, #10]	@ 0010a142 9072
.org 0x10a144
	adds r0, r2, #0	@ 0010a144 101c
.org 0x10a146
	adds r0, #115	@ 0010a146 7330
.org 0x10a148
	ldrb r0, [r0, #0]	@ 0010a148 0078
.org 0x10a14a
	cmp r0, #3	@ 0010a14a 0328
.org 0x10a14c
	bne.n 0x10a160	@ 0010a14c 08d1
.org 0x10a14e
	ldr r1, [pc, #20]	@ 0010a14e 0549
.org 0x10a150
	ldrb r0, [r2, #9]	@ 0010a150 507a
.org 0x10a152
	lsls r0, r0, #2	@ 0010a152 8000
.org 0x10a154
	adds r0, r0, r1	@ 0010a154 4018
.org 0x10a156
	movs r1, #2	@ 0010a156 0221
.org 0x10a158
	str r1, [r2, #12]	@ 0010a158 d160
.org 0x10a15a
	ldr r0, [r0, #0]	@ 0010a15a 0068
.org 0x10a15c
	ldr r0, [r0, #8]	@ 0010a15c 8068
.org 0x10a15e
	str r0, [r2, #20]	@ 0010a15e 5061
.org 0x10a160
	pop {r0}	@ 0010a160 01bc
.org 0x10a162
	bx r0	@ 0010a162 0047
