@ FUN_080a5294  entry 0x080a5294  size 74
.thumb
.org 0xa5294
FUN_080a5294:
	push {r4, r5, r6, r7, lr}	@ 000a5294 f0b5
.org 0xa5296
	mov r7, r8	@ 000a5296 4746
.org 0xa5298
	push {r7}	@ 000a5298 80b4
.org 0xa529a
	sub sp, #8	@ 000a529a 82b0
.org 0xa529c
	adds r4, r0, #0	@ 000a529c 041c
.org 0xa529e
	ldrb r0, [r4, #10]	@ 000a529e a07a
.org 0xa52a0
	lsrs r0, r0, #4	@ 000a52a0 0009
.org 0xa52a2
	movs r1, #1	@ 000a52a2 0121
.org 0xa52a4
	ands r0, r1	@ 000a52a4 0840
.org 0xa52a6
	mov r8, sp	@ 000a52a6 e846
.org 0xa52a8
	lsls r1, r0, #4	@ 000a52a8 0101
.org 0xa52aa
	orrs r0, r1	@ 000a52aa 0843
.org 0xa52ac
	lsls r7, r0, #24	@ 000a52ac 0706
.org 0xa52ae
	movs r6, #0	@ 000a52ae 0026
.org 0xa52b0
	movs r5, #2	@ 000a52b0 0225
.org 0xa52b2
	ldr r0, [r4, #84]	@ 000a52b2 606d
.org 0xa52b4
	str r0, [sp, #0]	@ 000a52b4 0090
.org 0xa52b6
	ldr r0, [r4, #88]	@ 000a52b6 a06d
.org 0xa52b8
	mov r1, r8	@ 000a52b8 4146
.org 0xa52ba
	str r0, [r1, #4]	@ 000a52ba 4860
.org 0xa52bc
	ldr r1, [pc, #32]	@ 000a52bc 0849
.org 0xa52be
	adds r1, r6, r1	@ 000a52be 7118
.org 0xa52c0
	mov r0, sp	@ 000a52c0 6846
.org 0xa52c2
	movs r2, #0	@ 000a52c2 0022
.org 0xa52c4
	lsrs r3, r7, #24	@ 000a52c4 3b0e
.org 0xa52c6
	bl 0xd4c8c	@ 000a52c6 2ff0e1fc
.org 0xa52ca
	adds r6, #28	@ 000a52ca 1c36
.org 0xa52cc
	subs r5, #1	@ 000a52cc 013d
.org 0xa52ce
	cmp r5, #0	@ 000a52ce 002d
.org 0xa52d0
	bge.n 0xa52b2	@ 000a52d0 efda
.org 0xa52d2
	add sp, #8	@ 000a52d2 02b0
.org 0xa52d4
	pop {r3}	@ 000a52d4 08bc
.org 0xa52d6
	mov r8, r3	@ 000a52d6 9846
.org 0xa52d8
	pop {r4, r5, r6, r7}	@ 000a52d8 f0bc
.org 0xa52da
	pop {r0}	@ 000a52da 01bc
.org 0xa52dc
	bx r0	@ 000a52dc 0047
