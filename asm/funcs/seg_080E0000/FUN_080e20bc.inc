@ FUN_080e20bc  entry 0x080e20bc  size 110
.thumb
.org 0xe20bc
FUN_080e20bc:
	push {r4, r5, lr}	@ 000e20bc 30b5
.org 0xe20be
	sub sp, #8	@ 000e20be 82b0
.org 0xe20c0
	adds r4, r0, #0	@ 000e20c0 041c
.org 0xe20c2
	ldr r0, [pc, #104]	@ 000e20c2 1a48
.org 0xe20c4
	ldr r1, [r0, #4]	@ 000e20c4 4168
.org 0xe20c6
	ldr r0, [r0, #0]	@ 000e20c6 0068
.org 0xe20c8
	str r0, [sp, #0]	@ 000e20c8 0090
.org 0xe20ca
	str r1, [sp, #4]	@ 000e20ca 0191
.org 0xe20cc
	ldrb r5, [r4, #16]	@ 000e20cc 257c
.org 0xe20ce
	ldr r1, [pc, #96]	@ 000e20ce 1849
.org 0xe20d0
	ldrb r0, [r4, #9]	@ 000e20d0 607a
.org 0xe20d2
	lsls r0, r0, #2	@ 000e20d2 8000
.org 0xe20d4
	adds r0, r0, r1	@ 000e20d4 4018
.org 0xe20d6
	movs r1, #1	@ 000e20d6 0121
.org 0xe20d8
	str r1, [r4, #12]	@ 000e20d8 e160
.org 0xe20da
	ldr r0, [r0, #0]	@ 000e20da 0068
.org 0xe20dc
	ldr r0, [r0, #4]	@ 000e20dc 4068
.org 0xe20de
	str r0, [r4, #20]	@ 000e20de 6061
.org 0xe20e0
	ldrb r1, [r4, #10]	@ 000e20e0 a17a
.org 0xe20e2
	movs r0, #1	@ 000e20e2 0120
.org 0xe20e4
	orrs r0, r1	@ 000e20e4 0843
.org 0xe20e6
	movs r1, #2	@ 000e20e6 0221
.org 0xe20e8
	orrs r0, r1	@ 000e20e8 0843
.org 0xe20ea
	strb r0, [r4, #10]	@ 000e20ea a072
.org 0xe20ec
	adds r0, r4, #0	@ 000e20ec 201c
.org 0xe20ee
	bl 0x1cc9c	@ 000e20ee 3af7d5fd
.org 0xe20f2
	movs r2, #0	@ 000e20f2 0022
.org 0xe20f4
	ldrb r1, [r4, #10]	@ 000e20f4 a17a
.org 0xe20f6
	movs r0, #239	@ 000e20f6 ef20
.org 0xe20f8
	ands r0, r1	@ 000e20f8 0840
.org 0xe20fa
	strb r0, [r4, #10]	@ 000e20fa a072
.org 0xe20fc
	adds r0, r4, #0	@ 000e20fc 201c
.org 0xe20fe
	adds r0, #76	@ 000e20fe 4c30
.org 0xe2100
	strb r2, [r0, #0]	@ 000e2100 0270
.org 0xe2102
	adds r2, r4, #0	@ 000e2102 221c
.org 0xe2104
	adds r2, #74	@ 000e2104 4a32
.org 0xe2106
	ldrb r1, [r2, #0]	@ 000e2106 1178
.org 0xe2108
	movs r0, #17	@ 000e2108 1120
.org 0xe210a
	negs r0, r0	@ 000e210a 4042
.org 0xe210c
	ands r0, r1	@ 000e210c 0840
.org 0xe210e
	strb r0, [r2, #0]	@ 000e210e 1070
.org 0xe2110
	lsls r5, r5, #2	@ 000e2110 ad00
.org 0xe2112
	add r5, sp	@ 000e2112 6d44
.org 0xe2114
	ldrh r1, [r5, #0]	@ 000e2114 2988
.org 0xe2116
	adds r0, r4, #0	@ 000e2116 201c
.org 0xe2118
	bl 0x1cf00	@ 000e2118 3af7f2fe
.org 0xe211c
	adds r0, r4, #0	@ 000e211c 201c
.org 0xe211e
	bl 0xe2134	@ 000e211e 00f009f8
.org 0xe2122
	add sp, #8	@ 000e2122 02b0
.org 0xe2124
	pop {r4, r5}	@ 000e2124 30bc
.org 0xe2126
	pop {r0}	@ 000e2126 01bc
.org 0xe2128
	bx r0	@ 000e2128 0047
