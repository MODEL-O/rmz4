@ FUN_0810a6a0  entry 0x0810a6a0  size 108
.thumb
.org 0x10a6a0
FUN_0810a6a0:
	push {r4, r5, lr}	@ 0010a6a0 30b5
.org 0x10a6a2
	adds r5, r0, #0	@ 0010a6a2 051c
.org 0x10a6a4
	ldr r4, [r5, #40]	@ 0010a6a4 ac6a
.org 0x10a6a6
	ldr r1, [pc, #68]	@ 0010a6a6 1149
.org 0x10a6a8
	ldrb r0, [r5, #16]	@ 0010a6a8 287c
.org 0x10a6aa
	lsls r0, r0, #2	@ 0010a6aa 8000
.org 0x10a6ac
	adds r0, r0, r1	@ 0010a6ac 4018
.org 0x10a6ae
	ldr r1, [r0, #0]	@ 0010a6ae 0168
.org 0x10a6b0
	adds r0, r5, #0	@ 0010a6b0 281c
.org 0x10a6b2
	bl 0x128f80	@ 0010a6b2 1ef065fc
.org 0x10a6b6
	ldr r0, [pc, #56]	@ 0010a6b6 0e48
.org 0x10a6b8
	adds r4, r4, r0	@ 0010a6b8 2418
.org 0x10a6ba
	ldrb r0, [r4, #2]	@ 0010a6ba a078
.org 0x10a6bc
	cmp r0, #0	@ 0010a6bc 0028
.org 0x10a6be
	bne.n 0x10a6ca	@ 0010a6be 04d1
.org 0x10a6c0
	adds r0, r5, #0	@ 0010a6c0 281c
.org 0x10a6c2
	adds r0, #116	@ 0010a6c2 7430
.org 0x10a6c4
	ldrb r0, [r0, #0]	@ 0010a6c4 0078
.org 0x10a6c6
	cmp r0, #0	@ 0010a6c6 0028
.org 0x10a6c8
	beq.n 0x10a6f8	@ 0010a6c8 16d0
.org 0x10a6ca
	ldrb r1, [r5, #10]	@ 0010a6ca a97a
.org 0x10a6cc
	movs r0, #254	@ 0010a6cc fe20
.org 0x10a6ce
	ands r0, r1	@ 0010a6ce 0840
.org 0x10a6d0
	movs r1, #253	@ 0010a6d0 fd21
.org 0x10a6d2
	ands r0, r1	@ 0010a6d2 0840
.org 0x10a6d4
	strb r0, [r5, #10]	@ 0010a6d4 a872
.org 0x10a6d6
	ldr r1, [pc, #28]	@ 0010a6d6 0749
.org 0x10a6d8
	ldrb r0, [r5, #9]	@ 0010a6d8 687a
.org 0x10a6da
	lsls r0, r0, #2	@ 0010a6da 8000
.org 0x10a6dc
	adds r0, r0, r1	@ 0010a6dc 4018
.org 0x10a6de
	movs r1, #3	@ 0010a6de 0321
.org 0x10a6e0
	str r1, [r5, #12]	@ 0010a6e0 e960
.org 0x10a6e2
	ldr r0, [r0, #0]	@ 0010a6e2 0068
.org 0x10a6e4
	ldr r0, [r0, #12]	@ 0010a6e4 c068
.org 0x10a6e6
	str r0, [r5, #20]	@ 0010a6e6 6861
.org 0x10a6e8
	b.n 0x10a714	@ 0010a6e8 14e0
.org 0x10a6ea
	.byte 0x00	@ 0010a6ea data
.org 0x10a6eb
	.byte 0x00	@ 0010a6eb data
.org 0x10a6ec
	.byte 0x80,0xcb,0x86,0x08	@ 0010a6ec data
.org 0x10a6f0
	.byte 0xcc,0x0d,0x00,0x00	@ 0010a6f0 data
.org 0x10a6f4
	.byte 0xf8,0xca,0x86,0x08	@ 0010a6f4 data
.org 0x10a6f8
	adds r0, r5, #0	@ 0010a6f8 281c
.org 0x10a6fa
	bl 0x1cff0	@ 0010a6fa 12f779fc
.org 0x10a6fe
	ldr r0, [pc, #28]	@ 0010a6fe 0748
.org 0x10a700
	ldrh r1, [r0, #0]	@ 0010a700 0188
.org 0x10a702
	movs r0, #128	@ 0010a702 8020
.org 0x10a704
	lsls r0, r0, #1	@ 0010a704 4000
.org 0x10a706
	cmp r1, r0	@ 0010a706 8142
.org 0x10a708
	bls.n 0x10a714	@ 0010a708 04d9
.org 0x10a70a
	ldr r0, [r5, #84]	@ 0010a70a 686d
