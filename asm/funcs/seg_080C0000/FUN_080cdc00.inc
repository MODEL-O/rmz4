@ FUN_080cdc00  entry 0x080cdc00  size 352
.thumb
.org 0xcdc00
FUN_080cdc00:
	push {r4, r5, r6, r7, lr}	@ 000cdc00 f0b5
.org 0xcdc02
	mov r7, r9	@ 000cdc02 4f46
.org 0xcdc04
	mov r6, r8	@ 000cdc04 4646
.org 0xcdc06
	push {r6, r7}	@ 000cdc06 c0b4
.org 0xcdc08
	sub sp, #8	@ 000cdc08 82b0
.org 0xcdc0a
	adds r4, r0, #0	@ 000cdc0a 041c
.org 0xcdc0c
	ldr r5, [r4, #40]	@ 000cdc0c a56a
.org 0xcdc0e
	ldrb r0, [r5, #13]	@ 000cdc0e 687b
.org 0xcdc10
	cmp r0, #0	@ 000cdc10 0028
.org 0xcdc12
	beq.n 0xcdc34	@ 000cdc12 0fd0
.org 0xcdc14
	ldr r1, [pc, #24]	@ 000cdc14 0649
.org 0xcdc16
	ldrb r0, [r4, #9]	@ 000cdc16 607a
.org 0xcdc18
	lsls r0, r0, #2	@ 000cdc18 8000
.org 0xcdc1a
	adds r0, r0, r1	@ 000cdc1a 4018
.org 0xcdc1c
	movs r1, #2	@ 000cdc1c 0221
.org 0xcdc1e
	str r1, [r4, #12]	@ 000cdc1e e160
.org 0xcdc20
	ldr r0, [r0, #0]	@ 000cdc20 0068
.org 0xcdc22
	ldr r0, [r0, #8]	@ 000cdc22 8068
.org 0xcdc24
	str r0, [r4, #20]	@ 000cdc24 6061
.org 0xcdc26
	adds r0, r4, #0	@ 000cdc26 201c
.org 0xcdc28
	bl 0xcdd84	@ 000cdc28 00f0acf8
.org 0xcdc2c
	b.n 0xcdd76	@ 000cdc2c a3e0
.org 0xcdc2e
	.byte 0x00	@ 000cdc2e data
.org 0xcdc2f
	.byte 0x00	@ 000cdc2f data
.org 0xcdc30
	.byte 0xf4,0x49,0x86,0x08	@ 000cdc30 data
.org 0xcdc34
	ldrb r6, [r4, #14]	@ 000cdc34 a67b
.org 0xcdc36
	cmp r6, #1	@ 000cdc36 012e
.org 0xcdc38
	beq.n 0xcdc78	@ 000cdc38 1ed0
.org 0xcdc3a
	cmp r6, #1	@ 000cdc3a 012e
.org 0xcdc3c
	bgt.n 0xcdc44	@ 000cdc3c 02dc
.org 0xcdc3e
	cmp r6, #0	@ 000cdc3e 002e
.org 0xcdc40
	beq.n 0xcdc4c	@ 000cdc40 04d0
.org 0xcdc42
	b.n 0xcdd52	@ 000cdc42 86e0
.org 0xcdc44
	cmp r6, #2	@ 000cdc44 022e
.org 0xcdc46
	bne.n 0xcdc4a	@ 000cdc46 00d1
.org 0xcdc48
	b.n 0xcdd48	@ 000cdc48 7ee0
.org 0xcdc4a
	b.n 0xcdd52	@ 000cdc4a 82e0
.org 0xcdc4c
	ldr r1, [r4, #84]	@ 000cdc4c 616d
.org 0xcdc4e
	ldr r0, [pc, #36]	@ 000cdc4e 0948
.org 0xcdc50
	adds r1, r1, r0	@ 000cdc50 0918
.org 0xcdc52
	str r1, [r4, #84]	@ 000cdc52 6165
.org 0xcdc54
	ldr r0, [r5, #84]	@ 000cdc54 686d
.org 0xcdc56
	movs r2, #128	@ 000cdc56 8022
.org 0xcdc58
	lsls r2, r2, #5	@ 000cdc58 5201
.org 0xcdc5a
	adds r0, r0, r2	@ 000cdc5a 8018
.org 0xcdc5c
	cmp r1, r0	@ 000cdc5c 8142
.org 0xcdc5e
	bge.n 0xcdd52	@ 000cdc5e 78da
.org 0xcdc60
	movs r0, #219	@ 000cdc60 db20
.org 0xcdc62
	lsls r0, r0, #1	@ 000cdc62 4000
.org 0xcdc64
	bl 0x2b10	@ 000cdc64 34f754ff
.org 0xcdc68
	ldr r0, [r5, #84]	@ 000cdc68 686d
.org 0xcdc6a
	movs r1, #128	@ 000cdc6a 8021
.org 0xcdc6c
	lsls r1, r1, #5	@ 000cdc6c 4901
.org 0xcdc6e
	adds r0, r0, r1	@ 000cdc6e 4018
.org 0xcdc70
	str r0, [r4, #84]	@ 000cdc70 6065
.org 0xcdc72
	b.n 0xcdd3a	@ 000cdc72 62e0
.org 0xcdc74
	.byte 0x00,0xf8,0xff,0xff	@ 000cdc74 data
.org 0xcdc78
	ldr r0, [r5, #84]	@ 000cdc78 686d
.org 0xcdc7a
	movs r2, #128	@ 000cdc7a 8022
.org 0xcdc7c
	lsls r2, r2, #5	@ 000cdc7c 5201
.org 0xcdc7e
	adds r0, r0, r2	@ 000cdc7e 8018
.org 0xcdc80
	str r0, [r4, #84]	@ 000cdc80 6065
.org 0xcdc82
	adds r0, r4, #0	@ 000cdc82 201c
.org 0xcdc84
	adds r0, #113	@ 000cdc84 7130
.org 0xcdc86
	ldrb r0, [r0, #0]	@ 000cdc86 0078
.org 0xcdc88
	lsls r0, r0, #24	@ 000cdc88 0006
.org 0xcdc8a
	asrs r0, r0, #24	@ 000cdc8a 0016
.org 0xcdc8c
	cmp r0, #0	@ 000cdc8c 0028
.org 0xcdc8e
	bne.n 0xcdd52	@ 000cdc8e 60d1
.org 0xcdc90
	ldr r0, [r5, #84]	@ 000cdc90 686d
.org 0xcdc92
	ldr r1, [pc, #92]	@ 000cdc92 1749
.org 0xcdc94
	adds r0, r0, r1	@ 000cdc94 4018
.org 0xcdc96
	str r0, [r5, #84]	@ 000cdc96 6865
.org 0xcdc98
	ldr r7, [pc, #88]	@ 000cdc98 164f
.org 0xcdc9a
	ldr r0, [r7, #0]	@ 000cdc9a 3868
.org 0xcdc9c
	ldr r2, [pc, #88]	@ 000cdc9c 164a
.org 0xcdc9e
	mov r9, r2	@ 000cdc9e 9146
.org 0xcdca0
	mov r1, r9	@ 000cdca0 4946
.org 0xcdca2
	muls r1, r0	@ 000cdca2 4143
.org 0xcdca4
	ldr r0, [pc, #84]	@ 000cdca4 1548
.org 0xcdca6
	mov r8, r0	@ 000cdca6 8046
.org 0xcdca8
	add r1, r8	@ 000cdca8 4144
.org 0xcdcaa
	lsls r1, r1, #1	@ 000cdcaa 4900
.org 0xcdcac
	lsrs r0, r1, #1	@ 000cdcac 4808
.org 0xcdcae
	str r0, [r7, #0]	@ 000cdcae 3860
.org 0xcdcb0
	lsls r1, r1, #3	@ 000cdcb0 c900
.org 0xcdcb2
	lsrs r1, r1, #20	@ 000cdcb2 090d
.org 0xcdcb4
	ldr r0, [r4, #84]	@ 000cdcb4 606d
.org 0xcdcb6
	subs r0, r0, r1	@ 000cdcb6 401a
.org 0xcdcb8
	str r0, [sp, #0]	@ 000cdcb8 0090
.org 0xcdcba
	ldr r0, [r4, #88]	@ 000cdcba a06d
.org 0xcdcbc
	str r0, [sp, #4]	@ 000cdcbc 0190
.org 0xcdcbe
	movs r0, #4	@ 000cdcbe 0420
.org 0xcdcc0
	mov r1, sp	@ 000cdcc0 6946
.org 0xcdcc2
	movs r2, #0	@ 000cdcc2 0022
.org 0xcdcc4
	movs r3, #0	@ 000cdcc4 0023
.org 0xcdcc6
	bl 0xd0cec	@ 000cdcc6 03f011f8
.org 0xcdcca
	movs r2, #128	@ 000cdcca 8022
.org 0xcdccc
	lsls r2, r2, #2	@ 000cdccc 9200
.org 0xcdcce
	ldrb r3, [r4, #17]	@ 000cdcce 637c
.org 0xcdcd0
	lsls r3, r3, #8	@ 000cdcd0 1b02
.org 0xcdcd2
	movs r0, #0	@ 000cdcd2 0020
.org 0xcdcd4
	mov r1, sp	@ 000cdcd4 6946
.org 0xcdcd6
	bl 0xd0dc4	@ 000cdcd6 03f075f8
.org 0xcdcda
	adds r0, r5, #0	@ 000cdcda 281c
.org 0xcdcdc
	adds r0, #219	@ 000cdcdc db30
.org 0xcdcde
	strb r6, [r0, #0]	@ 000cdcde 0670
.org 0xcdce0
	ldrb r0, [r4, #16]	@ 000cdce0 207c
.org 0xcdce2
	cmp r0, #1	@ 000cdce2 0128
.org 0xcdce4
	bhi.n 0xcdd04	@ 000cdce4 0ed8
.org 0xcdce6
	ldr r1, [pc, #24]	@ 000cdce6 0649
.org 0xcdce8
	adds r0, r4, #0	@ 000cdce8 201c
.org 0xcdcea
	bl 0x1cf00	@ 000cdcea 4ff709f9
.org 0xcdcee
	b.n 0xcdd3a	@ 000cdcee 24e0
.org 0xcdcf0
	.byte 0x00,0xfa,0xff,0xff	@ 000cdcf0 data
.org 0xcdcf4
	.byte 0x38,0xdc,0x02,0x02	@ 000cdcf4 data
.org 0xcdcf8
	.byte 0xfd,0x43,0x03,0x00	@ 000cdcf8 data
.org 0xcdcfc
	.byte 0xc3,0x9e,0x26,0x00	@ 000cdcfc data
.org 0xcdd00
	.byte 0x01,0xdc,0x00,0x00	@ 000cdd00 data
.org 0xcdd04
	ldrb r0, [r4, #30]	@ 000cdd04 a07f
.org 0xcdd06
	lsls r0, r0, #8	@ 000cdd06 0002
.org 0xcdd08
	adds r1, r4, #0	@ 000cdd08 211c
.org 0xcdd0a
	adds r1, #112	@ 000cdd0a 7031
.org 0xcdd0c
	ldrb r1, [r1, #0]	@ 000cdd0c 0978
.org 0xcdd0e
	orrs r0, r1	@ 000cdd0e 0843
.org 0xcdd10
	movs r1, #220	@ 000cdd10 dc21
.org 0xcdd12
	lsls r1, r1, #8	@ 000cdd12 0902
.org 0xcdd14
	cmp r0, r1	@ 000cdd14 8842
.org 0xcdd16
	bne.n 0xcdd3a	@ 000cdd16 10d1
.org 0xcdd18
	ldr r0, [r7, #0]	@ 000cdd18 3868
.org 0xcdd1a
	mov r1, r9	@ 000cdd1a 4946
.org 0xcdd1c
	muls r1, r0	@ 000cdd1c 4143
.org 0xcdd1e
	adds r0, r1, #0	@ 000cdd1e 081c
.org 0xcdd20
	add r0, r8	@ 000cdd20 4044
.org 0xcdd22
	lsls r0, r0, #1	@ 000cdd22 4000
.org 0xcdd24
	lsrs r1, r0, #1	@ 000cdd24 4108
.org 0xcdd26
	str r1, [r7, #0]	@ 000cdd26 3960
.org 0xcdd28
	lsrs r0, r0, #17	@ 000cdd28 400c
.org 0xcdd2a
	movs r1, #3	@ 000cdd2a 0321
.org 0xcdd2c
	ands r0, r1	@ 000cdd2c 0840
.org 0xcdd2e
	cmp r0, #0	@ 000cdd2e 0028
.org 0xcdd30
	bne.n 0xcdd3a	@ 000cdd30 03d1
.org 0xcdd32
	ldr r1, [pc, #16]	@ 000cdd32 0449
.org 0xcdd34
	adds r0, r4, #0	@ 000cdd34 201c
.org 0xcdd36
	bl 0x1cf00	@ 000cdd36 4ff7e3f8
.org 0xcdd3a
	ldrb r0, [r4, #14]	@ 000cdd3a a07b
.org 0xcdd3c
	adds r0, #1	@ 000cdd3c 0130
.org 0xcdd3e
	strb r0, [r4, #14]	@ 000cdd3e a073
.org 0xcdd40
	b.n 0xcdd52	@ 000cdd40 07e0
.org 0xcdd42
	.byte 0x00	@ 000cdd42 data
.org 0xcdd43
	.byte 0x00	@ 000cdd43 data
.org 0xcdd44
	.byte 0x01,0xdc,0x00,0x00	@ 000cdd44 data
.org 0xcdd48
	ldr r0, [r5, #84]	@ 000cdd48 686d
.org 0xcdd4a
	movs r2, #128	@ 000cdd4a 8022
.org 0xcdd4c
	lsls r2, r2, #5	@ 000cdd4c 5201
.org 0xcdd4e
	adds r0, r0, r2	@ 000cdd4e 8018
.org 0xcdd50
	str r0, [r4, #84]	@ 000cdd50 6065
.org 0xcdd52
	adds r0, r4, #0	@ 000cdd52 201c
.org 0xcdd54
	bl 0x1cff0	@ 000cdd54 4ff74cf9
.org 0xcdd58
	adds r1, r5, #0	@ 000cdd58 291c
.org 0xcdd5a
	adds r1, #82	@ 000cdd5a 5231
.org 0xcdd5c
	ldrh r0, [r1, #0]	@ 000cdd5c 0888
.org 0xcdd5e
	cmp r0, #0	@ 000cdd5e 0028
