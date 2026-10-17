@ FUN_0804cea8  entry 0x0804cea8  size 318
.thumb
.org 0x4cea8
FUN_0804cea8:
	push {r4, r5, lr}	@ 0004cea8 30b5
.org 0x4ceaa
	adds r5, r0, #0	@ 0004ceaa 051c
.org 0x4ceac
	ldr r4, [r5, #44]	@ 0004ceac ec6a
.org 0x4ceae
	bl 0x1cff0	@ 0004ceae d0f79ff8
.org 0x4ceb2
	adds r4, #250	@ 0004ceb2 fa34
.org 0x4ceb4
	ldrb r0, [r4, #0]	@ 0004ceb4 2078
.org 0x4ceb6
	cmp r0, #2	@ 0004ceb6 0228
.org 0x4ceb8
	bne.n 0x4cf00	@ 0004ceb8 22d1
.org 0x4ceba
	adds r1, r5, #0	@ 0004ceba 291c
.org 0x4cebc
	adds r1, #84	@ 0004cebc 5431
.org 0x4cebe
	movs r0, #2	@ 0004cebe 0220
.org 0x4cec0
	bl 0xd0c88	@ 0004cec0 83f0e2fe
.org 0x4cec4
	ldrb r1, [r5, #10]	@ 0004cec4 a97a
.org 0x4cec6
	movs r0, #254	@ 0004cec6 fe20
.org 0x4cec8
	ands r0, r1	@ 0004cec8 0840
.org 0x4ceca
	movs r2, #0	@ 0004ceca 0022
.org 0x4cecc
	movs r1, #253	@ 0004cecc fd21
.org 0x4cece
	ands r0, r1	@ 0004cece 0840
.org 0x4ced0
	strb r0, [r5, #10]	@ 0004ced0 a872
.org 0x4ced2
	adds r0, r5, #0	@ 0004ced2 281c
.org 0x4ced4
	adds r0, #140	@ 0004ced4 8c30
.org 0x4ced6
	str r2, [r0, #0]	@ 0004ced6 0260
.org 0x4ced8
	adds r0, #4	@ 0004ced8 0430
.org 0x4ceda
	str r2, [r0, #0]	@ 0004ceda 0260
.org 0x4cedc
	adds r0, #4	@ 0004cedc 0430
.org 0x4cede
	strb r2, [r0, #0]	@ 0004cede 0270
.org 0x4cee0
	ldrb r1, [r5, #10]	@ 0004cee0 a97a
.org 0x4cee2
	movs r0, #251	@ 0004cee2 fb20
.org 0x4cee4
	ands r0, r1	@ 0004cee4 0840
.org 0x4cee6
	strb r0, [r5, #10]	@ 0004cee6 a872
.org 0x4cee8
	ldr r1, [pc, #16]	@ 0004cee8 0449
.org 0x4ceea
	ldrb r0, [r5, #9]	@ 0004ceea 687a
.org 0x4ceec
	lsls r0, r0, #2	@ 0004ceec 8000
.org 0x4ceee
	adds r0, r0, r1	@ 0004ceee 4018
.org 0x4cef0
	movs r1, #3	@ 0004cef0 0321
.org 0x4cef2
	str r1, [r5, #12]	@ 0004cef2 e960
.org 0x4cef4
	ldr r0, [r0, #0]	@ 0004cef4 0068
.org 0x4cef6
	ldr r0, [r0, #12]	@ 0004cef6 c068
.org 0x4cef8
	b.n 0x4cfee	@ 0004cef8 79e0
.org 0x4cefa
	.byte 0x00	@ 0004cefa data
.org 0x4cefb
	.byte 0x00	@ 0004cefb data
.org 0x4cefc
	.byte 0xf8,0x39,0x85,0x08	@ 0004cefc data
.org 0x4cf00
	ldr r0, [r5, #84]	@ 0004cf00 686d
.org 0x4cf02
	ldr r1, [r5, #92]	@ 0004cf02 e96d
.org 0x4cf04
	adds r0, r0, r1	@ 0004cf04 4018
.org 0x4cf06
	str r0, [r5, #84]	@ 0004cf06 6865
.org 0x4cf08
	adds r0, r5, #0	@ 0004cf08 281c
.org 0x4cf0a
	bl 0x4d05c	@ 0004cf0a 00f0a7f8
.org 0x4cf0e
	lsls r0, r0, #16	@ 0004cf0e 0004
.org 0x4cf10
	cmp r0, #0	@ 0004cf10 0028
.org 0x4cf12
	beq.n 0x4cf20	@ 0004cf12 05d0
.org 0x4cf14
	ldr r0, [r5, #84]	@ 0004cf14 686d
.org 0x4cf16
	ldr r1, [r5, #92]	@ 0004cf16 e96d
.org 0x4cf18
	subs r0, r0, r1	@ 0004cf18 401a
.org 0x4cf1a
	str r0, [r5, #84]	@ 0004cf1a 6865
.org 0x4cf1c
	negs r1, r1	@ 0004cf1c 4942
.org 0x4cf1e
	str r1, [r5, #92]	@ 0004cf1e e965
.org 0x4cf20
	ldr r0, [r5, #88]	@ 0004cf20 a86d
.org 0x4cf22
	ldr r1, [r5, #96]	@ 0004cf22 296e
.org 0x4cf24
	adds r0, r0, r1	@ 0004cf24 4018
.org 0x4cf26
	str r0, [r5, #88]	@ 0004cf26 a865
.org 0x4cf28
	adds r0, r5, #0	@ 0004cf28 281c
.org 0x4cf2a
	bl 0x4d05c	@ 0004cf2a 00f097f8
.org 0x4cf2e
	lsls r0, r0, #16	@ 0004cf2e 0004
.org 0x4cf30
	cmp r0, #0	@ 0004cf30 0028
.org 0x4cf32
	beq.n 0x4cf44	@ 0004cf32 07d0
.org 0x4cf34
	ldr r1, [r5, #88]	@ 0004cf34 a96d
.org 0x4cf36
	ldr r0, [r5, #96]	@ 0004cf36 286e
.org 0x4cf38
	subs r1, r1, r0	@ 0004cf38 091a
.org 0x4cf3a
	str r1, [r5, #88]	@ 0004cf3a a965
.org 0x4cf3c
	negs r0, r0	@ 0004cf3c 4042
.org 0x4cf3e
	asrs r0, r0, #1	@ 0004cf3e 4010
.org 0x4cf40
	str r0, [r5, #96]	@ 0004cf40 2866
.org 0x4cf42
	b.n 0x4cf54	@ 0004cf42 07e0
.org 0x4cf44
	ldr r0, [r5, #96]	@ 0004cf44 286e
.org 0x4cf46
	adds r0, #64	@ 0004cf46 4030
.org 0x4cf48
	str r0, [r5, #96]	@ 0004cf48 2866
.org 0x4cf4a
	movs r1, #224	@ 0004cf4a e021
.org 0x4cf4c
	lsls r1, r1, #3	@ 0004cf4c c900
.org 0x4cf4e
	cmp r0, r1	@ 0004cf4e 8842
.org 0x4cf50
	ble.n 0x4cf54	@ 0004cf50 00dd
.org 0x4cf52
	str r1, [r5, #96]	@ 0004cf52 2966
.org 0x4cf54
	ldr r0, [pc, #72]	@ 0004cf54 1248
.org 0x4cf56
	adds r4, r5, #0	@ 0004cf56 2c1c
.org 0x4cf58
	adds r4, #84	@ 0004cf58 5434
.org 0x4cf5a
	adds r1, r4, #0	@ 0004cf5a 211c
.org 0x4cf5c
	bl 0x1fb14	@ 0004cf5c d2f7dafd
.org 0x4cf60
	movs r1, #128	@ 0004cf60 8021
.org 0x4cf62
	lsls r1, r1, #7	@ 0004cf62 c901
.org 0x4cf64
	cmp r0, r1	@ 0004cf64 8842
.org 0x4cf66
	bls.n 0x4cfa8	@ 0004cf66 1fd9
.org 0x4cf68
	ldrb r1, [r5, #10]	@ 0004cf68 a97a
.org 0x4cf6a
	movs r0, #254	@ 0004cf6a fe20
.org 0x4cf6c
	ands r0, r1	@ 0004cf6c 0840
.org 0x4cf6e
	movs r2, #0	@ 0004cf6e 0022
.org 0x4cf70
	movs r1, #253	@ 0004cf70 fd21
.org 0x4cf72
	ands r0, r1	@ 0004cf72 0840
.org 0x4cf74
	strb r0, [r5, #10]	@ 0004cf74 a872
.org 0x4cf76
	adds r0, r5, #0	@ 0004cf76 281c
.org 0x4cf78
	adds r0, #140	@ 0004cf78 8c30
.org 0x4cf7a
	str r2, [r0, #0]	@ 0004cf7a 0260
.org 0x4cf7c
	adds r0, #4	@ 0004cf7c 0430
.org 0x4cf7e
	str r2, [r0, #0]	@ 0004cf7e 0260
.org 0x4cf80
	adds r0, #4	@ 0004cf80 0430
.org 0x4cf82
	strb r2, [r0, #0]	@ 0004cf82 0270
.org 0x4cf84
	ldrb r1, [r5, #10]	@ 0004cf84 a97a
.org 0x4cf86
	movs r0, #251	@ 0004cf86 fb20
.org 0x4cf88
	ands r0, r1	@ 0004cf88 0840
.org 0x4cf8a
	strb r0, [r5, #10]	@ 0004cf8a a872
.org 0x4cf8c
	ldr r1, [pc, #20]	@ 0004cf8c 0549
.org 0x4cf8e
	ldrb r0, [r5, #9]	@ 0004cf8e 687a
.org 0x4cf90
	lsls r0, r0, #2	@ 0004cf90 8000
.org 0x4cf92
	adds r0, r0, r1	@ 0004cf92 4018
.org 0x4cf94
	movs r1, #3	@ 0004cf94 0321
.org 0x4cf96
	str r1, [r5, #12]	@ 0004cf96 e960
.org 0x4cf98
	ldr r0, [r0, #0]	@ 0004cf98 0068
.org 0x4cf9a
	ldr r0, [r0, #12]	@ 0004cf9a c068
.org 0x4cf9c
	b.n 0x4cfee	@ 0004cf9c 27e0
.org 0x4cf9e
	.byte 0x00	@ 0004cf9e data
.org 0x4cf9f
	.byte 0x00	@ 0004cf9f data
.org 0x4cfa0
	.byte 0xf8,0xe9,0x02,0x02	@ 0004cfa0 data
.org 0x4cfa4
	.byte 0xf8,0x39,0x85,0x08	@ 0004cfa4 data
.org 0x4cfa8
	ldrb r0, [r5, #18]	@ 0004cfa8 a87c
.org 0x4cfaa
	subs r0, #1	@ 0004cfaa 0138
.org 0x4cfac
	strb r0, [r5, #18]	@ 0004cfac a874
.org 0x4cfae
	lsls r0, r0, #24	@ 0004cfae 0006
.org 0x4cfb0
	lsrs r0, r0, #24	@ 0004cfb0 000e
.org 0x4cfb2
	adds r2, r5, #0	@ 0004cfb2 2a1c
.org 0x4cfb4
	adds r2, #140	@ 0004cfb4 8c32
.org 0x4cfb6
	cmp r0, #255	@ 0004cfb6 ff28
.org 0x4cfb8
	beq.n 0x4cfc4	@ 0004cfb8 04d0
.org 0x4cfba
	ldr r0, [r2, #0]	@ 0004cfba 1068
.org 0x4cfbc
	ldr r1, [pc, #56]	@ 0004cfbc 0e49
.org 0x4cfbe
	ands r0, r1	@ 0004cfbe 0840
.org 0x4cfc0
	cmp r0, #0	@ 0004cfc0 0028
.org 0x4cfc2
	beq.n 0x4cff0	@ 0004cfc2 15d0
.org 0x4cfc4
	ldr r0, [r2, #0]	@ 0004cfc4 1068
.org 0x4cfc6
	movs r1, #128	@ 0004cfc6 8021
.org 0x4cfc8
	lsls r1, r1, #5	@ 0004cfc8 4901
.org 0x4cfca
	ands r0, r1	@ 0004cfca 0840
.org 0x4cfcc
	cmp r0, #0	@ 0004cfcc 0028
.org 0x4cfce
	beq.n 0x4cfd6	@ 0004cfce 02d0
.org 0x4cfd0
	movs r0, #43	@ 0004cfd0 2b20
.org 0x4cfd2
	bl 0x2b10	@ 0004cfd2 b5f79dfd
.org 0x4cfd6
	movs r0, #2	@ 0004cfd6 0220
.org 0x4cfd8
	adds r1, r4, #0	@ 0004cfd8 211c
.org 0x4cfda
	bl 0xd0c88	@ 0004cfda 83f055fe
.org 0x4cfde
	ldr r1, [pc, #28]	@ 0004cfde 0749
.org 0x4cfe0
	ldrb r0, [r5, #9]	@ 0004cfe0 687a
.org 0x4cfe2
	lsls r0, r0, #2	@ 0004cfe2 8000
.org 0x4cfe4
	adds r0, r0, r1	@ 0004cfe4 4018
