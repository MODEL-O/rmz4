@ FUN_0804ba10  entry 0x0804ba10  size 160
.thumb
.org 0x4ba10
FUN_0804ba10:
	push {r4, r5, r6, lr}	@ 0004ba10 70b5
.org 0x4ba12
	adds r6, r0, #0	@ 0004ba12 061c
.org 0x4ba14
	ldr r5, [r6, #40]	@ 0004ba14 b56a
.org 0x4ba16
	ldr r1, [pc, #84]	@ 0004ba16 1549
.org 0x4ba18
	ldrb r0, [r6, #9]	@ 0004ba18 707a
.org 0x4ba1a
	lsls r0, r0, #2	@ 0004ba1a 8000
.org 0x4ba1c
	adds r0, r0, r1	@ 0004ba1c 4018
.org 0x4ba1e
	movs r4, #1	@ 0004ba1e 0124
.org 0x4ba20
	str r4, [r6, #12]	@ 0004ba20 f460
.org 0x4ba22
	ldr r0, [r0, #0]	@ 0004ba22 0068
.org 0x4ba24
	ldr r0, [r0, #4]	@ 0004ba24 4068
.org 0x4ba26
	str r0, [r6, #20]	@ 0004ba26 7061
.org 0x4ba28
	adds r0, r6, #0	@ 0004ba28 301c
.org 0x4ba2a
	bl 0x1cc9c	@ 0004ba2a d1f737f9
.org 0x4ba2e
	adds r0, r6, #0	@ 0004ba2e 301c
.org 0x4ba30
	bl 0x1ceec	@ 0004ba30 d1f75cfa
.org 0x4ba34
	ldrb r1, [r6, #10]	@ 0004ba34 b17a
.org 0x4ba36
	movs r0, #254	@ 0004ba36 fe20
.org 0x4ba38
	ands r0, r1	@ 0004ba38 0840
.org 0x4ba3a
	movs r1, #2	@ 0004ba3a 0221
.org 0x4ba3c
	orrs r0, r1	@ 0004ba3c 0843
.org 0x4ba3e
	strb r0, [r6, #10]	@ 0004ba3e b072
.org 0x4ba40
	adds r0, r6, #0	@ 0004ba40 301c
.org 0x4ba42
	movs r1, #15	@ 0004ba42 0f21
.org 0x4ba44
	bl 0x1d3d0	@ 0004ba44 d1f7c4fc
.org 0x4ba48
	movs r1, #250	@ 0004ba48 fa21
.org 0x4ba4a
	lsls r1, r1, #7	@ 0004ba4a c901
.org 0x4ba4c
	adds r0, r6, #0	@ 0004ba4c 301c
.org 0x4ba4e
	bl 0x1cf00	@ 0004ba4e d1f757fa
.org 0x4ba52
	adds r0, r6, #0	@ 0004ba52 301c
.org 0x4ba54
	bl 0x1cff0	@ 0004ba54 d1f7ccfa
.org 0x4ba58
	ldrb r0, [r5, #10]	@ 0004ba58 a87a
.org 0x4ba5a
	lsrs r2, r0, #4	@ 0004ba5a 0209
.org 0x4ba5c
	ands r2, r4	@ 0004ba5c 2240
.org 0x4ba5e
	cmp r2, #0	@ 0004ba5e 002a
.org 0x4ba60
	beq.n 0x4ba70	@ 0004ba60 06d0
.org 0x4ba62
	ldrb r0, [r6, #10]	@ 0004ba62 b07a
.org 0x4ba64
	movs r1, #16	@ 0004ba64 1021
.org 0x4ba66
	orrs r0, r1	@ 0004ba66 0843
.org 0x4ba68
	b.n 0x4ba76	@ 0004ba68 05e0
.org 0x4ba6a
	.byte 0x00	@ 0004ba6a data
.org 0x4ba6b
	.byte 0x00	@ 0004ba6b data
.org 0x4ba6c
	.byte 0xf8,0x39,0x85,0x08	@ 0004ba6c data
.org 0x4ba70
	ldrb r1, [r6, #10]	@ 0004ba70 b17a
.org 0x4ba72
	movs r0, #239	@ 0004ba72 ef20
.org 0x4ba74
	ands r0, r1	@ 0004ba74 0840
.org 0x4ba76
	strb r0, [r6, #10]	@ 0004ba76 b072
.org 0x4ba78
	adds r1, r2, #0	@ 0004ba78 111c
.org 0x4ba7a
	adds r0, r6, #0	@ 0004ba7a 301c
.org 0x4ba7c
	adds r0, #76	@ 0004ba7c 4c30
.org 0x4ba7e
	strb r1, [r0, #0]	@ 0004ba7e 0170
.org 0x4ba80
	adds r3, r6, #0	@ 0004ba80 331c
.org 0x4ba82
	adds r3, #74	@ 0004ba82 4a33
.org 0x4ba84
	lsls r1, r1, #4	@ 0004ba84 0901
.org 0x4ba86
	ldrb r2, [r3, #0]	@ 0004ba86 1a78
.org 0x4ba88
	movs r0, #17	@ 0004ba88 1120
.org 0x4ba8a
	negs r0, r0	@ 0004ba8a 4042
.org 0x4ba8c
	ands r0, r2	@ 0004ba8c 1040
.org 0x4ba8e
	orrs r0, r1	@ 0004ba8e 0843
.org 0x4ba90
	strb r0, [r3, #0]	@ 0004ba90 1870
.org 0x4ba92
	ldrb r1, [r6, #10]	@ 0004ba92 b17a
.org 0x4ba94
	movs r0, #16	@ 0004ba94 1020
.org 0x4ba96
	ands r0, r1	@ 0004ba96 0840
.org 0x4ba98
	cmp r0, #0	@ 0004ba98 0028
.org 0x4ba9a
	beq.n 0x4baa2	@ 0004ba9a 02d0
.org 0x4ba9c
	movs r0, #192	@ 0004ba9c c020
.org 0x4ba9e
	lsls r0, r0, #3	@ 0004ba9e c000
.org 0x4baa0
	b.n 0x4baa4	@ 0004baa0 00e0
.org 0x4baa2
	ldr r0, [pc, #20]	@ 0004baa2 0548
.org 0x4baa4
	str r0, [r6, #92]	@ 0004baa4 f065
.org 0x4baa6
	movs r0, #5	@ 0004baa6 0520
.org 0x4baa8
	strb r0, [r6, #18]	@ 0004baa8 b074
.org 0x4baaa
	adds r0, r6, #0	@ 0004baaa 301c
.org 0x4baac
	bl 0x4babc	@ 0004baac 00f006f8
