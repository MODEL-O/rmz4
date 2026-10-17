@ FUN_080129a8  entry 0x080129a8  size 732
.thumb
.org 0x129a8
FUN_080129a8:
	push {lr}	@ 000129a8 00b5
.org 0x129aa
	ldr r0, [pc, #72]	@ 000129aa 1248
.org 0x129ac
	ldrb r1, [r0, #10]	@ 000129ac 817a
.org 0x129ae
	movs r0, #16	@ 000129ae 1020
.org 0x129b0
	ands r0, r1	@ 000129b0 0840
.org 0x129b2
	lsls r0, r0, #24	@ 000129b2 0006
.org 0x129b4
	lsrs r0, r0, #24	@ 000129b4 000e
.org 0x129b6
	negs r0, r0	@ 000129b6 4042
.org 0x129b8
	lsrs r3, r0, #31	@ 000129b8 c30f
.org 0x129ba
	movs r0, #32	@ 000129ba 2020
.org 0x129bc
	ands r0, r1	@ 000129bc 0840
.org 0x129be
	cmp r0, #0	@ 000129be 0028
.org 0x129c0
	beq.n 0x129c4	@ 000129c0 00d0
.org 0x129c2
	adds r3, #1	@ 000129c2 0133
.org 0x129c4
	movs r0, #64	@ 000129c4 4020
.org 0x129c6
	ands r0, r1	@ 000129c6 0840
.org 0x129c8
	cmp r0, #0	@ 000129c8 0028
.org 0x129ca
	beq.n 0x129d2	@ 000129ca 02d0
.org 0x129cc
	adds r0, r3, #1	@ 000129cc 581c
.org 0x129ce
	lsls r0, r0, #24	@ 000129ce 0006
.org 0x129d0
	lsrs r3, r0, #24	@ 000129d0 030e
.org 0x129d2
	movs r0, #128	@ 000129d2 8020
.org 0x129d4
	ands r0, r1	@ 000129d4 0840
.org 0x129d6
	cmp r0, #0	@ 000129d6 0028
.org 0x129d8
	beq.n 0x129e0	@ 000129d8 02d0
.org 0x129da
	adds r0, r3, #1	@ 000129da 581c
.org 0x129dc
	lsls r0, r0, #24	@ 000129dc 0006
.org 0x129de
	lsrs r3, r0, #24	@ 000129de 030e
.org 0x129e0
	ldr r2, [pc, #20]	@ 000129e0 054a
.org 0x129e2
	ldr r1, [pc, #24]	@ 000129e2 0649
.org 0x129e4
	adds r0, r2, r1	@ 000129e4 5018
.org 0x129e6
	ldrb r1, [r0, #0]	@ 000129e6 0178
.org 0x129e8
	movs r0, #15	@ 000129e8 0f20
.org 0x129ea
	ands r0, r1	@ 000129ea 0840
.org 0x129ec
	cmp r0, #0	@ 000129ec 0028
.org 0x129ee
	bne.n 0x12a00	@ 000129ee 07d1
.org 0x129f0
	movs r0, #6	@ 000129f0 0620
.org 0x129f2
	b.n 0x12a02	@ 000129f2 06e0
.org 0x129f4
	.byte 0xb0,0xe8,0x02,0x02	@ 000129f4 data
.org 0x129f8
	.byte 0xb0,0x0a,0x00,0x02	@ 000129f8 data
.org 0x129fc
	.byte 0x10,0xc0,0x02,0x00	@ 000129fc data
.org 0x12a00
	movs r0, #4	@ 00012a00 0420
.org 0x12a02
	subs r0, r0, r3	@ 00012a02 c01a
.org 0x12a04
	ldr r3, [pc, #88]	@ 00012a04 164b
.org 0x12a06
	adds r1, r2, r3	@ 00012a06 d118
.org 0x12a08
	strb r0, [r1, #0]	@ 00012a08 0870
.org 0x12a0a
	ldr r1, [pc, #88]	@ 00012a0a 1649
.org 0x12a0c
	adds r0, r2, r1	@ 00012a0c 5018
.org 0x12a0e
	ldrh r1, [r0, #0]	@ 00012a0e 0188
.org 0x12a10
	lsrs r0, r1, #8	@ 00012a10 080a
.org 0x12a12
	cmp r0, #7	@ 00012a12 0728
.org 0x12a14
	bne.n 0x12a6c	@ 00012a14 2ad1
.org 0x12a16
	movs r0, #255	@ 00012a16 ff20
.org 0x12a18
	ands r0, r1	@ 00012a18 0840
.org 0x12a1a
	cmp r0, #2	@ 00012a1a 0228
.org 0x12a1c
	bne.n 0x12a6c	@ 00012a1c 26d1
.org 0x12a1e
	ldr r3, [pc, #72]	@ 00012a1e 124b
.org 0x12a20
	adds r1, r2, r3	@ 00012a20 d118
.org 0x12a22
	ldrb r3, [r1, #0]	@ 00012a22 0b78
.org 0x12a24
	movs r0, #1	@ 00012a24 0120
.org 0x12a26
	ands r0, r3	@ 00012a26 1840
.org 0x12a28
	cmp r0, #0	@ 00012a28 0028
.org 0x12a2a
	bne.n 0x12a4a	@ 00012a2a 0ed1
.org 0x12a2c
	movs r0, #1	@ 00012a2c 0120
.org 0x12a2e
	orrs r0, r3	@ 00012a2e 1843
.org 0x12a30
	strb r0, [r1, #0]	@ 00012a30 0870
.org 0x12a32
	movs r0, #36	@ 00012a32 2420
.org 0x12a34
	movs r1, #0	@ 00012a34 0021
.org 0x12a36
	bl 0x249c	@ 00012a36 eff731fd
.org 0x12a3a
	movs r0, #37	@ 00012a3a 2520
.org 0x12a3c
	movs r1, #0	@ 00012a3c 0021
.org 0x12a3e
	bl 0x249c	@ 00012a3e eff72dfd
.org 0x12a42
	movs r0, #38	@ 00012a42 2620
.org 0x12a44
	movs r1, #0	@ 00012a44 0021
.org 0x12a46
	bl 0x249c	@ 00012a46 eff729fd
.org 0x12a4a
	movs r0, #36	@ 00012a4a 2420
.org 0x12a4c
	bl 0x25d8	@ 00012a4c eff7c4fd
.org 0x12a50
	movs r0, #37	@ 00012a50 2520
.org 0x12a52
	bl 0x25d8	@ 00012a52 eff7c1fd
.org 0x12a56
	movs r0, #38	@ 00012a56 2620
.org 0x12a58
	bl 0x25d8	@ 00012a58 eff7befd
.org 0x12a5c
	b.n 0x12a94	@ 00012a5c 1ae0
.org 0x12a5e
	.byte 0x00	@ 00012a5e data
.org 0x12a5f
	.byte 0x00	@ 00012a5f data
.org 0x12a60
	.byte 0x2c,0xd0,0x02,0x00	@ 00012a60 data
.org 0x12a64
	.byte 0xd4,0x07,0x00,0x00	@ 00012a64 data
.org 0x12a68
	.byte 0x28,0xd0,0x02,0x00	@ 00012a68 data
.org 0x12a6c
	ldr r0, [pc, #140]	@ 00012a6c 2348
.org 0x12a6e
	ldr r1, [pc, #144]	@ 00012a6e 2449
.org 0x12a70
	adds r2, r0, r1	@ 00012a70 4218
.org 0x12a72
	ldrb r1, [r2, #0]	@ 00012a72 1178
.org 0x12a74
	movs r0, #1	@ 00012a74 0120
.org 0x12a76
	ands r0, r1	@ 00012a76 0840
.org 0x12a78
	cmp r0, #0	@ 00012a78 0028
.org 0x12a7a
	beq.n 0x12a94	@ 00012a7a 0bd0
.org 0x12a7c
	movs r0, #1	@ 00012a7c 0120
.org 0x12a7e
	eors r0, r1	@ 00012a7e 4840
.org 0x12a80
	strb r0, [r2, #0]	@ 00012a80 1070
.org 0x12a82
	movs r0, #36	@ 00012a82 2420
.org 0x12a84
	bl 0x2624	@ 00012a84 eff7cefd
.org 0x12a88
	movs r0, #37	@ 00012a88 2520
.org 0x12a8a
	bl 0x2624	@ 00012a8a eff7cbfd
.org 0x12a8e
	movs r0, #38	@ 00012a8e 2620
.org 0x12a90
	bl 0x2624	@ 00012a90 eff7c8fd
.org 0x12a94
	ldr r2, [pc, #100]	@ 00012a94 194a
.org 0x12a96
	ldr r3, [pc, #108]	@ 00012a96 1b4b
.org 0x12a98
	adds r0, r2, r3	@ 00012a98 d018
.org 0x12a9a
	ldrb r1, [r0, #0]	@ 00012a9a 0178
.org 0x12a9c
	movs r0, #15	@ 00012a9c 0f20
.org 0x12a9e
	ands r0, r1	@ 00012a9e 0840
.org 0x12aa0
	cmp r0, #0	@ 00012aa0 0028
.org 0x12aa2
	beq.n 0x12aa6	@ 00012aa2 00d0
.org 0x12aa4
	b.n 0x12bc8	@ 00012aa4 90e0
.org 0x12aa6
	ldr r1, [pc, #96]	@ 00012aa6 1849
.org 0x12aa8
	adds r0, r2, r1	@ 00012aa8 5018
.org 0x12aaa
	ldrh r1, [r0, #0]	@ 00012aaa 0188
.org 0x12aac
	lsrs r0, r1, #8	@ 00012aac 080a
.org 0x12aae
	cmp r0, #7	@ 00012aae 0728
.org 0x12ab0
	bne.n 0x12b0c	@ 00012ab0 2cd1
.org 0x12ab2
	movs r0, #255	@ 00012ab2 ff20
.org 0x12ab4
	ands r0, r1	@ 00012ab4 0840
.org 0x12ab6
	cmp r0, #3	@ 00012ab6 0328
.org 0x12ab8
	bne.n 0x12b0c	@ 00012ab8 28d1
.org 0x12aba
	ldr r3, [pc, #68]	@ 00012aba 114b
.org 0x12abc
	adds r2, r2, r3	@ 00012abc d218
.org 0x12abe
	ldrb r1, [r2, #0]	@ 00012abe 1178
.org 0x12ac0
	movs r0, #2	@ 00012ac0 0220
.org 0x12ac2
	ands r0, r1	@ 00012ac2 0840
.org 0x12ac4
	cmp r0, #0	@ 00012ac4 0028
.org 0x12ac6
	bne.n 0x12ae6	@ 00012ac6 0ed1
.org 0x12ac8
	movs r0, #2	@ 00012ac8 0220
.org 0x12aca
	orrs r0, r1	@ 00012aca 0843
.org 0x12acc
	strb r0, [r2, #0]	@ 00012acc 1070
.org 0x12ace
	movs r0, #39	@ 00012ace 2720
.org 0x12ad0
	movs r1, #0	@ 00012ad0 0021
.org 0x12ad2
	bl 0x249c	@ 00012ad2 eff7e3fc
.org 0x12ad6
	movs r0, #46	@ 00012ad6 2e20
.org 0x12ad8
	movs r1, #0	@ 00012ad8 0021
.org 0x12ada
	bl 0x249c	@ 00012ada eff7dffc
.org 0x12ade
	movs r0, #181	@ 00012ade b520
.org 0x12ae0
	movs r1, #0	@ 00012ae0 0021
.org 0x12ae2
	bl 0x249c	@ 00012ae2 eff7dbfc
.org 0x12ae6
	movs r0, #39	@ 00012ae6 2720
.org 0x12ae8
	bl 0x25d8	@ 00012ae8 eff776fd
.org 0x12aec
	movs r0, #46	@ 00012aec 2e20
.org 0x12aee
	bl 0x25d8	@ 00012aee eff773fd
.org 0x12af2
	movs r0, #181	@ 00012af2 b520
.org 0x12af4
	bl 0x25d8	@ 00012af4 eff770fd
.org 0x12af8
	b.n 0x12b34	@ 00012af8 1ce0
.org 0x12afa
	.byte 0x00	@ 00012afa data
.org 0x12afb
	.byte 0x00	@ 00012afb data
.org 0x12afc
	.byte 0xb0,0x0a,0x00,0x02	@ 00012afc data
.org 0x12b00
	.byte 0x28,0xd0,0x02,0x00	@ 00012b00 data
.org 0x12b04
	.byte 0x10,0xc0,0x02,0x00	@ 00012b04 data
.org 0x12b08
	.byte 0xd6,0x07,0x00,0x00	@ 00012b08 data
.org 0x12b0c
	ldr r0, [pc, #124]	@ 00012b0c 1f48
.org 0x12b0e
	ldr r1, [pc, #128]	@ 00012b0e 2049
.org 0x12b10
	adds r2, r0, r1	@ 00012b10 4218
.org 0x12b12
	ldrb r1, [r2, #0]	@ 00012b12 1178
.org 0x12b14
	movs r0, #2	@ 00012b14 0220
.org 0x12b16
	ands r0, r1	@ 00012b16 0840
.org 0x12b18
	cmp r0, #0	@ 00012b18 0028
.org 0x12b1a
	beq.n 0x12b34	@ 00012b1a 0bd0
.org 0x12b1c
	movs r0, #2	@ 00012b1c 0220
.org 0x12b1e
	eors r0, r1	@ 00012b1e 4840
.org 0x12b20
	strb r0, [r2, #0]	@ 00012b20 1070
.org 0x12b22
	movs r0, #39	@ 00012b22 2720
.org 0x12b24
	bl 0x2624	@ 00012b24 eff77efd
.org 0x12b28
	movs r0, #46	@ 00012b28 2e20
.org 0x12b2a
	bl 0x2624	@ 00012b2a eff77bfd
.org 0x12b2e
	movs r0, #181	@ 00012b2e b520
.org 0x12b30
	bl 0x2624	@ 00012b30 eff778fd
.org 0x12b34
	ldr r0, [pc, #84]	@ 00012b34 1548
.org 0x12b36
	ldr r2, [pc, #92]	@ 00012b36 174a
.org 0x12b38
	adds r1, r0, r2	@ 00012b38 8118
.org 0x12b3a
	ldrh r3, [r1, #0]	@ 00012b3a 0b88
.org 0x12b3c
	lsrs r1, r3, #8	@ 00012b3c 190a
.org 0x12b3e
	adds r2, r0, #0	@ 00012b3e 021c
.org 0x12b40
	cmp r1, #7	@ 00012b40 0729
.org 0x12b42
	bne.n 0x12b98	@ 00012b42 29d1
.org 0x12b44
	movs r0, #255	@ 00012b44 ff20
.org 0x12b46
	ands r0, r3	@ 00012b46 1840
.org 0x12b48
	cmp r0, #4	@ 00012b48 0428
.org 0x12b4a
	bne.n 0x12b98	@ 00012b4a 25d1
.org 0x12b4c
	ldr r3, [pc, #64]	@ 00012b4c 104b
.org 0x12b4e
	adds r1, r2, r3	@ 00012b4e d118
.org 0x12b50
	ldrb r3, [r1, #0]	@ 00012b50 0b78
.org 0x12b52
	ands r0, r3	@ 00012b52 1840
.org 0x12b54
	cmp r0, #0	@ 00012b54 0028
.org 0x12b56
	bne.n 0x12b76	@ 00012b56 0ed1
.org 0x12b58
	movs r0, #4	@ 00012b58 0420
.org 0x12b5a
	orrs r0, r3	@ 00012b5a 1843
.org 0x12b5c
	strb r0, [r1, #0]	@ 00012b5c 0870
.org 0x12b5e
	movs r0, #40	@ 00012b5e 2820
.org 0x12b60
	movs r1, #0	@ 00012b60 0021
.org 0x12b62
	bl 0x249c	@ 00012b62 eff79bfc
.org 0x12b66
	movs r0, #41	@ 00012b66 2920
.org 0x12b68
	movs r1, #0	@ 00012b68 0021
.org 0x12b6a
	bl 0x249c	@ 00012b6a eff797fc
.org 0x12b6e
	movs r0, #179	@ 00012b6e b320
.org 0x12b70
	movs r1, #0	@ 00012b70 0021
.org 0x12b72
	bl 0x249c	@ 00012b72 eff793fc
.org 0x12b76
	movs r0, #40	@ 00012b76 2820
.org 0x12b78
	bl 0x25d8	@ 00012b78 eff72efd
.org 0x12b7c
	movs r0, #41	@ 00012b7c 2920
.org 0x12b7e
	bl 0x25d8	@ 00012b7e eff72bfd
.org 0x12b82
	movs r0, #179	@ 00012b82 b320
.org 0x12b84
	bl 0x25d8	@ 00012b84 eff728fd
.org 0x12b88
	b.n 0x12cd6	@ 00012b88 a5e0
.org 0x12b8a
	.byte 0x00	@ 00012b8a data
.org 0x12b8b
	.byte 0x00	@ 00012b8b data
.org 0x12b8c
	.byte 0xb0,0x0a,0x00,0x02	@ 00012b8c data
.org 0x12b90
	.byte 0x28,0xd0,0x02,0x00	@ 00012b90 data
.org 0x12b94
	.byte 0xd4,0x07,0x00,0x00	@ 00012b94 data
.org 0x12b98
	ldr r0, [pc, #40]	@ 00012b98 0a48
.org 0x12b9a
	adds r1, r2, r0	@ 00012b9a 1118
.org 0x12b9c
	ldrb r3, [r1, #0]	@ 00012b9c 0b78
.org 0x12b9e
	movs r0, #4	@ 00012b9e 0420
.org 0x12ba0
	ands r0, r3	@ 00012ba0 1840
.org 0x12ba2
	cmp r0, #0	@ 00012ba2 0028
.org 0x12ba4
	bne.n 0x12ba8	@ 00012ba4 00d1
.org 0x12ba6
	b.n 0x12cd6	@ 00012ba6 96e0
.org 0x12ba8
	movs r0, #4	@ 00012ba8 0420
.org 0x12baa
	eors r0, r3	@ 00012baa 5840
.org 0x12bac
	strb r0, [r1, #0]	@ 00012bac 0870
.org 0x12bae
	movs r0, #40	@ 00012bae 2820
.org 0x12bb0
	bl 0x2624	@ 00012bb0 eff738fd
.org 0x12bb4
	movs r0, #41	@ 00012bb4 2920
.org 0x12bb6
	bl 0x2624	@ 00012bb6 eff735fd
.org 0x12bba
	movs r0, #179	@ 00012bba b320
.org 0x12bbc
	bl 0x2624	@ 00012bbc eff732fd
.org 0x12bc0
	b.n 0x12cd6	@ 00012bc0 89e0
.org 0x12bc2
	.byte 0x00	@ 00012bc2 data
.org 0x12bc3
	.byte 0x00	@ 00012bc3 data
.org 0x12bc4
	.byte 0x28,0xd0,0x02,0x00	@ 00012bc4 data
.org 0x12bc8
	ldr r1, [pc, #80]	@ 00012bc8 1449
.org 0x12bca
	adds r0, r2, r1	@ 00012bca 5018
.org 0x12bcc
	ldrh r1, [r0, #0]	@ 00012bcc 0188
.org 0x12bce
	lsrs r0, r1, #8	@ 00012bce 080a
.org 0x12bd0
	cmp r0, #7	@ 00012bd0 0728
.org 0x12bd2
	bne.n 0x12c24	@ 00012bd2 27d1
.org 0x12bd4
	movs r0, #255	@ 00012bd4 ff20
.org 0x12bd6
	ands r0, r1	@ 00012bd6 0840
.org 0x12bd8
	cmp r0, #3	@ 00012bd8 0328
.org 0x12bda
	bne.n 0x12c24	@ 00012bda 23d1
.org 0x12bdc
	ldr r3, [pc, #64]	@ 00012bdc 104b
.org 0x12bde
	adds r2, r2, r3	@ 00012bde d218
.org 0x12be0
	ldrb r1, [r2, #0]	@ 00012be0 1178
.org 0x12be2
	movs r0, #2	@ 00012be2 0220
.org 0x12be4
	ands r0, r1	@ 00012be4 0840
.org 0x12be6
	cmp r0, #0	@ 00012be6 0028
.org 0x12be8
	bne.n 0x12c08	@ 00012be8 0ed1
.org 0x12bea
	movs r0, #2	@ 00012bea 0220
.org 0x12bec
	orrs r0, r1	@ 00012bec 0843
.org 0x12bee
	strb r0, [r2, #0]	@ 00012bee 1070
.org 0x12bf0
	movs r0, #39	@ 00012bf0 2720
.org 0x12bf2
	movs r1, #0	@ 00012bf2 0021
.org 0x12bf4
	bl 0x249c	@ 00012bf4 eff752fc
.org 0x12bf8
	movs r0, #46	@ 00012bf8 2e20
.org 0x12bfa
	movs r1, #0	@ 00012bfa 0021
.org 0x12bfc
	bl 0x249c	@ 00012bfc eff74efc
.org 0x12c00
	movs r0, #178	@ 00012c00 b220
.org 0x12c02
	movs r1, #0	@ 00012c02 0021
.org 0x12c04
	bl 0x249c	@ 00012c04 eff74afc
.org 0x12c08
	movs r0, #39	@ 00012c08 2720
.org 0x12c0a
	bl 0x25d8	@ 00012c0a eff7e5fc
.org 0x12c0e
	movs r0, #46	@ 00012c0e 2e20
.org 0x12c10
	bl 0x25d8	@ 00012c10 eff7e2fc
.org 0x12c14
	movs r0, #178	@ 00012c14 b220
.org 0x12c16
	bl 0x25d8	@ 00012c16 eff7dffc
.org 0x12c1a
	b.n 0x12c4c	@ 00012c1a 17e0
.org 0x12c1c
	.byte 0xd6,0x07,0x00,0x00	@ 00012c1c data
.org 0x12c20
	.byte 0x28,0xd0,0x02,0x00	@ 00012c20 data
.org 0x12c24
	ldr r0, [pc, #124]	@ 00012c24 1f48
.org 0x12c26
	ldr r1, [pc, #128]	@ 00012c26 2049
.org 0x12c28
	adds r2, r0, r1	@ 00012c28 4218
.org 0x12c2a
	ldrb r1, [r2, #0]	@ 00012c2a 1178
.org 0x12c2c
	movs r0, #2	@ 00012c2c 0220
.org 0x12c2e
	ands r0, r1	@ 00012c2e 0840
.org 0x12c30
	cmp r0, #0	@ 00012c30 0028
.org 0x12c32
	beq.n 0x12c4c	@ 00012c32 0bd0
.org 0x12c34
	movs r0, #2	@ 00012c34 0220
.org 0x12c36
	eors r0, r1	@ 00012c36 4840
.org 0x12c38
	strb r0, [r2, #0]	@ 00012c38 1070
.org 0x12c3a
	movs r0, #39	@ 00012c3a 2720
.org 0x12c3c
	bl 0x2624	@ 00012c3c eff7f2fc
.org 0x12c40
	movs r0, #46	@ 00012c40 2e20
.org 0x12c42
	bl 0x2624	@ 00012c42 eff7effc
.org 0x12c46
	movs r0, #178	@ 00012c46 b220
.org 0x12c48
	bl 0x2624	@ 00012c48 eff7ecfc
.org 0x12c4c
	ldr r0, [pc, #84]	@ 00012c4c 1548
.org 0x12c4e
	ldr r2, [pc, #92]	@ 00012c4e 174a
.org 0x12c50
	adds r1, r0, r2	@ 00012c50 8118
.org 0x12c52
	ldrh r3, [r1, #0]	@ 00012c52 0b88
.org 0x12c54
	lsrs r1, r3, #8	@ 00012c54 190a
.org 0x12c56
	adds r2, r0, #0	@ 00012c56 021c
.org 0x12c58
	cmp r1, #7	@ 00012c58 0729
.org 0x12c5a
	bne.n 0x12cb0	@ 00012c5a 29d1
.org 0x12c5c
	movs r0, #255	@ 00012c5c ff20
.org 0x12c5e
	ands r0, r3	@ 00012c5e 1840
.org 0x12c60
	cmp r0, #4	@ 00012c60 0428
.org 0x12c62
	bne.n 0x12cb0	@ 00012c62 25d1
.org 0x12c64
	ldr r3, [pc, #64]	@ 00012c64 104b
.org 0x12c66
	adds r1, r2, r3	@ 00012c66 d118
.org 0x12c68
	ldrb r3, [r1, #0]	@ 00012c68 0b78
.org 0x12c6a
	ands r0, r3	@ 00012c6a 1840
.org 0x12c6c
	cmp r0, #0	@ 00012c6c 0028
.org 0x12c6e
	bne.n 0x12c8e	@ 00012c6e 0ed1
.org 0x12c70
	movs r0, #4	@ 00012c70 0420
.org 0x12c72
	orrs r0, r3	@ 00012c72 1843
.org 0x12c74
	strb r0, [r1, #0]	@ 00012c74 0870
.org 0x12c76
	movs r0, #40	@ 00012c76 2820
.org 0x12c78
	movs r1, #0	@ 00012c78 0021
.org 0x12c7a
	bl 0x249c	@ 00012c7a eff70ffc
.org 0x12c7e
	movs r0, #41	@ 00012c7e 2920
.org 0x12c80
	movs r1, #0	@ 00012c80 0021
.org 0x12c82
	bl 0x249c	@ 00012c82 eff70bfc
