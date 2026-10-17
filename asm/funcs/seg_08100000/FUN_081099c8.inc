@ FUN_081099c8  entry 0x081099c8  size 398
.thumb
.org 0x1099c8
FUN_081099c8:
	push {r4, r5, r6, r7, lr}	@ 001099c8 f0b5
.org 0x1099ca
	mov r7, r8	@ 001099ca 4746
.org 0x1099cc
	push {r7}	@ 001099cc 80b4
.org 0x1099ce
	adds r6, r0, #0	@ 001099ce 061c
.org 0x1099d0
	adds r0, #180	@ 001099d0 b430
.org 0x1099d2
	ldr r5, [r0, #0]	@ 001099d2 0568
.org 0x1099d4
	adds r0, #4	@ 001099d4 0430
.org 0x1099d6
	ldr r0, [r0, #0]	@ 001099d6 0068
.org 0x1099d8
	mov r8, r0	@ 001099d8 8046
.org 0x1099da
	adds r0, r6, #0	@ 001099da 301c
.org 0x1099dc
	bl 0x1cc9c	@ 001099dc 13f75ef9
.org 0x1099e0
	adds r0, r6, #0	@ 001099e0 301c
.org 0x1099e2
	bl 0x1ceec	@ 001099e2 13f783fa
.org 0x1099e6
	ldrb r0, [r6, #10]	@ 001099e6 b07a
.org 0x1099e8
	movs r4, #1	@ 001099e8 0124
.org 0x1099ea
	movs r7, #0	@ 001099ea 0027
.org 0x1099ec
	orrs r0, r4	@ 001099ec 2043
.org 0x1099ee
	movs r1, #2	@ 001099ee 0221
.org 0x1099f0
	orrs r0, r1	@ 001099f0 0843
.org 0x1099f2
	strb r0, [r6, #10]	@ 001099f2 b072
.org 0x1099f4
	ldrb r1, [r6, #11]	@ 001099f4 f17a
.org 0x1099f6
	movs r0, #251	@ 001099f6 fb20
.org 0x1099f8
	ands r0, r1	@ 001099f8 0840
.org 0x1099fa
	strb r0, [r6, #11]	@ 001099fa f072
.org 0x1099fc
	ldr r1, [pc, #52]	@ 001099fc 0d49
.org 0x1099fe
	adds r0, r6, #0	@ 001099fe 301c
.org 0x109a00
	bl 0x1cf00	@ 00109a00 13f77efa
.org 0x109a04
	ldrb r0, [r5, #10]	@ 00109a04 a87a
.org 0x109a06
	lsrs r0, r0, #4	@ 00109a06 0009
.org 0x109a08
	ands r0, r4	@ 00109a08 2040
.org 0x109a0a
	adds r1, r6, #0	@ 00109a0a 311c
.org 0x109a0c
	adds r1, #76	@ 00109a0c 4c31
.org 0x109a0e
	strb r0, [r1, #0]	@ 00109a0e 0870
.org 0x109a10
	ldrb r1, [r5, #10]	@ 00109a10 a97a
.org 0x109a12
	lsrs r1, r1, #4	@ 00109a12 0909
.org 0x109a14
	ands r1, r4	@ 00109a14 2140
.org 0x109a16
	adds r4, r6, #0	@ 00109a16 341c
.org 0x109a18
	adds r4, #74	@ 00109a18 4a34
.org 0x109a1a
	lsls r3, r1, #4	@ 00109a1a 0b01
.org 0x109a1c
	ldrb r2, [r4, #0]	@ 00109a1c 2278
.org 0x109a1e
	movs r0, #17	@ 00109a1e 1120
.org 0x109a20
	negs r0, r0	@ 00109a20 4042
.org 0x109a22
	ands r0, r2	@ 00109a22 1040
.org 0x109a24
	orrs r0, r3	@ 00109a24 1843
.org 0x109a26
	strb r0, [r4, #0]	@ 00109a26 2070
.org 0x109a28
	cmp r1, #0	@ 00109a28 0029
.org 0x109a2a
	beq.n 0x109a38	@ 00109a2a 05d0
.org 0x109a2c
	ldrb r0, [r6, #10]	@ 00109a2c b07a
.org 0x109a2e
	movs r1, #16	@ 00109a2e 1021
.org 0x109a30
	orrs r0, r1	@ 00109a30 0843
.org 0x109a32
	b.n 0x109a3e	@ 00109a32 04e0
.org 0x109a34
	.byte 0x03,0x09,0x00,0x00	@ 00109a34 data
.org 0x109a38
	ldrb r1, [r6, #10]	@ 00109a38 b17a
.org 0x109a3a
	movs r0, #239	@ 00109a3a ef20
.org 0x109a3c
	ands r0, r1	@ 00109a3c 0840
.org 0x109a3e
	strb r0, [r6, #10]	@ 00109a3e b072
.org 0x109a40
	ldrb r0, [r5, #13]	@ 00109a40 687b
.org 0x109a42
	cmp r0, #2	@ 00109a42 0228
.org 0x109a44
	bne.n 0x109adc	@ 00109a44 4ad1
.org 0x109a46
	ldrb r1, [r5, #30]	@ 00109a46 a97f
.org 0x109a48
	lsls r1, r1, #8	@ 00109a48 0902
.org 0x109a4a
	adds r0, r5, #0	@ 00109a4a 281c
.org 0x109a4c
	adds r0, #112	@ 00109a4c 7030
.org 0x109a4e
	ldrb r0, [r0, #0]	@ 00109a4e 0078
.org 0x109a50
	orrs r0, r1	@ 00109a50 0843
.org 0x109a52
	movs r1, #160	@ 00109a52 a021
.org 0x109a54
	lsls r1, r1, #3	@ 00109a54 c900
.org 0x109a56
	cmp r0, r1	@ 00109a56 8842
.org 0x109a58
	bne.n 0x109a9e	@ 00109a58 21d1
.org 0x109a5a
	adds r0, r5, #0	@ 00109a5a 281c
.org 0x109a5c
	adds r0, #113	@ 00109a5c 7130
.org 0x109a5e
	ldrb r0, [r0, #0]	@ 00109a5e 0078
.org 0x109a60
	lsls r0, r0, #24	@ 00109a60 0006
.org 0x109a62
	asrs r0, r0, #24	@ 00109a62 0016
.org 0x109a64
	cmp r0, #2	@ 00109a64 0228
.org 0x109a66
	ble.n 0x109adc	@ 00109a66 39dd
.org 0x109a68
	ldrb r0, [r6, #10]	@ 00109a68 b07a
.org 0x109a6a
	lsrs r0, r0, #4	@ 00109a6a 0009
.org 0x109a6c
	movs r2, #1	@ 00109a6c 0122
.org 0x109a6e
	eors r0, r2	@ 00109a6e 5040
.org 0x109a70
	ands r0, r2	@ 00109a70 1040
.org 0x109a72
	adds r1, r6, #0	@ 00109a72 311c
.org 0x109a74
	adds r1, #76	@ 00109a74 4c31
.org 0x109a76
	strb r0, [r1, #0]	@ 00109a76 0870
.org 0x109a78
	ldrb r1, [r6, #10]	@ 00109a78 b17a
.org 0x109a7a
	lsrs r1, r1, #4	@ 00109a7a 0909
.org 0x109a7c
	eors r1, r2	@ 00109a7c 5140
.org 0x109a7e
	ands r1, r2	@ 00109a7e 1140
.org 0x109a80
	adds r4, r6, #0	@ 00109a80 341c
.org 0x109a82
	adds r4, #74	@ 00109a82 4a34
.org 0x109a84
	lsls r3, r1, #4	@ 00109a84 0b01
.org 0x109a86
	ldrb r2, [r4, #0]	@ 00109a86 2278
.org 0x109a88
	movs r0, #17	@ 00109a88 1120
.org 0x109a8a
	negs r0, r0	@ 00109a8a 4042
.org 0x109a8c
	ands r0, r2	@ 00109a8c 1040
.org 0x109a8e
	orrs r0, r3	@ 00109a8e 1843
.org 0x109a90
	strb r0, [r4, #0]	@ 00109a90 2070
.org 0x109a92
	cmp r1, #0	@ 00109a92 0029
.org 0x109a94
	beq.n 0x109ad4	@ 00109a94 1ed0
.org 0x109a96
	ldrb r0, [r6, #10]	@ 00109a96 b07a
.org 0x109a98
	movs r1, #16	@ 00109a98 1021
.org 0x109a9a
	orrs r0, r1	@ 00109a9a 0843
.org 0x109a9c
	b.n 0x109ada	@ 00109a9c 1de0
.org 0x109a9e
	ldrb r0, [r5, #10]	@ 00109a9e a87a
.org 0x109aa0
	lsrs r0, r0, #4	@ 00109aa0 0009
.org 0x109aa2
	movs r2, #1	@ 00109aa2 0122
.org 0x109aa4
	eors r0, r2	@ 00109aa4 5040
.org 0x109aa6
	ands r0, r2	@ 00109aa6 1040
.org 0x109aa8
	adds r1, r6, #0	@ 00109aa8 311c
.org 0x109aaa
	adds r1, #76	@ 00109aaa 4c31
.org 0x109aac
	strb r0, [r1, #0]	@ 00109aac 0870
.org 0x109aae
	ldrb r1, [r5, #10]	@ 00109aae a97a
.org 0x109ab0
	lsrs r1, r1, #4	@ 00109ab0 0909
.org 0x109ab2
	eors r1, r2	@ 00109ab2 5140
.org 0x109ab4
	ands r1, r2	@ 00109ab4 1140
.org 0x109ab6
	adds r4, r6, #0	@ 00109ab6 341c
.org 0x109ab8
	adds r4, #74	@ 00109ab8 4a34
.org 0x109aba
	lsls r3, r1, #4	@ 00109aba 0b01
.org 0x109abc
	ldrb r2, [r4, #0]	@ 00109abc 2278
.org 0x109abe
	movs r0, #17	@ 00109abe 1120
.org 0x109ac0
	negs r0, r0	@ 00109ac0 4042
.org 0x109ac2
	ands r0, r2	@ 00109ac2 1040
.org 0x109ac4
	orrs r0, r3	@ 00109ac4 1843
.org 0x109ac6
	strb r0, [r4, #0]	@ 00109ac6 2070
.org 0x109ac8
	cmp r1, #0	@ 00109ac8 0029
.org 0x109aca
	beq.n 0x109ad4	@ 00109aca 03d0
.org 0x109acc
	ldrb r0, [r6, #10]	@ 00109acc b07a
.org 0x109ace
	movs r1, #16	@ 00109ace 1021
.org 0x109ad0
	orrs r0, r1	@ 00109ad0 0843
.org 0x109ad2
	b.n 0x109ada	@ 00109ad2 02e0
.org 0x109ad4
	ldrb r1, [r6, #10]	@ 00109ad4 b17a
.org 0x109ad6
	movs r0, #239	@ 00109ad6 ef20
.org 0x109ad8
	ands r0, r1	@ 00109ad8 0840
.org 0x109ada
	strb r0, [r6, #10]	@ 00109ada b072
.org 0x109adc
	adds r0, r6, #0	@ 00109adc 301c
.org 0x109ade
	bl 0x1cff0	@ 00109ade 13f787fa
.org 0x109ae2
	adds r0, r5, #0	@ 00109ae2 281c
.org 0x109ae4
	adds r0, #245	@ 00109ae4 f530
.org 0x109ae6
	ldrb r5, [r0, #0]	@ 00109ae6 0578
.org 0x109ae8
	cmp r5, #5	@ 00109ae8 052d
.org 0x109aea
	bne.n 0x109b04	@ 00109aea 0bd1
.org 0x109aec
	ldrb r1, [r6, #10]	@ 00109aec b17a
.org 0x109aee
	movs r0, #4	@ 00109aee 0420
.org 0x109af0
	movs r5, #0	@ 00109af0 0025
.org 0x109af2
	orrs r0, r1	@ 00109af2 0843
.org 0x109af4
	strb r0, [r6, #10]	@ 00109af4 b072
.org 0x109af6
	adds r4, r6, #0	@ 00109af6 341c
.org 0x109af8
	adds r4, #116	@ 00109af8 7434
.org 0x109afa
	ldr r1, [pc, #4]	@ 00109afa 0149
.org 0x109afc
	b.n 0x109b2c	@ 00109afc 16e0
.org 0x109afe
	.byte 0x00	@ 00109afe data
.org 0x109aff
	.byte 0x00	@ 00109aff data
.org 0x109b00
	.byte 0x60,0xc9,0x86,0x08	@ 00109b00 data
.org 0x109b04
	cmp r5, #0	@ 00109b04 002d
.org 0x109b06
	bne.n 0x109b1c	@ 00109b06 09d1
.org 0x109b08
	ldrb r1, [r6, #10]	@ 00109b08 b17a
.org 0x109b0a
	movs r0, #4	@ 00109b0a 0420
.org 0x109b0c
	orrs r0, r1	@ 00109b0c 0843
.org 0x109b0e
	strb r0, [r6, #10]	@ 00109b0e b072
.org 0x109b10
	adds r4, r6, #0	@ 00109b10 341c
.org 0x109b12
	adds r4, #116	@ 00109b12 7434
.org 0x109b14
	ldr r1, [pc, #0]	@ 00109b14 0049
.org 0x109b16
	b.n 0x109b2c	@ 00109b16 09e0
.org 0x109b18
	.byte 0x30,0xc9,0x86,0x08	@ 00109b18 data
.org 0x109b1c
	ldrb r1, [r6, #10]	@ 00109b1c b17a
.org 0x109b1e
	movs r0, #4	@ 00109b1e 0420
.org 0x109b20
	movs r5, #0	@ 00109b20 0025
.org 0x109b22
	orrs r0, r1	@ 00109b22 0843
.org 0x109b24
	strb r0, [r6, #10]	@ 00109b24 b072
.org 0x109b26
	adds r4, r6, #0	@ 00109b26 341c
.org 0x109b28
	adds r4, #116	@ 00109b28 7434
.org 0x109b2a
	ldr r1, [pc, #44]	@ 00109b2a 0b49
.org 0x109b2c
	adds r2, r6, #0	@ 00109b2c 321c
.org 0x109b2e
	adds r2, #84	@ 00109b2e 5432
.org 0x109b30
	adds r0, r4, #0	@ 00109b30 201c
.org 0x109b32
	movs r3, #1	@ 00109b32 0123
.org 0x109b34
	bl 0x5760	@ 00109b34 fbf614fe
.org 0x109b38
	str r6, [r4, #44]	@ 00109b38 e662
.org 0x109b3a
	str r5, [r4, #36]	@ 00109b3a 6562
.org 0x109b3c
	mov r2, r8	@ 00109b3c 4246
.org 0x109b3e
	ldr r0, [r2, #84]	@ 00109b3e 506d
.org 0x109b40
	ldr r1, [r2, #88]	@ 00109b40 916d
.org 0x109b42
	str r0, [r6, #84]	@ 00109b42 7065
.org 0x109b44
	str r1, [r6, #88]	@ 00109b44 b165
.org 0x109b46
	ldrb r1, [r6, #10]	@ 00109b46 b17a
.org 0x109b48
	movs r0, #16	@ 00109b48 1020
.org 0x109b4a
	ands r0, r1	@ 00109b4a 0840
.org 0x109b4c
	cmp r0, #0	@ 00109b4c 0028
.org 0x109b4e
	beq.n 0x109b5c	@ 00109b4e 05d0
.org 0x109b50
	movs r0, #192	@ 00109b50 c020
.org 0x109b52
	lsls r0, r0, #3	@ 00109b52 c000
.org 0x109b54
	b.n 0x109b5e	@ 00109b54 03e0
