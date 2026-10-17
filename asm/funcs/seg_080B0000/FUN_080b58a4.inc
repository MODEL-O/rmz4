@ FUN_080b58a4  entry 0x080b58a4  size 104
.thumb
.org 0xb58a4
FUN_080b58a4:
	push {r4, lr}	@ 000b58a4 10b5
.org 0xb58a6
	adds r4, r0, #0	@ 000b58a6 041c
.org 0xb58a8
	ldrb r0, [r4, #15]	@ 000b58a8 e07b
.org 0xb58aa
	cmp r0, #0	@ 000b58aa 0028
.org 0xb58ac
	bne.n 0xb58c2	@ 000b58ac 09d1
.org 0xb58ae
	movs r1, #180	@ 000b58ae b421
.org 0xb58b0
	lsls r1, r1, #8	@ 000b58b0 0902
.org 0xb58b2
	adds r0, r4, #0	@ 000b58b2 201c
.org 0xb58b4
	bl 0x1cf00	@ 000b58b4 67f724fb
.org 0xb58b8
	movs r0, #16	@ 000b58b8 1020
.org 0xb58ba
	strb r0, [r4, #18]	@ 000b58ba a074
.org 0xb58bc
	ldrb r0, [r4, #15]	@ 000b58bc e07b
.org 0xb58be
	adds r0, #1	@ 000b58be 0130
.org 0xb58c0
	strb r0, [r4, #15]	@ 000b58c0 e073
.org 0xb58c2
	adds r0, r4, #0	@ 000b58c2 201c
.org 0xb58c4
	bl 0x1cff0	@ 000b58c4 67f794fb
.org 0xb58c8
	ldrb r0, [r4, #18]	@ 000b58c8 a07c
.org 0xb58ca
	subs r2, r0, #1	@ 000b58ca 421e
.org 0xb58cc
	strb r2, [r4, #18]	@ 000b58cc a274
.org 0xb58ce
	ldrb r1, [r4, #18]	@ 000b58ce a17c
.org 0xb58d0
	ldr r0, [r4, #92]	@ 000b58d0 e06d
.org 0xb58d2
	muls r0, r1	@ 000b58d2 4843
.org 0xb58d4
	cmp r0, #0	@ 000b58d4 0028
.org 0xb58d6
	bge.n 0xb58da	@ 000b58d6 00da
.org 0xb58d8
	adds r0, #15	@ 000b58d8 0f30
.org 0xb58da
	asrs r1, r0, #4	@ 000b58da 0111
.org 0xb58dc
	ldr r0, [r4, #84]	@ 000b58dc 606d
.org 0xb58de
	adds r0, r0, r1	@ 000b58de 4018
.org 0xb58e0
	str r0, [r4, #84]	@ 000b58e0 6065
.org 0xb58e2
	ldrb r1, [r4, #18]	@ 000b58e2 a17c
.org 0xb58e4
	ldr r0, [r4, #96]	@ 000b58e4 206e
.org 0xb58e6
	muls r0, r1	@ 000b58e6 4843
.org 0xb58e8
	cmp r0, #0	@ 000b58e8 0028
.org 0xb58ea
	bge.n 0xb58ee	@ 000b58ea 00da
.org 0xb58ec
	adds r0, #15	@ 000b58ec 0f30
.org 0xb58ee
	asrs r0, r0, #4	@ 000b58ee 0011
.org 0xb58f0
	ldr r1, [r4, #88]	@ 000b58f0 a16d
.org 0xb58f2
	adds r1, r1, r0	@ 000b58f2 0918
.org 0xb58f4
	str r1, [r4, #88]	@ 000b58f4 a165
.org 0xb58f6
	lsls r0, r2, #24	@ 000b58f6 1006
.org 0xb58f8
	lsrs r1, r0, #24	@ 000b58f8 010e
.org 0xb58fa
	cmp r1, #0	@ 000b58fa 0029
.org 0xb58fc
	bne.n 0xb5906	@ 000b58fc 03d1
.org 0xb58fe
	movs r0, #1	@ 000b58fe 0120
.org 0xb5900
	strb r0, [r4, #13]	@ 000b5900 6073
.org 0xb5902
	strb r1, [r4, #14]	@ 000b5902 a173
.org 0xb5904
	strb r1, [r4, #15]	@ 000b5904 e173
.org 0xb5906
	pop {r4}	@ 000b5906 10bc
.org 0xb5908
	pop {r0}	@ 000b5908 01bc
.org 0xb590a
	bx r0	@ 000b590a 0047
