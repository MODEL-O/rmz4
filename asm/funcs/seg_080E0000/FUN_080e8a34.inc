@ FUN_080e8a34  entry 0x080e8a34  size 92
.thumb
.org 0xe8a34
FUN_080e8a34:
	push {r4, lr}	@ 000e8a34 10b5
.org 0xe8a36
	adds r4, r0, #0	@ 000e8a36 041c
.org 0xe8a38
	bl 0x1cc9c	@ 000e8a38 34f730f9
.org 0xe8a3c
	ldrb r1, [r4, #10]	@ 000e8a3c a17a
.org 0xe8a3e
	movs r0, #1	@ 000e8a3e 0120
.org 0xe8a40
	orrs r0, r1	@ 000e8a40 0843
.org 0xe8a42
	movs r1, #2	@ 000e8a42 0221
.org 0xe8a44
	orrs r0, r1	@ 000e8a44 0843
.org 0xe8a46
	strb r0, [r4, #10]	@ 000e8a46 a072
.org 0xe8a48
	adds r0, r4, #0	@ 000e8a48 201c
.org 0xe8a4a
	movs r1, #31	@ 000e8a4a 1f21
.org 0xe8a4c
	bl 0x1cf00	@ 000e8a4c 34f758fa
.org 0xe8a50
	movs r2, #0	@ 000e8a50 0022
.org 0xe8a52
	ldrb r1, [r4, #10]	@ 000e8a52 a17a
.org 0xe8a54
	movs r0, #239	@ 000e8a54 ef20
.org 0xe8a56
	ands r0, r1	@ 000e8a56 0840
.org 0xe8a58
	strb r0, [r4, #10]	@ 000e8a58 a072
.org 0xe8a5a
	movs r3, #1	@ 000e8a5a 0123
.org 0xe8a5c
	adds r0, r4, #0	@ 000e8a5c 201c
.org 0xe8a5e
	adds r0, #76	@ 000e8a5e 4c30
.org 0xe8a60
	strb r2, [r0, #0]	@ 000e8a60 0270
.org 0xe8a62
	adds r2, r4, #0	@ 000e8a62 221c
.org 0xe8a64
	adds r2, #74	@ 000e8a64 4a32
.org 0xe8a66
	ldrb r1, [r2, #0]	@ 000e8a66 1178
.org 0xe8a68
	movs r0, #17	@ 000e8a68 1120
.org 0xe8a6a
	negs r0, r0	@ 000e8a6a 4042
.org 0xe8a6c
	ands r0, r1	@ 000e8a6c 0840
.org 0xe8a6e
	strb r0, [r2, #0]	@ 000e8a6e 1070
.org 0xe8a70
	movs r0, #16	@ 000e8a70 1020
.org 0xe8a72
	strb r0, [r4, #18]	@ 000e8a72 a074
.org 0xe8a74
	ldr r1, [pc, #24]	@ 000e8a74 0649
.org 0xe8a76
	ldrb r0, [r4, #9]	@ 000e8a76 607a
.org 0xe8a78
	lsls r0, r0, #2	@ 000e8a78 8000
.org 0xe8a7a
	adds r0, r0, r1	@ 000e8a7a 4018
.org 0xe8a7c
	str r3, [r4, #12]	@ 000e8a7c e360
.org 0xe8a7e
	ldr r0, [r0, #0]	@ 000e8a7e 0068
.org 0xe8a80
	ldr r0, [r0, #4]	@ 000e8a80 4068
.org 0xe8a82
	str r0, [r4, #20]	@ 000e8a82 6061
.org 0xe8a84
	adds r0, r4, #0	@ 000e8a84 201c
.org 0xe8a86
	bl 0xe8a94	@ 000e8a86 00f005f8
.org 0xe8a8a
	pop {r4}	@ 000e8a8a 10bc
.org 0xe8a8c
	pop {r0}	@ 000e8a8c 01bc
.org 0xe8a8e
	bx r0	@ 000e8a8e 0047
