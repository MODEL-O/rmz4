@ FUN_08045fe8  entry 0x08045fe8  size 88
.thumb
.org 0x45fe8
FUN_08045fe8:
	push {r4, lr}	@ 00045fe8 10b5
.org 0x45fea
	adds r4, r0, #0	@ 00045fea 041c
.org 0x45fec
	bl 0x1cff0	@ 00045fec d7f700f8
.org 0x45ff0
	adds r0, r4, #0	@ 00045ff0 201c
.org 0x45ff2
	adds r0, #188	@ 00045ff2 bc30
.org 0x45ff4
	ldr r1, [r0, #0]	@ 00045ff4 0168
.org 0x45ff6
	ldrb r2, [r4, #10]	@ 00045ff6 a27a
.org 0x45ff8
	movs r0, #16	@ 00045ff8 1020
.org 0x45ffa
	ands r0, r2	@ 00045ffa 1040
.org 0x45ffc
	cmp r0, #0	@ 00045ffc 0028
.org 0x45ffe
	beq.n 0x46004	@ 00045ffe 01d0
.org 0x46000
	ldr r0, [pc, #60]	@ 00046000 0f48
.org 0x46002
	adds r1, r1, r0	@ 00046002 0918
.org 0x46004
	str r1, [r4, #84]	@ 00046004 6165
.org 0x46006
	adds r0, r4, #0	@ 00046006 201c
.org 0x46008
	adds r0, #192	@ 00046008 c030
.org 0x4600a
	ldr r1, [r0, #0]	@ 0004600a 0168
.org 0x4600c
	movs r0, #32	@ 0004600c 2020
.org 0x4600e
	ands r0, r2	@ 0004600e 1040
.org 0x46010
	cmp r0, #0	@ 00046010 0028
.org 0x46012
	beq.n 0x46018	@ 00046012 01d0
.org 0x46014
	ldr r0, [pc, #40]	@ 00046014 0a48
.org 0x46016
	adds r1, r1, r0	@ 00046016 0918
.org 0x46018
	str r1, [r4, #88]	@ 00046018 a165
.org 0x4601a
	ldrb r0, [r4, #18]	@ 0004601a a07c
.org 0x4601c
	adds r0, #1	@ 0004601c 0130
.org 0x4601e
	strb r0, [r4, #18]	@ 0004601e a074
.org 0x46020
	lsls r0, r0, #24	@ 00046020 0006
.org 0x46022
	lsrs r0, r0, #24	@ 00046022 000e
.org 0x46024
	cmp r0, #2	@ 00046024 0228
.org 0x46026
	bls.n 0x4603a	@ 00046026 08d9
.org 0x46028
	ldr r1, [pc, #24]	@ 00046028 0649
.org 0x4602a
	ldrb r0, [r4, #9]	@ 0004602a 607a
.org 0x4602c
	lsls r0, r0, #2	@ 0004602c 8000
.org 0x4602e
	adds r0, r0, r1	@ 0004602e 4018
.org 0x46030
	movs r1, #2	@ 00046030 0221
.org 0x46032
	str r1, [r4, #12]	@ 00046032 e160
.org 0x46034
	ldr r0, [r0, #0]	@ 00046034 0068
.org 0x46036
	ldr r0, [r0, #8]	@ 00046036 8068
.org 0x46038
	str r0, [r4, #20]	@ 00046038 6061
.org 0x4603a
	pop {r4}	@ 0004603a 10bc
.org 0x4603c
	pop {r0}	@ 0004603c 01bc
.org 0x4603e
	bx r0	@ 0004603e 0047
