@ FUN_0810e790  entry 0x0810e790  size 102
.thumb
.org 0x10e790
FUN_0810e790:
	push {r4, r5, r6, r7, lr}	@ 0010e790 f0b5
.org 0x10e792
	mov r7, r9	@ 0010e792 4f46
.org 0x10e794
	mov r6, r8	@ 0010e794 4646
.org 0x10e796
	push {r6, r7}	@ 0010e796 c0b4
.org 0x10e798
	adds r4, r0, #0	@ 0010e798 041c
.org 0x10e79a
	lsls r1, r1, #24	@ 0010e79a 0906
.org 0x10e79c
	lsrs r5, r1, #24	@ 0010e79c 0d0e
.org 0x10e79e
	ldr r7, [pc, #88]	@ 0010e79e 164f
.org 0x10e7a0
	ldr r0, [pc, #88]	@ 0010e7a0 1648
.org 0x10e7a2
	mov r8, r0	@ 0010e7a2 8046
.org 0x10e7a4
	ldrh r0, [r0, #0]	@ 0010e7a4 0088
.org 0x10e7a6
	movs r1, #12	@ 0010e7a6 0c21
.org 0x10e7a8
	mov r9, r1	@ 0010e7a8 8946
.org 0x10e7aa
	ands r1, r0	@ 0010e7aa 0140
.org 0x10e7ac
	lsls r1, r1, #12	@ 0010e7ac 0903
.org 0x10e7ae
	ldr r6, [pc, #80]	@ 0010e7ae 144e
.org 0x10e7b0
	ldr r0, [r6, #4]	@ 0010e7b0 7068
.org 0x10e7b2
	adds r1, r1, r0	@ 0010e7b2 0918
.org 0x10e7b4
	adds r0, r7, #0	@ 0010e7b4 381c
.org 0x10e7b6
	bl 0x1ea4	@ 0010e7b6 f3f675fb
.org 0x10e7ba
	ldrb r0, [r4, #4]	@ 0010e7ba 2079
.org 0x10e7bc
	cmp r0, #1	@ 0010e7bc 0128
.org 0x10e7be
	beq.n 0x10e7ea	@ 0010e7be 14d0
.org 0x10e7c0
	cmp r5, #0	@ 0010e7c0 002d
.org 0x10e7c2
	beq.n 0x10e7ea	@ 0010e7c2 12d0
.org 0x10e7c4
	lsls r4, r5, #2	@ 0010e7c4 ac00
.org 0x10e7c6
	adds r4, r4, r5	@ 0010e7c6 6419
.org 0x10e7c8
	lsls r4, r4, #2	@ 0010e7c8 a400
.org 0x10e7ca
	adds r0, r4, r7	@ 0010e7ca e019
.org 0x10e7cc
	mov r1, r8	@ 0010e7cc 4146
.org 0x10e7ce
	ldrh r2, [r1, #0]	@ 0010e7ce 0a88
.org 0x10e7d0
	mov r1, r9	@ 0010e7d0 4946
.org 0x10e7d2
	ands r1, r2	@ 0010e7d2 1140
.org 0x10e7d4
	lsls r1, r1, #12	@ 0010e7d4 0903
.org 0x10e7d6
	ldr r2, [r6, #0]	@ 0010e7d6 3268
.org 0x10e7d8
	adds r1, r1, r2	@ 0010e7d8 8918
.org 0x10e7da
	bl 0x1ea4	@ 0010e7da f3f663fb
.org 0x10e7de
	ldr r0, [pc, #36]	@ 0010e7de 0948
.org 0x10e7e0
	adds r4, r4, r0	@ 0010e7e0 2418
.org 0x10e7e2
	adds r0, r4, #0	@ 0010e7e2 201c
.org 0x10e7e4
	movs r1, #32	@ 0010e7e4 2021
.org 0x10e7e6
	bl 0x2208	@ 0010e7e6 f3f60ffd
.org 0x10e7ea
	pop {r3, r4}	@ 0010e7ea 18bc
.org 0x10e7ec
	mov r8, r3	@ 0010e7ec 9846
.org 0x10e7ee
	mov r9, r4	@ 0010e7ee a146
.org 0x10e7f0
	pop {r4, r5, r6, r7}	@ 0010e7f0 f0bc
.org 0x10e7f2
	pop {r0}	@ 0010e7f2 01bc
.org 0x10e7f4
	bx r0	@ 0010e7f4 0047
