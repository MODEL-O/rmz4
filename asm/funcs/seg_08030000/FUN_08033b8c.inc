@ FUN_08033b8c  entry 0x08033b8c  size 146
.thumb
.org 0x33b8c
FUN_08033b8c:
	push {r4, r5, lr}	@ 00033b8c 30b5
.org 0x33b8e
	adds r4, r0, #0	@ 00033b8e 041c
.org 0x33b90
	movs r0, #129	@ 00033b90 8120
.org 0x33b92
	lsls r0, r0, #1	@ 00033b92 4000
.org 0x33b94
	adds r5, r4, r0	@ 00033b94 2518
.org 0x33b96
	ldrb r0, [r5, #0]	@ 00033b96 2878
.org 0x33b98
	cmp r0, #0	@ 00033b98 0028
.org 0x33b9a
	bne.n 0x33bb6	@ 00033b9a 0cd1
.org 0x33b9c
	movs r1, #160	@ 00033b9c a021
.org 0x33b9e
	lsls r1, r1, #5	@ 00033b9e 4901
.org 0x33ba0
	adds r0, r4, #0	@ 00033ba0 201c
.org 0x33ba2
	bl 0x1cf00	@ 00033ba2 e9f7adf9
.org 0x33ba6
	adds r0, r4, #0	@ 00033ba6 201c
.org 0x33ba8
	movs r1, #8	@ 00033ba8 0821
.org 0x33baa
	bl 0x3c464	@ 00033baa 08f05bfc
.org 0x33bae
	ldrb r0, [r5, #0]	@ 00033bae 2878
.org 0x33bb0
	adds r0, #1	@ 00033bb0 0130
.org 0x33bb2
	strb r0, [r5, #0]	@ 00033bb2 2870
.org 0x33bb4
	b.n 0x33bf2	@ 00033bb4 1de0
.org 0x33bb6
	ldr r1, [pc, #40]	@ 00033bb6 0a49
.org 0x33bb8
	adds r0, r4, r1	@ 00033bb8 6018
.org 0x33bba
	ldrb r1, [r0, #0]	@ 00033bba 0178
.org 0x33bbc
	movs r0, #1	@ 00033bbc 0120
.org 0x33bbe
	ands r0, r1	@ 00033bbe 0840
.org 0x33bc0
	cmp r0, #0	@ 00033bc0 0028
.org 0x33bc2
	beq.n 0x33be8	@ 00033bc2 11d0
.org 0x33bc4
	movs r1, #160	@ 00033bc4 a021
.org 0x33bc6
	lsls r1, r1, #5	@ 00033bc6 4901
.org 0x33bc8
	movs r2, #183	@ 00033bc8 b722
.org 0x33bca
	lsls r2, r2, #1	@ 00033bca 5200
.org 0x33bcc
	adds r0, r4, r2	@ 00033bcc a018
.org 0x33bce
	ldrb r2, [r0, #0]	@ 00033bce 0278
.org 0x33bd0
	ldr r3, [pc, #16]	@ 00033bd0 044b
.org 0x33bd2
	adds r0, r4, r3	@ 00033bd2 e018
.org 0x33bd4
	ldrb r3, [r0, #0]	@ 00033bd4 0378
.org 0x33bd6
	adds r0, r4, #0	@ 00033bd6 201c
.org 0x33bd8
	bl 0x1cfc8	@ 00033bd8 e9f7f6f9
.org 0x33bdc
	b.n 0x33bf2	@ 00033bdc 09e0
.org 0x33bde
	.byte 0x00	@ 00033bde data
.org 0x33bdf
	.byte 0x00	@ 00033bdf data
.org 0x33be0
	.byte 0x53,0x01,0x00,0x00	@ 00033be0 data
.org 0x33be4
	.byte 0x6f,0x01,0x00,0x00	@ 00033be4 data
.org 0x33be8
	movs r1, #160	@ 00033be8 a021
.org 0x33bea
	lsls r1, r1, #5	@ 00033bea 4901
.org 0x33bec
	adds r0, r4, #0	@ 00033bec 201c
.org 0x33bee
	bl 0x3a3b0	@ 00033bee 06f0dffb
.org 0x33bf2
	adds r0, r4, #0	@ 00033bf2 201c
.org 0x33bf4
	adds r0, #115	@ 00033bf4 7330
.org 0x33bf6
	ldrb r0, [r0, #0]	@ 00033bf6 0078
.org 0x33bf8
	cmp r0, #3	@ 00033bf8 0328
.org 0x33bfa
	bne.n 0x33c1a	@ 00033bfa 0ed1
.org 0x33bfc
	movs r0, #128	@ 00033bfc 8020
.org 0x33bfe
	lsls r0, r0, #1	@ 00033bfe 4000
.org 0x33c00
	adds r1, r4, r0	@ 00033c00 2118
.org 0x33c02
	movs r0, #0	@ 00033c02 0020
.org 0x33c04
	strb r0, [r1, #0]	@ 00033c04 0870
.org 0x33c06
	adds r0, r4, #0	@ 00033c06 201c
.org 0x33c08
	bl 0x2b7d8	@ 00033c08 f7f7e6fd
.org 0x33c0c
	adds r1, r0, #0	@ 00033c0c 011c
.org 0x33c0e
	lsls r1, r1, #16	@ 00033c0e 0904
.org 0x33c10
	lsrs r1, r1, #16	@ 00033c10 090c
.org 0x33c12
	adds r0, r4, #0	@ 00033c12 201c
.org 0x33c14
	bl 0x1cf00	@ 00033c14 e9f774f9
.org 0x33c18
	b.n 0x33c22	@ 00033c18 03e0
.org 0x33c1a
	ldr r2, [pc, #12]	@ 00033c1a 034a
.org 0x33c1c
	adds r1, r4, r2	@ 00033c1c a118
