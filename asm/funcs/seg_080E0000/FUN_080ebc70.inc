@ FUN_080ebc70  entry 0x080ebc70  size 382
.thumb
.org 0xebc70
FUN_080ebc70:
	push {r4, r5, r6, r7, lr}	@ 000ebc70 f0b5
.org 0xebc72
	sub sp, #8	@ 000ebc72 82b0
.org 0xebc74
	adds r4, r0, #0	@ 000ebc74 041c
.org 0xebc76
	ldrb r1, [r4, #11]	@ 000ebc76 e17a
.org 0xebc78
	movs r0, #247	@ 000ebc78 f720
.org 0xebc7a
	ands r0, r1	@ 000ebc7a 0840
.org 0xebc7c
	strb r0, [r4, #11]	@ 000ebc7c e072
.org 0xebc7e
	ldr r0, [r4, #84]	@ 000ebc7e 606d
.org 0xebc80
	str r0, [sp, #0]	@ 000ebc80 0090
.org 0xebc82
	ldr r0, [r4, #88]	@ 000ebc82 a06d
.org 0xebc84
	ldr r1, [pc, #60]	@ 000ebc84 0f49
.org 0xebc86
	adds r0, r0, r1	@ 000ebc86 4018
.org 0xebc88
	str r0, [sp, #4]	@ 000ebc88 0190
.org 0xebc8a
	movs r0, #1	@ 000ebc8a 0120
.org 0xebc8c
	mov r1, sp	@ 000ebc8c 6946
.org 0xebc8e
	bl 0xd0c88	@ 000ebc8e e4f7fbff
.org 0xebc92
	ldr r0, [sp, #0]	@ 000ebc92 0098
.org 0xebc94
	ldr r1, [sp, #4]	@ 000ebc94 0199
.org 0xebc96
	bl 0x7c7c	@ 000ebc96 1bf7f1ff
.org 0xebc9a
	lsls r0, r0, #16	@ 000ebc9a 0004
.org 0xebc9c
	cmp r0, #0	@ 000ebc9c 0028
.org 0xebc9e
	beq.n 0xebca2	@ 000ebc9e 00d0
.org 0xebca0
	b.n 0xebdf0	@ 000ebca0 a6e0
.org 0xebca2
	ldrb r0, [r4, #18]	@ 000ebca2 a07c
.org 0xebca4
	cmp r0, #0	@ 000ebca4 0028
.org 0xebca6
	beq.n 0xebd7a	@ 000ebca6 68d0
.org 0xebca8
	ldr r7, [pc, #28]	@ 000ebca8 074f
.org 0xebcaa
	adds r2, r4, #0	@ 000ebcaa 221c
.org 0xebcac
	adds r2, #188	@ 000ebcac bc32
.org 0xebcae
	ldrb r5, [r2, #0]	@ 000ebcae 1578
.org 0xebcb0
	ldrb r1, [r4, #10]	@ 000ebcb0 a17a
.org 0xebcb2
	movs r3, #16	@ 000ebcb2 1023
.org 0xebcb4
	adds r0, r3, #0	@ 000ebcb4 181c
.org 0xebcb6
	ands r0, r1	@ 000ebcb6 0840
.org 0xebcb8
	adds r6, r2, #0	@ 000ebcb8 161c
.org 0xebcba
	cmp r0, #0	@ 000ebcba 0028
.org 0xebcbc
	beq.n 0xebccc	@ 000ebcbc 06d0
.org 0xebcbe
	orrs r3, r5	@ 000ebcbe 2b43
.org 0xebcc0
	b.n 0xebcce	@ 000ebcc0 05e0
.org 0xebcc2
	.byte 0x00	@ 000ebcc2 data
.org 0xebcc3
	.byte 0x00	@ 000ebcc3 data
.org 0xebcc4
	.byte 0x00,0xee,0xff,0xff	@ 000ebcc4 data
.org 0xebcc8
	.byte 0x1c,0xea,0x85,0x08	@ 000ebcc8 data
.org 0xebccc
	adds r3, r5, #0	@ 000ebccc 2b1c
.org 0xebcce
	mov r0, sp	@ 000ebcce 6846
.org 0xebcd0
	adds r1, r7, #0	@ 000ebcd0 391c
.org 0xebcd2
	movs r2, #0	@ 000ebcd2 0022
.org 0xebcd4
	bl 0xd4c8c	@ 000ebcd4 e8f7daff
.org 0xebcd8
	mov r5, sp	@ 000ebcd8 6d46
.org 0xebcda
	ldr r7, [pc, #20]	@ 000ebcda 054f
.org 0xebcdc
	ldrb r2, [r6, #0]	@ 000ebcdc 3278
.org 0xebcde
	ldrb r1, [r4, #10]	@ 000ebcde a17a
.org 0xebce0
	movs r3, #16	@ 000ebce0 1023
.org 0xebce2
	adds r0, r3, #0	@ 000ebce2 181c
.org 0xebce4
	ands r0, r1	@ 000ebce4 0840
.org 0xebce6
	cmp r0, #0	@ 000ebce6 0028
.org 0xebce8
	beq.n 0xebcf4	@ 000ebce8 04d0
.org 0xebcea
	orrs r3, r2	@ 000ebcea 1343
.org 0xebcec
	b.n 0xebcf6	@ 000ebcec 03e0
.org 0xebcee
	.byte 0x00	@ 000ebcee data
.org 0xebcef
	.byte 0x00	@ 000ebcef data
.org 0xebcf0
	.byte 0x1c,0xea,0x85,0x08	@ 000ebcf0 data
.org 0xebcf4
	adds r3, r2, #0	@ 000ebcf4 131c
.org 0xebcf6
	adds r0, r5, #0	@ 000ebcf6 281c
.org 0xebcf8
	adds r1, r7, #0	@ 000ebcf8 391c
.org 0xebcfa
	movs r2, #0	@ 000ebcfa 0022
.org 0xebcfc
	bl 0xd4c8c	@ 000ebcfc e8f7c6ff
.org 0xebd00
	mov r5, sp	@ 000ebd00 6d46
.org 0xebd02
	ldr r7, [pc, #20]	@ 000ebd02 054f
.org 0xebd04
	ldrb r2, [r6, #0]	@ 000ebd04 3278
.org 0xebd06
	ldrb r1, [r4, #10]	@ 000ebd06 a17a
.org 0xebd08
	movs r3, #16	@ 000ebd08 1023
.org 0xebd0a
	adds r0, r3, #0	@ 000ebd0a 181c
.org 0xebd0c
	ands r0, r1	@ 000ebd0c 0840
.org 0xebd0e
	cmp r0, #0	@ 000ebd0e 0028
.org 0xebd10
	beq.n 0xebd1c	@ 000ebd10 04d0
.org 0xebd12
	orrs r3, r2	@ 000ebd12 1343
.org 0xebd14
	b.n 0xebd1e	@ 000ebd14 03e0
.org 0xebd16
	.byte 0x00	@ 000ebd16 data
.org 0xebd17
	.byte 0x00	@ 000ebd17 data
.org 0xebd18
	.byte 0x38,0xea,0x85,0x08	@ 000ebd18 data
.org 0xebd1c
	adds r3, r2, #0	@ 000ebd1c 131c
.org 0xebd1e
	adds r0, r5, #0	@ 000ebd1e 281c
.org 0xebd20
	adds r1, r7, #0	@ 000ebd20 391c
.org 0xebd22
	movs r2, #0	@ 000ebd22 0022
.org 0xebd24
	bl 0xd4c8c	@ 000ebd24 e8f7b2ff
.org 0xebd28
	mov r5, sp	@ 000ebd28 6d46
.org 0xebd2a
	ldr r7, [pc, #20]	@ 000ebd2a 054f
.org 0xebd2c
	ldrb r2, [r6, #0]	@ 000ebd2c 3278
.org 0xebd2e
	ldrb r1, [r4, #10]	@ 000ebd2e a17a
.org 0xebd30
	movs r3, #16	@ 000ebd30 1023
.org 0xebd32
	adds r0, r3, #0	@ 000ebd32 181c
.org 0xebd34
	ands r0, r1	@ 000ebd34 0840
.org 0xebd36
	cmp r0, #0	@ 000ebd36 0028
.org 0xebd38
	beq.n 0xebd44	@ 000ebd38 04d0
.org 0xebd3a
	orrs r3, r2	@ 000ebd3a 1343
.org 0xebd3c
	b.n 0xebd46	@ 000ebd3c 03e0
.org 0xebd3e
	.byte 0x00	@ 000ebd3e data
.org 0xebd3f
	.byte 0x00	@ 000ebd3f data
.org 0xebd40
	.byte 0x38,0xea,0x85,0x08	@ 000ebd40 data
.org 0xebd44
	adds r3, r2, #0	@ 000ebd44 131c
.org 0xebd46
	adds r0, r5, #0	@ 000ebd46 281c
.org 0xebd48
	adds r1, r7, #0	@ 000ebd48 391c
.org 0xebd4a
	movs r2, #0	@ 000ebd4a 0022
.org 0xebd4c
	bl 0xd4c8c	@ 000ebd4c e8f79eff
.org 0xebd50
	mov r5, sp	@ 000ebd50 6d46
.org 0xebd52
	ldr r7, [pc, #20]	@ 000ebd52 054f
.org 0xebd54
	ldrb r2, [r6, #0]	@ 000ebd54 3278
.org 0xebd56
	ldrb r1, [r4, #10]	@ 000ebd56 a17a
.org 0xebd58
	movs r3, #16	@ 000ebd58 1023
.org 0xebd5a
	adds r0, r3, #0	@ 000ebd5a 181c
.org 0xebd5c
	ands r0, r1	@ 000ebd5c 0840
.org 0xebd5e
	cmp r0, #0	@ 000ebd5e 0028
.org 0xebd60
	beq.n 0xebd6c	@ 000ebd60 04d0
.org 0xebd62
	orrs r3, r2	@ 000ebd62 1343
.org 0xebd64
	b.n 0xebd6e	@ 000ebd64 03e0
.org 0xebd66
	.byte 0x00	@ 000ebd66 data
.org 0xebd67
	.byte 0x00	@ 000ebd67 data
.org 0xebd68
	.byte 0x8c,0xea,0x85,0x08	@ 000ebd68 data
.org 0xebd6c
	adds r3, r2, #0	@ 000ebd6c 131c
.org 0xebd6e
	adds r0, r5, #0	@ 000ebd6e 281c
.org 0xebd70
	adds r1, r7, #0	@ 000ebd70 391c
.org 0xebd72
	movs r2, #0	@ 000ebd72 0022
.org 0xebd74
	bl 0xd4c8c	@ 000ebd74 e8f78aff
.org 0xebd78
	b.n 0xebdf0	@ 000ebd78 3ae0
.org 0xebd7a
	ldr r6, [pc, #148]	@ 000ebd7a 254e
.org 0xebd7c
	ldrb r0, [r4, #10]	@ 000ebd7c a07a
.org 0xebd7e
	movs r5, #16	@ 000ebd7e 1025
.org 0xebd80
	adds r3, r5, #0	@ 000ebd80 2b1c
.org 0xebd82
	ands r3, r0	@ 000ebd82 0340
.org 0xebd84
	lsls r3, r3, #24	@ 000ebd84 1b06
.org 0xebd86
	lsrs r3, r3, #24	@ 000ebd86 1b0e
.org 0xebd88
	mov r0, sp	@ 000ebd88 6846
.org 0xebd8a
	adds r1, r6, #0	@ 000ebd8a 311c
.org 0xebd8c
	movs r2, #0	@ 000ebd8c 0022
.org 0xebd8e
	bl 0xd4c8c	@ 000ebd8e e8f77dff
.org 0xebd92
	ldrb r1, [r4, #10]	@ 000ebd92 a17a
.org 0xebd94
	adds r0, r5, #0	@ 000ebd94 281c
.org 0xebd96
	ands r0, r1	@ 000ebd96 0840
.org 0xebd98
	movs r3, #1	@ 000ebd98 0123
.org 0xebd9a
	cmp r0, #0	@ 000ebd9a 0028
.org 0xebd9c
	beq.n 0xebda0	@ 000ebd9c 00d0
.org 0xebd9e
	movs r3, #17	@ 000ebd9e 1123
.org 0xebda0
	mov r0, sp	@ 000ebda0 6846
.org 0xebda2
	adds r1, r6, #0	@ 000ebda2 311c
.org 0xebda4
	movs r2, #0	@ 000ebda4 0022
.org 0xebda6
	bl 0xd4c8c	@ 000ebda6 e8f771ff
.org 0xebdaa
	adds r7, r6, #0	@ 000ebdaa 371c
.org 0xebdac
	adds r7, #28	@ 000ebdac 1c37
.org 0xebdae
	ldrb r0, [r4, #10]	@ 000ebdae a07a
.org 0xebdb0
	adds r3, r5, #0	@ 000ebdb0 2b1c
.org 0xebdb2
	ands r3, r0	@ 000ebdb2 0340
.org 0xebdb4
	lsls r3, r3, #24	@ 000ebdb4 1b06
.org 0xebdb6
	lsrs r3, r3, #24	@ 000ebdb6 1b0e
.org 0xebdb8
	mov r0, sp	@ 000ebdb8 6846
.org 0xebdba
	adds r1, r7, #0	@ 000ebdba 391c
.org 0xebdbc
	movs r2, #0	@ 000ebdbc 0022
.org 0xebdbe
	bl 0xd4c8c	@ 000ebdbe e8f765ff
.org 0xebdc2
	ldrb r1, [r4, #10]	@ 000ebdc2 a17a
.org 0xebdc4
	adds r0, r5, #0	@ 000ebdc4 281c
.org 0xebdc6
	ands r0, r1	@ 000ebdc6 0840
.org 0xebdc8
	movs r3, #1	@ 000ebdc8 0123
.org 0xebdca
	cmp r0, #0	@ 000ebdca 0028
.org 0xebdcc
	beq.n 0xebdd0	@ 000ebdcc 00d0
.org 0xebdce
	movs r3, #17	@ 000ebdce 1123
.org 0xebdd0
	mov r0, sp	@ 000ebdd0 6846
.org 0xebdd2
	adds r1, r7, #0	@ 000ebdd2 391c
.org 0xebdd4
	movs r2, #0	@ 000ebdd4 0022
.org 0xebdd6
	bl 0xd4c8c	@ 000ebdd6 e8f759ff
.org 0xebdda
	adds r1, r6, #0	@ 000ebdda 311c
.org 0xebddc
	adds r1, #112	@ 000ebddc 7031
.org 0xebdde
	ldrb r0, [r4, #10]	@ 000ebdde a07a
.org 0xebde0
	adds r3, r5, #0	@ 000ebde0 2b1c
.org 0xebde2
	ands r3, r0	@ 000ebde2 0340
.org 0xebde4
	lsls r3, r3, #24	@ 000ebde4 1b06
.org 0xebde6
	lsrs r3, r3, #24	@ 000ebde6 1b0e
.org 0xebde8
	mov r0, sp	@ 000ebde8 6846
.org 0xebdea
	movs r2, #0	@ 000ebdea 0022
.org 0xebdec
	bl 0xd4c8c	@ 000ebdec e8f74eff
