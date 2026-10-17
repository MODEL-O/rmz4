@ FUN_080dbd60  entry 0x080dbd60  size 194
.thumb
.org 0xdbd60
FUN_080dbd60:
	push {r4, r5, r6, r7, lr}	@ 000dbd60 f0b5
.org 0xdbd62
	adds r4, r0, #0	@ 000dbd62 041c
.org 0xdbd64
	bl 0x1cff0	@ 000dbd64 41f744f9
.org 0xdbd68
	ldrb r0, [r4, #18]	@ 000dbd68 a07c
.org 0xdbd6a
	subs r0, #1	@ 000dbd6a 0138
.org 0xdbd6c
	strb r0, [r4, #18]	@ 000dbd6c a074
.org 0xdbd6e
	movs r1, #1	@ 000dbd6e 0121
.org 0xdbd70
	ands r0, r1	@ 000dbd70 0840
.org 0xdbd72
	cmp r0, #0	@ 000dbd72 0028
.org 0xdbd74
	beq.n 0xdbd7e	@ 000dbd74 03d0
.org 0xdbd76
	ldrb r1, [r4, #10]	@ 000dbd76 a17a
.org 0xdbd78
	movs r0, #254	@ 000dbd78 fe20
.org 0xdbd7a
	ands r0, r1	@ 000dbd7a 0840
.org 0xdbd7c
	b.n 0xdbd84	@ 000dbd7c 02e0
.org 0xdbd7e
	ldrb r0, [r4, #10]	@ 000dbd7e a07a
.org 0xdbd80
	movs r1, #1	@ 000dbd80 0121
.org 0xdbd82
	orrs r0, r1	@ 000dbd82 0843
.org 0xdbd84
	strb r0, [r4, #10]	@ 000dbd84 a072
.org 0xdbd86
	ldrb r0, [r4, #18]	@ 000dbd86 a07c
.org 0xdbd88
	lsls r0, r0, #6	@ 000dbd88 8001
.org 0xdbd8a
	adds r3, r0, #0	@ 000dbd8a 031c
.org 0xdbd8c
	adds r6, r4, #0	@ 000dbd8c 261c
.org 0xdbd8e
	adds r6, #116	@ 000dbd8e 7436
.org 0xdbd90
	ldrb r5, [r6, #0]	@ 000dbd90 3578
.org 0xdbd92
	ldr r7, [pc, #144]	@ 000dbd92 244f
.org 0xdbd94
	adds r0, r5, #0	@ 000dbd94 281c
.org 0xdbd96
	adds r0, #64	@ 000dbd96 4030
.org 0xdbd98
	lsls r0, r0, #24	@ 000dbd98 0006
.org 0xdbd9a
	lsrs r0, r0, #23	@ 000dbd9a c00d
.org 0xdbd9c
	adds r0, r0, r7	@ 000dbd9c c019
.org 0xdbd9e
	movs r1, #0	@ 000dbd9e 0021
.org 0xdbda0
	ldrsh r0, [r0, r1]	@ 000dbda0 405e
.org 0xdbda2
	adds r1, r3, #0	@ 000dbda2 191c
.org 0xdbda4
	muls r1, r0	@ 000dbda4 4143
.org 0xdbda6
	cmp r1, #0	@ 000dbda6 0029
.org 0xdbda8
	bge.n 0xdbdac	@ 000dbda8 00da
.org 0xdbdaa
	adds r1, #255	@ 000dbdaa ff31
.org 0xdbdac
	asrs r1, r1, #8	@ 000dbdac 0912
.org 0xdbdae
	ldr r0, [r4, #84]	@ 000dbdae 606d
.org 0xdbdb0
	adds r2, r0, r1	@ 000dbdb0 4218
.org 0xdbdb2
	str r2, [r4, #84]	@ 000dbdb2 6265
.org 0xdbdb4
	lsls r0, r5, #1	@ 000dbdb4 6800
.org 0xdbdb6
	adds r0, r0, r7	@ 000dbdb6 c019
.org 0xdbdb8
	movs r1, #0	@ 000dbdb8 0021
.org 0xdbdba
	ldrsh r0, [r0, r1]	@ 000dbdba 405e
.org 0xdbdbc
	muls r0, r3	@ 000dbdbc 5843
.org 0xdbdbe
	cmp r0, #0	@ 000dbdbe 0028
.org 0xdbdc0
	bge.n 0xdbdc4	@ 000dbdc0 00da
.org 0xdbdc2
	adds r0, #255	@ 000dbdc2 ff30
.org 0xdbdc4
	asrs r0, r0, #8	@ 000dbdc4 0012
.org 0xdbdc6
	ldr r1, [r4, #88]	@ 000dbdc6 a16d
.org 0xdbdc8
	adds r1, r1, r0	@ 000dbdc8 0918
.org 0xdbdca
	str r1, [r4, #88]	@ 000dbdca a165
.org 0xdbdcc
	movs r0, #128	@ 000dbdcc 8020
.org 0xdbdce
	lsls r0, r0, #4	@ 000dbdce 0001
.org 0xdbdd0
	adds r1, r1, r0	@ 000dbdd0 0918
.org 0xdbdd2
	adds r0, r2, #0	@ 000dbdd2 101c
.org 0xdbdd4
	bl 0x7c7c	@ 000dbdd4 2bf752ff
.org 0xdbdd8
	lsls r0, r0, #16	@ 000dbdd8 0004
.org 0xdbdda
	cmp r0, #0	@ 000dbdda 0028
.org 0xdbddc
	beq.n 0xdbdf4	@ 000dbddc 0ad0
.org 0xdbdde
	adds r0, r5, #0	@ 000dbdde 281c
.org 0xdbde0
	subs r0, #64	@ 000dbde0 4038
.org 0xdbde2
	lsls r0, r0, #24	@ 000dbde2 0006
.org 0xdbde4
	lsrs r5, r0, #31	@ 000dbde4 c50f
.org 0xdbde6
	lsls r1, r5, #1	@ 000dbde6 6900
.org 0xdbde8
	movs r0, #1	@ 000dbde8 0120
.org 0xdbdea
	subs r0, r0, r1	@ 000dbdea 401a
.org 0xdbdec
	lsls r0, r0, #3	@ 000dbdec c000
.org 0xdbdee
	ldrb r1, [r6, #0]	@ 000dbdee 3178
.org 0xdbdf0
	adds r0, r0, r1	@ 000dbdf0 4018
.org 0xdbdf2
	strb r0, [r6, #0]	@ 000dbdf2 3070
.org 0xdbdf4
	adds r0, r4, #0	@ 000dbdf4 201c
.org 0xdbdf6
	adds r0, #115	@ 000dbdf6 7330
.org 0xdbdf8
	ldrb r0, [r0, #0]	@ 000dbdf8 0078
.org 0xdbdfa
	cmp r0, #3	@ 000dbdfa 0328
.org 0xdbdfc
	beq.n 0xdbe04	@ 000dbdfc 02d0
.org 0xdbdfe
	ldrb r0, [r4, #18]	@ 000dbdfe a07c
.org 0xdbe00
	cmp r0, #0	@ 000dbe00 0028
.org 0xdbe02
	bne.n 0xdbe1c	@ 000dbe02 0bd1
.org 0xdbe04
	ldr r1, [pc, #32]	@ 000dbe04 0849
.org 0xdbe06
	ldrb r0, [r4, #9]	@ 000dbe06 607a
.org 0xdbe08
	lsls r0, r0, #2	@ 000dbe08 8000
.org 0xdbe0a
	adds r0, r0, r1	@ 000dbe0a 4018
.org 0xdbe0c
	movs r1, #2	@ 000dbe0c 0221
.org 0xdbe0e
	str r1, [r4, #12]	@ 000dbe0e e160
.org 0xdbe10
	ldr r0, [r0, #0]	@ 000dbe10 0068
.org 0xdbe12
	ldr r0, [r0, #8]	@ 000dbe12 8068
.org 0xdbe14
	str r0, [r4, #20]	@ 000dbe14 6061
.org 0xdbe16
	adds r0, r4, #0	@ 000dbe16 201c
.org 0xdbe18
	bl 0xdbe2c	@ 000dbe18 00f008f8
.org 0xdbe1c
	pop {r4, r5, r6, r7}	@ 000dbe1c f0bc
.org 0xdbe1e
	pop {r0}	@ 000dbe1e 01bc
.org 0xdbe20
	bx r0	@ 000dbe20 0047
