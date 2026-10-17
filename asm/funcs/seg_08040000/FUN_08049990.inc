@ FUN_08049990  entry 0x08049990  size 388
.thumb
.org 0x49990
FUN_08049990:
	push {r4, r5, r6, r7, lr}	@ 00049990 f0b5
.org 0x49992
	mov r7, r8	@ 00049992 4746
.org 0x49994
	push {r7}	@ 00049994 80b4
.org 0x49996
	adds r5, r0, #0	@ 00049996 051c
.org 0x49998
	ldr r7, [r5, #40]	@ 00049998 af6a
.org 0x4999a
	ldrb r6, [r5, #13]	@ 0004999a 6e7b
.org 0x4999c
	cmp r6, #0	@ 0004999c 002e
.org 0x4999e
	beq.n 0x499a2	@ 0004999e 00d0
.org 0x499a0
	b.n 0x49aa8	@ 000499a0 82e0
.org 0x499a2
	ldrb r0, [r5, #18]	@ 000499a2 a87c
.org 0x499a4
	subs r0, #1	@ 000499a4 0138
.org 0x499a6
	movs r1, #0	@ 000499a6 0021
.org 0x499a8
	mov r8, r1	@ 000499a8 8846
.org 0x499aa
	strb r0, [r5, #18]	@ 000499aa a874
.org 0x499ac
	lsls r0, r0, #24	@ 000499ac 0006
.org 0x499ae
	lsrs r0, r0, #24	@ 000499ae 000e
.org 0x499b0
	cmp r0, #255	@ 000499b0 ff28
.org 0x499b2
	beq.n 0x499b6	@ 000499b2 00d0
.org 0x499b4
	b.n 0x49b12	@ 000499b4 ade0
.org 0x499b6
	adds r4, r5, #0	@ 000499b6 2c1c
.org 0x499b8
	adds r4, #84	@ 000499b8 5434
.org 0x499ba
	adds r0, r7, #0	@ 000499ba 381c
.org 0x499bc
	adds r1, r4, #0	@ 000499bc 211c
.org 0x499be
	bl 0x41318	@ 000499be f7f7abfc
.org 0x499c2
	lsls r0, r0, #24	@ 000499c2 0006
.org 0x499c4
	lsrs r2, r0, #24	@ 000499c4 020e
.org 0x499c6
	mov ip, r4	@ 000499c6 a446
.org 0x499c8
	cmp r2, #0	@ 000499c8 002a
.org 0x499ca
	beq.n 0x49a04	@ 000499ca 1bd0
.org 0x499cc
	ldrb r1, [r5, #10]	@ 000499cc a97a
.org 0x499ce
	movs r0, #254	@ 000499ce fe20
.org 0x499d0
	ands r0, r1	@ 000499d0 0840
.org 0x499d2
	movs r1, #253	@ 000499d2 fd21
.org 0x499d4
	ands r0, r1	@ 000499d4 0840
.org 0x499d6
	strb r0, [r5, #10]	@ 000499d6 a872
.org 0x499d8
	adds r0, r5, #0	@ 000499d8 281c
.org 0x499da
	adds r0, #140	@ 000499da 8c30
.org 0x499dc
	str r6, [r0, #0]	@ 000499dc 0660
.org 0x499de
	adds r0, #4	@ 000499de 0430
.org 0x499e0
	str r6, [r0, #0]	@ 000499e0 0660
.org 0x499e2
	adds r0, #4	@ 000499e2 0430
.org 0x499e4
	strb r6, [r0, #0]	@ 000499e4 0670
.org 0x499e6
	ldrb r1, [r5, #10]	@ 000499e6 a97a
.org 0x499e8
	movs r0, #251	@ 000499e8 fb20
.org 0x499ea
	ands r0, r1	@ 000499ea 0840
.org 0x499ec
	strb r0, [r5, #10]	@ 000499ec a872
.org 0x499ee
	ldr r1, [pc, #16]	@ 000499ee 0449
.org 0x499f0
	ldrb r0, [r5, #9]	@ 000499f0 687a
.org 0x499f2
	lsls r0, r0, #2	@ 000499f2 8000
.org 0x499f4
	adds r0, r0, r1	@ 000499f4 4018
.org 0x499f6
	movs r1, #3	@ 000499f6 0321
.org 0x499f8
	str r1, [r5, #12]	@ 000499f8 e960
.org 0x499fa
	ldr r0, [r0, #0]	@ 000499fa 0068
.org 0x499fc
	ldr r0, [r0, #12]	@ 000499fc c068
.org 0x499fe
	b.n 0x49b10	@ 000499fe 87e0
.org 0x49a00
	.byte 0xf8,0x39,0x85,0x08	@ 00049a00 data
.org 0x49a04
	ldrb r0, [r5, #17]	@ 00049a04 687c
.org 0x49a06
	cmp r0, #0	@ 00049a06 0028
.org 0x49a08
	bne.n 0x49a24	@ 00049a08 0cd1
.org 0x49a0a
	ldr r1, [r5, #84]	@ 00049a0a 696d
.org 0x49a0c
	ldr r0, [r7, #84]	@ 00049a0c 786d
.org 0x49a0e
	cmp r1, r0	@ 00049a0e 8142
.org 0x49a10
	ble.n 0x49a1a	@ 00049a10 03dd
.org 0x49a12
	movs r0, #192	@ 00049a12 c020
.org 0x49a14
	lsls r0, r0, #1	@ 00049a14 4000
.org 0x49a16
	str r0, [r5, #92]	@ 00049a16 e865
.org 0x49a18
	b.n 0x49a2e	@ 00049a18 09e0
.org 0x49a1a
	ldr r0, [pc, #4]	@ 00049a1a 0148
.org 0x49a1c
	str r0, [r5, #92]	@ 00049a1c e865
.org 0x49a1e
	b.n 0x49a52	@ 00049a1e 18e0
.org 0x49a20
	.byte 0x80,0xfe,0xff,0xff	@ 00049a20 data
.org 0x49a24
	str r2, [r5, #92]	@ 00049a24 ea65
.org 0x49a26
	ldr r1, [r5, #84]	@ 00049a26 696d
.org 0x49a28
	ldr r0, [r7, #84]	@ 00049a28 786d
.org 0x49a2a
	cmp r1, r0	@ 00049a2a 8142
.org 0x49a2c
	ble.n 0x49a52	@ 00049a2c 11dd
.org 0x49a2e
	movs r2, #1	@ 00049a2e 0122
.org 0x49a30
	ldrb r0, [r5, #10]	@ 00049a30 a87a
.org 0x49a32
	movs r1, #16	@ 00049a32 1021
.org 0x49a34
	orrs r0, r1	@ 00049a34 0843
.org 0x49a36
	strb r0, [r5, #10]	@ 00049a36 a872
.org 0x49a38
	adds r0, r5, #0	@ 00049a38 281c
.org 0x49a3a
	adds r0, #76	@ 00049a3a 4c30
.org 0x49a3c
	strb r2, [r0, #0]	@ 00049a3c 0270
.org 0x49a3e
	adds r3, r5, #0	@ 00049a3e 2b1c
.org 0x49a40
	adds r3, #74	@ 00049a40 4a33
.org 0x49a42
	movs r2, #16	@ 00049a42 1022
.org 0x49a44
	ldrb r1, [r3, #0]	@ 00049a44 1978
.org 0x49a46
	movs r0, #17	@ 00049a46 1120
.org 0x49a48
	negs r0, r0	@ 00049a48 4042
.org 0x49a4a
	ands r0, r1	@ 00049a4a 0840
.org 0x49a4c
	orrs r0, r2	@ 00049a4c 1043
.org 0x49a4e
	strb r0, [r3, #0]	@ 00049a4e 1870
.org 0x49a50
	b.n 0x49a6e	@ 00049a50 0de0
.org 0x49a52
	ldrb r1, [r5, #10]	@ 00049a52 a97a
.org 0x49a54
	movs r0, #239	@ 00049a54 ef20
.org 0x49a56
	ands r0, r1	@ 00049a56 0840
.org 0x49a58
	strb r0, [r5, #10]	@ 00049a58 a872
.org 0x49a5a
	adds r0, r5, #0	@ 00049a5a 281c
.org 0x49a5c
	adds r0, #76	@ 00049a5c 4c30
.org 0x49a5e
	strb r2, [r0, #0]	@ 00049a5e 0270
.org 0x49a60
	adds r2, r5, #0	@ 00049a60 2a1c
.org 0x49a62
	adds r2, #74	@ 00049a62 4a32
.org 0x49a64
	ldrb r1, [r2, #0]	@ 00049a64 1178
.org 0x49a66
	movs r0, #17	@ 00049a66 1120
.org 0x49a68
	negs r0, r0	@ 00049a68 4042
.org 0x49a6a
	ands r0, r1	@ 00049a6a 0840
.org 0x49a6c
	strb r0, [r2, #0]	@ 00049a6c 1070
.org 0x49a6e
	ldr r0, [pc, #172]	@ 00049a6e 2b48
.org 0x49a70
	str r0, [r5, #96]	@ 00049a70 2866
.org 0x49a72
	ldrb r1, [r5, #10]	@ 00049a72 a97a
.org 0x49a74
	movs r0, #4	@ 00049a74 0420
.org 0x49a76
	orrs r0, r1	@ 00049a76 0843
.org 0x49a78
	strb r0, [r5, #10]	@ 00049a78 a872
.org 0x49a7a
	adds r4, r5, #0	@ 00049a7a 2c1c
.org 0x49a7c
	adds r4, #116	@ 00049a7c 7434
.org 0x49a7e
	ldr r1, [pc, #160]	@ 00049a7e 2849
.org 0x49a80
	adds r0, r4, #0	@ 00049a80 201c
.org 0x49a82
	mov r2, ip	@ 00049a82 6246
.org 0x49a84
	movs r3, #8	@ 00049a84 0823
.org 0x49a86
	bl 0x5760	@ 00049a86 bbf76bfe
.org 0x49a8a
	str r5, [r4, #44]	@ 00049a8a e562
.org 0x49a8c
	ldr r0, [pc, #148]	@ 00049a8c 2548
.org 0x49a8e
	str r0, [r4, #36]	@ 00049a8e 6062
.org 0x49a90
	ldrb r1, [r5, #10]	@ 00049a90 a97a
.org 0x49a92
	movs r0, #1	@ 00049a92 0120
.org 0x49a94
	orrs r0, r1	@ 00049a94 0843
.org 0x49a96
	strb r0, [r5, #10]	@ 00049a96 a872
.org 0x49a98
	adds r0, r7, #0	@ 00049a98 381c
.org 0x49a9a
	bl 0x3aa4c	@ 00049a9a f0f7d7ff
.org 0x49a9e
	adds r1, r5, #0	@ 00049a9e 291c
.org 0x49aa0
	adds r1, #189	@ 00049aa0 bd31
.org 0x49aa2
	movs r0, #1	@ 00049aa2 0120
.org 0x49aa4
	strb r0, [r1, #0]	@ 00049aa4 0870
.org 0x49aa6
	strb r0, [r5, #13]	@ 00049aa6 6873
.org 0x49aa8
	ldr r0, [r5, #84]	@ 00049aa8 686d
.org 0x49aaa
	ldr r1, [r5, #92]	@ 00049aaa e96d
.org 0x49aac
	adds r0, r0, r1	@ 00049aac 4018
.org 0x49aae
	str r0, [r5, #84]	@ 00049aae 6865
.org 0x49ab0
	ldr r1, [r5, #96]	@ 00049ab0 296e
.org 0x49ab2
	adds r1, #64	@ 00049ab2 4031
.org 0x49ab4
	str r1, [r5, #96]	@ 00049ab4 2966
.org 0x49ab6
	ldr r0, [r5, #88]	@ 00049ab6 a86d
.org 0x49ab8
	adds r0, r0, r1	@ 00049ab8 4018
.org 0x49aba
	str r0, [r5, #88]	@ 00049aba a865
.org 0x49abc
	adds r0, r5, #0	@ 00049abc 281c
.org 0x49abe
	bl 0x1cff0	@ 00049abe d3f797fa
.org 0x49ac2
	ldr r0, [r5, #84]	@ 00049ac2 686d
.org 0x49ac4
	ldr r1, [r5, #88]	@ 00049ac4 a96d
.org 0x49ac6
	bl 0x49dec	@ 00049ac6 00f091f9
.org 0x49aca
	lsls r0, r0, #16	@ 00049aca 0004
.org 0x49acc
	cmp r0, #0	@ 00049acc 0028
.org 0x49ace
	beq.n 0x49ad4	@ 00049ace 01d0
.org 0x49ad0
	movs r0, #0	@ 00049ad0 0020
.org 0x49ad2
	strb r0, [r5, #19]	@ 00049ad2 e874
.org 0x49ad4
	ldrb r0, [r5, #19]	@ 00049ad4 e87c
.org 0x49ad6
	subs r0, #1	@ 00049ad6 0138
.org 0x49ad8
	strb r0, [r5, #19]	@ 00049ad8 e874
.org 0x49ada
	lsls r0, r0, #24	@ 00049ada 0006
.org 0x49adc
	lsrs r0, r0, #24	@ 00049adc 000e
.org 0x49ade
	cmp r0, #255	@ 00049ade ff28
.org 0x49ae0
	beq.n 0x49af0	@ 00049ae0 06d0
.org 0x49ae2
	adds r0, r5, #0	@ 00049ae2 281c
.org 0x49ae4
	adds r0, #140	@ 00049ae4 8c30
.org 0x49ae6
	ldr r0, [r0, #0]	@ 00049ae6 0068
.org 0x49ae8
	ldr r1, [pc, #60]	@ 00049ae8 0f49
.org 0x49aea
	ands r0, r1	@ 00049aea 0840
.org 0x49aec
	cmp r0, #0	@ 00049aec 0028
.org 0x49aee
	beq.n 0x49b12	@ 00049aee 10d0
.org 0x49af0
	adds r1, r5, #0	@ 00049af0 291c
.org 0x49af2
	adds r1, #84	@ 00049af2 5431
.org 0x49af4
	movs r0, #1	@ 00049af4 0120
.org 0x49af6
	bl 0xd0c88	@ 00049af6 87f0c7f8
.org 0x49afa
	movs r0, #42	@ 00049afa 2a20
.org 0x49afc
	bl 0x2b10	@ 00049afc b9f708f8
.org 0x49b00
	ldr r1, [pc, #40]	@ 00049b00 0a49
.org 0x49b02
	ldrb r0, [r5, #9]	@ 00049b02 687a
.org 0x49b04
	lsls r0, r0, #2	@ 00049b04 8000
.org 0x49b06
	adds r0, r0, r1	@ 00049b06 4018
.org 0x49b08
	movs r1, #2	@ 00049b08 0221
.org 0x49b0a
	str r1, [r5, #12]	@ 00049b0a e960
.org 0x49b0c
	ldr r0, [r0, #0]	@ 00049b0c 0068
.org 0x49b0e
	ldr r0, [r0, #8]	@ 00049b0e 8068
.org 0x49b10
	str r0, [r5, #20]	@ 00049b10 6861
.org 0x49b12
	pop {r3}	@ 00049b12 08bc
