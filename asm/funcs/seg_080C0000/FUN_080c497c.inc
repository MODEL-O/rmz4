@ FUN_080c497c  entry 0x080c497c  size 212
.thumb
.org 0xc497c
FUN_080c497c:
	push {r4, r5, lr}	@ 000c497c 30b5
.org 0xc497e
	adds r4, r0, #0	@ 000c497e 041c
.org 0xc4980
	ldrb r0, [r4, #10]	@ 000c4980 a07a
.org 0xc4982
	lsrs r5, r0, #4	@ 000c4982 0509
.org 0xc4984
	movs r0, #1	@ 000c4984 0120
.org 0xc4986
	ands r5, r0	@ 000c4986 0540
.org 0xc4988
	ldrb r0, [r4, #15]	@ 000c4988 e07b
.org 0xc498a
	cmp r0, #0	@ 000c498a 0028
.org 0xc498c
	bne.n 0xc49f4	@ 000c498c 32d1
.org 0xc498e
	adds r0, r4, #0	@ 000c498e 201c
.org 0xc4990
	adds r0, #116	@ 000c4990 7430
.org 0xc4992
	ldr r1, [pc, #40]	@ 000c4992 0a49
.org 0xc4994
	bl 0x5784	@ 000c4994 40f7f6fe
.org 0xc4998
	adds r0, r4, #0	@ 000c4998 201c
.org 0xc499a
	bl 0x1ce54	@ 000c499a 58f75bfa
.org 0xc499e
	adds r1, r4, #0	@ 000c499e 211c
.org 0xc49a0
	adds r1, #80	@ 000c49a0 5031
.org 0xc49a2
	movs r0, #224	@ 000c49a2 e020
.org 0xc49a4
	strh r0, [r1, #0]	@ 000c49a4 0880
.org 0xc49a6
	adds r1, #2	@ 000c49a6 0231
.org 0xc49a8
	adds r0, #32	@ 000c49a8 2030
.org 0xc49aa
	strh r0, [r1, #0]	@ 000c49aa 0880
.org 0xc49ac
	adds r2, r5, #0	@ 000c49ac 2a1c
.org 0xc49ae
	cmp r2, #0	@ 000c49ae 002a
.org 0xc49b0
	beq.n 0xc49c0	@ 000c49b0 06d0
.org 0xc49b2
	ldrb r1, [r4, #10]	@ 000c49b2 a17a
.org 0xc49b4
	movs r0, #16	@ 000c49b4 1020
.org 0xc49b6
	orrs r0, r1	@ 000c49b6 0843
.org 0xc49b8
	b.n 0xc49c6	@ 000c49b8 05e0
.org 0xc49ba
	.byte 0x00	@ 000c49ba data
.org 0xc49bb
	.byte 0x00	@ 000c49bb data
.org 0xc49bc
	.byte 0x00,0x57,0x86,0x08	@ 000c49bc data
.org 0xc49c0
	ldrb r1, [r4, #10]	@ 000c49c0 a17a
.org 0xc49c2
	movs r0, #239	@ 000c49c2 ef20
.org 0xc49c4
	ands r0, r1	@ 000c49c4 0840
.org 0xc49c6
	strb r0, [r4, #10]	@ 000c49c6 a072
.org 0xc49c8
	adds r1, r2, #0	@ 000c49c8 111c
.org 0xc49ca
	adds r0, r4, #0	@ 000c49ca 201c
.org 0xc49cc
	adds r0, #76	@ 000c49cc 4c30
.org 0xc49ce
	strb r1, [r0, #0]	@ 000c49ce 0170
.org 0xc49d0
	adds r3, r4, #0	@ 000c49d0 231c
.org 0xc49d2
	adds r3, #74	@ 000c49d2 4a33
.org 0xc49d4
	lsls r1, r1, #4	@ 000c49d4 0901
.org 0xc49d6
	ldrb r2, [r3, #0]	@ 000c49d6 1a78
.org 0xc49d8
	movs r0, #17	@ 000c49d8 1120
.org 0xc49da
	negs r0, r0	@ 000c49da 4042
.org 0xc49dc
	ands r0, r2	@ 000c49dc 1040
.org 0xc49de
	orrs r0, r1	@ 000c49de 0843
.org 0xc49e0
	strb r0, [r3, #0]	@ 000c49e0 1870
.org 0xc49e2
	ldr r1, [pc, #116]	@ 000c49e2 1d49
.org 0xc49e4
	adds r0, r4, #0	@ 000c49e4 201c
.org 0xc49e6
	bl 0x1cf00	@ 000c49e6 58f78bfa
.org 0xc49ea
	movs r0, #16	@ 000c49ea 1020
.org 0xc49ec
	strb r0, [r4, #18]	@ 000c49ec a074
.org 0xc49ee
	ldrb r0, [r4, #15]	@ 000c49ee e07b
.org 0xc49f0
	adds r0, #1	@ 000c49f0 0130
.org 0xc49f2
	strb r0, [r4, #15]	@ 000c49f2 e073
.org 0xc49f4
	adds r0, r4, #0	@ 000c49f4 201c
.org 0xc49f6
	bl 0x1cff0	@ 000c49f6 58f7fbfa
.org 0xc49fa
	ldrb r0, [r4, #18]	@ 000c49fa a07c
.org 0xc49fc
	cmp r0, #0	@ 000c49fc 0028
.org 0xc49fe
	beq.n 0xc4a04	@ 000c49fe 01d0
.org 0xc4a00
	subs r0, #1	@ 000c4a00 0138
.org 0xc4a02
	strb r0, [r4, #18]	@ 000c4a02 a074
.org 0xc4a04
	ldrb r0, [r4, #18]	@ 000c4a04 a07c
.org 0xc4a06
	lsls r1, r0, #3	@ 000c4a06 c100
.org 0xc4a08
	subs r1, r1, r0	@ 000c4a08 091a
.org 0xc4a0a
	lsls r1, r1, #1	@ 000c4a0a 4900
.org 0xc4a0c
	adds r0, r4, #0	@ 000c4a0c 201c
.org 0xc4a0e
	adds r0, #80	@ 000c4a0e 5030
.org 0xc4a10
	strh r1, [r0, #0]	@ 000c4a10 0180
.org 0xc4a12
	ldrb r2, [r4, #18]	@ 000c4a12 a27c
.org 0xc4a14
	cmp r2, #0	@ 000c4a14 002a
.org 0xc4a16
	bne.n 0xc4a50	@ 000c4a16 1bd1
.org 0xc4a18
	ldrb r1, [r4, #10]	@ 000c4a18 a17a
.org 0xc4a1a
	movs r0, #254	@ 000c4a1a fe20
.org 0xc4a1c
	ands r0, r1	@ 000c4a1c 0840
.org 0xc4a1e
	movs r1, #253	@ 000c4a1e fd21
.org 0xc4a20
	ands r0, r1	@ 000c4a20 0840
.org 0xc4a22
	strb r0, [r4, #10]	@ 000c4a22 a072
.org 0xc4a24
	adds r0, r4, #0	@ 000c4a24 201c
.org 0xc4a26
	adds r0, #140	@ 000c4a26 8c30
.org 0xc4a28
	str r2, [r0, #0]	@ 000c4a28 0260
.org 0xc4a2a
	adds r0, #4	@ 000c4a2a 0430
.org 0xc4a2c
	str r2, [r0, #0]	@ 000c4a2c 0260
.org 0xc4a2e
	adds r1, r4, #0	@ 000c4a2e 211c
.org 0xc4a30
	adds r1, #148	@ 000c4a30 9431
.org 0xc4a32
	movs r0, #0	@ 000c4a32 0020
.org 0xc4a34
	strb r0, [r1, #0]	@ 000c4a34 0870
.org 0xc4a36
	ldrb r1, [r4, #10]	@ 000c4a36 a17a
.org 0xc4a38
	movs r0, #251	@ 000c4a38 fb20
.org 0xc4a3a
	ands r0, r1	@ 000c4a3a 0840
.org 0xc4a3c
	strb r0, [r4, #10]	@ 000c4a3c a072
.org 0xc4a3e
	ldr r1, [pc, #28]	@ 000c4a3e 0749
.org 0xc4a40
	ldrb r0, [r4, #9]	@ 000c4a40 607a
.org 0xc4a42
	lsls r0, r0, #2	@ 000c4a42 8000
.org 0xc4a44
	adds r0, r0, r1	@ 000c4a44 4018
.org 0xc4a46
	movs r1, #3	@ 000c4a46 0321
.org 0xc4a48
	str r1, [r4, #12]	@ 000c4a48 e160
.org 0xc4a4a
	ldr r0, [r0, #0]	@ 000c4a4a 0068
.org 0xc4a4c
	ldr r0, [r0, #12]	@ 000c4a4c c068
.org 0xc4a4e
	str r0, [r4, #20]	@ 000c4a4e 6061
