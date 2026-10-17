@ FUN_080c85a0  entry 0x080c85a0  size 106
.thumb
.org 0xc85a0
FUN_080c85a0:
	push {r4, lr}	@ 000c85a0 10b5
.org 0xc85a2
	adds r4, r0, #0	@ 000c85a2 041c
.org 0xc85a4
	ldrb r0, [r4, #15]	@ 000c85a4 e07b
.org 0xc85a6
	cmp r0, #0	@ 000c85a6 0028
.org 0xc85a8
	bne.n 0xc85be	@ 000c85a8 09d1
.org 0xc85aa
	adds r0, r4, #0	@ 000c85aa 201c
.org 0xc85ac
	adds r0, #116	@ 000c85ac 7430
.org 0xc85ae
	ldr r1, [pc, #48]	@ 000c85ae 0c49
.org 0xc85b0
	bl 0x5784	@ 000c85b0 3df7e8f8
.org 0xc85b4
	movs r0, #96	@ 000c85b4 6020
.org 0xc85b6
	strb r0, [r4, #18]	@ 000c85b6 a074
.org 0xc85b8
	ldrb r0, [r4, #15]	@ 000c85b8 e07b
.org 0xc85ba
	adds r0, #1	@ 000c85ba 0130
.org 0xc85bc
	strb r0, [r4, #15]	@ 000c85bc e073
.org 0xc85be
	adds r0, r4, #0	@ 000c85be 201c
.org 0xc85c0
	bl 0x1cff0	@ 000c85c0 54f716fd
.org 0xc85c4
	adds r0, r4, #0	@ 000c85c4 201c
.org 0xc85c6
	adds r0, #140	@ 000c85c6 8c30
.org 0xc85c8
	ldr r0, [r0, #0]	@ 000c85c8 0068
.org 0xc85ca
	movs r1, #128	@ 000c85ca 8021
.org 0xc85cc
	lsls r1, r1, #4	@ 000c85cc 0901
.org 0xc85ce
	ands r0, r1	@ 000c85ce 0840
.org 0xc85d0
	cmp r0, #0	@ 000c85d0 0028
.org 0xc85d2
	beq.n 0xc85e4	@ 000c85d2 07d0
.org 0xc85d4
	movs r1, #0	@ 000c85d4 0021
.org 0xc85d6
	movs r0, #2	@ 000c85d6 0220
.org 0xc85d8
	strb r0, [r4, #13]	@ 000c85d8 6073
.org 0xc85da
	strb r1, [r4, #14]	@ 000c85da a173
.org 0xc85dc
	strb r1, [r4, #15]	@ 000c85dc e173
.org 0xc85de
	b.n 0xc8608	@ 000c85de 13e0
.org 0xc85e0
	.byte 0xec,0x5f,0x86,0x08	@ 000c85e0 data
.org 0xc85e4
	ldrb r0, [r4, #18]	@ 000c85e4 a07c
.org 0xc85e6
	subs r0, #1	@ 000c85e6 0138
.org 0xc85e8
	strb r0, [r4, #18]	@ 000c85e8 a074
.org 0xc85ea
	lsls r0, r0, #24	@ 000c85ea 0006
.org 0xc85ec
	cmp r0, #0	@ 000c85ec 0028
.org 0xc85ee
	bne.n 0xc8608	@ 000c85ee 0bd1
.org 0xc85f0
	ldr r1, [pc, #28]	@ 000c85f0 0749
.org 0xc85f2
	ldrb r0, [r4, #9]	@ 000c85f2 607a
.org 0xc85f4
	lsls r0, r0, #2	@ 000c85f4 8000
.org 0xc85f6
	adds r0, r0, r1	@ 000c85f6 4018
.org 0xc85f8
	movs r1, #2	@ 000c85f8 0221
.org 0xc85fa
	str r1, [r4, #12]	@ 000c85fa e160
.org 0xc85fc
	ldr r0, [r0, #0]	@ 000c85fc 0068
.org 0xc85fe
	ldr r0, [r0, #8]	@ 000c85fe 8068
.org 0xc8600
	str r0, [r4, #20]	@ 000c8600 6061
.org 0xc8602
	adds r0, r4, #0	@ 000c8602 201c
.org 0xc8604
	bl 0xc870c	@ 000c8604 00f082f8
.org 0xc8608
	pop {r4}	@ 000c8608 10bc
