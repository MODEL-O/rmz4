@ FUN_080e2898  entry 0x080e2898  size 84
.thumb
.org 0xe2898
FUN_080e2898:
	push {r4, lr}	@ 000e2898 10b5
.org 0xe289a
	adds r4, r0, #0	@ 000e289a 041c
.org 0xe289c
	bl 0x1cff0	@ 000e289c 3af7a8fb
.org 0xe28a0
	ldrb r0, [r4, #18]	@ 000e28a0 a07c
.org 0xe28a2
	subs r1, r0, #1	@ 000e28a2 411e
.org 0xe28a4
	strb r1, [r4, #18]	@ 000e28a4 a174
.org 0xe28a6
	lsls r0, r1, #24	@ 000e28a6 0806
.org 0xe28a8
	cmp r0, #0	@ 000e28a8 0028
.org 0xe28aa
	bne.n 0xe28cc	@ 000e28aa 0fd1
.org 0xe28ac
	ldr r1, [pc, #24]	@ 000e28ac 0649
.org 0xe28ae
	ldrb r0, [r4, #9]	@ 000e28ae 607a
.org 0xe28b0
	lsls r0, r0, #2	@ 000e28b0 8000
.org 0xe28b2
	adds r0, r0, r1	@ 000e28b2 4018
.org 0xe28b4
	movs r1, #2	@ 000e28b4 0221
.org 0xe28b6
	str r1, [r4, #12]	@ 000e28b6 e160
.org 0xe28b8
	ldr r0, [r0, #0]	@ 000e28b8 0068
.org 0xe28ba
	ldr r0, [r0, #8]	@ 000e28ba 8068
.org 0xe28bc
	str r0, [r4, #20]	@ 000e28bc 6061
.org 0xe28be
	adds r0, r4, #0	@ 000e28be 201c
.org 0xe28c0
	bl 0xe28f4	@ 000e28c0 00f018f8
.org 0xe28c4
	b.n 0xe28ec	@ 000e28c4 12e0
.org 0xe28c6
	.byte 0x00	@ 000e28c6 data
.org 0xe28c7
	.byte 0x00	@ 000e28c7 data
.org 0xe28c8
	.byte 0x64,0x6f,0x86,0x08	@ 000e28c8 data
.org 0xe28cc
	lsls r0, r1, #24	@ 000e28cc 0806
.org 0xe28ce
	lsrs r0, r0, #24	@ 000e28ce 000e
.org 0xe28d0
	cmp r0, #3	@ 000e28d0 0328
.org 0xe28d2
	bhi.n 0xe28ec	@ 000e28d2 0bd8
.org 0xe28d4
	movs r0, #1	@ 000e28d4 0120
.org 0xe28d6
	ands r1, r0	@ 000e28d6 0140
.org 0xe28d8
	cmp r1, #0	@ 000e28d8 0029
.org 0xe28da
	beq.n 0xe28e4	@ 000e28da 03d0
.org 0xe28dc
	ldrb r0, [r4, #10]	@ 000e28dc a07a
.org 0xe28de
	movs r1, #1	@ 000e28de 0121
.org 0xe28e0
	orrs r0, r1	@ 000e28e0 0843
.org 0xe28e2
	b.n 0xe28ea	@ 000e28e2 02e0
.org 0xe28e4
	ldrb r1, [r4, #10]	@ 000e28e4 a17a
.org 0xe28e6
	movs r0, #254	@ 000e28e6 fe20
.org 0xe28e8
	ands r0, r1	@ 000e28e8 0840
.org 0xe28ea
	strb r0, [r4, #10]	@ 000e28ea a072
