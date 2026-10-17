@ FUN_08025144  entry 0x08025144  size 178
.thumb
.org 0x25144
FUN_08025144:
	push {r4, r5, lr}	@ 00025144 30b5
.org 0x25146
	ldr r3, [r0, #32]	@ 00025146 036a
.org 0x25148
	movs r1, #190	@ 00025148 be21
.org 0x2514a
	lsls r1, r1, #1	@ 0002514a 4900
.org 0x2514c
	adds r5, r0, r1	@ 0002514c 4518
.org 0x2514e
	ldrb r0, [r5, #0]	@ 0002514e 2878
.org 0x25150
	cmp r0, #0	@ 00025150 0028
.org 0x25152
	bne.n 0x251b0	@ 00025152 2dd1
.org 0x25154
	ldr r3, [pc, #48]	@ 00025154 0c4b
.org 0x25156
	ldrh r1, [r3, #8]	@ 00025156 1989
.org 0x25158
	movs r0, #1	@ 00025158 0120
.org 0x2515a
	orrs r0, r1	@ 0002515a 0843
.org 0x2515c
	strh r0, [r3, #8]	@ 0002515c 1881
.org 0x2515e
	ldr r2, [pc, #44]	@ 0002515e 0b4a
.org 0x25160
	ldrb r1, [r2, #4]	@ 00025160 1179
.org 0x25162
	movs r0, #8	@ 00025162 0820
.org 0x25164
	orrs r0, r1	@ 00025164 0843
.org 0x25166
	strb r0, [r2, #4]	@ 00025166 1071
.org 0x25168
	ldrb r4, [r3, #2]	@ 00025168 9c78
.org 0x2516a
	cmp r4, #0	@ 0002516a 002c
.org 0x2516c
	bne.n 0x25194	@ 0002516c 12d1
.org 0x2516e
	adds r0, r3, #0	@ 0002516e 181c
.org 0x25170
	adds r0, #16	@ 00025170 1030
.org 0x25172
	ldr r1, [pc, #28]	@ 00025172 0749
.org 0x25174
	ldr r1, [r1, #48]	@ 00025174 096b
.org 0x25176
	ldr r1, [r1, #48]	@ 00025176 096b
.org 0x25178
	bl 0x275f0	@ 00025178 02f03afa
.org 0x2517c
	movs r0, #2	@ 0002517c 0220
.org 0x2517e
	bl 0x1f63c	@ 0002517e faf75dfa
.org 0x25182
	movs r0, #2	@ 00025182 0220
.org 0x25184
	b.n 0x2520c	@ 00025184 42e0
.org 0x25186
	.byte 0x00	@ 00025186 data
.org 0x25187
	.byte 0x00	@ 00025187 data
.org 0x25188
	.byte 0x10,0xe9,0x02,0x02	@ 00025188 data
.org 0x2518c
	.byte 0xb0,0xe8,0x02,0x02	@ 0002518c data
.org 0x25190
	.byte 0xf8,0x2c,0x84,0x08	@ 00025190 data
.org 0x25194
	cmp r4, #2	@ 00025194 022c
.org 0x25196
	bne.n 0x2520e	@ 00025196 3ad1
.org 0x25198
	adds r0, r3, #0	@ 00025198 181c
.org 0x2519a
	adds r0, #16	@ 0002519a 1030
.org 0x2519c
	ldr r1, [pc, #12]	@ 0002519c 0349
.org 0x2519e
	ldr r1, [r1, #48]	@ 0002519e 096b
.org 0x251a0
	ldr r1, [r1, #8]	@ 000251a0 8968
.org 0x251a2
	bl 0x275f0	@ 000251a2 02f025fa
.org 0x251a6
	strb r4, [r5, #0]	@ 000251a6 2c70
.org 0x251a8
	b.n 0x2520e	@ 000251a8 31e0
.org 0x251aa
	.byte 0x00	@ 000251aa data
.org 0x251ab
	.byte 0x00	@ 000251ab data
.org 0x251ac
	.byte 0xf8,0x2c,0x84,0x08	@ 000251ac data
.org 0x251b0
	cmp r0, #2	@ 000251b0 0228
.org 0x251b2
	bne.n 0x251e4	@ 000251b2 17d1
.org 0x251b4
	ldr r1, [r3, #84]	@ 000251b4 596d
.org 0x251b6
	ldr r0, [pc, #32]	@ 000251b6 0848
.org 0x251b8
	cmp r1, r0	@ 000251b8 8142
.org 0x251ba
	ble.n 0x251c6	@ 000251ba 04dd
.org 0x251bc
	ldr r2, [pc, #28]	@ 000251bc 074a
.org 0x251be
	ldrb r1, [r2, #1]	@ 000251be 5178
.org 0x251c0
	movs r0, #2	@ 000251c0 0220
.org 0x251c2
	orrs r0, r1	@ 000251c2 0843
.org 0x251c4
	strb r0, [r2, #1]	@ 000251c4 5070
.org 0x251c6
	ldr r1, [r3, #84]	@ 000251c6 596d
.org 0x251c8
	ldr r0, [pc, #20]	@ 000251c8 0548
.org 0x251ca
	cmp r1, r0	@ 000251ca 8142
.org 0x251cc
	ble.n 0x2520e	@ 000251cc 1fdd
.org 0x251ce
	ldr r0, [pc, #12]	@ 000251ce 0348
.org 0x251d0
	movs r1, #0	@ 000251d0 0021
.org 0x251d2
	strb r1, [r0, #1]	@ 000251d2 4170
.org 0x251d4
	movs r0, #3	@ 000251d4 0320
.org 0x251d6
	b.n 0x2520c	@ 000251d6 19e0
.org 0x251d8
	.byte 0xff,0x1f,0x0c,0x00	@ 000251d8 data
.org 0x251dc
	.byte 0xe0,0x32,0x00,0x03	@ 000251dc data
.org 0x251e0
	.byte 0xff,0x3f,0x0c,0x00	@ 000251e0 data
.org 0x251e4
	cmp r0, #3	@ 000251e4 0328
.org 0x251e6
	bne.n 0x2520e	@ 000251e6 12d1
.org 0x251e8
	ldr r1, [r3, #84]	@ 000251e8 596d
.org 0x251ea
	movs r0, #210	@ 000251ea d220
.org 0x251ec
	lsls r0, r0, #12	@ 000251ec 0003
.org 0x251ee
	cmp r1, r0	@ 000251ee 8142
.org 0x251f0
	ble.n 0x2520e	@ 000251f0 0ddd
.org 0x251f2
	ldr r4, [pc, #36]	@ 000251f2 094c
.org 0x251f4
	ldr r0, [pc, #36]	@ 000251f4 0948
