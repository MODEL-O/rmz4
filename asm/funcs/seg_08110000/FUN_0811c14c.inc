@ FUN_0811c14c  entry 0x0811c14c  size 108
.thumb
.org 0x11c14c
FUN_0811c14c:
	push {r4, lr}	@ 0011c14c 10b5
.org 0x11c14e
	adds r2, r0, #0	@ 0011c14e 021c
.org 0x11c150
	ldr r1, [pc, #16]	@ 0011c150 0449
.org 0x11c152
	adds r0, r2, r1	@ 0011c152 5018
.org 0x11c154
	ldrb r0, [r0, #0]	@ 0011c154 0078
.org 0x11c156
	cmp r0, #0	@ 0011c156 0028
.org 0x11c158
	bne.n 0x11c16c	@ 0011c158 08d1
.org 0x11c15a
	ldr r1, [pc, #12]	@ 0011c15a 0349
.org 0x11c15c
	ldrh r0, [r1, #0]	@ 0011c15c 0888
.org 0x11c15e
	adds r0, #16	@ 0011c15e 1030
.org 0x11c160
	b.n 0x11c172	@ 0011c160 07e0
.org 0x11c162
	.byte 0x00	@ 0011c162 data
.org 0x11c163
	.byte 0x00	@ 0011c163 data
.org 0x11c164
	.byte 0xf9,0x0d,0x00,0x00	@ 0011c164 data
.org 0x11c168
	.byte 0x10,0x0a,0x00,0x02	@ 0011c168 data
.org 0x11c16c
	ldr r1, [pc, #32]	@ 0011c16c 0849
.org 0x11c16e
	ldrh r0, [r1, #0]	@ 0011c16e 0888
.org 0x11c170
	subs r0, #16	@ 0011c170 1038
.org 0x11c172
	strh r0, [r1, #0]	@ 0011c172 0880
.org 0x11c174
	adds r3, r1, #0	@ 0011c174 0b1c
.org 0x11c176
	ldrh r1, [r3, #0]	@ 0011c176 1988
.org 0x11c178
	ldr r0, [pc, #24]	@ 0011c178 0648
.org 0x11c17a
	ands r0, r1	@ 0011c17a 0840
.org 0x11c17c
	strh r0, [r3, #0]	@ 0011c17c 1880
.org 0x11c17e
	ldr r1, [pc, #24]	@ 0011c17e 0649
.org 0x11c180
	adds r0, r2, r1	@ 0011c180 5018
.org 0x11c182
	ldrb r1, [r0, #0]	@ 0011c182 0178
.org 0x11c184
	adds r4, r0, #0	@ 0011c184 041c
.org 0x11c186
	cmp r1, #0	@ 0011c186 0029
.org 0x11c188
	bne.n 0x11c19c	@ 0011c188 08d1
.org 0x11c18a
	ldrh r0, [r3, #0]	@ 0011c18a 1888
.org 0x11c18c
	adds r0, #32	@ 0011c18c 2030
.org 0x11c18e
	b.n 0x11c1a0	@ 0011c18e 07e0
.org 0x11c190
	.byte 0x10,0x0a,0x00,0x02	@ 0011c190 data
.org 0x11c194
	.byte 0xff,0x01,0x00,0x00	@ 0011c194 data
.org 0x11c198
	.byte 0xf9,0x0d,0x00,0x00	@ 0011c198 data
.org 0x11c19c
	ldrh r0, [r3, #0]	@ 0011c19c 1888
.org 0x11c19e
	subs r0, #32	@ 0011c19e 2038
.org 0x11c1a0
	movs r1, #255	@ 0011c1a0 ff21
.org 0x11c1a2
	ands r0, r1	@ 0011c1a2 0840
.org 0x11c1a4
	cmp r0, #0	@ 0011c1a4 0028
.org 0x11c1a6
	bne.n 0x11c1b0	@ 0011c1a6 03d1
.org 0x11c1a8
	ldr r0, [pc, #36]	@ 0011c1a8 0948
.org 0x11c1aa
	adds r1, r2, r0	@ 0011c1aa 1118
.org 0x11c1ac
	movs r0, #1	@ 0011c1ac 0120
.org 0x11c1ae
	strb r0, [r1, #1]	@ 0011c1ae 4870
.org 0x11c1b0
	ldrb r0, [r3, #0]	@ 0011c1b0 1878
.org 0x11c1b2
	cmp r0, #0	@ 0011c1b2 0028
.org 0x11c1b4
	bne.n 0x11c1c8	@ 0011c1b4 08d1
.org 0x11c1b6
	ldrb r0, [r4, #0]	@ 0011c1b6 2078
