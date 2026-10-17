@ FUN_081180f8  entry 0x081180f8  size 290
.thumb
.org 0x1180f8
FUN_081180f8:
	push {r4, r5, r6, r7, lr}	@ 001180f8 f0b5
.org 0x1180fa
	mov r7, sl	@ 001180fa 5746
.org 0x1180fc
	mov r6, r9	@ 001180fc 4e46
.org 0x1180fe
	mov r5, r8	@ 001180fe 4546
.org 0x118100
	push {r5, r6, r7}	@ 00118100 e0b4
.org 0x118102
	sub sp, #8	@ 00118102 82b0
.org 0x118104
	mov r8, r0	@ 00118104 8046
.org 0x118106
	ldr r0, [pc, #128]	@ 00118106 2048
.org 0x118108
	add r0, r8	@ 00118108 4044
.org 0x11810a
	ldr r0, [r0, #0]	@ 0011810a 0068
.org 0x11810c
	mov ip, r0	@ 0011810c 8446
.org 0x11810e
	mov r5, ip	@ 0011810e 6546
.org 0x118110
	adds r5, #180	@ 00118110 b435
.org 0x118112
	ldr r4, [pc, #120]	@ 00118112 1e4c
.org 0x118114
	add r4, ip	@ 00118114 6444
.org 0x118116
	ldrb r0, [r4, #0]	@ 00118116 2078
.org 0x118118
	lsls r1, r0, #27	@ 00118118 c106
.org 0x11811a
	lsrs r1, r1, #31	@ 0011811a c90f
.org 0x11811c
	str r1, [sp, #0]	@ 0011811c 0091
.org 0x11811e
	lsls r0, r0, #26	@ 0011811e 8006
.org 0x118120
	lsrs r0, r0, #31	@ 00118120 c00f
.org 0x118122
	mov r9, r0	@ 00118122 8146
.org 0x118124
	mov r6, ip	@ 00118124 6646
.org 0x118126
	adds r6, #228	@ 00118126 e436
.org 0x118128
	ldrb r0, [r6, #0]	@ 00118128 3078
.org 0x11812a
	str r0, [sp, #4]	@ 0011812a 0190
.org 0x11812c
	mov r0, ip	@ 0011812c 6046
.org 0x11812e
	adds r0, #229	@ 0011812e e530
.org 0x118130
	ldrb r0, [r0, #0]	@ 00118130 0078
.org 0x118132
	mov sl, r0	@ 00118132 8246
.org 0x118134
	ldr r7, [pc, #88]	@ 00118134 164f
.org 0x118136
	add r7, r8	@ 00118136 4744
.org 0x118138
	ldrb r0, [r7, #0]	@ 00118138 3878
.org 0x11813a
	ldrb r1, [r5, #12]	@ 0011813a 297b
.org 0x11813c
	cmp r0, r1	@ 0011813c 8842
.org 0x11813e
	beq.n 0x1181aa	@ 0011813e 34d0
.org 0x118140
	ldrb r2, [r5, #13]	@ 00118140 6a7b
.org 0x118142
	cmp r0, r2	@ 00118142 9042
.org 0x118144
	beq.n 0x118164	@ 00118144 0ed0
.org 0x118146
	movs r3, #173	@ 00118146 ad23
.org 0x118148
	lsls r3, r3, #1	@ 00118148 5b00
.org 0x11814a
	add r3, ip	@ 0011814a 6344
.org 0x11814c
	ldrh r0, [r3, #0]	@ 0011814c 1888
.org 0x11814e
	movs r2, #128	@ 0011814e 8022
.org 0x118150
	lsls r2, r2, #8	@ 00118150 1202
.org 0x118152
	adds r1, r2, #0	@ 00118152 111c
.org 0x118154
	orrs r1, r0	@ 00118154 0143
.org 0x118156
	strh r1, [r3, #0]	@ 00118156 1980
.org 0x118158
	ldr r2, [pc, #56]	@ 00118158 0e4a
.org 0x11815a
	ldrb r0, [r7, #0]	@ 0011815a 3878
.org 0x11815c
	adds r0, r0, r2	@ 0011815c 8018
.org 0x11815e
	ldrb r0, [r0, #0]	@ 0011815e 0078
.org 0x118160
	orrs r1, r0	@ 00118160 0143
.org 0x118162
	strh r1, [r3, #0]	@ 00118162 1980
.org 0x118164
	ldr r0, [pc, #48]	@ 00118164 0c48
.org 0x118166
	add r0, r8	@ 00118166 4044
.org 0x118168
	ldrb r0, [r0, #0]	@ 00118168 0078
.org 0x11816a
	ldrb r5, [r5, #12]	@ 0011816a 2d7b
.org 0x11816c
	cmp r0, r5	@ 0011816c a842
.org 0x11816e
	bne.n 0x11819c	@ 0011816e 15d1
.org 0x118170
	mov r0, r9	@ 00118170 4846
.org 0x118172
	lsls r2, r0, #4	@ 00118172 0201
.org 0x118174
	ldrb r1, [r4, #0]	@ 00118174 2178
.org 0x118176
	movs r0, #17	@ 00118176 1120
.org 0x118178
	negs r0, r0	@ 00118178 4042
.org 0x11817a
	ands r0, r1	@ 0011817a 0840
.org 0x11817c
	orrs r0, r2	@ 0011817c 1043
.org 0x11817e
	strb r0, [r4, #0]	@ 0011817e 2070
.org 0x118180
	mov r1, sl	@ 00118180 5146
.org 0x118182
	strb r1, [r6, #0]	@ 00118182 3170
.org 0x118184
	b.n 0x1181aa	@ 00118184 11e0
.org 0x118186
	.byte 0x00	@ 00118186 data
.org 0x118187
	.byte 0x00	@ 00118187 data
.org 0x118188
	.byte 0xa8,0x63,0x00,0x00	@ 00118188 data
.org 0x11818c
	.byte 0x53,0x01,0x00,0x00	@ 0011818c data
.org 0x118190
	.byte 0xf2,0x0d,0x00,0x00	@ 00118190 data
.org 0x118194
	.byte 0x00,0x1c,0x88,0x08	@ 00118194 data
.org 0x118198
	.byte 0xf3,0x0d,0x00,0x00	@ 00118198 data
.org 0x11819c
	ldrb r0, [r4, #0]	@ 0011819c 2078
.org 0x11819e
	movs r1, #17	@ 0011819e 1121
.org 0x1181a0
	negs r1, r1	@ 001181a0 4942
.org 0x1181a2
	ands r1, r0	@ 001181a2 0140
.org 0x1181a4
	strb r1, [r4, #0]	@ 001181a4 2170
.org 0x1181a6
	movs r0, #0	@ 001181a6 0020
.org 0x1181a8
	strb r0, [r6, #0]	@ 001181a8 3070
.org 0x1181aa
	ldr r5, [pc, #96]	@ 001181aa 184d
.org 0x1181ac
	add r5, r8	@ 001181ac 4544
.org 0x1181ae
	mov r4, ip	@ 001181ae 6446
.org 0x1181b0
	adds r4, #180	@ 001181b0 b434
.org 0x1181b2
	ldrb r0, [r5, #0]	@ 001181b2 2878
.org 0x1181b4
	ldrb r2, [r4, #13]	@ 001181b4 627b
.org 0x1181b6
	cmp r0, r2	@ 001181b6 9042
.org 0x1181b8
	beq.n 0x118232	@ 001181b8 3bd0
.org 0x1181ba
	ldrb r1, [r4, #12]	@ 001181ba 217b
.org 0x1181bc
	cmp r0, r1	@ 001181bc 8842
.org 0x1181be
	beq.n 0x1181de	@ 001181be 0ed0
.org 0x1181c0
	movs r3, #173	@ 001181c0 ad23
.org 0x1181c2
	lsls r3, r3, #1	@ 001181c2 5b00
.org 0x1181c4
	add r3, ip	@ 001181c4 6344
.org 0x1181c6
	ldrh r0, [r3, #0]	@ 001181c6 1888
.org 0x1181c8
	movs r2, #128	@ 001181c8 8022
.org 0x1181ca
	lsls r2, r2, #8	@ 001181ca 1202
.org 0x1181cc
	adds r1, r2, #0	@ 001181cc 111c
.org 0x1181ce
	orrs r1, r0	@ 001181ce 0143
.org 0x1181d0
	strh r1, [r3, #0]	@ 001181d0 1980
.org 0x1181d2
	ldr r2, [pc, #60]	@ 001181d2 0f4a
.org 0x1181d4
	ldrb r0, [r5, #0]	@ 001181d4 2878
.org 0x1181d6
	adds r0, r0, r2	@ 001181d6 8018
.org 0x1181d8
	ldrb r0, [r0, #0]	@ 001181d8 0078
.org 0x1181da
	orrs r1, r0	@ 001181da 0143
.org 0x1181dc
	strh r1, [r3, #0]	@ 001181dc 1980
.org 0x1181de
	ldr r0, [pc, #52]	@ 001181de 0d48
.org 0x1181e0
	add r0, r8	@ 001181e0 4044
.org 0x1181e2
	ldrb r0, [r0, #0]	@ 001181e2 0078
.org 0x1181e4
	ldrb r4, [r4, #13]	@ 001181e4 647b
.org 0x1181e6
	cmp r0, r4	@ 001181e6 a042
.org 0x1181e8
	bne.n 0x11821c	@ 001181e8 18d1
.org 0x1181ea
	ldr r3, [pc, #44]	@ 001181ea 0b4b
.org 0x1181ec
	add r3, ip	@ 001181ec 6344
.org 0x1181ee
	ldr r0, [sp, #0]	@ 001181ee 0098
.org 0x1181f0
	lsls r2, r0, #5	@ 001181f0 4201
.org 0x1181f2
	ldrb r1, [r3, #0]	@ 001181f2 1978
.org 0x1181f4
	movs r0, #33	@ 001181f4 2120
.org 0x1181f6
	negs r0, r0	@ 001181f6 4042
.org 0x1181f8
	ands r0, r1	@ 001181f8 0840
.org 0x1181fa
	orrs r0, r2	@ 001181fa 1043
.org 0x1181fc
	strb r0, [r3, #0]	@ 001181fc 1870
.org 0x1181fe
	mov r0, ip	@ 001181fe 6046
.org 0x118200
	adds r0, #229	@ 00118200 e530
.org 0x118202
	mov r1, sp	@ 00118202 6946
.org 0x118204
	ldrb r1, [r1, #4]	@ 00118204 0979
.org 0x118206
	strb r1, [r0, #0]	@ 00118206 0170
.org 0x118208
	b.n 0x118232	@ 00118208 13e0
.org 0x11820a
	.byte 0x00	@ 0011820a data
.org 0x11820b
	.byte 0x00	@ 0011820b data
.org 0x11820c
	.byte 0xf3,0x0d,0x00,0x00	@ 0011820c data
.org 0x118210
	.byte 0x00,0x1c,0x88,0x08	@ 00118210 data
.org 0x118214
	.byte 0xf2,0x0d,0x00,0x00	@ 00118214 data
.org 0x118218
	.byte 0x53,0x01,0x00,0x00	@ 00118218 data
