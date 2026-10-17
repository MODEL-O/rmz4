@ FUN_080aa064  entry 0x080aa064  size 116
.thumb
.org 0xaa064
FUN_080aa064:
	push {r4, r5, lr}	@ 000aa064 30b5
.org 0xaa066
	adds r4, r0, #0	@ 000aa066 041c
.org 0xaa068
	adds r5, r4, #0	@ 000aa068 251c
.org 0xaa06a
	adds r5, #192	@ 000aa06a c035
.org 0xaa06c
	ldr r0, [r5, #0]	@ 000aa06c 2868
.org 0xaa06e
	cmp r0, #0	@ 000aa06e 0028
.org 0xaa070
	bne.n 0xaa0d8	@ 000aa070 32d1
.org 0xaa072
	adds r0, r4, #0	@ 000aa072 201c
.org 0xaa074
	adds r0, #140	@ 000aa074 8c30
.org 0xaa076
	ldr r0, [r0, #0]	@ 000aa076 0068
.org 0xaa078
	movs r1, #1	@ 000aa078 0121
.org 0xaa07a
	ands r0, r1	@ 000aa07a 0840
.org 0xaa07c
	cmp r0, #0	@ 000aa07c 0028
.org 0xaa07e
	beq.n 0xaa0d8	@ 000aa07e 2bd0
.org 0xaa080
	adds r0, r4, #0	@ 000aa080 201c
.org 0xaa082
	adds r0, #151	@ 000aa082 9730
.org 0xaa084
	ldrb r1, [r0, #0]	@ 000aa084 0178
.org 0xaa086
	movs r0, #240	@ 000aa086 f020
.org 0xaa088
	ands r0, r1	@ 000aa088 0840
.org 0xaa08a
	cmp r0, #32	@ 000aa08a 2028
.org 0xaa08c
	bne.n 0xaa098	@ 000aa08c 04d1
.org 0xaa08e
	ldr r2, [pc, #4]	@ 000aa08e 014a
.org 0xaa090
	b.n 0xaa09a	@ 000aa090 03e0
.org 0xaa092
	.byte 0x00	@ 000aa092 data
.org 0xaa093
	.byte 0x00	@ 000aa093 data
.org 0xaa094
	.byte 0x98,0x2a,0x86,0x08	@ 000aa094 data
.org 0xaa098
	ldr r2, [pc, #68]	@ 000aa098 114a
.org 0xaa09a
	movs r0, #0	@ 000aa09a 0020
.org 0xaa09c
	adds r1, r4, #0	@ 000aa09c 211c
.org 0xaa09e
	bl 0x2adac	@ 000aa09e 80f785fe
.org 0xaa0a2
	str r0, [r5, #0]	@ 000aa0a2 2860
.org 0xaa0a4
	adds r0, r4, #0	@ 000aa0a4 201c
.org 0xaa0a6
	adds r0, #192	@ 000aa0a6 c030
.org 0xaa0a8
	ldr r0, [r0, #0]	@ 000aa0a8 0068
.org 0xaa0aa
	cmp r0, #0	@ 000aa0aa 0028
.org 0xaa0ac
	beq.n 0xaa0d8	@ 000aa0ac 14d0
.org 0xaa0ae
	adds r0, r4, #0	@ 000aa0ae 201c
.org 0xaa0b0
	adds r0, #116	@ 000aa0b0 7430
.org 0xaa0b2
	ldr r1, [pc, #48]	@ 000aa0b2 0c49
.org 0xaa0b4
	bl 0x5784	@ 000aa0b4 5bf766fb
.org 0xaa0b8
	adds r0, r4, #0	@ 000aa0b8 201c
.org 0xaa0ba
	adds r0, #188	@ 000aa0ba bc30
.org 0xaa0bc
	ldr r2, [pc, #40]	@ 000aa0bc 0a4a
.org 0xaa0be
	adds r1, r2, #0	@ 000aa0be 111c
.org 0xaa0c0
	ldrb r0, [r0, #0]	@ 000aa0c0 0078
.org 0xaa0c2
	adds r1, r1, r0	@ 000aa0c2 0918
.org 0xaa0c4
	lsls r1, r1, #16	@ 000aa0c4 0904
.org 0xaa0c6
	lsrs r1, r1, #16	@ 000aa0c6 090c
.org 0xaa0c8
	adds r0, r4, #0	@ 000aa0c8 201c
.org 0xaa0ca
	bl 0x1cf00	@ 000aa0ca 72f719ff
.org 0xaa0ce
	adds r0, r4, #0	@ 000aa0ce 201c
.org 0xaa0d0
	bl 0xa9ba4	@ 000aa0d0 fff768fd
.org 0xaa0d4
	movs r0, #0	@ 000aa0d4 0020
.org 0xaa0d6
	str r0, [r4, #96]	@ 000aa0d6 2066
