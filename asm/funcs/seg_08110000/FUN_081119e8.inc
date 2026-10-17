@ FUN_081119e8  entry 0x081119e8  size 456
.thumb
.org 0x1119e8
FUN_081119e8:
	push {r4, r5, r6, r7, lr}	@ 001119e8 f0b5
.org 0x1119ea
	mov r7, sl	@ 001119ea 5746
.org 0x1119ec
	mov r6, r9	@ 001119ec 4e46
.org 0x1119ee
	mov r5, r8	@ 001119ee 4546
.org 0x1119f0
	push {r5, r6, r7}	@ 001119f0 e0b4
.org 0x1119f2
	sub sp, #24	@ 001119f2 86b0
.org 0x1119f4
	lsls r0, r0, #16	@ 001119f4 0004
.org 0x1119f6
	asrs r0, r0, #10	@ 001119f6 8012
.org 0x1119f8
	movs r1, #48	@ 001119f8 3021
.org 0x1119fa
	bl 0x128fb8	@ 001119fa 17f0ddfa
.org 0x1119fe
	adds r2, r0, #0	@ 001119fe 021c
.org 0x111a00
	ldr r1, [pc, #192]	@ 00111a00 3049
.org 0x111a02
	lsls r0, r2, #24	@ 00111a02 1006
.org 0x111a04
	lsrs r0, r0, #23	@ 00111a04 c00d
.org 0x111a06
	adds r0, r0, r1	@ 00111a06 4018
.org 0x111a08
	movs r2, #0	@ 00111a08 0022
.org 0x111a0a
	ldrsh r1, [r0, r2]	@ 00111a0a 815e
.org 0x111a0c
	movs r0, #128	@ 00111a0c 8020
.org 0x111a0e
	lsls r0, r0, #1	@ 00111a0e 4000
.org 0x111a10
	subs r2, r0, r1	@ 00111a10 421a
.org 0x111a12
	lsls r0, r2, #4	@ 00111a12 1001
.org 0x111a14
	subs r1, r0, r2	@ 00111a14 811a
.org 0x111a16
	lsls r3, r1, #4	@ 00111a16 0b01
.org 0x111a18
	str r3, [sp, #0]	@ 00111a18 0093
.org 0x111a1a
	lsls r0, r1, #11	@ 00111a1a c802
.org 0x111a1c
	negs r0, r0	@ 00111a1c 4042
.org 0x111a1e
	cmp r0, #0	@ 00111a1e 0028
.org 0x111a20
	bge.n 0x111a24	@ 00111a20 00da
.org 0x111a22
	adds r0, #255	@ 00111a22 ff30
.org 0x111a24
	asrs r0, r0, #8	@ 00111a24 0012
.org 0x111a26
	mov sl, r0	@ 00111a26 8246
.org 0x111a28
	lsls r0, r1, #12	@ 00111a28 0803
.org 0x111a2a
	negs r0, r0	@ 00111a2a 4042
.org 0x111a2c
	cmp r0, #0	@ 00111a2c 0028
.org 0x111a2e
	bge.n 0x111a32	@ 00111a2e 00da
.org 0x111a30
	adds r0, #255	@ 00111a30 ff30
.org 0x111a32
	asrs r0, r0, #8	@ 00111a32 0012
.org 0x111a34
	str r0, [sp, #4]	@ 00111a34 0190
.org 0x111a36
	lsls r1, r1, #3	@ 00111a36 c900
.org 0x111a38
	str r1, [sp, #8]	@ 00111a38 0291
.org 0x111a3a
	ldr r1, [sp, #0]	@ 00111a3a 0099
.org 0x111a3c
	movs r2, #183	@ 00111a3c b722
.org 0x111a3e
	lsls r2, r2, #8	@ 00111a3e 1202
.org 0x111a40
	adds r0, r1, r2	@ 00111a40 8818
.org 0x111a42
	asrs r0, r0, #8	@ 00111a42 0012
.org 0x111a44
	str r0, [sp, #0]	@ 00111a44 0090
.org 0x111a46
	movs r0, #128	@ 00111a46 8020
.org 0x111a48
	lsls r0, r0, #5	@ 00111a48 4001
.org 0x111a4a
	add r0, sl	@ 00111a4a 5044
.org 0x111a4c
	asrs r0, r0, #8	@ 00111a4c 0012
.org 0x111a4e
	mov sl, r0	@ 00111a4e 8246
.org 0x111a50
	ldr r3, [sp, #4]	@ 00111a50 019b
.org 0x111a52
	movs r1, #224	@ 00111a52 e021
.org 0x111a54
	lsls r1, r1, #6	@ 00111a54 8901
.org 0x111a56
	adds r0, r3, r1	@ 00111a56 5818
.org 0x111a58
	asrs r0, r0, #8	@ 00111a58 0012
.org 0x111a5a
	str r0, [sp, #4]	@ 00111a5a 0190
.org 0x111a5c
	ldr r2, [sp, #8]	@ 00111a5c 029a
.org 0x111a5e
	movs r3, #143	@ 00111a5e 8f23
.org 0x111a60
	lsls r3, r3, #8	@ 00111a60 1b02
.org 0x111a62
	adds r0, r2, r3	@ 00111a62 d018
.org 0x111a64
	asrs r0, r0, #8	@ 00111a64 0012
.org 0x111a66
	str r0, [sp, #8]	@ 00111a66 0290
.org 0x111a68
	movs r4, #160	@ 00111a68 a024
.org 0x111a6a
	lsls r4, r4, #1	@ 00111a6a 6400
.org 0x111a6c
	adds r0, r4, #0	@ 00111a6c 201c
.org 0x111a6e
	bl 0xa70	@ 00111a6e eef6ffff
.org 0x111a72
	mov r9, r0	@ 00111a72 8146
.org 0x111a74
	cmp r0, #0	@ 00111a74 0028
.org 0x111a76
	bne.n 0x111a7a	@ 00111a76 00d1
.org 0x111a78
	b.n 0x111ba8	@ 00111a78 96e0
.org 0x111a7a
	movs r0, #0	@ 00111a7a 0020
.org 0x111a7c
	mov r1, r9	@ 00111a7c 4946
.org 0x111a7e
	adds r2, r4, #0	@ 00111a7e 221c
.org 0x111a80
	bl 0xab4	@ 00111a80 eff618f8
.org 0x111a84
	mov r4, sl	@ 00111a84 5446
.org 0x111a86
	cmp r4, #0	@ 00111a86 002c
.org 0x111a88
	bge.n 0x111a8c	@ 00111a88 00da
.org 0x111a8a
	movs r4, #0	@ 00111a8a 0024
.org 0x111a8c
	ldr r6, [sp, #8]	@ 00111a8c 029e
.org 0x111a8e
	subs r6, #127	@ 00111a8e 7f3e
.org 0x111a90
	adds r2, r6, #0	@ 00111a90 321c
.org 0x111a92
	cmp r6, #160	@ 00111a92 a02e
.org 0x111a94
	ble.n 0x111a98	@ 00111a94 00dd
.org 0x111a96
	movs r6, #160	@ 00111a96 a026
.org 0x111a98
	mov r0, sl	@ 00111a98 5046
.org 0x111a9a
	adds r0, #127	@ 00111a9a 7f30
.org 0x111a9c
	str r0, [sp, #16]	@ 00111a9c 0490
.org 0x111a9e
	ldr r1, [pc, #40]	@ 00111a9e 0a49
.org 0x111aa0
	str r1, [sp, #12]	@ 00111aa0 0391
.org 0x111aa2
	cmp r4, r6	@ 00111aa2 b442
.org 0x111aa4
	bge.n 0x111ab8	@ 00111aa4 08da
.org 0x111aa6
	movs r1, #0	@ 00111aa6 0021
.org 0x111aa8
	lsls r0, r4, #1	@ 00111aa8 6000
.org 0x111aaa
	add r0, r9	@ 00111aaa 4844
.org 0x111aac
	subs r4, r6, r4	@ 00111aac 341b
.org 0x111aae
	strh r1, [r0, #0]	@ 00111aae 0180
.org 0x111ab0
	adds r0, #2	@ 00111ab0 0230
.org 0x111ab2
	subs r4, #1	@ 00111ab2 013c
.org 0x111ab4
	cmp r4, #0	@ 00111ab4 002c
.org 0x111ab6
	bne.n 0x111aae	@ 00111ab6 fad1
.org 0x111ab8
	adds r4, r2, #0	@ 00111ab8 141c
.org 0x111aba
	cmp r4, #0	@ 00111aba 002c
.org 0x111abc
	bge.n 0x111acc	@ 00111abc 06da
.org 0x111abe
	negs r5, r4	@ 00111abe 6542
.org 0x111ac0
	movs r4, #0	@ 00111ac0 0024
.org 0x111ac2
	b.n 0x111ace	@ 00111ac2 04e0
.org 0x111ac4
	.byte 0x0c,0x93,0x12,0x08	@ 00111ac4 data
.org 0x111ac8
	.byte 0x90,0x15,0x00,0x03	@ 00111ac8 data
.org 0x111acc
	movs r5, #0	@ 00111acc 0025
.org 0x111ace
	ldr r6, [sp, #8]	@ 00111ace 029e
.org 0x111ad0
	cmp r6, #160	@ 00111ad0 a02e
.org 0x111ad2
	ble.n 0x111ad6	@ 00111ad2 00dd
.org 0x111ad4
	movs r6, #160	@ 00111ad4 a026
.org 0x111ad6
	movs r2, #127	@ 00111ad6 7f22
.org 0x111ad8
	mov r8, r2	@ 00111ad8 9046
.org 0x111ada
	cmp r4, r6	@ 00111ada b442
.org 0x111adc
	bge.n 0x111b0c	@ 00111adc 16da
.org 0x111ade
	lsls r0, r4, #1	@ 00111ade 6000
.org 0x111ae0
	mov r3, r9	@ 00111ae0 4b46
.org 0x111ae2
	adds r7, r0, r3	@ 00111ae2 c718
.org 0x111ae4
	subs r4, r6, r4	@ 00111ae4 341b
.org 0x111ae6
	mov r1, r8	@ 00111ae6 4146
.org 0x111ae8
	subs r0, r1, r5	@ 00111ae8 481b
.org 0x111aea
	muls r0, r2	@ 00111aea 5043
.org 0x111aec
	str r2, [sp, #20]	@ 00111aec 0592
.org 0x111aee
	bl 0x128fb8	@ 00111aee 17f063fa
.org 0x111af2
	ldr r3, [sp, #4]	@ 00111af2 019b
.org 0x111af4
	adds r0, r3, r0	@ 00111af4 1818
.org 0x111af6
	ldr r2, [sp, #20]	@ 00111af6 059a
.org 0x111af8
	cmp r0, #0	@ 00111af8 0028
.org 0x111afa
	bge.n 0x111afe	@ 00111afa 00da
.org 0x111afc
	movs r0, #0	@ 00111afc 0020
.org 0x111afe
	lsls r0, r0, #8	@ 00111afe 0002
.org 0x111b00
	strh r0, [r7, #0]	@ 00111b00 3880
.org 0x111b02
	adds r7, #2	@ 00111b02 0237
.org 0x111b04
	subs r4, #1	@ 00111b04 013c
.org 0x111b06
	adds r5, #1	@ 00111b06 0135
.org 0x111b08
	cmp r4, #0	@ 00111b08 002c
.org 0x111b0a
	bne.n 0x111ae6	@ 00111b0a ecd1
.org 0x111b0c
	mov r4, sl	@ 00111b0c 5446
.org 0x111b0e
	cmp r4, #0	@ 00111b0e 002c
.org 0x111b10
	bge.n 0x111b18	@ 00111b10 02da
.org 0x111b12
	negs r5, r4	@ 00111b12 6542
.org 0x111b14
	movs r4, #0	@ 00111b14 0024
.org 0x111b16
	b.n 0x111b1a	@ 00111b16 00e0
.org 0x111b18
	movs r5, #0	@ 00111b18 0025
.org 0x111b1a
	ldr r6, [sp, #16]	@ 00111b1a 049e
.org 0x111b1c
	cmp r6, #160	@ 00111b1c a02e
.org 0x111b1e
	ble.n 0x111b22	@ 00111b1e 00dd
.org 0x111b20
	movs r6, #160	@ 00111b20 a026
.org 0x111b22
	ldr r2, [pc, #148]	@ 00111b22 254a
.org 0x111b24
	movs r0, #254	@ 00111b24 fe20
.org 0x111b26
	lsls r0, r0, #7	@ 00111b26 c001
.org 0x111b28
	mov r8, r0	@ 00111b28 8046
.org 0x111b2a
	cmp r4, r6	@ 00111b2a b442
.org 0x111b2c
	bge.n 0x111b62	@ 00111b2c 19da
.org 0x111b2e
	adds r7, r5, #0	@ 00111b2e 2f1c
.org 0x111b30
	muls r7, r2	@ 00111b30 5743
.org 0x111b32
	lsls r0, r4, #1	@ 00111b32 6000
.org 0x111b34
	mov r1, r9	@ 00111b34 4946
.org 0x111b36
	adds r5, r0, r1	@ 00111b36 4518
.org 0x111b38
	subs r4, r6, r4	@ 00111b38 341b
.org 0x111b3a
	adds r0, r7, #0	@ 00111b3a 381c
.org 0x111b3c
	mov r1, r8	@ 00111b3c 4146
.org 0x111b3e
	str r2, [sp, #20]	@ 00111b3e 0592
.org 0x111b40
	bl 0x128fb8	@ 00111b40 17f03afa
.org 0x111b44
	ldr r3, [sp, #0]	@ 00111b44 009b
.org 0x111b46
	adds r1, r3, r0	@ 00111b46 1918
.org 0x111b48
	ldr r2, [sp, #20]	@ 00111b48 059a
.org 0x111b4a
	cmp r1, #240	@ 00111b4a f029
.org 0x111b4c
	ble.n 0x111b50	@ 00111b4c 00dd
.org 0x111b4e
	movs r1, #240	@ 00111b4e f021
.org 0x111b50
	ldrh r0, [r5, #0]	@ 00111b50 2888
.org 0x111b52
	orrs r1, r0	@ 00111b52 0143
.org 0x111b54
	strh r1, [r5, #0]	@ 00111b54 2980
.org 0x111b56
	adds r5, #2	@ 00111b56 0235
.org 0x111b58
	subs r4, #1	@ 00111b58 013c
.org 0x111b5a
	adds r7, r7, r2	@ 00111b5a bf18
.org 0x111b5c
	cmp r4, #0	@ 00111b5c 002c
.org 0x111b5e
	bne.n 0x111b3a	@ 00111b5e ecd1
.org 0x111b60
	adds r4, r6, #0	@ 00111b60 341c
.org 0x111b62
	ldr r6, [sp, #8]	@ 00111b62 029e
.org 0x111b64
	cmp r6, #160	@ 00111b64 a02e
.org 0x111b66
	ble.n 0x111b6a	@ 00111b66 00dd
.org 0x111b68
	movs r6, #160	@ 00111b68 a026
.org 0x111b6a
	cmp r4, r6	@ 00111b6a b442
.org 0x111b6c
	bge.n 0x111b86	@ 00111b6c 0bda
.org 0x111b6e
	movs r2, #240	@ 00111b6e f022
.org 0x111b70
	lsls r0, r4, #1	@ 00111b70 6000
.org 0x111b72
	mov r3, r9	@ 00111b72 4b46
.org 0x111b74
	adds r1, r0, r3	@ 00111b74 c118
.org 0x111b76
	subs r4, r6, r4	@ 00111b76 341b
.org 0x111b78
	ldrh r0, [r1, #0]	@ 00111b78 0888
.org 0x111b7a
	orrs r0, r2	@ 00111b7a 1043
.org 0x111b7c
	strh r0, [r1, #0]	@ 00111b7c 0880
.org 0x111b7e
	adds r1, #2	@ 00111b7e 0231
.org 0x111b80
	subs r4, #1	@ 00111b80 013c
.org 0x111b82
	cmp r4, #0	@ 00111b82 002c
.org 0x111b84
	bne.n 0x111b78	@ 00111b84 f8d1
.org 0x111b86
	ldr r1, [sp, #12]	@ 00111b86 0399
.org 0x111b88
	movs r2, #186	@ 00111b88 ba22
.org 0x111b8a
	lsls r2, r2, #1	@ 00111b8a 5200
.org 0x111b8c
	adds r0, r1, r2	@ 00111b8c 8818
.org 0x111b8e
	mov r3, r9	@ 00111b8e 4b46
.org 0x111b90
	str r3, [r0, #0]	@ 00111b90 0360
.org 0x111b92
	movs r0, #188	@ 00111b92 bc20
.org 0x111b94
	lsls r0, r0, #1	@ 00111b94 4000
.org 0x111b96
	adds r1, r1, r0	@ 00111b96 0918
.org 0x111b98
	ldr r0, [pc, #32]	@ 00111b98 0848
.org 0x111b9a
	str r0, [r1, #0]	@ 00111b9a 0860
.org 0x111b9c
	ldr r2, [sp, #12]	@ 00111b9c 039a
.org 0x111b9e
	movs r3, #190	@ 00111b9e be23
.org 0x111ba0
	lsls r3, r3, #1	@ 00111ba0 5b00
.org 0x111ba2
	adds r1, r2, r3	@ 00111ba2 d118
.org 0x111ba4
	ldr r0, [pc, #24]	@ 00111ba4 0648
.org 0x111ba6
	str r0, [r1, #0]	@ 00111ba6 0860
.org 0x111ba8
	add sp, #24	@ 00111ba8 06b0
.org 0x111baa
	pop {r3, r4, r5}	@ 00111baa 38bc
.org 0x111bac
	mov r8, r3	@ 00111bac 9846
.org 0x111bae
	mov r9, r4	@ 00111bae a146
