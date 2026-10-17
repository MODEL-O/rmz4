@ FUN_0803fd38  entry 0x0803fd38  size 170
.thumb
.org 0x3fd38
FUN_0803fd38:
	push {r4, lr}	@ 0003fd38 10b5
.org 0x3fd3a
	adds r4, r0, #0	@ 0003fd3a 041c
.org 0x3fd3c
	ldr r0, [r4, #44]	@ 0003fd3c e06a
.org 0x3fd3e
	adds r0, #250	@ 0003fd3e fa30
.org 0x3fd40
	ldrb r0, [r0, #0]	@ 0003fd40 0078
.org 0x3fd42
	cmp r0, #2	@ 0003fd42 0228
.org 0x3fd44
	bne.n 0x3fd84	@ 0003fd44 1ed1
.org 0x3fd46
	ldrb r1, [r4, #10]	@ 0003fd46 a17a
.org 0x3fd48
	movs r0, #254	@ 0003fd48 fe20
.org 0x3fd4a
	ands r0, r1	@ 0003fd4a 0840
.org 0x3fd4c
	movs r2, #0	@ 0003fd4c 0022
.org 0x3fd4e
	movs r1, #253	@ 0003fd4e fd21
.org 0x3fd50
	ands r0, r1	@ 0003fd50 0840
.org 0x3fd52
	strb r0, [r4, #10]	@ 0003fd52 a072
.org 0x3fd54
	adds r0, r4, #0	@ 0003fd54 201c
.org 0x3fd56
	adds r0, #140	@ 0003fd56 8c30
.org 0x3fd58
	str r2, [r0, #0]	@ 0003fd58 0260
.org 0x3fd5a
	adds r0, #4	@ 0003fd5a 0430
.org 0x3fd5c
	str r2, [r0, #0]	@ 0003fd5c 0260
.org 0x3fd5e
	adds r0, #4	@ 0003fd5e 0430
.org 0x3fd60
	strb r2, [r0, #0]	@ 0003fd60 0270
.org 0x3fd62
	ldrb r1, [r4, #10]	@ 0003fd62 a17a
.org 0x3fd64
	movs r0, #251	@ 0003fd64 fb20
.org 0x3fd66
	ands r0, r1	@ 0003fd66 0840
.org 0x3fd68
	strb r0, [r4, #10]	@ 0003fd68 a072
.org 0x3fd6a
	ldr r1, [pc, #20]	@ 0003fd6a 0549
.org 0x3fd6c
	ldrb r0, [r4, #9]	@ 0003fd6c 607a
.org 0x3fd6e
	lsls r0, r0, #2	@ 0003fd6e 8000
.org 0x3fd70
	adds r0, r0, r1	@ 0003fd70 4018
.org 0x3fd72
	movs r1, #3	@ 0003fd72 0321
.org 0x3fd74
	str r1, [r4, #12]	@ 0003fd74 e160
.org 0x3fd76
	ldr r0, [r0, #0]	@ 0003fd76 0068
.org 0x3fd78
	ldr r0, [r0, #12]	@ 0003fd78 c068
.org 0x3fd7a
	str r0, [r4, #20]	@ 0003fd7a 6061
.org 0x3fd7c
	b.n 0x3fde2	@ 0003fd7c 31e0
.org 0x3fd7e
	.byte 0x00	@ 0003fd7e data
.org 0x3fd7f
	.byte 0x00	@ 0003fd7f data
.org 0x3fd80
	.byte 0xf8,0x39,0x85,0x08	@ 0003fd80 data
.org 0x3fd84
	adds r0, r4, #0	@ 0003fd84 201c
.org 0x3fd86
	bl 0x1cff0	@ 0003fd86 ddf733f9
.org 0x3fd8a
	ldr r0, [r4, #84]	@ 0003fd8a 606d
.org 0x3fd8c
	ldr r1, [r4, #92]	@ 0003fd8c e16d
.org 0x3fd8e
	adds r0, r0, r1	@ 0003fd8e 4018
.org 0x3fd90
	str r0, [r4, #84]	@ 0003fd90 6065
.org 0x3fd92
	adds r0, r4, #0	@ 0003fd92 201c
.org 0x3fd94
	movs r1, #3	@ 0003fd94 0321
.org 0x3fd96
	bl 0x3a99c	@ 0003fd96 faf701fe
.org 0x3fd9a
	lsls r0, r0, #24	@ 0003fd9a 0006
.org 0x3fd9c
	cmp r0, #0	@ 0003fd9c 0028
.org 0x3fd9e
	bne.n 0x3fdbc	@ 0003fd9e 0dd1
.org 0x3fda0
	ldrb r0, [r4, #18]	@ 0003fda0 a07c
.org 0x3fda2
	subs r0, #1	@ 0003fda2 0138
.org 0x3fda4
	strb r0, [r4, #18]	@ 0003fda4 a074
.org 0x3fda6
	lsls r0, r0, #24	@ 0003fda6 0006
.org 0x3fda8
	lsrs r0, r0, #24	@ 0003fda8 000e
.org 0x3fdaa
	cmp r0, #255	@ 0003fdaa ff28
.org 0x3fdac
	beq.n 0x3fdbc	@ 0003fdac 06d0
.org 0x3fdae
	adds r0, r4, #0	@ 0003fdae 201c
.org 0x3fdb0
	adds r0, #140	@ 0003fdb0 8c30
.org 0x3fdb2
	ldr r0, [r0, #0]	@ 0003fdb2 0068
.org 0x3fdb4
	movs r1, #4	@ 0003fdb4 0421
.org 0x3fdb6
	ands r0, r1	@ 0003fdb6 0840
.org 0x3fdb8
	cmp r0, #0	@ 0003fdb8 0028
.org 0x3fdba
	beq.n 0x3fde2	@ 0003fdba 12d0
.org 0x3fdbc
	movs r0, #109	@ 0003fdbc 6d20
.org 0x3fdbe
	bl 0x2b10	@ 0003fdbe c2f7a7fe
.org 0x3fdc2
	ldr r0, [r4, #84]	@ 0003fdc2 606d
.org 0x3fdc4
	ldr r1, [r4, #92]	@ 0003fdc4 e16d
.org 0x3fdc6
	subs r0, r0, r1	@ 0003fdc6 401a
.org 0x3fdc8
	str r0, [r4, #84]	@ 0003fdc8 6065
.org 0x3fdca
	ldr r1, [pc, #28]	@ 0003fdca 0749
.org 0x3fdcc
	ldrb r0, [r4, #9]	@ 0003fdcc 607a
.org 0x3fdce
	lsls r0, r0, #2	@ 0003fdce 8000
.org 0x3fdd0
	adds r0, r0, r1	@ 0003fdd0 4018
.org 0x3fdd2
	movs r1, #2	@ 0003fdd2 0221
.org 0x3fdd4
	str r1, [r4, #12]	@ 0003fdd4 e160
.org 0x3fdd6
	ldr r0, [r0, #0]	@ 0003fdd6 0068
.org 0x3fdd8
	ldr r0, [r0, #8]	@ 0003fdd8 8068
.org 0x3fdda
	str r0, [r4, #20]	@ 0003fdda 6061
.org 0x3fddc
	adds r0, r4, #0	@ 0003fddc 201c
.org 0x3fdde
	bl 0x3fd20	@ 0003fdde fff79fff
