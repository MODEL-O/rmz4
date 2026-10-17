@ FUN_0809f680  entry 0x0809f680  size 106
.thumb
.org 0x9f680
FUN_0809f680:
	push {r4, r5, r6, r7, lr}	@ 0009f680 f0b5
.org 0x9f682
	mov r7, r8	@ 0009f682 4746
.org 0x9f684
	push {r7}	@ 0009f684 80b4
.org 0x9f686
	sub sp, #8	@ 0009f686 82b0
.org 0x9f688
	adds r7, r0, #0	@ 0009f688 071c
.org 0x9f68a
	ldr r4, [r7, #40]	@ 0009f68a bc6a
.org 0x9f68c
	adds r0, #140	@ 0009f68c 8c30
.org 0x9f68e
	ldr r0, [r0, #0]	@ 0009f68e 0068
.org 0x9f690
	movs r1, #1	@ 0009f690 0121
.org 0x9f692
	ands r0, r1	@ 0009f692 0840
.org 0x9f694
	cmp r0, #0	@ 0009f694 0028
.org 0x9f696
	beq.n 0x9f6a6	@ 0009f696 06d0
.org 0x9f698
	adds r0, r7, #0	@ 0009f698 381c
.org 0x9f69a
	adds r0, #151	@ 0009f69a 9730
.org 0x9f69c
	ldrb r1, [r0, #0]	@ 0009f69c 0178
.org 0x9f69e
	movs r0, #240	@ 0009f69e f020
.org 0x9f6a0
	ands r0, r1	@ 0009f6a0 0840
.org 0x9f6a2
	cmp r0, #32	@ 0009f6a2 2028
.org 0x9f6a4
	beq.n 0x9f6ac	@ 0009f6a4 02d0
.org 0x9f6a6
	ldrb r0, [r4, #13]	@ 0009f6a6 607b
.org 0x9f6a8
	cmp r0, #34	@ 0009f6a8 2228
.org 0x9f6aa
	bne.n 0x9f6cc	@ 0009f6aa 0fd1
.org 0x9f6ac
	ldr r1, [pc, #24]	@ 0009f6ac 0649
.org 0x9f6ae
	ldrb r0, [r7, #9]	@ 0009f6ae 787a
.org 0x9f6b0
	lsls r0, r0, #2	@ 0009f6b0 8000
.org 0x9f6b2
	adds r0, r0, r1	@ 0009f6b2 4018
.org 0x9f6b4
	movs r1, #2	@ 0009f6b4 0221
.org 0x9f6b6
	str r1, [r7, #12]	@ 0009f6b6 f960
.org 0x9f6b8
	ldr r0, [r0, #0]	@ 0009f6b8 0068
.org 0x9f6ba
	ldr r0, [r0, #8]	@ 0009f6ba 8068
.org 0x9f6bc
	str r0, [r7, #20]	@ 0009f6bc 7861
.org 0x9f6be
	adds r0, r7, #0	@ 0009f6be 381c
.org 0x9f6c0
	bl 0x9f54c	@ 0009f6c0 fff744ff
.org 0x9f6c4
	b.n 0x9fb66	@ 0009f6c4 4fe2
.org 0x9f6c6
	.byte 0x00	@ 0009f6c6 data
.org 0x9f6c7
	.byte 0x00	@ 0009f6c7 data
.org 0x9f6c8
	.byte 0x40,0xdb,0x85,0x08	@ 0009f6c8 data
.org 0x9f6cc
	adds r0, r7, #0	@ 0009f6cc 381c
.org 0x9f6ce
	bl 0x1cff0	@ 0009f6ce 7df78ffc
.org 0x9f6d2
	ldrb r0, [r7, #13]	@ 0009f6d2 787b
.org 0x9f6d4
	cmp r0, #8	@ 0009f6d4 0828
.org 0x9f6d6
	bls.n 0x9f6da	@ 0009f6d6 00d9
.org 0x9f6d8
	b.n 0x9fb66	@ 0009f6d8 45e2
.org 0x9f6da
	lsls r0, r0, #2	@ 0009f6da 8000
.org 0x9f6dc
	ldr r1, [pc, #4]	@ 0009f6dc 0149
.org 0x9f6de
	adds r0, r0, r1	@ 0009f6de 4018
.org 0x9f6e0
	ldr r0, [r0, #0]	@ 0009f6e0 0068
.org 0x9f6e2
	mov pc, r0	@ 0009f6e2 8746
.org 0x9f6e4
	.byte 0xe8,0xf6,0x09,0x08	@ 0009f6e4 data
.org 0x9f6e8
	.byte 0x0c,0xf7,0x09,0x08	@ 0009f6e8 data
