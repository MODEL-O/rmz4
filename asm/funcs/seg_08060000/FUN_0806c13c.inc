@ FUN_0806c13c  entry 0x0806c13c  size 194
.thumb
.org 0x6c13c
FUN_0806c13c:
	push {r4, r5, lr}	@ 0006c13c 30b5
.org 0x6c13e
	adds r4, r0, #0	@ 0006c13e 041c
.org 0x6c140
	ldrb r5, [r4, #14]	@ 0006c140 a57b
.org 0x6c142
	cmp r5, #0	@ 0006c142 002d
.org 0x6c144
	bne.n 0x6c174	@ 0006c144 16d1
.org 0x6c146
	ldr r1, [pc, #92]	@ 0006c146 1749
.org 0x6c148
	bl 0x1cf00	@ 0006c148 b0f7dafe
.org 0x6c14c
	movs r0, #211	@ 0006c14c d320
.org 0x6c14e
	bl 0x2b10	@ 0006c14e 96f7dffc
.org 0x6c152
	adds r0, r4, #0	@ 0006c152 201c
.org 0x6c154
	adds r0, #116	@ 0006c154 7430
.org 0x6c156
	ldr r1, [pc, #80]	@ 0006c156 1449
.org 0x6c158
	bl 0x5784	@ 0006c158 99f714fb
.org 0x6c15c
	ldr r0, [r4, #92]	@ 0006c15c e06d
.org 0x6c15e
	cmp r0, #0	@ 0006c15e 0028
.org 0x6c160
	bge.n 0x6c164	@ 0006c160 00da
.org 0x6c162
	adds r0, #3	@ 0006c162 0330
.org 0x6c164
	asrs r0, r0, #2	@ 0006c164 8010
.org 0x6c166
	str r0, [r4, #100]	@ 0006c166 6066
.org 0x6c168
	movs r0, #4	@ 0006c168 0420
.org 0x6c16a
	strb r0, [r4, #18]	@ 0006c16a a074
.org 0x6c16c
	strb r5, [r4, #15]	@ 0006c16c e573
.org 0x6c16e
	ldrb r0, [r4, #14]	@ 0006c16e a07b
.org 0x6c170
	adds r0, #1	@ 0006c170 0130
.org 0x6c172
	strb r0, [r4, #14]	@ 0006c172 a073
.org 0x6c174
	adds r0, r4, #0	@ 0006c174 201c
.org 0x6c176
	bl 0x1cff0	@ 0006c176 b0f73bff
.org 0x6c17a
	ldrb r2, [r4, #15]	@ 0006c17a e27b
.org 0x6c17c
	adds r0, r2, #0	@ 0006c17c 101c
.org 0x6c17e
	cmp r0, #0	@ 0006c17e 0028
.org 0x6c180
	bne.n 0x6c1ac	@ 0006c180 14d1
.org 0x6c182
	ldr r0, [r4, #84]	@ 0006c182 606d
.org 0x6c184
	ldr r1, [r4, #92]	@ 0006c184 e16d
.org 0x6c186
	adds r0, r0, r1	@ 0006c186 4018
.org 0x6c188
	str r0, [r4, #84]	@ 0006c188 6065
.org 0x6c18a
	ldr r0, [r4, #100]	@ 0006c18a 606e
.org 0x6c18c
	subs r1, r1, r0	@ 0006c18c 091a
.org 0x6c18e
	str r1, [r4, #92]	@ 0006c18e e165
.org 0x6c190
	ldrb r0, [r4, #18]	@ 0006c190 a07c
.org 0x6c192
	subs r0, #1	@ 0006c192 0138
.org 0x6c194
	strb r0, [r4, #18]	@ 0006c194 a074
.org 0x6c196
	lsls r0, r0, #24	@ 0006c196 0006
.org 0x6c198
	lsrs r0, r0, #24	@ 0006c198 000e
.org 0x6c19a
	cmp r0, #255	@ 0006c19a ff28
.org 0x6c19c
	bne.n 0x6c206	@ 0006c19c 33d1
.org 0x6c19e
	adds r0, r2, #1	@ 0006c19e 501c
.org 0x6c1a0
	strb r0, [r4, #15]	@ 0006c1a0 e073
.org 0x6c1a2
	b.n 0x6c206	@ 0006c1a2 30e0
.org 0x6c1a4
	.byte 0x11,0xaa,0x00,0x00	@ 0006c1a4 data
.org 0x6c1a8
	.byte 0xac,0xc1,0x85,0x08	@ 0006c1a8 data
.org 0x6c1ac
	cmp r0, #1	@ 0006c1ac 0128
.org 0x6c1ae
	bne.n 0x6c206	@ 0006c1ae 2ad1
.org 0x6c1b0
	adds r0, r4, #0	@ 0006c1b0 201c
.org 0x6c1b2
	adds r0, #115	@ 0006c1b2 7330
.org 0x6c1b4
	ldrb r0, [r0, #0]	@ 0006c1b4 0078
.org 0x6c1b6
	cmp r0, #3	@ 0006c1b6 0328
.org 0x6c1b8
	bne.n 0x6c206	@ 0006c1b8 25d1
.org 0x6c1ba
	ldrb r1, [r4, #10]	@ 0006c1ba a17a
.org 0x6c1bc
	movs r0, #16	@ 0006c1bc 1020
.org 0x6c1be
	ands r0, r1	@ 0006c1be 0840
.org 0x6c1c0
	lsls r0, r0, #24	@ 0006c1c0 0006
.org 0x6c1c2
	lsrs r2, r0, #24	@ 0006c1c2 020e
.org 0x6c1c4
	cmp r2, #0	@ 0006c1c4 002a
.org 0x6c1c6
	beq.n 0x6c1e4	@ 0006c1c6 0dd0
.org 0x6c1c8
	adds r0, r4, #0	@ 0006c1c8 201c
.org 0x6c1ca
	adds r0, #180	@ 0006c1ca b430
.org 0x6c1cc
	ldr r0, [r0, #24]	@ 0006c1cc 8069
.org 0x6c1ce
	ldr r1, [pc, #16]	@ 0006c1ce 0449
.org 0x6c1d0
	adds r0, r0, r1	@ 0006c1d0 4018
.org 0x6c1d2
	ldr r1, [r4, #84]	@ 0006c1d2 616d
.org 0x6c1d4
	cmp r1, r0	@ 0006c1d4 8142
.org 0x6c1d6
	ble.n 0x6c1fe	@ 0006c1d6 12dd
.org 0x6c1d8
	movs r1, #0	@ 0006c1d8 0021
.org 0x6c1da
	movs r0, #21	@ 0006c1da 1520
.org 0x6c1dc
	b.n 0x6c202	@ 0006c1dc 11e0
.org 0x6c1de
	.byte 0x00	@ 0006c1de data
.org 0x6c1df
	.byte 0x00	@ 0006c1df data
.org 0x6c1e0
	.byte 0x00,0xe0,0xff,0xff	@ 0006c1e0 data
.org 0x6c1e4
	adds r0, r4, #0	@ 0006c1e4 201c
.org 0x6c1e6
	adds r0, #180	@ 0006c1e6 b430
.org 0x6c1e8
	ldr r0, [r0, #20]	@ 0006c1e8 4069
.org 0x6c1ea
	movs r1, #128	@ 0006c1ea 8021
.org 0x6c1ec
	lsls r1, r1, #6	@ 0006c1ec 8901
.org 0x6c1ee
	adds r0, r0, r1	@ 0006c1ee 4018
.org 0x6c1f0
	ldr r1, [r4, #84]	@ 0006c1f0 616d
.org 0x6c1f2
	cmp r1, r0	@ 0006c1f2 8142
.org 0x6c1f4
	bge.n 0x6c1fe	@ 0006c1f4 03da
.org 0x6c1f6
	movs r0, #21	@ 0006c1f6 1520
.org 0x6c1f8
	strb r0, [r4, #13]	@ 0006c1f8 6073
.org 0x6c1fa
	strb r2, [r4, #14]	@ 0006c1fa a273
.org 0x6c1fc
	b.n 0x6c206	@ 0006c1fc 03e0
