@ FUN_0803a140  entry 0x0803a140  size 64
.thumb
.org 0x3a140
FUN_0803a140:
	push {lr}	@ 0003a140 00b5
.org 0x3a142
	adds r2, r0, #0	@ 0003a142 021c
.org 0x3a144
	adds r0, #180	@ 0003a144 b430
.org 0x3a146
	ldrb r0, [r0, #12]	@ 0003a146 007b
.org 0x3a148
	cmp r0, #4	@ 0003a148 0428
.org 0x3a14a
	bne.n 0x3a160	@ 0003a14a 09d1
.org 0x3a14c
	ldr r1, [pc, #12]	@ 0003a14c 0349
.org 0x3a14e
	adds r0, r2, r1	@ 0003a14e 5018
.org 0x3a150
	ldrb r1, [r0, #0]	@ 0003a150 0178
.org 0x3a152
	movs r0, #16	@ 0003a152 1020
.org 0x3a154
	ands r0, r1	@ 0003a154 0840
.org 0x3a156
	cmp r0, #0	@ 0003a156 0028
.org 0x3a158
	beq.n 0x3a170	@ 0003a158 0ad0
.org 0x3a15a
	b.n 0x3a188	@ 0003a15a 15e0
.org 0x3a15c
	.byte 0x53,0x01,0x00,0x00	@ 0003a15c data
.org 0x3a160
	ldr r1, [pc, #8]	@ 0003a160 0249
.org 0x3a162
	adds r0, r2, r1	@ 0003a162 5018
.org 0x3a164
	ldrb r1, [r0, #0]	@ 0003a164 0178
.org 0x3a166
	movs r0, #32	@ 0003a166 2020
.org 0x3a168
	b.n 0x3a154	@ 0003a168 f4e7
.org 0x3a16a
	.byte 0x00	@ 0003a16a data
.org 0x3a16b
	.byte 0x00	@ 0003a16b data
.org 0x3a16c
	.byte 0x53,0x01,0x00,0x00	@ 0003a16c data
.org 0x3a170
	ldr r1, [pc, #16]	@ 0003a170 0449
.org 0x3a172
	adds r0, r2, r1	@ 0003a172 5018
.org 0x3a174
	ldrh r1, [r0, #0]	@ 0003a174 0188
.org 0x3a176
	movs r0, #128	@ 0003a176 8020
.org 0x3a178
	lsls r0, r0, #8	@ 0003a178 0002
.org 0x3a17a
	ands r0, r1	@ 0003a17a 0840
.org 0x3a17c
	cmp r0, #0	@ 0003a17c 0028
.org 0x3a17e
	bne.n 0x3a188	@ 0003a17e 03d1
