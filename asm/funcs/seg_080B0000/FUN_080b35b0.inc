@ FUN_080b35b0  entry 0x080b35b0  size 144
.thumb
.org 0xb35b0
FUN_080b35b0:
	push {r4, r5, r6, lr}	@ 000b35b0 70b5
.org 0xb35b2
	adds r5, r0, #0	@ 000b35b2 051c
.org 0xb35b4
	ldr r0, [r5, #44]	@ 000b35b4 e86a
.org 0xb35b6
	cmp r0, #0	@ 000b35b6 0028
.org 0xb35b8
	beq.n 0xb3624	@ 000b35b8 34d0
.org 0xb35ba
	ldrb r0, [r0, #12]	@ 000b35ba 007b
.org 0xb35bc
	cmp r0, #1	@ 000b35bc 0128
.org 0xb35be
	bls.n 0xb3648	@ 000b35be 43d9
.org 0xb35c0
	movs r0, #0	@ 000b35c0 0020
.org 0xb35c2
	strb r0, [r5, #13]	@ 000b35c2 6873
.org 0xb35c4
	strb r0, [r5, #14]	@ 000b35c4 a873
.org 0xb35c6
	str r0, [r5, #44]	@ 000b35c6 e862
.org 0xb35c8
	ldr r2, [pc, #68]	@ 000b35c8 114a
.org 0xb35ca
	ldr r0, [pc, #72]	@ 000b35ca 1248
.org 0xb35cc
	adds r2, r2, r0	@ 000b35cc 1218
.org 0xb35ce
	movs r0, #1	@ 000b35ce 0120
.org 0xb35d0
	ldrb r1, [r5, #16]	@ 000b35d0 297c
.org 0xb35d2
	lsls r0, r1	@ 000b35d2 8840
.org 0xb35d4
	ldrb r1, [r2, #0]	@ 000b35d4 1178
.org 0xb35d6
	orrs r0, r1	@ 000b35d6 0843
.org 0xb35d8
	strb r0, [r2, #0]	@ 000b35d8 1070
.org 0xb35da
	ldrb r0, [r5, #10]	@ 000b35da a87a
.org 0xb35dc
	movs r1, #1	@ 000b35dc 0121
.org 0xb35de
	orrs r0, r1	@ 000b35de 0843
.org 0xb35e0
	strb r0, [r5, #10]	@ 000b35e0 a872
.org 0xb35e2
	ldr r0, [pc, #52]	@ 000b35e2 0d48
.org 0xb35e4
	bl 0x2b10	@ 000b35e4 4ff794fa
.org 0xb35e8
	ldrb r1, [r5, #10]	@ 000b35e8 a97a
.org 0xb35ea
	movs r0, #4	@ 000b35ea 0420
.org 0xb35ec
	orrs r0, r1	@ 000b35ec 0843
.org 0xb35ee
	strb r0, [r5, #10]	@ 000b35ee a872
.org 0xb35f0
	adds r4, r5, #0	@ 000b35f0 2c1c
.org 0xb35f2
	adds r4, #116	@ 000b35f2 7434
.org 0xb35f4
	ldr r1, [pc, #36]	@ 000b35f4 0949
.org 0xb35f6
	adds r2, r5, #0	@ 000b35f6 2a1c
.org 0xb35f8
	adds r2, #84	@ 000b35f8 5432
.org 0xb35fa
	adds r0, r5, #0	@ 000b35fa 281c
.org 0xb35fc
	adds r0, #164	@ 000b35fc a430
.org 0xb35fe
	movs r6, #0	@ 000b35fe 0026
.org 0xb3600
	ldrsh r3, [r0, r6]	@ 000b3600 835f
.org 0xb3602
	adds r0, r4, #0	@ 000b3602 201c
.org 0xb3604
	bl 0x5760	@ 000b3604 52f7acf8
.org 0xb3608
	str r5, [r4, #44]	@ 000b3608 e562
.org 0xb360a
	ldr r0, [pc, #20]	@ 000b360a 0548
.org 0xb360c
	str r0, [r4, #36]	@ 000b360c 6062
.org 0xb360e
	b.n 0xb3648	@ 000b360e 1be0
.org 0xb3610
	.byte 0xb0,0x0a,0x00,0x02	@ 000b3610 data
.org 0xb3614
	.byte 0x2a,0xd0,0x02,0x00	@ 000b3614 data
.org 0xb3618
	.byte 0x83,0x01,0x00,0x00	@ 000b3618 data
.org 0xb361c
	.byte 0xfc,0x36,0x86,0x08	@ 000b361c data
.org 0xb3620
	.byte 0x69,0x31,0x0b,0x08	@ 000b3620 data
.org 0xb3624
	ldrb r2, [r5, #14]	@ 000b3624 aa7b
.org 0xb3626
	adds r1, r2, #0	@ 000b3626 111c
.org 0xb3628
	cmp r1, #0	@ 000b3628 0029
.org 0xb362a
	bne.n 0xb3636	@ 000b362a 04d1
.org 0xb362c
	movs r0, #60	@ 000b362c 3c20
.org 0xb362e
	strb r0, [r5, #17]	@ 000b362e 6874
.org 0xb3630
	strb r1, [r5, #18]	@ 000b3630 a974
.org 0xb3632
	adds r0, r2, #1	@ 000b3632 501c
.org 0xb3634
	strb r0, [r5, #14]	@ 000b3634 a873
.org 0xb3636
	ldrb r2, [r5, #17]	@ 000b3636 6a7c
.org 0xb3638
	adds r1, r2, #0	@ 000b3638 111c
.org 0xb363a
	cmp r1, #0	@ 000b363a 0029
.org 0xb363c
	bne.n 0xb3644	@ 000b363c 02d1
.org 0xb363e
	movs r0, #1	@ 000b363e 0120
