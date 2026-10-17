@ FUN_080cc6a8  entry 0x080cc6a8  size 124
.thumb
.org 0xcc6a8
FUN_080cc6a8:
	push {r4, lr}	@ 000cc6a8 10b5
.org 0xcc6aa
	adds r4, r0, #0	@ 000cc6aa 041c
.org 0xcc6ac
	bl 0x1cff0	@ 000cc6ac 50f7a0fc
.org 0xcc6b0
	ldr r0, [r4, #84]	@ 000cc6b0 606d
.org 0xcc6b2
	ldr r1, [r4, #92]	@ 000cc6b2 e16d
.org 0xcc6b4
	adds r0, r0, r1	@ 000cc6b4 4018
.org 0xcc6b6
	str r0, [r4, #84]	@ 000cc6b6 6065
.org 0xcc6b8
	ldr r1, [r4, #88]	@ 000cc6b8 a16d
.org 0xcc6ba
	ldr r0, [r4, #96]	@ 000cc6ba 206e
.org 0xcc6bc
	adds r2, r1, r0	@ 000cc6bc 0a18
.org 0xcc6be
	str r2, [r4, #88]	@ 000cc6be a265
.org 0xcc6c0
	ldr r1, [r4, #104]	@ 000cc6c0 a16e
.org 0xcc6c2
	adds r0, r0, r1	@ 000cc6c2 4018
.org 0xcc6c4
	str r0, [r4, #96]	@ 000cc6c4 2066
.org 0xcc6c6
	ldr r0, [r4, #40]	@ 000cc6c6 a06a
.org 0xcc6c8
	cmp r0, #0	@ 000cc6c8 0028
.org 0xcc6ca
	beq.n 0xcc6d2	@ 000cc6ca 02d0
.org 0xcc6cc
	ldr r0, [r0, #96]	@ 000cc6cc 006e
.org 0xcc6ce
	adds r0, r2, r0	@ 000cc6ce 1018
.org 0xcc6d0
	str r0, [r4, #88]	@ 000cc6d0 a065
.org 0xcc6d2
	ldrb r2, [r4, #18]	@ 000cc6d2 a27c
.org 0xcc6d4
	cmp r2, #15	@ 000cc6d4 0f2a
.org 0xcc6d6
	bhi.n 0xcc6fe	@ 000cc6d6 12d8
.org 0xcc6d8
	movs r0, #1	@ 000cc6d8 0120
.org 0xcc6da
	ldrb r1, [r4, #19]	@ 000cc6da e17c
.org 0xcc6dc
	ands r0, r2	@ 000cc6dc 1040
.org 0xcc6de
	cmp r1, r0	@ 000cc6de 8142
.org 0xcc6e0
	bne.n 0xcc6f4	@ 000cc6e0 08d1
.org 0xcc6e2
	adds r0, r4, #0	@ 000cc6e2 201c
.org 0xcc6e4
	adds r0, #116	@ 000cc6e4 7430
.org 0xcc6e6
	ldr r1, [pc, #8]	@ 000cc6e6 0249
.org 0xcc6e8
	bl 0x5784	@ 000cc6e8 39f74cf8
.org 0xcc6ec
	b.n 0xcc6fe	@ 000cc6ec 07e0
.org 0xcc6ee
	.byte 0x00	@ 000cc6ee data
.org 0xcc6ef
	.byte 0x00	@ 000cc6ef data
.org 0xcc6f0
	.byte 0xf0,0x66,0x86,0x08	@ 000cc6f0 data
.org 0xcc6f4
	adds r0, r4, #0	@ 000cc6f4 201c
.org 0xcc6f6
	adds r0, #116	@ 000cc6f6 7430
.org 0xcc6f8
	ldr r1, [pc, #48]	@ 000cc6f8 0c49
.org 0xcc6fa
	bl 0x5784	@ 000cc6fa 39f743f8
.org 0xcc6fe
	ldrb r0, [r4, #18]	@ 000cc6fe a07c
.org 0xcc700
	subs r0, #1	@ 000cc700 0138
.org 0xcc702
	strb r0, [r4, #18]	@ 000cc702 a074
.org 0xcc704
	lsls r0, r0, #24	@ 000cc704 0006
.org 0xcc706
	lsrs r0, r0, #24	@ 000cc706 000e
.org 0xcc708
	cmp r0, #255	@ 000cc708 ff28
.org 0xcc70a
	bne.n 0xcc724	@ 000cc70a 0bd1
.org 0xcc70c
	ldr r1, [pc, #32]	@ 000cc70c 0849
.org 0xcc70e
	ldrb r0, [r4, #9]	@ 000cc70e 607a
.org 0xcc710
	lsls r0, r0, #2	@ 000cc710 8000
.org 0xcc712
	adds r0, r0, r1	@ 000cc712 4018
.org 0xcc714
	movs r1, #2	@ 000cc714 0221
.org 0xcc716
	str r1, [r4, #12]	@ 000cc716 e160
.org 0xcc718
	ldr r0, [r0, #0]	@ 000cc718 0068
.org 0xcc71a
	ldr r0, [r0, #8]	@ 000cc71a 8068
.org 0xcc71c
	str r0, [r4, #20]	@ 000cc71c 6061
.org 0xcc71e
	adds r0, r4, #0	@ 000cc71e 201c
.org 0xcc720
	bl 0xcc0bc	@ 000cc720 fff7ccfc
