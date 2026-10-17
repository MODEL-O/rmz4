@ FUN_080a318c  entry 0x080a318c  size 92
.thumb
.org 0xa318c
FUN_080a318c:
	push {r4, r5, lr}	@ 000a318c 30b5
.org 0xa318e
	sub sp, #8	@ 000a318e 82b0
.org 0xa3190
	ldrb r1, [r0, #10]	@ 000a3190 817a
.org 0xa3192
	lsrs r5, r1, #4	@ 000a3192 0d09
.org 0xa3194
	movs r3, #1	@ 000a3194 0123
.org 0xa3196
	ands r5, r3	@ 000a3196 1d40
.org 0xa3198
	ldr r1, [r0, #84]	@ 000a3198 416d
.org 0xa319a
	str r1, [sp, #0]	@ 000a319a 0091
.org 0xa319c
	ldr r0, [r0, #88]	@ 000a319c 806d
.org 0xa319e
	str r0, [sp, #4]	@ 000a319e 0190
.org 0xa31a0
	ldr r2, [pc, #68]	@ 000a31a0 114a
.org 0xa31a2
	ldr r1, [r2, #0]	@ 000a31a2 1168
.org 0xa31a4
	ldr r0, [pc, #68]	@ 000a31a4 1148
.org 0xa31a6
	muls r0, r1	@ 000a31a6 4843
.org 0xa31a8
	ldr r1, [pc, #68]	@ 000a31a8 1149
.org 0xa31aa
	adds r0, r0, r1	@ 000a31aa 4018
.org 0xa31ac
	lsls r0, r0, #1	@ 000a31ac 4000
.org 0xa31ae
	lsrs r1, r0, #1	@ 000a31ae 4108
.org 0xa31b0
	str r1, [r2, #0]	@ 000a31b0 1160
.org 0xa31b2
	lsrs r0, r0, #17	@ 000a31b2 400c
.org 0xa31b4
	ands r0, r3	@ 000a31b4 1840
.org 0xa31b6
	adds r4, r0, #1	@ 000a31b6 441c
.org 0xa31b8
	cmp r4, #0	@ 000a31b8 002c
.org 0xa31ba
	blt.n 0xa31e0	@ 000a31ba 11db
.org 0xa31bc
	lsls r0, r5, #4	@ 000a31bc 2801
.org 0xa31be
	orrs r5, r0	@ 000a31be 0543
.org 0xa31c0
	lsls r5, r5, #24	@ 000a31c0 2d06
.org 0xa31c2
	movs r0, #1	@ 000a31c2 0120
.org 0xa31c4
	ands r0, r4	@ 000a31c4 2040
.org 0xa31c6
	lsls r1, r0, #3	@ 000a31c6 c100
.org 0xa31c8
	subs r1, r1, r0	@ 000a31c8 091a
.org 0xa31ca
	lsls r1, r1, #2	@ 000a31ca 8900
.org 0xa31cc
	ldr r0, [pc, #36]	@ 000a31cc 0948
.org 0xa31ce
	adds r1, r1, r0	@ 000a31ce 0918
.org 0xa31d0
	mov r0, sp	@ 000a31d0 6846
.org 0xa31d2
	movs r2, #0	@ 000a31d2 0022
.org 0xa31d4
	lsrs r3, r5, #24	@ 000a31d4 2b0e
.org 0xa31d6
	bl 0xd4c8c	@ 000a31d6 31f059fd
.org 0xa31da
	subs r4, #1	@ 000a31da 013c
.org 0xa31dc
	cmp r4, #0	@ 000a31dc 002c
.org 0xa31de
	bge.n 0xa31c2	@ 000a31de f0da
.org 0xa31e0
	add sp, #8	@ 000a31e0 02b0
.org 0xa31e2
	pop {r4, r5}	@ 000a31e2 30bc
.org 0xa31e4
	pop {r0}	@ 000a31e4 01bc
.org 0xa31e6
	bx r0	@ 000a31e6 0047
