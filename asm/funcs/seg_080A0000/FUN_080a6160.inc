@ FUN_080a6160  entry 0x080a6160  size 106
.thumb
.org 0xa6160
FUN_080a6160:
	push {r4, lr}	@ 000a6160 10b5
.org 0xa6162
	adds r4, r0, #0	@ 000a6162 041c
.org 0xa6164
	adds r0, #140	@ 000a6164 8c30
.org 0xa6166
	ldr r0, [r0, #0]	@ 000a6166 0068
.org 0xa6168
	movs r1, #128	@ 000a6168 8021
.org 0xa616a
	lsls r1, r1, #2	@ 000a616a 8900
.org 0xa616c
	ands r0, r1	@ 000a616c 0840
.org 0xa616e
	cmp r0, #0	@ 000a616e 0028
.org 0xa6170
	beq.n 0xa6190	@ 000a6170 0ed0
.org 0xa6172
	ldr r1, [pc, #24]	@ 000a6172 0649
.org 0xa6174
	ldrb r0, [r4, #9]	@ 000a6174 607a
.org 0xa6176
	lsls r0, r0, #2	@ 000a6176 8000
.org 0xa6178
	adds r0, r0, r1	@ 000a6178 4018
.org 0xa617a
	movs r1, #2	@ 000a617a 0221
.org 0xa617c
	str r1, [r4, #12]	@ 000a617c e160
.org 0xa617e
	ldr r0, [r0, #0]	@ 000a617e 0068
.org 0xa6180
	ldr r0, [r0, #8]	@ 000a6180 8068
.org 0xa6182
	str r0, [r4, #20]	@ 000a6182 6061
.org 0xa6184
	adds r0, r4, #0	@ 000a6184 201c
.org 0xa6186
	bl 0xa61d4	@ 000a6186 00f025f8
.org 0xa618a
	b.n 0xa61cc	@ 000a618a 1fe0
.org 0xa618c
	.byte 0x40,0xdb,0x85,0x08	@ 000a618c data
.org 0xa6190
	ldr r0, [r4, #44]	@ 000a6190 e06a
.org 0xa6192
	cmp r0, #0	@ 000a6192 0028
.org 0xa6194
	bne.n 0xa61c0	@ 000a6194 14d1
.org 0xa6196
	adds r0, r4, #0	@ 000a6196 201c
.org 0xa6198
	bl 0xa685c	@ 000a6198 00f060fb
.org 0xa619c
	lsls r0, r0, #24	@ 000a619c 0006
.org 0xa619e
	cmp r0, #0	@ 000a619e 0028
.org 0xa61a0
	bne.n 0xa61b8	@ 000a61a0 0ad1
.org 0xa61a2
	ldr r0, [pc, #16]	@ 000a61a2 0448
.org 0xa61a4
	ldrb r1, [r4, #13]	@ 000a61a4 617b
.org 0xa61a6
	lsls r1, r1, #2	@ 000a61a6 8900
.org 0xa61a8
	adds r1, r1, r0	@ 000a61a8 0918
.org 0xa61aa
	ldr r1, [r1, #0]	@ 000a61aa 0968
.org 0xa61ac
	adds r0, r4, #0	@ 000a61ac 201c
.org 0xa61ae
	bl 0x128f80	@ 000a61ae 82f0e7fe
.org 0xa61b2
	b.n 0xa61c6	@ 000a61b2 08e0
.org 0xa61b4
	.byte 0x80,0x24,0x86,0x08	@ 000a61b4 data
.org 0xa61b8
	adds r0, r4, #0	@ 000a61b8 201c
.org 0xa61ba
	bl 0xa6928	@ 000a61ba 00f0b5fb
.org 0xa61be
	b.n 0xa61c6	@ 000a61be 02e0
.org 0xa61c0
	adds r0, r4, #0	@ 000a61c0 201c
.org 0xa61c2
	bl 0xa6928	@ 000a61c2 00f0b1fb
.org 0xa61c6
	adds r0, r4, #0	@ 000a61c6 201c
.org 0xa61c8
	bl 0x1cff0	@ 000a61c8 76f712ff
