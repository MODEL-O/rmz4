@ FUN_080ce6a8  entry 0x080ce6a8  size 78
.thumb
.org 0xce6a8
FUN_080ce6a8:
	push {r4, r5, lr}	@ 000ce6a8 30b5
.org 0xce6aa
	sub sp, #16	@ 000ce6aa 84b0
.org 0xce6ac
	ldr r3, [r0, #44]	@ 000ce6ac c36a
.org 0xce6ae
	ldr r1, [r0, #12]	@ 000ce6ae c168
.org 0xce6b0
	ldr r4, [r1, #44]	@ 000ce6b0 cc6a
.org 0xce6b2
	adds r5, r3, #0	@ 000ce6b2 1d1c
.org 0xce6b4
	adds r5, #180	@ 000ce6b4 b435
.org 0xce6b6
	ldr r0, [r0, #20]	@ 000ce6b6 4069
.org 0xce6b8
	movs r1, #1	@ 000ce6b8 0121
.org 0xce6ba
	ands r0, r1	@ 000ce6ba 0840
.org 0xce6bc
	cmp r0, #0	@ 000ce6bc 0028
.org 0xce6be
	beq.n 0xce6ee	@ 000ce6be 16d0
.org 0xce6c0
	ldr r0, [pc, #52]	@ 000ce6c0 0d48
.org 0xce6c2
	ldr r2, [r0, #0]	@ 000ce6c2 0268
.org 0xce6c4
	ldr r1, [r3, #84]	@ 000ce6c4 596d
.org 0xce6c6
	ldr r0, [r2, #84]	@ 000ce6c6 506d
.org 0xce6c8
	ldr r0, [r3, #84]	@ 000ce6c8 586d
.org 0xce6ca
	ldr r1, [r3, #88]	@ 000ce6ca 996d
.org 0xce6cc
	str r0, [sp, #8]	@ 000ce6cc 0290
.org 0xce6ce
	str r1, [sp, #12]	@ 000ce6ce 0391
.org 0xce6d0
	movs r0, #8	@ 000ce6d0 0820
.org 0xce6d2
	ldrsb r0, [r4, r0]	@ 000ce6d2 2056
.org 0xce6d4
	cmp r0, #1	@ 000ce6d4 0128
.org 0xce6d6
	bne.n 0xce6ee	@ 000ce6d6 0ad1
.org 0xce6d8
	ldr r0, [r2, #84]	@ 000ce6d8 506d
.org 0xce6da
	str r0, [sp, #0]	@ 000ce6da 0090
.org 0xce6dc
	ldr r0, [r2, #88]	@ 000ce6dc 906d
.org 0xce6de
	ldr r1, [pc, #28]	@ 000ce6de 0749
.org 0xce6e0
	adds r0, r0, r1	@ 000ce6e0 4018
.org 0xce6e2
	str r0, [sp, #4]	@ 000ce6e2 0190
.org 0xce6e4
	add r1, sp, #8	@ 000ce6e4 02a9
.org 0xce6e6
	mov r0, sp	@ 000ce6e6 6846
.org 0xce6e8
	bl 0x10d3ac	@ 000ce6e8 3ef060fe
.org 0xce6ec
	strb r0, [r5, #0]	@ 000ce6ec 2870
.org 0xce6ee
	add sp, #16	@ 000ce6ee 04b0
.org 0xce6f0
	pop {r4, r5}	@ 000ce6f0 30bc
.org 0xce6f2
	pop {r0}	@ 000ce6f2 01bc
.org 0xce6f4
	bx r0	@ 000ce6f4 0047
