@ FUN_080e8e6c  entry 0x080e8e6c  size 74
.thumb
.org 0xe8e6c
FUN_080e8e6c:
	push {r4, lr}	@ 000e8e6c 10b5
.org 0xe8e6e
	adds r4, r0, #0	@ 000e8e6e 041c
.org 0xe8e70
	movs r2, #0	@ 000e8e70 0022
.org 0xe8e72
	ldrb r1, [r4, #10]	@ 000e8e72 a17a
.org 0xe8e74
	movs r0, #239	@ 000e8e74 ef20
.org 0xe8e76
	ands r0, r1	@ 000e8e76 0840
.org 0xe8e78
	strb r0, [r4, #10]	@ 000e8e78 a072
.org 0xe8e7a
	adds r0, r4, #0	@ 000e8e7a 201c
.org 0xe8e7c
	adds r0, #76	@ 000e8e7c 4c30
.org 0xe8e7e
	strb r2, [r0, #0]	@ 000e8e7e 0270
.org 0xe8e80
	adds r3, r4, #0	@ 000e8e80 231c
.org 0xe8e82
	adds r3, #74	@ 000e8e82 4a33
.org 0xe8e84
	ldrb r1, [r3, #0]	@ 000e8e84 1978
.org 0xe8e86
	movs r0, #17	@ 000e8e86 1120
.org 0xe8e88
	negs r0, r0	@ 000e8e88 4042
.org 0xe8e8a
	ands r0, r1	@ 000e8e8a 0840
.org 0xe8e8c
	strb r0, [r3, #0]	@ 000e8e8c 1870
.org 0xe8e8e
	str r2, [r4, #44]	@ 000e8e8e e262
.org 0xe8e90
	ldr r1, [pc, #36]	@ 000e8e90 0949
.org 0xe8e92
	ldrb r0, [r4, #16]	@ 000e8e92 207c
.org 0xe8e94
	lsls r0, r0, #2	@ 000e8e94 8000
.org 0xe8e96
	adds r0, r0, r1	@ 000e8e96 4018
.org 0xe8e98
	ldr r1, [r0, #0]	@ 000e8e98 0168
.org 0xe8e9a
	adds r0, r4, #0	@ 000e8e9a 201c
.org 0xe8e9c
	bl 0x128f80	@ 000e8e9c 40f070f8
.org 0xe8ea0
	adds r4, #73	@ 000e8ea0 4934
.org 0xe8ea2
	ldrb r1, [r4, #0]	@ 000e8ea2 2178
.org 0xe8ea4
	movs r0, #13	@ 000e8ea4 0d20
.org 0xe8ea6
	negs r0, r0	@ 000e8ea6 4042
.org 0xe8ea8
	ands r0, r1	@ 000e8ea8 0840
.org 0xe8eaa
	movs r1, #4	@ 000e8eaa 0421
.org 0xe8eac
	orrs r0, r1	@ 000e8eac 0843
.org 0xe8eae
	strb r0, [r4, #0]	@ 000e8eae 2070
.org 0xe8eb0
	pop {r4}	@ 000e8eb0 10bc
.org 0xe8eb2
	pop {r0}	@ 000e8eb2 01bc
.org 0xe8eb4
	bx r0	@ 000e8eb4 0047
