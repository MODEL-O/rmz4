@ FUN_080d7984  entry 0x080d7984  size 162
.thumb
.org 0xd7984
FUN_080d7984:
	push {r4, r5, r6, r7, lr}	@ 000d7984 f0b5
.org 0xd7986
	mov r7, sl	@ 000d7986 5746
.org 0xd7988
	mov r6, r9	@ 000d7988 4e46
.org 0xd798a
	mov r5, r8	@ 000d798a 4546
.org 0xd798c
	push {r5, r6, r7}	@ 000d798c e0b4
.org 0xd798e
	sub sp, #8	@ 000d798e 82b0
.org 0xd7990
	str r0, [sp, #4]	@ 000d7990 0190
.org 0xd7992
	adds r5, r1, #0	@ 000d7992 0d1c
.org 0xd7994
	adds r6, r2, #0	@ 000d7994 161c
.org 0xd7996
	str r3, [sp, #0]	@ 000d7996 0093
.org 0xd7998
	ldr r0, [sp, #44]	@ 000d7998 0b98
.org 0xd799a
	ldr r1, [sp, #48]	@ 000d799a 0c99
.org 0xd799c
	ldr r2, [sp, #52]	@ 000d799c 0d9a
.org 0xd799e
	lsls r0, r0, #24	@ 000d799e 0006
.org 0xd79a0
	lsrs r0, r0, #24	@ 000d79a0 000e
.org 0xd79a2
	mov sl, r0	@ 000d79a2 8246
.org 0xd79a4
	lsls r1, r1, #24	@ 000d79a4 0906
.org 0xd79a6
	lsrs r1, r1, #24	@ 000d79a6 090e
.org 0xd79a8
	mov r9, r1	@ 000d79a8 8946
.org 0xd79aa
	lsls r2, r2, #24	@ 000d79aa 1206
.org 0xd79ac
	lsrs r2, r2, #24	@ 000d79ac 120e
.org 0xd79ae
	mov r8, r2	@ 000d79ae 9046
.org 0xd79b0
	ldr r0, [pc, #116]	@ 000d79b0 1d48
.org 0xd79b2
	ldr r0, [r0, #0]	@ 000d79b2 0068
.org 0xd79b4
	bl 0x5500	@ 000d79b4 2df7a4fd
.org 0xd79b8
	mov ip, r0	@ 000d79b8 8446
.org 0xd79ba
	cmp r0, #0	@ 000d79ba 0028
.org 0xd79bc
	beq.n 0xd7a16	@ 000d79bc 2bd0
.org 0xd79be
	mov r4, ip	@ 000d79be 6446
.org 0xd79c0
	adds r4, #37	@ 000d79c0 2534
.org 0xd79c2
	movs r2, #0	@ 000d79c2 0022
.org 0xd79c4
	movs r3, #1	@ 000d79c4 0123
.org 0xd79c6
	strb r3, [r4, #0]	@ 000d79c6 2370
.org 0xd79c8
	ldr r1, [pc, #96]	@ 000d79c8 1849
.org 0xd79ca
	movs r0, #23	@ 000d79ca 1720
.org 0xd79cc
	mov r7, ip	@ 000d79cc 6746
.org 0xd79ce
	strb r0, [r7, #9]	@ 000d79ce 7872
.org 0xd79d0
	ldr r0, [r1, #92]	@ 000d79d0 c86d
.org 0xd79d2
	ldr r0, [r0, #0]	@ 000d79d2 0068
.org 0xd79d4
	str r0, [r7, #20]	@ 000d79d4 7861
.org 0xd79d6
	movs r1, #0	@ 000d79d6 0021
.org 0xd79d8
	strh r2, [r7, #32]	@ 000d79d8 3a84
.org 0xd79da
	mov r2, ip	@ 000d79da 6246
.org 0xd79dc
	adds r2, #34	@ 000d79dc 2232
.org 0xd79de
	strb r1, [r2, #0]	@ 000d79de 1170
.org 0xd79e0
	movs r0, #4	@ 000d79e0 0420
.org 0xd79e2
	strb r0, [r7, #16]	@ 000d79e2 3874
.org 0xd79e4
	ldr r0, [sp, #4]	@ 000d79e4 0198
.org 0xd79e6
	str r0, [r7, #40]	@ 000d79e6 b862
.org 0xd79e8
	ldr r0, [sp, #40]	@ 000d79e8 0a98
.org 0xd79ea
	str r0, [r7, #116]	@ 000d79ea 7867
.org 0xd79ec
	ldr r0, [r5, #0]	@ 000d79ec 2868
.org 0xd79ee
	str r0, [r7, #84]	@ 000d79ee 7865
.org 0xd79f0
	ldr r0, [r5, #4]	@ 000d79f0 6868
.org 0xd79f2
	str r0, [r7, #88]	@ 000d79f2 b865
.org 0xd79f4
	ldr r0, [r6, #0]	@ 000d79f4 3068
.org 0xd79f6
	str r0, [r7, #92]	@ 000d79f6 f865
.org 0xd79f8
	ldr r0, [r6, #4]	@ 000d79f8 7068
.org 0xd79fa
	str r0, [r7, #96]	@ 000d79fa 3866
.org 0xd79fc
	ldr r5, [sp, #0]	@ 000d79fc 009d
.org 0xd79fe
	str r5, [r7, #104]	@ 000d79fe bd66
.org 0xd7a00
	mov r0, sl	@ 000d7a00 5046
.org 0xd7a02
	strb r0, [r7, #18]	@ 000d7a02 b874
.org 0xd7a04
	mov r5, r9	@ 000d7a04 4d46
.org 0xd7a06
	strb r5, [r4, #0]	@ 000d7a06 2570
.org 0xd7a08
	mov r7, r8	@ 000d7a08 4746
.org 0xd7a0a
	strb r7, [r2, #0]	@ 000d7a0a 1770
.org 0xd7a0c
	mov r0, ip	@ 000d7a0c 6046
.org 0xd7a0e
	adds r0, #120	@ 000d7a0e 7830
.org 0xd7a10
	strb r3, [r0, #0]	@ 000d7a10 0370
.org 0xd7a12
	adds r0, #1	@ 000d7a12 0130
.org 0xd7a14
	strb r1, [r0, #0]	@ 000d7a14 0170
.org 0xd7a16
	add sp, #8	@ 000d7a16 02b0
.org 0xd7a18
	pop {r3, r4, r5}	@ 000d7a18 38bc
.org 0xd7a1a
	mov r8, r3	@ 000d7a1a 9846
.org 0xd7a1c
	mov r9, r4	@ 000d7a1c a146
.org 0xd7a1e
	mov sl, r5	@ 000d7a1e aa46
.org 0xd7a20
	pop {r4, r5, r6, r7}	@ 000d7a20 f0bc
.org 0xd7a22
	pop {r0}	@ 000d7a22 01bc
.org 0xd7a24
	bx r0	@ 000d7a24 0047
