@ FUN_08108fb8  entry 0x08108fb8  size 92
.thumb
.org 0x108fb8
FUN_08108fb8:
	push {r4, r5, r6, r7, lr}	@ 00108fb8 f0b5
.org 0x108fba
	sub sp, #8	@ 00108fba 82b0
.org 0x108fbc
	adds r4, r0, #0	@ 00108fbc 041c
.org 0x108fbe
	ldr r6, [pc, #84]	@ 00108fbe 154e
.org 0x108fc0
	str r4, [r6, #0]	@ 00108fc0 3460
.org 0x108fc2
	movs r5, #0	@ 00108fc2 0025
.org 0x108fc4
	str r5, [sp, #0]	@ 00108fc4 0095
.org 0x108fc6
	movs r2, #128	@ 00108fc6 8022
.org 0x108fc8
	lsls r2, r2, #17	@ 00108fc8 5204
.org 0x108fca
	mov r0, sp	@ 00108fca 6846
.org 0x108fcc
	adds r1, r4, #0	@ 00108fcc 211c
.org 0x108fce
	bl 0x128be0	@ 00108fce 1ff007fe
.org 0x108fd2
	str r5, [sp, #4]	@ 00108fd2 0195
.org 0x108fd4
	add r0, sp, #4	@ 00108fd4 01a8
.org 0x108fd6
	ldr r2, [pc, #64]	@ 00108fd6 104a
.org 0x108fd8
	adds r1, r4, #0	@ 00108fd8 211c
.org 0x108fda
	bl 0x128be4	@ 00108fda 1ff003fe
.org 0x108fde
	movs r7, #3	@ 00108fde 0327
.org 0x108fe0
	ldr r2, [r6, #0]	@ 00108fe0 3268
.org 0x108fe2
	lsrs r4, r5, #2	@ 00108fe2 ac08
.org 0x108fe4
	adds r2, r2, r4	@ 00108fe4 1219
.org 0x108fe6
	adds r3, r5, #0	@ 00108fe6 2b1c
.org 0x108fe8
	ands r3, r7	@ 00108fe8 3b40
.org 0x108fea
	movs r0, #1	@ 00108fea 0120
.org 0x108fec
	lsls r0, r3	@ 00108fec 9840
.org 0x108fee
	ldrb r1, [r2, #0]	@ 00108fee 1178
.org 0x108ff0
	orrs r0, r1	@ 00108ff0 0843
.org 0x108ff2
	strb r0, [r2, #0]	@ 00108ff2 1070
.org 0x108ff4
	ldr r2, [r6, #0]	@ 00108ff4 3268
.org 0x108ff6
	adds r2, r2, r4	@ 00108ff6 1219
.org 0x108ff8
	movs r0, #16	@ 00108ff8 1020
.org 0x108ffa
	lsls r0, r3	@ 00108ffa 9840
.org 0x108ffc
	ldrb r1, [r2, #0]	@ 00108ffc 1178
.org 0x108ffe
	orrs r0, r1	@ 00108ffe 0843
.org 0x109000
	strb r0, [r2, #0]	@ 00109000 1070
.org 0x109002
	adds r0, r5, #1	@ 00109002 681c
.org 0x109004
	lsls r0, r0, #24	@ 00109004 0006
.org 0x109006
	lsrs r5, r0, #24	@ 00109006 050e
.org 0x109008
	cmp r5, #27	@ 00109008 1b2d
.org 0x10900a
	bls.n 0x108fe0	@ 0010900a e9d9
.org 0x10900c
	add sp, #8	@ 0010900c 02b0
.org 0x10900e
	pop {r4, r5, r6, r7}	@ 0010900e f0bc
.org 0x109010
	pop {r0}	@ 00109010 01bc
.org 0x109012
	bx r0	@ 00109012 0047
