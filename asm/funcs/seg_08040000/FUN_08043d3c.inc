@ FUN_08043d3c  entry 0x08043d3c  size 74
.thumb
.org 0x43d3c
FUN_08043d3c:
	push {r4, lr}	@ 00043d3c 10b5
.org 0x43d3e
	adds r4, r0, #0	@ 00043d3e 041c
.org 0x43d40
	ldr r1, [pc, #68]	@ 00043d40 1149
.org 0x43d42
	ldrb r0, [r4, #9]	@ 00043d42 607a
.org 0x43d44
	lsls r0, r0, #2	@ 00043d44 8000
.org 0x43d46
	adds r0, r0, r1	@ 00043d46 4018
.org 0x43d48
	movs r1, #1	@ 00043d48 0121
.org 0x43d4a
	str r1, [r4, #12]	@ 00043d4a e160
.org 0x43d4c
	ldr r0, [r0, #0]	@ 00043d4c 0068
.org 0x43d4e
	ldr r0, [r0, #4]	@ 00043d4e 4068
.org 0x43d50
	str r0, [r4, #20]	@ 00043d50 6061
.org 0x43d52
	adds r0, r4, #0	@ 00043d52 201c
.org 0x43d54
	bl 0x1cc9c	@ 00043d54 d8f7a2ff
.org 0x43d58
	adds r0, r4, #0	@ 00043d58 201c
.org 0x43d5a
	bl 0x1ceec	@ 00043d5a d9f7c7f8
.org 0x43d5e
	ldrb r1, [r4, #10]	@ 00043d5e a17a
.org 0x43d60
	movs r0, #254	@ 00043d60 fe20
.org 0x43d62
	ands r0, r1	@ 00043d62 0840
.org 0x43d64
	movs r1, #2	@ 00043d64 0221
.org 0x43d66
	orrs r0, r1	@ 00043d66 0843
.org 0x43d68
	strb r0, [r4, #10]	@ 00043d68 a072
.org 0x43d6a
	ldr r1, [pc, #32]	@ 00043d6a 0849
.org 0x43d6c
	adds r0, r4, #0	@ 00043d6c 201c
.org 0x43d6e
	bl 0x1cf00	@ 00043d6e d9f7c7f8
.org 0x43d72
	movs r0, #8	@ 00043d72 0820
.org 0x43d74
	strb r0, [r4, #18]	@ 00043d74 a074
.org 0x43d76
	movs r0, #56	@ 00043d76 3820
.org 0x43d78
	strb r0, [r4, #19]	@ 00043d78 e074
.org 0x43d7a
	adds r0, r4, #0	@ 00043d7a 201c
.org 0x43d7c
	bl 0x43d90	@ 00043d7c 00f008f8
.org 0x43d80
	pop {r4}	@ 00043d80 10bc
.org 0x43d82
	pop {r0}	@ 00043d82 01bc
.org 0x43d84
	bx r0	@ 00043d84 0047
