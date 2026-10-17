@ FUN_0809be20  entry 0x0809be20  size 256
.thumb
.org 0x9be20
FUN_0809be20:
	push {r4, r5, r6, r7, lr}	@ 0009be20 f0b5
.org 0x9be22
	sub sp, #20	@ 0009be22 85b0
.org 0x9be24
	adds r4, r0, #0	@ 0009be24 041c
.org 0x9be26
	mov r1, sp	@ 0009be26 6946
.org 0x9be28
	ldr r0, [pc, #244]	@ 0009be28 3d48
.org 0x9be2a
	ldmia r0!, {r2, r3, r5}	@ 0009be2a 2cc8
.org 0x9be2c
	stmia r1!, {r2, r3, r5}	@ 0009be2c 2cc1
.org 0x9be2e
	ldr r0, [r0, #0]	@ 0009be2e 0068
.org 0x9be30
	str r0, [r1, #0]	@ 0009be30 0860
.org 0x9be32
	add r6, sp, #16	@ 0009be32 04ae
.org 0x9be34
	ldr r1, [pc, #236]	@ 0009be34 3b49
.org 0x9be36
	adds r0, r6, #0	@ 0009be36 301c
.org 0x9be38
	movs r2, #4	@ 0009be38 0422
.org 0x9be3a
	bl 0x129258	@ 0009be3a 8df00dfa
.org 0x9be3e
	ldrb r5, [r4, #17]	@ 0009be3e 657c
.org 0x9be40
	adds r7, r5, #0	@ 0009be40 2f1c
.org 0x9be42
	ldrb r0, [r4, #15]	@ 0009be42 e07b
.org 0x9be44
	cmp r0, #0	@ 0009be44 0028
.org 0x9be46
	bne.n 0x9be8a	@ 0009be46 20d1
.org 0x9be48
	lsls r0, r5, #2	@ 0009be48 a800
.org 0x9be4a
	add r0, sp	@ 0009be4a 6844
.org 0x9be4c
	ldrh r1, [r0, #0]	@ 0009be4c 0188
.org 0x9be4e
	adds r0, r4, #0	@ 0009be4e 201c
.org 0x9be50
	bl 0x1cf00	@ 0009be50 81f756f8
.org 0x9be54
	movs r0, #6	@ 0009be54 0620
.org 0x9be56
	strb r0, [r4, #18]	@ 0009be56 a074
.org 0x9be58
	ldr r1, [pc, #204]	@ 0009be58 3349
.org 0x9be5a
	lsls r2, r5, #3	@ 0009be5a ea00
.org 0x9be5c
	adds r0, r2, r1	@ 0009be5c 5018
.org 0x9be5e
	ldr r0, [r0, #0]	@ 0009be5e 0068
.org 0x9be60
	str r0, [r4, #92]	@ 0009be60 e065
.org 0x9be62
	adds r1, #4	@ 0009be62 0431
.org 0x9be64
	adds r2, r2, r1	@ 0009be64 5218
.org 0x9be66
	ldr r2, [r2, #0]	@ 0009be66 1268
.org 0x9be68
	str r2, [r4, #96]	@ 0009be68 2266
.org 0x9be6a
	movs r3, #5	@ 0009be6a 0523
.org 0x9be6c
	adds r1, r0, #0	@ 0009be6c 011c
.org 0x9be6e
	muls r1, r3	@ 0009be6e 5943
.org 0x9be70
	ldr r0, [r4, #84]	@ 0009be70 606d
.org 0x9be72
	adds r0, r0, r1	@ 0009be72 4018
.org 0x9be74
	str r0, [r4, #100]	@ 0009be74 6066
.org 0x9be76
	adds r1, r2, #0	@ 0009be76 111c
.org 0x9be78
	muls r1, r3	@ 0009be78 5943
.org 0x9be7a
	ldr r0, [r4, #88]	@ 0009be7a a06d
.org 0x9be7c
	adds r0, r0, r1	@ 0009be7c 4018
.org 0x9be7e
	str r0, [r4, #104]	@ 0009be7e a066
.org 0x9be80
	movs r0, #12	@ 0009be80 0c20
.org 0x9be82
	strb r0, [r4, #18]	@ 0009be82 a074
.org 0x9be84
	ldrb r0, [r4, #15]	@ 0009be84 e07b
.org 0x9be86
	adds r0, #1	@ 0009be86 0130
.org 0x9be88
	strb r0, [r4, #15]	@ 0009be88 e073
.org 0x9be8a
	adds r0, r4, #0	@ 0009be8a 201c
.org 0x9be8c
	bl 0x1cff0	@ 0009be8c 81f7b0f8
.org 0x9be90
	ldrb r0, [r4, #18]	@ 0009be90 a07c
.org 0x9be92
	cmp r0, #0	@ 0009be92 0028
.org 0x9be94
	beq.n 0x9be9a	@ 0009be94 01d0
.org 0x9be96
	subs r0, #1	@ 0009be96 0138
.org 0x9be98
	strb r0, [r4, #18]	@ 0009be98 a074
.org 0x9be9a
	adds r0, r4, #0	@ 0009be9a 201c
.org 0x9be9c
	adds r0, #116	@ 0009be9c 7430
.org 0x9be9e
	ldr r3, [pc, #140]	@ 0009be9e 234b
.org 0x9bea0
	adds r1, r6, r7	@ 0009bea0 f119
.org 0x9bea2
	ldrb r2, [r1, #0]	@ 0009bea2 0a78
.org 0x9bea4
	lsls r2, r2, #2	@ 0009bea4 9200
.org 0x9bea6
	adds r2, r2, r3	@ 0009bea6 d218
.org 0x9bea8
	adds r1, r4, #0	@ 0009bea8 211c
.org 0x9beaa
	adds r1, #113	@ 0009beaa 7131
.org 0x9beac
	ldrb r1, [r1, #0]	@ 0009beac 0978
.org 0x9beae
	lsls r1, r1, #24	@ 0009beae 0906
.org 0x9beb0
	asrs r1, r1, #24	@ 0009beb0 0916
.org 0x9beb2
	ldr r2, [r2, #0]	@ 0009beb2 1268
.org 0x9beb4
	lsls r1, r1, #2	@ 0009beb4 8900
.org 0x9beb6
	adds r1, r1, r2	@ 0009beb6 8918
.org 0x9beb8
	ldr r1, [r1, #0]	@ 0009beb8 0968
.org 0x9beba
	bl 0x5784	@ 0009beba 69f763fc
.org 0x9bebe
	ldrb r0, [r4, #18]	@ 0009bebe a07c
.org 0x9bec0
	lsrs r3, r0, #1	@ 0009bec0 4308
.org 0x9bec2
	ldr r0, [r4, #92]	@ 0009bec2 e06d
.org 0x9bec4
	adds r1, r0, #0	@ 0009bec4 011c
.org 0x9bec6
	muls r1, r3	@ 0009bec6 5943
.org 0x9bec8
	ldr r0, [r4, #100]	@ 0009bec8 606e
.org 0x9beca
	subs r0, r0, r1	@ 0009beca 401a
.org 0x9becc
	str r0, [r4, #84]	@ 0009becc 6065
.org 0x9bece
	ldr r0, [r4, #96]	@ 0009bece 206e
.org 0x9bed0
	adds r1, r0, #0	@ 0009bed0 011c
.org 0x9bed2
	muls r1, r3	@ 0009bed2 5943
.org 0x9bed4
	ldr r0, [r4, #104]	@ 0009bed4 a06e
.org 0x9bed6
	subs r0, r0, r1	@ 0009bed6 401a
.org 0x9bed8
	str r0, [r4, #88]	@ 0009bed8 a065
.org 0x9beda
	ldrb r1, [r4, #18]	@ 0009beda a17c
.org 0x9bedc
	movs r0, #1	@ 0009bedc 0120
.org 0x9bede
	ands r0, r1	@ 0009bede 0840
.org 0x9bee0
	cmp r0, #0	@ 0009bee0 0028
.org 0x9bee2
	beq.n 0x9bef0	@ 0009bee2 05d0
.org 0x9bee4
	adds r0, r4, #0	@ 0009bee4 201c
.org 0x9bee6
	adds r0, #84	@ 0009bee6 5430
.org 0x9bee8
	movs r1, #0	@ 0009bee8 0021
.org 0x9beea
	movs r2, #0	@ 0009beea 0022
.org 0x9beec
	bl 0x664bc	@ 0009beec caf7e6fa
.org 0x9bef0
	ldrb r0, [r4, #18]	@ 0009bef0 a07c
.org 0x9bef2
	cmp r0, #0	@ 0009bef2 0028
.org 0x9bef4
	beq.n 0x9bf0e	@ 0009bef4 0bd0
.org 0x9bef6
	adds r0, r4, #0	@ 0009bef6 201c
.org 0x9bef8
	adds r0, #140	@ 0009bef8 8c30
.org 0x9befa
	ldr r0, [r0, #0]	@ 0009befa 0068
.org 0x9befc
	movs r1, #4	@ 0009befc 0421
.org 0x9befe
	ands r0, r1	@ 0009befe 0840
.org 0x9bf00
	cmp r0, #0	@ 0009bf00 0028
.org 0x9bf02
	bne.n 0x9bf0e	@ 0009bf02 04d1
.org 0x9bf04
	adds r0, r4, #0	@ 0009bf04 201c
.org 0x9bf06
	bl 0x9c3cc	@ 0009bf06 00f061fa
.org 0x9bf0a
	cmp r0, #0	@ 0009bf0a 0028
.org 0x9bf0c
	beq.n 0x9bf18	@ 0009bf0c 04d0
.org 0x9bf0e
	movs r1, #0	@ 0009bf0e 0021
.org 0x9bf10
	movs r0, #2	@ 0009bf10 0220
.org 0x9bf12
	strb r0, [r4, #13]	@ 0009bf12 6073
.org 0x9bf14
	strb r1, [r4, #14]	@ 0009bf14 a173
.org 0x9bf16
	strb r1, [r4, #15]	@ 0009bf16 e173
.org 0x9bf18
	add sp, #20	@ 0009bf18 05b0
.org 0x9bf1a
	pop {r4, r5, r6, r7}	@ 0009bf1a f0bc
.org 0x9bf1c
	pop {r0}	@ 0009bf1c 01bc
.org 0x9bf1e
	bx r0	@ 0009bf1e 0047
