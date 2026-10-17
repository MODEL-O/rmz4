@ FUN_080c6128  entry 0x080c6128  size 172
.thumb
.org 0xc6128
FUN_080c6128:
	push {r4, r5, r6, lr}	@ 000c6128 70b5
.org 0xc612a
	adds r6, r0, #0	@ 000c612a 061c
.org 0xc612c
	bl 0x1cc9c	@ 000c612c 56f7b6fd
.org 0xc6130
	ldrb r1, [r6, #10]	@ 000c6130 b17a
.org 0xc6132
	movs r0, #1	@ 000c6132 0120
.org 0xc6134
	movs r4, #0	@ 000c6134 0024
.org 0xc6136
	orrs r0, r1	@ 000c6136 0843
.org 0xc6138
	movs r1, #2	@ 000c6138 0221
.org 0xc613a
	orrs r0, r1	@ 000c613a 0843
.org 0xc613c
	strb r0, [r6, #10]	@ 000c613c b072
.org 0xc613e
	ldr r1, [pc, #28]	@ 000c613e 0749
.org 0xc6140
	adds r0, r6, #0	@ 000c6140 301c
.org 0xc6142
	bl 0x1cf00	@ 000c6142 56f7ddfe
.org 0xc6146
	adds r0, r6, #0	@ 000c6146 301c
.org 0xc6148
	bl 0x1cff0	@ 000c6148 56f752ff
.org 0xc614c
	ldrb r2, [r6, #17]	@ 000c614c 727c
.org 0xc614e
	cmp r2, #0	@ 000c614e 002a
.org 0xc6150
	beq.n 0xc6160	@ 000c6150 06d0
.org 0xc6152
	ldrb r0, [r6, #10]	@ 000c6152 b07a
.org 0xc6154
	movs r1, #16	@ 000c6154 1021
.org 0xc6156
	orrs r0, r1	@ 000c6156 0843
.org 0xc6158
	b.n 0xc6166	@ 000c6158 05e0
.org 0xc615a
	.byte 0x00	@ 000c615a data
.org 0xc615b
	.byte 0x00	@ 000c615b data
.org 0xc615c
	.byte 0x07,0x69,0x00,0x00	@ 000c615c data
.org 0xc6160
	ldrb r1, [r6, #10]	@ 000c6160 b17a
.org 0xc6162
	movs r0, #239	@ 000c6162 ef20
.org 0xc6164
	ands r0, r1	@ 000c6164 0840
.org 0xc6166
	strb r0, [r6, #10]	@ 000c6166 b072
.org 0xc6168
	movs r1, #1	@ 000c6168 0121
.org 0xc616a
	ands r1, r2	@ 000c616a 1140
.org 0xc616c
	adds r0, r6, #0	@ 000c616c 301c
.org 0xc616e
	adds r0, #76	@ 000c616e 4c30
.org 0xc6170
	movs r5, #0	@ 000c6170 0025
.org 0xc6172
	strb r1, [r0, #0]	@ 000c6172 0170
.org 0xc6174
	adds r3, r6, #0	@ 000c6174 331c
.org 0xc6176
	adds r3, #74	@ 000c6176 4a33
.org 0xc6178
	lsls r1, r1, #4	@ 000c6178 0901
.org 0xc617a
	ldrb r2, [r3, #0]	@ 000c617a 1a78
.org 0xc617c
	movs r0, #17	@ 000c617c 1120
.org 0xc617e
	negs r0, r0	@ 000c617e 4042
.org 0xc6180
	ands r0, r2	@ 000c6180 1040
.org 0xc6182
	orrs r0, r1	@ 000c6182 0843
.org 0xc6184
	strb r0, [r3, #0]	@ 000c6184 1870
.org 0xc6186
	ldrb r1, [r6, #10]	@ 000c6186 b17a
.org 0xc6188
	movs r0, #4	@ 000c6188 0420
.org 0xc618a
	orrs r0, r1	@ 000c618a 0843
.org 0xc618c
	strb r0, [r6, #10]	@ 000c618c b072
.org 0xc618e
	adds r4, r6, #0	@ 000c618e 341c
.org 0xc6190
	adds r4, #116	@ 000c6190 7434
.org 0xc6192
	ldr r1, [pc, #32]	@ 000c6192 0849
.org 0xc6194
	adds r2, r6, #0	@ 000c6194 321c
.org 0xc6196
	adds r2, #84	@ 000c6196 5432
.org 0xc6198
	adds r0, r4, #0	@ 000c6198 201c
.org 0xc619a
	movs r3, #8	@ 000c619a 0823
.org 0xc619c
	bl 0x5760	@ 000c619c 3ff7e0fa
.org 0xc61a0
	str r6, [r4, #44]	@ 000c61a0 e662
.org 0xc61a2
	str r5, [r4, #36]	@ 000c61a2 6562
.org 0xc61a4
	ldrb r1, [r6, #10]	@ 000c61a4 b17a
.org 0xc61a6
	movs r0, #16	@ 000c61a6 1020
.org 0xc61a8
	ands r0, r1	@ 000c61a8 0840
.org 0xc61aa
	cmp r0, #0	@ 000c61aa 0028
.org 0xc61ac
	beq.n 0xc61b8	@ 000c61ac 04d0
.org 0xc61ae
	movs r0, #192	@ 000c61ae c020
.org 0xc61b0
	lsls r0, r0, #2	@ 000c61b0 8000
.org 0xc61b2
	b.n 0xc61ba	@ 000c61b2 02e0
.org 0xc61b4
	.byte 0x9c,0x5a,0x86,0x08	@ 000c61b4 data
.org 0xc61b8
	ldr r0, [pc, #36]	@ 000c61b8 0948
.org 0xc61ba
	str r0, [r6, #92]	@ 000c61ba f065
.org 0xc61bc
	movs r0, #255	@ 000c61bc ff20
.org 0xc61be
	strb r0, [r6, #18]	@ 000c61be b074
.org 0xc61c0
	ldr r1, [pc, #32]	@ 000c61c0 0849
.org 0xc61c2
	ldrb r0, [r6, #9]	@ 000c61c2 707a
.org 0xc61c4
	lsls r0, r0, #2	@ 000c61c4 8000
.org 0xc61c6
	adds r0, r0, r1	@ 000c61c6 4018
.org 0xc61c8
	movs r1, #1	@ 000c61c8 0121
.org 0xc61ca
	str r1, [r6, #12]	@ 000c61ca f160
.org 0xc61cc
	ldr r0, [r0, #0]	@ 000c61cc 0068
.org 0xc61ce
	ldr r0, [r0, #4]	@ 000c61ce 4068
.org 0xc61d0
	str r0, [r6, #20]	@ 000c61d0 7061
.org 0xc61d2
	adds r0, r6, #0	@ 000c61d2 301c
