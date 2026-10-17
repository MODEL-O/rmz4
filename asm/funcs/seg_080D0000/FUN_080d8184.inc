@ FUN_080d8184  entry 0x080d8184  size 116
.thumb
.org 0xd8184
FUN_080d8184:
	push {r4, r5, r6, lr}	@ 000d8184 70b5
.org 0xd8186
	adds r5, r0, #0	@ 000d8186 051c
.org 0xd8188
	ldrb r4, [r5, #17]	@ 000d8188 6c7c
.org 0xd818a
	ldr r1, [pc, #52]	@ 000d818a 0d49
.org 0xd818c
	ldrb r0, [r5, #9]	@ 000d818c 687a
.org 0xd818e
	lsls r0, r0, #2	@ 000d818e 8000
.org 0xd8190
	adds r0, r0, r1	@ 000d8190 4018
.org 0xd8192
	movs r1, #1	@ 000d8192 0121
.org 0xd8194
	str r1, [r5, #12]	@ 000d8194 e960
.org 0xd8196
	ldr r0, [r0, #0]	@ 000d8196 0068
.org 0xd8198
	ldr r0, [r0, #4]	@ 000d8198 4068
.org 0xd819a
	str r0, [r5, #20]	@ 000d819a 6861
.org 0xd819c
	ldrb r1, [r5, #10]	@ 000d819c a97a
.org 0xd819e
	movs r0, #1	@ 000d819e 0120
.org 0xd81a0
	movs r6, #0	@ 000d81a0 0026
.org 0xd81a2
	orrs r0, r1	@ 000d81a2 0843
.org 0xd81a4
	movs r1, #2	@ 000d81a4 0221
.org 0xd81a6
	orrs r0, r1	@ 000d81a6 0843
.org 0xd81a8
	strb r0, [r5, #10]	@ 000d81a8 a872
.org 0xd81aa
	movs r0, #96	@ 000d81aa 6020
.org 0xd81ac
	str r0, [r5, #116]	@ 000d81ac 6867
.org 0xd81ae
	adds r0, r5, #0	@ 000d81ae 281c
.org 0xd81b0
	bl 0x1cc9c	@ 000d81b0 44f774fd
.org 0xd81b4
	cmp r4, #0	@ 000d81b4 002c
.org 0xd81b6
	beq.n 0xd81c4	@ 000d81b6 05d0
.org 0xd81b8
	ldrb r0, [r5, #10]	@ 000d81b8 a87a
.org 0xd81ba
	movs r1, #16	@ 000d81ba 1021
.org 0xd81bc
	orrs r0, r1	@ 000d81bc 0843
.org 0xd81be
	b.n 0xd81ca	@ 000d81be 04e0
.org 0xd81c0
	.byte 0x64,0x6f,0x86,0x08	@ 000d81c0 data
.org 0xd81c4
	ldrb r1, [r5, #10]	@ 000d81c4 a97a
.org 0xd81c6
	movs r0, #239	@ 000d81c6 ef20
.org 0xd81c8
	ands r0, r1	@ 000d81c8 0840
.org 0xd81ca
	strb r0, [r5, #10]	@ 000d81ca a872
.org 0xd81cc
	movs r1, #1	@ 000d81cc 0121
.org 0xd81ce
	ands r1, r4	@ 000d81ce 2140
.org 0xd81d0
	adds r0, r5, #0	@ 000d81d0 281c
.org 0xd81d2
	adds r0, #76	@ 000d81d2 4c30
.org 0xd81d4
	strb r1, [r0, #0]	@ 000d81d4 0170
.org 0xd81d6
	adds r3, r5, #0	@ 000d81d6 2b1c
.org 0xd81d8
	adds r3, #74	@ 000d81d8 4a33
.org 0xd81da
	lsls r1, r1, #4	@ 000d81da 0901
.org 0xd81dc
	ldrb r2, [r3, #0]	@ 000d81dc 1a78
.org 0xd81de
	movs r0, #17	@ 000d81de 1120
.org 0xd81e0
	negs r0, r0	@ 000d81e0 4042
.org 0xd81e2
	ands r0, r2	@ 000d81e2 1040
.org 0xd81e4
	orrs r0, r1	@ 000d81e4 0843
.org 0xd81e6
	strb r0, [r3, #0]	@ 000d81e6 1870
.org 0xd81e8
	ldr r1, [pc, #16]	@ 000d81e8 0449
.org 0xd81ea
	adds r0, r5, #0	@ 000d81ea 281c
.org 0xd81ec
	bl 0x1cf00	@ 000d81ec 44f788fe
.org 0xd81f0
	adds r0, r5, #0	@ 000d81f0 281c
.org 0xd81f2
	bl 0xd8200	@ 000d81f2 00f005f8
.org 0xd81f6
	pop {r4, r5, r6}	@ 000d81f6 70bc
