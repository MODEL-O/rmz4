@ FUN_080059d4  entry 0x080059d4  size 330
.thumb
.org 0x59d4
FUN_080059d4:
	push {r4, r5, r6, r7, lr}	@ 000059d4 f0b5
.org 0x59d6
	mov r7, sl	@ 000059d6 5746
.org 0x59d8
	mov r6, r9	@ 000059d8 4e46
.org 0x59da
	mov r5, r8	@ 000059da 4546
.org 0x59dc
	push {r5, r6, r7}	@ 000059dc e0b4
.org 0x59de
	sub sp, #8	@ 000059de 82b0
.org 0x59e0
	adds r7, r0, #0	@ 000059e0 071c
.org 0x59e2
	lsls r1, r1, #24	@ 000059e2 0906
.org 0x59e4
	lsrs r4, r1, #24	@ 000059e4 0c0e
.org 0x59e6
	lsls r2, r2, #24	@ 000059e6 1206
.org 0x59e8
	lsrs r2, r2, #24	@ 000059e8 120e
.org 0x59ea
	ldr r6, [r7, #0]	@ 000059ea 3e68
.org 0x59ec
	ldr r0, [r7, #8]	@ 000059ec b868
.org 0x59ee
	mov ip, r0	@ 000059ee 8446
.org 0x59f0
	ldr r1, [pc, #80]	@ 000059f0 1449
.org 0x59f2
	movs r0, #255	@ 000059f2 ff20
.org 0x59f4
	subs r0, r0, r2	@ 000059f4 801a
.org 0x59f6
	lsls r0, r0, #24	@ 000059f6 0006
.org 0x59f8
	lsrs r0, r0, #23	@ 000059f8 c00d
.org 0x59fa
	adds r0, r0, r1	@ 000059fa 4018
.org 0x59fc
	movs r5, #0	@ 000059fc 0025
.org 0x59fe
	ldrsh r3, [r0, r5]	@ 000059fe 435f
.org 0x5a00
	mov sl, r3	@ 00005a00 9a46
.org 0x5a02
	movs r0, #63	@ 00005a02 3f20
.org 0x5a04
	subs r0, r0, r2	@ 00005a04 801a
.org 0x5a06
	lsls r0, r0, #24	@ 00005a06 0006
.org 0x5a08
	lsrs r0, r0, #23	@ 00005a08 c00d
.org 0x5a0a
	adds r0, r0, r1	@ 00005a0a 4018
.org 0x5a0c
	movs r2, #0	@ 00005a0c 0022
.org 0x5a0e
	ldrsh r1, [r0, r2]	@ 00005a0e 815e
.org 0x5a10
	mov r8, r1	@ 00005a10 8846
.org 0x5a12
	adds r3, r7, #0	@ 00005a12 3b1c
.org 0x5a14
	adds r3, #32	@ 00005a14 2033
.org 0x5a16
	ldrb r2, [r3, #0]	@ 00005a16 1a78
.org 0x5a18
	movs r1, #127	@ 00005a18 7f21
.org 0x5a1a
	ands r1, r2	@ 00005a1a 1140
.org 0x5a1c
	cmp r1, #0	@ 00005a1c 0029
.org 0x5a1e
	beq.n 0x5a2a	@ 00005a1e 04d0
.org 0x5a20
	movs r0, #128	@ 00005a20 8020
.org 0x5a22
	ands r0, r2	@ 00005a22 1040
.org 0x5a24
	subs r1, #1	@ 00005a24 0139
.org 0x5a26
	orrs r0, r1	@ 00005a26 0843
.org 0x5a28
	strb r0, [r3, #0]	@ 00005a28 1870
.org 0x5a2a
	cmp r6, #0	@ 00005a2a 002e
.org 0x5a2c
	beq.n 0x5b18	@ 00005a2c 74d0
.org 0x5a2e
	ldrb r0, [r6, #3]	@ 00005a2e f078
.org 0x5a30
	cmp r0, #0	@ 00005a30 0028
.org 0x5a32
	bne.n 0x5a48	@ 00005a32 09d1
.org 0x5a34
	ldrb r1, [r6, #8]	@ 00005a34 317a
.org 0x5a36
	cmp r1, #0	@ 00005a36 0029
.org 0x5a38
	bne.n 0x5a48	@ 00005a38 06d1
.org 0x5a3a
	ldr r0, [r7, #24]	@ 00005a3a b869
.org 0x5a3c
	str r0, [r7, #28]	@ 00005a3c f861
.org 0x5a3e
	str r1, [r7, #24]	@ 00005a3e b961
.org 0x5a40
	b.n 0x5b18	@ 00005a40 6ae0
.org 0x5a42
	.byte 0x00	@ 00005a42 data
.org 0x5a43
	.byte 0x00	@ 00005a43 data
.org 0x5a44
	.byte 0x0c,0x93,0x12,0x08	@ 00005a44 data
.org 0x5a48
	ldr r0, [pc, #100]	@ 00005a48 1948
.org 0x5a4a
	ldrb r1, [r0, #3]	@ 00005a4a c178
.org 0x5a4c
	cmp r1, #63	@ 00005a4c 3f29
.org 0x5a4e
	bhi.n 0x5b10	@ 00005a4e 5fd8
.org 0x5a50
	adds r3, r0, #0	@ 00005a50 031c
.org 0x5a52
	mov r9, r3	@ 00005a52 9946
.org 0x5a54
	movs r5, #1	@ 00005a54 0125
.org 0x5a56
	ands r5, r4	@ 00005a56 2540
.org 0x5a58
	str r5, [sp, #0]	@ 00005a58 0095
.org 0x5a5a
	movs r0, #2	@ 00005a5a 0220
.org 0x5a5c
	ands r0, r4	@ 00005a5c 2040
.org 0x5a5e
	lsls r0, r0, #24	@ 00005a5e 0006
.org 0x5a60
	lsrs r0, r0, #24	@ 00005a60 000e
.org 0x5a62
	str r0, [sp, #4]	@ 00005a62 0190
.org 0x5a64
	mov r0, r9	@ 00005a64 4846
.org 0x5a66
	ldrb r2, [r0, #3]	@ 00005a66 c278
.org 0x5a68
	lsls r0, r2, #1	@ 00005a68 5000
.org 0x5a6a
	adds r0, r0, r2	@ 00005a6a 8018
.org 0x5a6c
	lsls r0, r0, #3	@ 00005a6c c000
.org 0x5a6e
	mov r1, r9	@ 00005a6e 4946
.org 0x5a70
	adds r1, #4	@ 00005a70 0431
.org 0x5a72
	adds r4, r0, r1	@ 00005a72 4418
.org 0x5a74
	adds r2, #1	@ 00005a74 0132
.org 0x5a76
	mov r1, r9	@ 00005a76 4946
.org 0x5a78
	strb r2, [r1, #3]	@ 00005a78 ca70
.org 0x5a7a
	str r7, [r4, #8]	@ 00005a7a a760
.org 0x5a7c
	str r6, [r4, #4]	@ 00005a7c 6660
.org 0x5a7e
	movs r2, #16	@ 00005a7e 1022
.org 0x5a80
	ldrsh r3, [r6, r2]	@ 00005a80 b35e
.org 0x5a82
	mov r1, r8	@ 00005a82 4146
.org 0x5a84
	muls r1, r3	@ 00005a84 5943
.org 0x5a86
	asrs r1, r1, #8	@ 00005a86 0912
.org 0x5a88
	movs r5, #18	@ 00005a88 1225
.org 0x5a8a
	ldrsh r2, [r6, r5]	@ 00005a8a 725f
.org 0x5a8c
	mov r0, sl	@ 00005a8c 5046
.org 0x5a8e
	muls r0, r2	@ 00005a8e 5043
.org 0x5a90
	asrs r0, r0, #8	@ 00005a90 0012
.org 0x5a92
	adds r5, r1, r0	@ 00005a92 0d18
.org 0x5a94
	mov r1, r8	@ 00005a94 4146
.org 0x5a96
	muls r1, r2	@ 00005a96 5143
.org 0x5a98
	asrs r1, r1, #8	@ 00005a98 0912
.org 0x5a9a
	mov r0, sl	@ 00005a9a 5046
.org 0x5a9c
	muls r0, r3	@ 00005a9c 5843
.org 0x5a9e
	asrs r0, r0, #8	@ 00005a9e 0012
.org 0x5aa0
	subs r1, r1, r0	@ 00005aa0 091a
.org 0x5aa2
	ldr r0, [sp, #0]	@ 00005aa2 0098
.org 0x5aa4
	cmp r0, #0	@ 00005aa4 0028
.org 0x5aa6
	beq.n 0x5ab4	@ 00005aa6 05d0
.org 0x5aa8
	mov r2, ip	@ 00005aa8 6246
.org 0x5aaa
	ldr r0, [r2, #0]	@ 00005aaa 1068
.org 0x5aac
	subs r0, r0, r5	@ 00005aac 401b
.org 0x5aae
	b.n 0x5aba	@ 00005aae 04e0
.org 0x5ab0
	.byte 0xe0,0x32,0x00,0x03	@ 00005ab0 data
.org 0x5ab4
	mov r3, ip	@ 00005ab4 6346
.org 0x5ab6
	ldr r0, [r3, #0]	@ 00005ab6 1868
.org 0x5ab8
	adds r0, r0, r5	@ 00005ab8 4019
.org 0x5aba
	str r0, [r4, #12]	@ 00005aba e060
.org 0x5abc
	ldr r5, [sp, #4]	@ 00005abc 019d
.org 0x5abe
	cmp r5, #0	@ 00005abe 002d
.org 0x5ac0
	beq.n 0x5aca	@ 00005ac0 03d0
.org 0x5ac2
	mov r2, ip	@ 00005ac2 6246
.org 0x5ac4
	ldr r0, [r2, #4]	@ 00005ac4 5068
.org 0x5ac6
	subs r0, r0, r1	@ 00005ac6 401a
.org 0x5ac8
	b.n 0x5ad0	@ 00005ac8 02e0
.org 0x5aca
	mov r3, ip	@ 00005aca 6346
.org 0x5acc
	ldr r0, [r3, #4]	@ 00005acc 5868
.org 0x5ace
	adds r0, r0, r1	@ 00005ace 4018
.org 0x5ad0
	str r0, [r4, #16]	@ 00005ad0 2061
.org 0x5ad2
	ldrh r0, [r6, #20]	@ 00005ad2 b08a
.org 0x5ad4
	strh r0, [r4, #20]	@ 00005ad4 a082
.org 0x5ad6
	ldrh r0, [r6, #22]	@ 00005ad6 f08a
.org 0x5ad8
	strh r0, [r4, #22]	@ 00005ad8 e082
.org 0x5ada
	ldrb r1, [r6, #0]	@ 00005ada 3178
.org 0x5adc
	lsls r0, r1, #1	@ 00005adc 4800
.org 0x5ade
	adds r0, r0, r1	@ 00005ade 4018
.org 0x5ae0
	ldrb r5, [r6, #1]	@ 00005ae0 7578
.org 0x5ae2
	adds r0, r0, r5	@ 00005ae2 4019
.org 0x5ae4
	lsls r0, r0, #2	@ 00005ae4 8000
.org 0x5ae6
	ldr r1, [pc, #64]	@ 00005ae6 1049
.org 0x5ae8
	adds r0, r0, r1	@ 00005ae8 4018
.org 0x5aea
	ldr r0, [r0, #0]	@ 00005aea 0068
.org 0x5aec
	str r0, [r4, #0]	@ 00005aec 2060
.org 0x5aee
	ldrb r1, [r6, #0]	@ 00005aee 3178
.org 0x5af0
	lsls r0, r1, #1	@ 00005af0 4800
.org 0x5af2
	adds r0, r0, r1	@ 00005af2 4018
.org 0x5af4
	ldrb r2, [r6, #1]	@ 00005af4 7278
.org 0x5af6
	adds r0, r0, r2	@ 00005af6 8018
.org 0x5af8
	lsls r0, r0, #2	@ 00005af8 8000
.org 0x5afa
	ldr r3, [pc, #44]	@ 00005afa 0b4b
.org 0x5afc
	adds r0, r0, r3	@ 00005afc c018
.org 0x5afe
	str r4, [r0, #0]	@ 00005afe 0460
.org 0x5b00
	ldrb r0, [r6, #11]	@ 00005b00 f07a
.org 0x5b02
	cmp r0, #0	@ 00005b02 0028
.org 0x5b04
	beq.n 0x5b10	@ 00005b04 04d0
.org 0x5b06
	adds r6, #24	@ 00005b06 1836
.org 0x5b08
	ldr r5, [pc, #32]	@ 00005b08 084d
.org 0x5b0a
	ldrb r0, [r5, #3]	@ 00005b0a e878
.org 0x5b0c
	cmp r0, #63	@ 00005b0c 3f28
.org 0x5b0e
	bls.n 0x5a64	@ 00005b0e a9d9
.org 0x5b10
	ldr r0, [r7, #24]	@ 00005b10 b869
.org 0x5b12
	str r0, [r7, #28]	@ 00005b12 f861
.org 0x5b14
	movs r0, #0	@ 00005b14 0020
.org 0x5b16
	str r0, [r7, #24]	@ 00005b16 b861
.org 0x5b18
	add sp, #8	@ 00005b18 02b0
.org 0x5b1a
	pop {r3, r4, r5}	@ 00005b1a 38bc
.org 0x5b1c
	mov r8, r3	@ 00005b1c 9846
