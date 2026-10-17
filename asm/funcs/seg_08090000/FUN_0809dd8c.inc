@ FUN_0809dd8c  entry 0x0809dd8c  size 110
.thumb
.org 0x9dd8c
FUN_0809dd8c:
	push {r4, lr}	@ 0009dd8c 10b5
.org 0x9dd8e
	sub sp, #8	@ 0009dd8e 82b0
.org 0x9dd90
	adds r4, r0, #0	@ 0009dd90 041c
.org 0x9dd92
	ldrb r0, [r4, #14]	@ 0009dd92 a07b
.org 0x9dd94
	cmp r0, #0	@ 0009dd94 0028
.org 0x9dd96
	bne.n 0x9ddec	@ 0009dd96 29d1
.org 0x9dd98
	ldr r1, [pc, #28]	@ 0009dd98 0749
.org 0x9dd9a
	adds r0, r4, #0	@ 0009dd9a 201c
.org 0x9dd9c
	bl 0x1cf00	@ 0009dd9c 7ff7b0f8
.org 0x9dda0
	ldrb r0, [r4, #14]	@ 0009dda0 a07b
.org 0x9dda2
	adds r0, #1	@ 0009dda2 0130
.org 0x9dda4
	strb r0, [r4, #14]	@ 0009dda4 a073
.org 0x9dda6
	ldrb r1, [r4, #10]	@ 0009dda6 a17a
.org 0x9dda8
	movs r0, #16	@ 0009dda8 1020
.org 0x9ddaa
	ands r0, r1	@ 0009ddaa 0840
.org 0x9ddac
	cmp r0, #0	@ 0009ddac 0028
.org 0x9ddae
	bne.n 0x9ddc0	@ 0009ddae 07d1
.org 0x9ddb0
	ldr r0, [r4, #84]	@ 0009ddb0 606d
.org 0x9ddb2
	ldr r1, [pc, #8]	@ 0009ddb2 0249
.org 0x9ddb4
	b.n 0x9ddc6	@ 0009ddb4 07e0
.org 0x9ddb6
	.byte 0x00	@ 0009ddb6 data
.org 0x9ddb7
	.byte 0x00	@ 0009ddb7 data
.org 0x9ddb8
	.byte 0x03,0x6e,0x00,0x00	@ 0009ddb8 data
.org 0x9ddbc
	.byte 0x00,0xe8,0xff,0xff	@ 0009ddbc data
.org 0x9ddc0
	ldr r0, [r4, #84]	@ 0009ddc0 606d
.org 0x9ddc2
	movs r1, #192	@ 0009ddc2 c021
.org 0x9ddc4
	lsls r1, r1, #5	@ 0009ddc4 4901
.org 0x9ddc6
	adds r0, r0, r1	@ 0009ddc6 4018
.org 0x9ddc8
	str r0, [sp, #0]	@ 0009ddc8 0090
.org 0x9ddca
	ldr r0, [r4, #88]	@ 0009ddca a06d
.org 0x9ddcc
	ldr r1, [pc, #52]	@ 0009ddcc 0d49
.org 0x9ddce
	adds r0, r0, r1	@ 0009ddce 4018
.org 0x9ddd0
	str r0, [sp, #4]	@ 0009ddd0 0190
.org 0x9ddd2
	ldrb r3, [r4, #10]	@ 0009ddd2 a37a
.org 0x9ddd4
	lsrs r3, r3, #4	@ 0009ddd4 1b09
.org 0x9ddd6
	movs r0, #1	@ 0009ddd6 0120
.org 0x9ddd8
	ands r3, r0	@ 0009ddd8 0340
.org 0x9ddda
	mov r0, sp	@ 0009ddda 6846
.org 0x9dddc
	movs r1, #0	@ 0009dddc 0021
.org 0x9ddde
	movs r2, #1	@ 0009ddde 0122
.org 0x9dde0
	bl 0x9e5f4	@ 0009dde0 00f008fc
.org 0x9dde4
	str r0, [r4, #44]	@ 0009dde4 e062
.org 0x9dde6
	movs r0, #45	@ 0009dde6 2d20
.org 0x9dde8
	bl 0x2b10	@ 0009dde8 64f792fe
.org 0x9ddec
	adds r0, r4, #0	@ 0009ddec 201c
.org 0x9ddee
	adds r0, #115	@ 0009ddee 7330
.org 0x9ddf0
	ldrb r1, [r0, #0]	@ 0009ddf0 0178
.org 0x9ddf2
	cmp r1, #3	@ 0009ddf2 0329
.org 0x9ddf4
	bne.n 0x9ddfc	@ 0009ddf4 02d1
.org 0x9ddf6
	movs r0, #0	@ 0009ddf6 0020
.org 0x9ddf8
	strb r1, [r4, #13]	@ 0009ddf8 6173
