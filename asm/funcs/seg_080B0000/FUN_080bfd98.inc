@ FUN_080bfd98  entry 0x080bfd98  size 450
.thumb
.org 0xbfd98
FUN_080bfd98:
	push {r4, r5, r6, r7, lr}	@ 000bfd98 f0b5
.org 0xbfd9a
	mov r7, sl	@ 000bfd9a 5746
.org 0xbfd9c
	mov r6, r9	@ 000bfd9c 4e46
.org 0xbfd9e
	mov r5, r8	@ 000bfd9e 4546
.org 0xbfda0
	push {r5, r6, r7}	@ 000bfda0 e0b4
.org 0xbfda2
	sub sp, #32	@ 000bfda2 88b0
.org 0xbfda4
	adds r5, r0, #0	@ 000bfda4 051c
.org 0xbfda6
	ldr r1, [pc, #360]	@ 000bfda6 5a49
.org 0xbfda8
	mov r0, sp	@ 000bfda8 6846
.org 0xbfdaa
	movs r2, #2	@ 000bfdaa 0222
.org 0xbfdac
	bl 0x129258	@ 000bfdac 69f054fa
.org 0xbfdb0
	add r4, sp, #4	@ 000bfdb0 01ac
.org 0xbfdb2
	ldr r1, [pc, #352]	@ 000bfdb2 5849
.org 0xbfdb4
	adds r0, r4, #0	@ 000bfdb4 201c
.org 0xbfdb6
	movs r2, #8	@ 000bfdb6 0822
.org 0xbfdb8
	bl 0x129258	@ 000bfdb8 69f04efa
.org 0xbfdbc
	ldr r0, [pc, #344]	@ 000bfdbc 5648
.org 0xbfdbe
	ldr r1, [r0, #4]	@ 000bfdbe 4168
.org 0xbfdc0
	ldr r0, [r0, #0]	@ 000bfdc0 0068
.org 0xbfdc2
	str r0, [sp, #16]	@ 000bfdc2 0490
.org 0xbfdc4
	str r1, [sp, #20]	@ 000bfdc4 0591
.org 0xbfdc6
	add r0, sp, #12	@ 000bfdc6 03a8
.org 0xbfdc8
	mov r8, r0	@ 000bfdc8 8046
.org 0xbfdca
	ldr r1, [pc, #336]	@ 000bfdca 5449
.org 0xbfdcc
	movs r2, #2	@ 000bfdcc 0222
.org 0xbfdce
	bl 0x129258	@ 000bfdce 69f043fa
.org 0xbfdd2
	ldr r1, [r5, #40]	@ 000bfdd2 a96a
.org 0xbfdd4
	mov sl, r1	@ 000bfdd4 8a46
.org 0xbfdd6
	ldrb r2, [r5, #16]	@ 000bfdd6 2a7c
.org 0xbfdd8
	mov r9, r2	@ 000bfdd8 9146
.org 0xbfdda
	ldrb r7, [r5, #17]	@ 000bfdda 6f7c
.org 0xbfddc
	ldrb r6, [r5, #15]	@ 000bfddc ee7b
.org 0xbfdde
	cmp r6, #0	@ 000bfdde 002e
.org 0xbfde0
	bne.n 0xbfe90	@ 000bfde0 56d1
.org 0xbfde2
	ldrb r1, [r5, #10]	@ 000bfde2 a97a
.org 0xbfde4
	movs r0, #1	@ 000bfde4 0120
.org 0xbfde6
	orrs r0, r1	@ 000bfde6 0843
.org 0xbfde8
	strb r0, [r5, #10]	@ 000bfde8 a872
.org 0xbfdea
	adds r2, r5, #0	@ 000bfdea 2a1c
.org 0xbfdec
	adds r2, #73	@ 000bfdec 4932
.org 0xbfdee
	ldrb r1, [r2, #0]	@ 000bfdee 1178
.org 0xbfdf0
	movs r0, #13	@ 000bfdf0 0d20
.org 0xbfdf2
	negs r0, r0	@ 000bfdf2 4042
.org 0xbfdf4
	ands r0, r1	@ 000bfdf4 0840
.org 0xbfdf6
	movs r1, #8	@ 000bfdf6 0821
.org 0xbfdf8
	orrs r0, r1	@ 000bfdf8 0843
.org 0xbfdfa
	strb r0, [r2, #0]	@ 000bfdfa 1070
.org 0xbfdfc
	adds r1, r5, #0	@ 000bfdfc 291c
.org 0xbfdfe
	adds r1, #37	@ 000bfdfe 2531
.org 0xbfe00
	movs r0, #8	@ 000bfe00 0820
.org 0xbfe02
	strb r0, [r1, #0]	@ 000bfe02 0870
.org 0xbfe04
	ldrb r1, [r5, #10]	@ 000bfe04 a97a
.org 0xbfe06
	movs r0, #4	@ 000bfe06 0420
.org 0xbfe08
	orrs r0, r1	@ 000bfe08 0843
.org 0xbfe0a
	strb r0, [r5, #10]	@ 000bfe0a a872
.org 0xbfe0c
	adds r4, r5, #0	@ 000bfe0c 2c1c
.org 0xbfe0e
	adds r4, #116	@ 000bfe0e 7434
.org 0xbfe10
	ldr r1, [pc, #268]	@ 000bfe10 4349
.org 0xbfe12
	adds r2, #11	@ 000bfe12 0b32
.org 0xbfe14
	adds r0, r4, #0	@ 000bfe14 201c
.org 0xbfe16
	movs r3, #64	@ 000bfe16 4023
.org 0xbfe18
	bl 0x5760	@ 000bfe18 45f7a2fc
.org 0xbfe1c
	str r5, [r4, #44]	@ 000bfe1c e562
.org 0xbfe1e
	str r6, [r4, #36]	@ 000bfe1e 6662
.org 0xbfe20
	ldr r1, [pc, #256]	@ 000bfe20 4049
.org 0xbfe22
	adds r0, r5, #0	@ 000bfe22 281c
.org 0xbfe24
	bl 0x1cf00	@ 000bfe24 5df76cf8
.org 0xbfe28
	adds r2, r5, #0	@ 000bfe28 2a1c
.org 0xbfe2a
	adds r2, #184	@ 000bfe2a b832
.org 0xbfe2c
	lsls r0, r7, #2	@ 000bfe2c b800
.org 0xbfe2e
	add r1, sp, #16	@ 000bfe2e 04a9
.org 0xbfe30
	adds r0, r0, r1	@ 000bfe30 4018
.org 0xbfe32
	ldr r4, [r2, #0]	@ 000bfe32 1468
.org 0xbfe34
	ldr r0, [r0, #0]	@ 000bfe34 0068
.org 0xbfe36
	adds r4, r4, r0	@ 000bfe36 2418
.org 0xbfe38
	mov r3, r8	@ 000bfe38 4346
.org 0xbfe3a
	adds r0, r3, r7	@ 000bfe3a d819
.org 0xbfe3c
	ldrb r1, [r0, #0]	@ 000bfe3c 0178
.org 0xbfe3e
	movs r0, #204	@ 000bfe3e cc20
.org 0xbfe40
	lsls r0, r0, #9	@ 000bfe40 4002
.org 0xbfe42
	bl 0x128fb8	@ 000bfe42 69f0b9f8
.org 0xbfe46
	mov r2, r9	@ 000bfe46 4a46
.org 0xbfe48
	muls r2, r0	@ 000bfe48 4243
.org 0xbfe4a
	lsls r1, r7, #1	@ 000bfe4a 7900
.org 0xbfe4c
	movs r0, #1	@ 000bfe4c 0120
.org 0xbfe4e
	subs r0, r0, r1	@ 000bfe4e 401a
.org 0xbfe50
	muls r0, r2	@ 000bfe50 5043
.org 0xbfe52
	adds r4, r4, r0	@ 000bfe52 2418
.org 0xbfe54
	str r4, [r5, #84]	@ 000bfe54 6c65
.org 0xbfe56
	adds r0, r5, #0	@ 000bfe56 281c
.org 0xbfe58
	adds r0, #180	@ 000bfe58 b430
.org 0xbfe5a
	ldr r0, [r0, #0]	@ 000bfe5a 0068
.org 0xbfe5c
	str r0, [r5, #88]	@ 000bfe5c a865
.org 0xbfe5e
	ldr r3, [pc, #200]	@ 000bfe5e 324b
.org 0xbfe60
	mov r4, sp	@ 000bfe60 6c46
.org 0xbfe62
	adds r2, r4, r7	@ 000bfe62 e219
.org 0xbfe64
	ldrb r0, [r2, #0]	@ 000bfe64 1078
.org 0xbfe66
	adds r0, #64	@ 000bfe66 4030
.org 0xbfe68
	lsls r0, r0, #24	@ 000bfe68 0006
.org 0xbfe6a
	lsrs r0, r0, #23	@ 000bfe6a c00d
.org 0xbfe6c
	adds r0, r0, r3	@ 000bfe6c c018
.org 0xbfe6e
	movs r4, #0	@ 000bfe6e 0024
.org 0xbfe70
	ldrsh r1, [r0, r4]	@ 000bfe70 015f
.org 0xbfe72
	lsls r0, r1, #1	@ 000bfe72 4800
.org 0xbfe74
	adds r0, r0, r1	@ 000bfe74 4018
.org 0xbfe76
	str r0, [r5, #92]	@ 000bfe76 e865
.org 0xbfe78
	ldrb r0, [r2, #0]	@ 000bfe78 1078
.org 0xbfe7a
	lsls r0, r0, #1	@ 000bfe7a 4000
.org 0xbfe7c
	adds r0, r0, r3	@ 000bfe7c c018
.org 0xbfe7e
	movs r2, #0	@ 000bfe7e 0022
.org 0xbfe80
	ldrsh r1, [r0, r2]	@ 000bfe80 815e
.org 0xbfe82
	lsls r0, r1, #1	@ 000bfe82 4800
.org 0xbfe84
	adds r0, r0, r1	@ 000bfe84 4018
.org 0xbfe86
	str r0, [r5, #96]	@ 000bfe86 2866
.org 0xbfe88
	strb r6, [r5, #18]	@ 000bfe88 ae74
.org 0xbfe8a
	ldrb r0, [r5, #15]	@ 000bfe8a e87b
.org 0xbfe8c
	adds r0, #1	@ 000bfe8c 0130
.org 0xbfe8e
	strb r0, [r5, #15]	@ 000bfe8e e873
.org 0xbfe90
	mov r3, sl	@ 000bfe90 5346
.org 0xbfe92
	ldrb r0, [r3, #12]	@ 000bfe92 187b
.org 0xbfe94
	cmp r0, #1	@ 000bfe94 0128
.org 0xbfe96
	bhi.n 0xbfef4	@ 000bfe96 2dd8
.org 0xbfe98
	adds r0, r5, #0	@ 000bfe98 281c
.org 0xbfe9a
	bl 0x1cff0	@ 000bfe9a 5df7a9f8
.org 0xbfe9e
	ldr r1, [r5, #84]	@ 000bfe9e 696d
.org 0xbfea0
	ldr r0, [r5, #92]	@ 000bfea0 e86d
.org 0xbfea2
	adds r1, r1, r0	@ 000bfea2 0918
.org 0xbfea4
	str r1, [r5, #84]	@ 000bfea4 6965
.org 0xbfea6
	ldr r2, [r5, #88]	@ 000bfea6 aa6d
.org 0xbfea8
	ldr r0, [r5, #96]	@ 000bfea8 286e
.org 0xbfeaa
	adds r2, r2, r0	@ 000bfeaa 1218
.org 0xbfeac
	str r2, [r5, #88]	@ 000bfeac aa65
.org 0xbfeae
	str r1, [sp, #24]	@ 000bfeae 0691
.org 0xbfeb0
	add r1, sp, #24	@ 000bfeb0 06a9
.org 0xbfeb2
	str r2, [r1, #4]	@ 000bfeb2 4a60
.org 0xbfeb4
	adds r0, r5, #0	@ 000bfeb4 281c
.org 0xbfeb6
	adds r0, #180	@ 000bfeb6 b430
.org 0xbfeb8
	ldr r0, [r0, #0]	@ 000bfeb8 0068
.org 0xbfeba
	adds r4, r1, #0	@ 000bfeba 0c1c
.org 0xbfebc
	cmp r2, r0	@ 000bfebc 8242
.org 0xbfebe
	blt.n 0xbff34	@ 000bfebe 39db
.org 0xbfec0
	ldr r0, [sp, #24]	@ 000bfec0 0698
.org 0xbfec2
	ldr r1, [pc, #104]	@ 000bfec2 1a49
.org 0xbfec4
	adds r0, r0, r1	@ 000bfec4 4018
.org 0xbfec6
	adds r1, r2, #0	@ 000bfec6 111c
.org 0xbfec8
	bl 0x7c7c	@ 000bfec8 47f7d8fe
.org 0xbfecc
	lsls r0, r0, #16	@ 000bfecc 0004
.org 0xbfece
	cmp r0, #0	@ 000bfece 0028
.org 0xbfed0
	bne.n 0xbfef4	@ 000bfed0 10d1
.org 0xbfed2
	ldr r0, [sp, #24]	@ 000bfed2 0698
.org 0xbfed4
	movs r2, #192	@ 000bfed4 c022
.org 0xbfed6
	lsls r2, r2, #3	@ 000bfed6 d200
.org 0xbfed8
	adds r0, r0, r2	@ 000bfed8 8018
.org 0xbfeda
	ldr r1, [r4, #4]	@ 000bfeda 6168
.org 0xbfedc
	bl 0x7c7c	@ 000bfedc 47f7cefe
.org 0xbfee0
	lsls r0, r0, #16	@ 000bfee0 0004
.org 0xbfee2
	cmp r0, #0	@ 000bfee2 0028
.org 0xbfee4
	bne.n 0xbfef4	@ 000bfee4 06d1
.org 0xbfee6
	adds r0, r5, #0	@ 000bfee6 281c
.org 0xbfee8
	adds r0, #140	@ 000bfee8 8c30
.org 0xbfeea
	ldr r0, [r0, #0]	@ 000bfeea 0068
.org 0xbfeec
	movs r1, #4	@ 000bfeec 0421
.org 0xbfeee
	ands r0, r1	@ 000bfeee 0840
.org 0xbfef0
	cmp r0, #0	@ 000bfef0 0028
.org 0xbfef2
	beq.n 0xbff34	@ 000bfef2 1fd0
.org 0xbfef4
	ldr r1, [pc, #56]	@ 000bfef4 0e49
.org 0xbfef6
	ldrb r0, [r5, #9]	@ 000bfef6 687a
.org 0xbfef8
	lsls r0, r0, #2	@ 000bfef8 8000
.org 0xbfefa
	adds r0, r0, r1	@ 000bfefa 4018
.org 0xbfefc
	movs r1, #2	@ 000bfefc 0221
.org 0xbfefe
	str r1, [r5, #12]	@ 000bfefe e960
.org 0xbff00
	ldr r0, [r0, #0]	@ 000bff00 0068
.org 0xbff02
	ldr r0, [r0, #8]	@ 000bff02 8068
.org 0xbff04
	str r0, [r5, #20]	@ 000bff04 6861
.org 0xbff06
	adds r0, r5, #0	@ 000bff06 281c
.org 0xbff08
	bl 0xbff80	@ 000bff08 00f03af8
.org 0xbff0c
	b.n 0xbff70	@ 000bff0c 30e0
.org 0xbff0e
	.byte 0x00	@ 000bff0e data
.org 0xbff0f
	.byte 0x00	@ 000bff0f data
.org 0xbff10
	.byte 0xc4,0xa0,0x12,0x08	@ 000bff10 data
.org 0xbff14
	.byte 0xc6,0xa0,0x12,0x08	@ 000bff14 data
.org 0xbff18
	.byte 0xd0,0xa0,0x12,0x08	@ 000bff18 data
.org 0xbff1c
	.byte 0xd8,0xa0,0x12,0x08	@ 000bff1c data
.org 0xbff20
	.byte 0xfc,0x4f,0x86,0x08	@ 000bff20 data
.org 0xbff24
	.byte 0x03,0x2d,0x00,0x00	@ 000bff24 data
.org 0xbff28
	.byte 0x0c,0x93,0x12,0x08	@ 000bff28 data
.org 0xbff2c
	.byte 0x00,0xfa,0xff,0xff	@ 000bff2c data
.org 0xbff30
	.byte 0xf4,0x49,0x86,0x08	@ 000bff30 data
.org 0xbff34
	ldrb r0, [r5, #18]	@ 000bff34 a87c
.org 0xbff36
	adds r0, #1	@ 000bff36 0130
.org 0xbff38
	strb r0, [r5, #18]	@ 000bff38 a874
.org 0xbff3a
	movs r1, #255	@ 000bff3a ff21
.org 0xbff3c
	ands r0, r1	@ 000bff3c 0840
.org 0xbff3e
	movs r1, #3	@ 000bff3e 0321
.org 0xbff40
	ands r0, r1	@ 000bff40 0840
.org 0xbff42
	cmp r0, #0	@ 000bff42 0028
.org 0xbff44
	bne.n 0xbff70	@ 000bff44 14d1
.org 0xbff46
	lsls r2, r7, #2	@ 000bff46 ba00
.org 0xbff48
	mov r0, sp	@ 000bff48 6846
.org 0xbff4a
	adds r0, r0, r2	@ 000bff4a 8018
.org 0xbff4c
	adds r0, #4	@ 000bff4c 0430
.org 0xbff4e
	movs r3, #0	@ 000bff4e 0023
.org 0xbff50
	ldrsh r1, [r0, r3]	@ 000bff50 c15e
.org 0xbff52
	ldr r0, [r5, #84]	@ 000bff52 686d
.org 0xbff54
	adds r0, r0, r1	@ 000bff54 4018
.org 0xbff56
	str r0, [sp, #24]	@ 000bff56 0690
.org 0xbff58
	mov r0, sp	@ 000bff58 6846
