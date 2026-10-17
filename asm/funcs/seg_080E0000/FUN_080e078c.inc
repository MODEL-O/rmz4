@ FUN_080e078c  entry 0x080e078c  size 132
.thumb
.org 0xe078c
FUN_080e078c:
	push {r4, r5, r6, lr}	@ 000e078c 70b5
.org 0xe078e
	mov r6, r8	@ 000e078e 4646
.org 0xe0790
	push {r6}	@ 000e0790 40b4
.org 0xe0792
	sub sp, #8	@ 000e0792 82b0
.org 0xe0794
	adds r4, r0, #0	@ 000e0794 041c
.org 0xe0796
	movs r0, #42	@ 000e0796 2a20
.org 0xe0798
	bl 0x2b10	@ 000e0798 22f7baf9
.org 0xe079c
	ldr r0, [pc, #112]	@ 000e079c 1c48
.org 0xe079e
	mov r8, r0	@ 000e079e 8046
.org 0xe07a0
	ldr r0, [r0, #0]	@ 000e07a0 0068
.org 0xe07a2
	ldr r6, [pc, #112]	@ 000e07a2 1c4e
.org 0xe07a4
	muls r0, r6	@ 000e07a4 7043
.org 0xe07a6
	ldr r2, [pc, #112]	@ 000e07a6 1c4a
.org 0xe07a8
	adds r0, r0, r2	@ 000e07a8 8018
.org 0xe07aa
	lsls r0, r0, #1	@ 000e07aa 4000
.org 0xe07ac
	lsrs r5, r0, #1	@ 000e07ac 4508
.org 0xe07ae
	lsrs r0, r0, #17	@ 000e07ae 400c
.org 0xe07b0
	movs r3, #7	@ 000e07b0 0723
.org 0xe07b2
	ands r0, r3	@ 000e07b2 1840
.org 0xe07b4
	subs r0, #3	@ 000e07b4 0338
.org 0xe07b6
	lsls r0, r0, #8	@ 000e07b6 0002
.org 0xe07b8
	ldr r1, [r4, #84]	@ 000e07b8 616d
.org 0xe07ba
	adds r1, r1, r0	@ 000e07ba 0918
.org 0xe07bc
	str r1, [sp, #0]	@ 000e07bc 0091
.org 0xe07be
	adds r0, r5, #0	@ 000e07be 281c
.org 0xe07c0
	muls r0, r6	@ 000e07c0 7043
.org 0xe07c2
	adds r0, r0, r2	@ 000e07c2 8018
.org 0xe07c4
	lsls r0, r0, #1	@ 000e07c4 4000
.org 0xe07c6
	lsrs r1, r0, #1	@ 000e07c6 4108
.org 0xe07c8
	mov r2, r8	@ 000e07c8 4246
.org 0xe07ca
	str r1, [r2, #0]	@ 000e07ca 1160
.org 0xe07cc
	lsrs r0, r0, #17	@ 000e07cc 400c
.org 0xe07ce
	ands r0, r3	@ 000e07ce 1840
.org 0xe07d0
	lsls r0, r0, #8	@ 000e07d0 0002
.org 0xe07d2
	ldr r1, [pc, #72]	@ 000e07d2 1249
.org 0xe07d4
	adds r0, r0, r1	@ 000e07d4 4018
.org 0xe07d6
	ldr r1, [r4, #88]	@ 000e07d6 a16d
.org 0xe07d8
	adds r1, r1, r0	@ 000e07d8 0918
.org 0xe07da
	str r1, [sp, #4]	@ 000e07da 0191
.org 0xe07dc
	movs r0, #1	@ 000e07dc 0120
.org 0xe07de
	mov r1, sp	@ 000e07de 6946
.org 0xe07e0
	bl 0xd0c88	@ 000e07e0 f0f752fa
.org 0xe07e4
	adds r0, r4, #0	@ 000e07e4 201c
.org 0xe07e6
	bl 0xe0824	@ 000e07e6 00f01df8
.org 0xe07ea
	ldrb r1, [r4, #10]	@ 000e07ea a17a
.org 0xe07ec
	movs r0, #254	@ 000e07ec fe20
.org 0xe07ee
	ands r0, r1	@ 000e07ee 0840
.org 0xe07f0
	strb r0, [r4, #10]	@ 000e07f0 a072
.org 0xe07f2
	ldr r1, [pc, #44]	@ 000e07f2 0b49
.org 0xe07f4
	ldrb r0, [r4, #9]	@ 000e07f4 607a
.org 0xe07f6
	lsls r0, r0, #2	@ 000e07f6 8000
.org 0xe07f8
	adds r0, r0, r1	@ 000e07f8 4018
.org 0xe07fa
	movs r1, #4	@ 000e07fa 0421
.org 0xe07fc
	str r1, [r4, #12]	@ 000e07fc e160
.org 0xe07fe
	ldr r0, [r0, #0]	@ 000e07fe 0068
.org 0xe0800
	ldr r0, [r0, #16]	@ 000e0800 0069
.org 0xe0802
	str r0, [r4, #20]	@ 000e0802 6061
.org 0xe0804
	add sp, #8	@ 000e0804 02b0
.org 0xe0806
	pop {r3}	@ 000e0806 08bc
.org 0xe0808
	mov r8, r3	@ 000e0808 9846
.org 0xe080a
	pop {r4, r5, r6}	@ 000e080a 70bc
.org 0xe080c
	pop {r0}	@ 000e080c 01bc
.org 0xe080e
	bx r0	@ 000e080e 0047
