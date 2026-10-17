@ FUN_0804a9d8  entry 0x0804a9d8  size 368
.thumb
.org 0x4a9d8
FUN_0804a9d8:
	push {r4, r5, r6, r7, lr}	@ 0004a9d8 f0b5
.org 0x4a9da
	mov r7, r8	@ 0004a9da 4746
.org 0x4a9dc
	push {r7}	@ 0004a9dc 80b4
.org 0x4a9de
	adds r5, r0, #0	@ 0004a9de 051c
.org 0x4a9e0
	ldr r7, [r5, #40]	@ 0004a9e0 af6a
.org 0x4a9e2
	ldrb r6, [r5, #13]	@ 0004a9e2 6e7b
.org 0x4a9e4
	cmp r6, #0	@ 0004a9e4 002e
.org 0x4a9e6
	beq.n 0x4a9ea	@ 0004a9e6 00d0
.org 0x4a9e8
	b.n 0x4aaf0	@ 0004a9e8 82e0
.org 0x4a9ea
	ldrb r0, [r5, #18]	@ 0004a9ea a87c
.org 0x4a9ec
	subs r0, #1	@ 0004a9ec 0138
.org 0x4a9ee
	movs r1, #0	@ 0004a9ee 0021
.org 0x4a9f0
	mov r8, r1	@ 0004a9f0 8846
.org 0x4a9f2
	strb r0, [r5, #18]	@ 0004a9f2 a874
.org 0x4a9f4
	lsls r0, r0, #24	@ 0004a9f4 0006
.org 0x4a9f6
	lsrs r0, r0, #24	@ 0004a9f6 000e
.org 0x4a9f8
	cmp r0, #255	@ 0004a9f8 ff28
.org 0x4a9fa
	beq.n 0x4a9fe	@ 0004a9fa 00d0
.org 0x4a9fc
	b.n 0x4ab46	@ 0004a9fc a3e0
.org 0x4a9fe
	adds r4, r5, #0	@ 0004a9fe 2c1c
.org 0x4aa00
	adds r4, #84	@ 0004aa00 5434
.org 0x4aa02
	adds r0, r7, #0	@ 0004aa02 381c
.org 0x4aa04
	adds r1, r4, #0	@ 0004aa04 211c
.org 0x4aa06
	bl 0x41318	@ 0004aa06 f6f787fc
.org 0x4aa0a
	lsls r0, r0, #24	@ 0004aa0a 0006
.org 0x4aa0c
	lsrs r2, r0, #24	@ 0004aa0c 020e
.org 0x4aa0e
	mov ip, r4	@ 0004aa0e a446
.org 0x4aa10
	cmp r2, #0	@ 0004aa10 002a
.org 0x4aa12
	beq.n 0x4aa4c	@ 0004aa12 1bd0
.org 0x4aa14
	ldrb r1, [r5, #10]	@ 0004aa14 a97a
.org 0x4aa16
	movs r0, #254	@ 0004aa16 fe20
.org 0x4aa18
	ands r0, r1	@ 0004aa18 0840
.org 0x4aa1a
	movs r1, #253	@ 0004aa1a fd21
.org 0x4aa1c
	ands r0, r1	@ 0004aa1c 0840
.org 0x4aa1e
	strb r0, [r5, #10]	@ 0004aa1e a872
.org 0x4aa20
	adds r0, r5, #0	@ 0004aa20 281c
.org 0x4aa22
	adds r0, #140	@ 0004aa22 8c30
.org 0x4aa24
	str r6, [r0, #0]	@ 0004aa24 0660
.org 0x4aa26
	adds r0, #4	@ 0004aa26 0430
.org 0x4aa28
	str r6, [r0, #0]	@ 0004aa28 0660
.org 0x4aa2a
	adds r0, #4	@ 0004aa2a 0430
.org 0x4aa2c
	strb r6, [r0, #0]	@ 0004aa2c 0670
.org 0x4aa2e
	ldrb r1, [r5, #10]	@ 0004aa2e a97a
.org 0x4aa30
	movs r0, #251	@ 0004aa30 fb20
.org 0x4aa32
	ands r0, r1	@ 0004aa32 0840
.org 0x4aa34
	strb r0, [r5, #10]	@ 0004aa34 a872
.org 0x4aa36
	ldr r1, [pc, #16]	@ 0004aa36 0449
.org 0x4aa38
	ldrb r0, [r5, #9]	@ 0004aa38 687a
.org 0x4aa3a
	lsls r0, r0, #2	@ 0004aa3a 8000
.org 0x4aa3c
	adds r0, r0, r1	@ 0004aa3c 4018
.org 0x4aa3e
	movs r1, #3	@ 0004aa3e 0321
.org 0x4aa40
	str r1, [r5, #12]	@ 0004aa40 e960
.org 0x4aa42
	ldr r0, [r0, #0]	@ 0004aa42 0068
.org 0x4aa44
	ldr r0, [r0, #12]	@ 0004aa44 c068
.org 0x4aa46
	b.n 0x4ab44	@ 0004aa46 7de0
.org 0x4aa48
	.byte 0xf8,0x39,0x85,0x08	@ 0004aa48 data
.org 0x4aa4c
	ldrb r0, [r5, #17]	@ 0004aa4c 687c
.org 0x4aa4e
	cmp r0, #0	@ 0004aa4e 0028
.org 0x4aa50
	bne.n 0x4aa6c	@ 0004aa50 0cd1
.org 0x4aa52
	ldr r1, [r5, #84]	@ 0004aa52 696d
.org 0x4aa54
	ldr r0, [r7, #84]	@ 0004aa54 786d
.org 0x4aa56
	cmp r1, r0	@ 0004aa56 8142
.org 0x4aa58
	ble.n 0x4aa62	@ 0004aa58 03dd
.org 0x4aa5a
	movs r0, #192	@ 0004aa5a c020
.org 0x4aa5c
	lsls r0, r0, #1	@ 0004aa5c 4000
.org 0x4aa5e
	str r0, [r5, #92]	@ 0004aa5e e865
.org 0x4aa60
	b.n 0x4aa76	@ 0004aa60 09e0
.org 0x4aa62
	ldr r0, [pc, #4]	@ 0004aa62 0148
.org 0x4aa64
	str r0, [r5, #92]	@ 0004aa64 e865
.org 0x4aa66
	b.n 0x4aa9a	@ 0004aa66 18e0
.org 0x4aa68
	.byte 0x80,0xfe,0xff,0xff	@ 0004aa68 data
.org 0x4aa6c
	str r2, [r5, #92]	@ 0004aa6c ea65
.org 0x4aa6e
	ldr r1, [r5, #84]	@ 0004aa6e 696d
.org 0x4aa70
	ldr r0, [r7, #84]	@ 0004aa70 786d
.org 0x4aa72
	cmp r1, r0	@ 0004aa72 8142
.org 0x4aa74
	ble.n 0x4aa9a	@ 0004aa74 11dd
.org 0x4aa76
	movs r2, #1	@ 0004aa76 0122
.org 0x4aa78
	ldrb r0, [r5, #10]	@ 0004aa78 a87a
.org 0x4aa7a
	movs r1, #16	@ 0004aa7a 1021
.org 0x4aa7c
	orrs r0, r1	@ 0004aa7c 0843
.org 0x4aa7e
	strb r0, [r5, #10]	@ 0004aa7e a872
.org 0x4aa80
	adds r0, r5, #0	@ 0004aa80 281c
.org 0x4aa82
	adds r0, #76	@ 0004aa82 4c30
.org 0x4aa84
	strb r2, [r0, #0]	@ 0004aa84 0270
.org 0x4aa86
	adds r3, r5, #0	@ 0004aa86 2b1c
.org 0x4aa88
	adds r3, #74	@ 0004aa88 4a33
.org 0x4aa8a
	movs r2, #16	@ 0004aa8a 1022
.org 0x4aa8c
	ldrb r1, [r3, #0]	@ 0004aa8c 1978
.org 0x4aa8e
	movs r0, #17	@ 0004aa8e 1120
.org 0x4aa90
	negs r0, r0	@ 0004aa90 4042
.org 0x4aa92
	ands r0, r1	@ 0004aa92 0840
.org 0x4aa94
	orrs r0, r2	@ 0004aa94 1043
.org 0x4aa96
	strb r0, [r3, #0]	@ 0004aa96 1870
.org 0x4aa98
	b.n 0x4aab6	@ 0004aa98 0de0
.org 0x4aa9a
	ldrb r1, [r5, #10]	@ 0004aa9a a97a
.org 0x4aa9c
	movs r0, #239	@ 0004aa9c ef20
.org 0x4aa9e
	ands r0, r1	@ 0004aa9e 0840
.org 0x4aaa0
	strb r0, [r5, #10]	@ 0004aaa0 a872
.org 0x4aaa2
	adds r0, r5, #0	@ 0004aaa2 281c
.org 0x4aaa4
	adds r0, #76	@ 0004aaa4 4c30
.org 0x4aaa6
	strb r2, [r0, #0]	@ 0004aaa6 0270
.org 0x4aaa8
	adds r2, r5, #0	@ 0004aaa8 2a1c
.org 0x4aaaa
	adds r2, #74	@ 0004aaaa 4a32
.org 0x4aaac
	ldrb r1, [r2, #0]	@ 0004aaac 1178
.org 0x4aaae
	movs r0, #17	@ 0004aaae 1120
.org 0x4aab0
	negs r0, r0	@ 0004aab0 4042
.org 0x4aab2
	ands r0, r1	@ 0004aab2 0840
.org 0x4aab4
	strb r0, [r2, #0]	@ 0004aab4 1070
.org 0x4aab6
	ldr r0, [pc, #152]	@ 0004aab6 2648
.org 0x4aab8
	str r0, [r5, #96]	@ 0004aab8 2866
.org 0x4aaba
	ldrb r1, [r5, #10]	@ 0004aaba a97a
.org 0x4aabc
	movs r0, #4	@ 0004aabc 0420
.org 0x4aabe
	orrs r0, r1	@ 0004aabe 0843
.org 0x4aac0
	strb r0, [r5, #10]	@ 0004aac0 a872
.org 0x4aac2
	adds r4, r5, #0	@ 0004aac2 2c1c
.org 0x4aac4
	adds r4, #116	@ 0004aac4 7434
.org 0x4aac6
	ldr r1, [pc, #140]	@ 0004aac6 2349
.org 0x4aac8
	adds r0, r4, #0	@ 0004aac8 201c
.org 0x4aaca
	mov r2, ip	@ 0004aaca 6246
.org 0x4aacc
	movs r3, #8	@ 0004aacc 0823
.org 0x4aace
	bl 0x5760	@ 0004aace baf747fe
.org 0x4aad2
	str r5, [r4, #44]	@ 0004aad2 e562
.org 0x4aad4
	ldr r0, [pc, #128]	@ 0004aad4 2048
.org 0x4aad6
	str r0, [r4, #36]	@ 0004aad6 6062
.org 0x4aad8
	ldrb r1, [r5, #10]	@ 0004aad8 a97a
.org 0x4aada
	movs r0, #1	@ 0004aada 0120
.org 0x4aadc
	orrs r0, r1	@ 0004aadc 0843
.org 0x4aade
	strb r0, [r5, #10]	@ 0004aade a872
.org 0x4aae0
	adds r0, r7, #0	@ 0004aae0 381c
.org 0x4aae2
	bl 0x3aa4c	@ 0004aae2 eff7b3ff
.org 0x4aae6
	adds r1, r5, #0	@ 0004aae6 291c
.org 0x4aae8
	adds r1, #189	@ 0004aae8 bd31
.org 0x4aaea
	movs r0, #1	@ 0004aaea 0120
.org 0x4aaec
	strb r0, [r1, #0]	@ 0004aaec 0870
.org 0x4aaee
	strb r0, [r5, #13]	@ 0004aaee 6873
.org 0x4aaf0
	ldr r0, [r5, #84]	@ 0004aaf0 686d
.org 0x4aaf2
	ldr r1, [r5, #92]	@ 0004aaf2 e96d
.org 0x4aaf4
	adds r0, r0, r1	@ 0004aaf4 4018
.org 0x4aaf6
	str r0, [r5, #84]	@ 0004aaf6 6865
.org 0x4aaf8
	ldr r1, [r5, #96]	@ 0004aaf8 296e
.org 0x4aafa
	adds r1, #64	@ 0004aafa 4031
.org 0x4aafc
	str r1, [r5, #96]	@ 0004aafc 2966
.org 0x4aafe
	ldr r0, [r5, #88]	@ 0004aafe a86d
.org 0x4ab00
	adds r0, r0, r1	@ 0004ab00 4018
.org 0x4ab02
	str r0, [r5, #88]	@ 0004ab02 a865
.org 0x4ab04
	adds r0, r5, #0	@ 0004ab04 281c
.org 0x4ab06
	bl 0x1cff0	@ 0004ab06 d2f773fa
.org 0x4ab0a
	ldr r0, [r5, #84]	@ 0004ab0a 686d
.org 0x4ab0c
	ldr r1, [r5, #88]	@ 0004ab0c a96d
.org 0x4ab0e
	bl 0x4ad60	@ 0004ab0e 00f027f9
.org 0x4ab12
	lsls r0, r0, #16	@ 0004ab12 0004
.org 0x4ab14
	cmp r0, #0	@ 0004ab14 0028
.org 0x4ab16
	bne.n 0x4ab34	@ 0004ab16 0dd1
.org 0x4ab18
	ldrb r0, [r5, #19]	@ 0004ab18 e87c
.org 0x4ab1a
	subs r0, #1	@ 0004ab1a 0138
.org 0x4ab1c
	strb r0, [r5, #19]	@ 0004ab1c e874
.org 0x4ab1e
	lsls r0, r0, #24	@ 0004ab1e 0006
.org 0x4ab20
	lsrs r0, r0, #24	@ 0004ab20 000e
.org 0x4ab22
	cmp r0, #255	@ 0004ab22 ff28
.org 0x4ab24
	beq.n 0x4ab34	@ 0004ab24 06d0
.org 0x4ab26
	adds r0, r5, #0	@ 0004ab26 281c
.org 0x4ab28
	adds r0, #140	@ 0004ab28 8c30
.org 0x4ab2a
	ldr r0, [r0, #0]	@ 0004ab2a 0068
.org 0x4ab2c
	ldr r1, [pc, #44]	@ 0004ab2c 0b49
.org 0x4ab2e
	ands r0, r1	@ 0004ab2e 0840
.org 0x4ab30
	cmp r0, #0	@ 0004ab30 0028
.org 0x4ab32
	beq.n 0x4ab46	@ 0004ab32 08d0
.org 0x4ab34
	ldr r1, [pc, #40]	@ 0004ab34 0a49
.org 0x4ab36
	ldrb r0, [r5, #9]	@ 0004ab36 687a
.org 0x4ab38
	lsls r0, r0, #2	@ 0004ab38 8000
.org 0x4ab3a
	adds r0, r0, r1	@ 0004ab3a 4018
.org 0x4ab3c
	movs r1, #2	@ 0004ab3c 0221
.org 0x4ab3e
	str r1, [r5, #12]	@ 0004ab3e e960
.org 0x4ab40
	ldr r0, [r0, #0]	@ 0004ab40 0068
.org 0x4ab42
	ldr r0, [r0, #8]	@ 0004ab42 8068
.org 0x4ab44
	str r0, [r5, #20]	@ 0004ab44 6861
.org 0x4ab46
	pop {r3}	@ 0004ab46 08bc
