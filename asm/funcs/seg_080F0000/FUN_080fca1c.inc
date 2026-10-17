@ FUN_080fca1c  entry 0x080fca1c  size 466
.thumb
.org 0xfca1c
FUN_080fca1c:
	push {r4, r5, r6, r7, lr}	@ 000fca1c f0b5
.org 0xfca1e
	sub sp, #8	@ 000fca1e 82b0
.org 0xfca20
	adds r4, r0, #0	@ 000fca20 041c
.org 0xfca22
	ldrb r0, [r4, #13]	@ 000fca22 607b
.org 0xfca24
	cmp r0, #0	@ 000fca24 0028
.org 0xfca26
	bne.n 0xfcae8	@ 000fca26 5fd1
.org 0xfca28
	ldr r0, [r4, #84]	@ 000fca28 606d
.org 0xfca2a
	str r0, [sp, #0]	@ 000fca2a 0090
.org 0xfca2c
	ldr r0, [r4, #88]	@ 000fca2c a06d
.org 0xfca2e
	ldr r1, [pc, #300]	@ 000fca2e 4b49
.org 0xfca30
	adds r0, r0, r1	@ 000fca30 4018
.org 0xfca32
	str r0, [sp, #4]	@ 000fca32 0190
.org 0xfca34
	adds r5, r4, #0	@ 000fca34 251c
.org 0xfca36
	adds r5, #84	@ 000fca36 5435
.org 0xfca38
	ldr r6, [pc, #292]	@ 000fca38 494e
.org 0xfca3a
	ldrb r0, [r4, #10]	@ 000fca3a a07a
.org 0xfca3c
	movs r7, #16	@ 000fca3c 1027
.org 0xfca3e
	adds r3, r7, #0	@ 000fca3e 3b1c
.org 0xfca40
	ands r3, r0	@ 000fca40 0340
.org 0xfca42
	lsls r3, r3, #24	@ 000fca42 1b06
.org 0xfca44
	lsrs r3, r3, #24	@ 000fca44 1b0e
.org 0xfca46
	adds r0, r5, #0	@ 000fca46 281c
.org 0xfca48
	adds r1, r6, #0	@ 000fca48 311c
.org 0xfca4a
	movs r2, #0	@ 000fca4a 0022
.org 0xfca4c
	bl 0xd4c8c	@ 000fca4c d8f71ef9
.org 0xfca50
	adds r2, r6, #0	@ 000fca50 321c
.org 0xfca52
	adds r2, #28	@ 000fca52 1c32
.org 0xfca54
	ldrb r1, [r4, #10]	@ 000fca54 a17a
.org 0xfca56
	adds r0, r7, #0	@ 000fca56 381c
.org 0xfca58
	ands r0, r1	@ 000fca58 0840
.org 0xfca5a
	movs r3, #0	@ 000fca5a 0023
.org 0xfca5c
	cmp r0, #0	@ 000fca5c 0028
.org 0xfca5e
	bne.n 0xfca62	@ 000fca5e 00d1
.org 0xfca60
	movs r3, #16	@ 000fca60 1023
.org 0xfca62
	adds r0, r5, #0	@ 000fca62 281c
.org 0xfca64
	adds r1, r2, #0	@ 000fca64 111c
.org 0xfca66
	movs r2, #0	@ 000fca66 0022
.org 0xfca68
	bl 0xd4c8c	@ 000fca68 d8f710f9
.org 0xfca6c
	adds r1, r6, #0	@ 000fca6c 311c
.org 0xfca6e
	adds r1, #56	@ 000fca6e 3831
.org 0xfca70
	ldrb r0, [r4, #10]	@ 000fca70 a07a
.org 0xfca72
	adds r3, r7, #0	@ 000fca72 3b1c
.org 0xfca74
	ands r3, r0	@ 000fca74 0340
.org 0xfca76
	lsls r3, r3, #24	@ 000fca76 1b06
.org 0xfca78
	lsrs r3, r3, #24	@ 000fca78 1b0e
.org 0xfca7a
	adds r0, r5, #0	@ 000fca7a 281c
.org 0xfca7c
	movs r2, #0	@ 000fca7c 0022
.org 0xfca7e
	bl 0xd4c8c	@ 000fca7e d8f705f9
.org 0xfca82
	adds r1, r6, #0	@ 000fca82 311c
.org 0xfca84
	adds r1, #84	@ 000fca84 5431
.org 0xfca86
	ldrb r0, [r4, #10]	@ 000fca86 a07a
.org 0xfca88
	adds r3, r7, #0	@ 000fca88 3b1c
.org 0xfca8a
	ands r3, r0	@ 000fca8a 0340
.org 0xfca8c
	lsls r3, r3, #24	@ 000fca8c 1b06
.org 0xfca8e
	lsrs r3, r3, #24	@ 000fca8e 1b0e
.org 0xfca90
	adds r0, r5, #0	@ 000fca90 281c
.org 0xfca92
	movs r2, #0	@ 000fca92 0022
.org 0xfca94
	bl 0xd4c8c	@ 000fca94 d8f7faf8
.org 0xfca98
	movs r0, #1	@ 000fca98 0120
.org 0xfca9a
	mov r1, sp	@ 000fca9a 6946
.org 0xfca9c
	bl 0xd0c88	@ 000fca9c d4f7f4f8
.org 0xfcaa0
	movs r0, #166	@ 000fcaa0 a620
.org 0xfcaa2
	bl 0x2b10	@ 000fcaa2 06f735f8
.org 0xfcaa6
	adds r0, r4, #0	@ 000fcaa6 201c
.org 0xfcaa8
	adds r0, #189	@ 000fcaa8 bd30
.org 0xfcaaa
	ldrb r0, [r0, #0]	@ 000fcaaa 0078
.org 0xfcaac
	cmp r0, #0	@ 000fcaac 0028
.org 0xfcaae
	beq.n 0xfcab2	@ 000fcaae 00d0
.org 0xfcab0
	movs r0, #1	@ 000fcab0 0120
.org 0xfcab2
	strb r0, [r4, #14]	@ 000fcab2 a073
.org 0xfcab4
	ldr r2, [pc, #172]	@ 000fcab4 2b4a
.org 0xfcab6
	ldr r1, [r2, #0]	@ 000fcab6 1168
.org 0xfcab8
	ldr r0, [pc, #172]	@ 000fcab8 2b48
.org 0xfcaba
	muls r0, r1	@ 000fcaba 4843
.org 0xfcabc
	ldr r5, [pc, #172]	@ 000fcabc 2b4d
.org 0xfcabe
	adds r0, r0, r5	@ 000fcabe 4019
.org 0xfcac0
	lsls r0, r0, #1	@ 000fcac0 4000
.org 0xfcac2
	lsrs r1, r0, #1	@ 000fcac2 4108
.org 0xfcac4
	str r1, [r2, #0]	@ 000fcac4 1160
.org 0xfcac6
	lsrs r0, r0, #17	@ 000fcac6 400c
.org 0xfcac8
	movs r1, #1	@ 000fcac8 0121
.org 0xfcaca
	ands r0, r1	@ 000fcaca 0840
.org 0xfcacc
	strb r0, [r4, #15]	@ 000fcacc e073
.org 0xfcace
	movs r0, #16	@ 000fcace 1020
.org 0xfcad0
	strb r0, [r4, #18]	@ 000fcad0 a074
.org 0xfcad2
	ldrb r1, [r4, #11]	@ 000fcad2 e17a
.org 0xfcad4
	movs r0, #247	@ 000fcad4 f720
.org 0xfcad6
	ands r0, r1	@ 000fcad6 0840
.org 0xfcad8
	strb r0, [r4, #11]	@ 000fcad8 e072
.org 0xfcada
	ldrb r1, [r4, #10]	@ 000fcada a17a
.org 0xfcadc
	movs r0, #254	@ 000fcadc fe20
.org 0xfcade
	ands r0, r1	@ 000fcade 0840
.org 0xfcae0
	strb r0, [r4, #10]	@ 000fcae0 a072
.org 0xfcae2
	ldrb r0, [r4, #13]	@ 000fcae2 607b
.org 0xfcae4
	adds r0, #1	@ 000fcae4 0130
.org 0xfcae6
	strb r0, [r4, #13]	@ 000fcae6 6073
.org 0xfcae8
	adds r0, r4, #0	@ 000fcae8 201c
.org 0xfcaea
	bl 0x1cff0	@ 000fcaea 20f781fa
.org 0xfcaee
	ldrb r0, [r4, #14]	@ 000fcaee a07b
.org 0xfcaf0
	cmp r0, #0	@ 000fcaf0 0028
.org 0xfcaf2
	bne.n 0xfcbec	@ 000fcaf2 7bd1
.org 0xfcaf4
	ldrb r1, [r4, #18]	@ 000fcaf4 a17c
.org 0xfcaf6
	movs r0, #1	@ 000fcaf6 0120
.org 0xfcaf8
	ands r0, r1	@ 000fcaf8 0840
.org 0xfcafa
	cmp r0, #0	@ 000fcafa 0028
.org 0xfcafc
	bne.n 0xfcbc2	@ 000fcafc 61d1
.org 0xfcafe
	ldr r2, [r4, #84]	@ 000fcafe 626d
.org 0xfcb00
	str r2, [sp, #0]	@ 000fcb00 0092
.org 0xfcb02
	ldr r0, [r4, #88]	@ 000fcb02 a06d
.org 0xfcb04
	ldr r1, [pc, #84]	@ 000fcb04 1549
.org 0xfcb06
	adds r0, r0, r1	@ 000fcb06 4018
.org 0xfcb08
	str r0, [sp, #4]	@ 000fcb08 0190
.org 0xfcb0a
	ldrb r0, [r4, #15]	@ 000fcb0a e07b
.org 0xfcb0c
	cmp r0, #0	@ 000fcb0c 0028
.org 0xfcb0e
	beq.n 0xfcb74	@ 000fcb0e 31d0
.org 0xfcb10
	ldr r3, [pc, #92]	@ 000fcb10 174b
.org 0xfcb12
	ldrb r1, [r4, #18]	@ 000fcb12 a17c
.org 0xfcb14
	lsls r0, r1, #3	@ 000fcb14 c800
.org 0xfcb16
	adds r0, r0, r1	@ 000fcb16 4018
.org 0xfcb18
	lsls r0, r0, #26	@ 000fcb18 8006
.org 0xfcb1a
	movs r5, #128	@ 000fcb1a 8025
.org 0xfcb1c
	lsls r5, r5, #23	@ 000fcb1c ed05
.org 0xfcb1e
	adds r0, r0, r5	@ 000fcb1e 4019
.org 0xfcb20
	lsrs r0, r0, #23	@ 000fcb20 c00d
.org 0xfcb22
	adds r0, r0, r3	@ 000fcb22 c018
.org 0xfcb24
	movs r5, #0	@ 000fcb24 0025
.org 0xfcb26
	ldrsh r1, [r0, r5]	@ 000fcb26 415f
.org 0xfcb28
	lsls r1, r1, #1	@ 000fcb28 4900
.org 0xfcb2a
	adds r1, r2, r1	@ 000fcb2a 5118
.org 0xfcb2c
	str r1, [sp, #0]	@ 000fcb2c 0091
.org 0xfcb2e
	ldrb r2, [r4, #18]	@ 000fcb2e a27c
.org 0xfcb30
	lsls r0, r2, #3	@ 000fcb30 d000
.org 0xfcb32
	adds r0, r0, r2	@ 000fcb32 8018
.org 0xfcb34
	lsls r0, r0, #26	@ 000fcb34 8006
.org 0xfcb36
	lsrs r0, r0, #23	@ 000fcb36 c00d
.org 0xfcb38
	adds r0, r0, r3	@ 000fcb38 c018
.org 0xfcb3a
	movs r2, #0	@ 000fcb3a 0022
.org 0xfcb3c
	ldrsh r0, [r0, r2]	@ 000fcb3c 805e
.org 0xfcb3e
	lsls r0, r0, #1	@ 000fcb3e 4000
.org 0xfcb40
	adds r1, r1, r0	@ 000fcb40 0918
.org 0xfcb42
	str r1, [sp, #0]	@ 000fcb42 0091
.org 0xfcb44
	ldrb r0, [r4, #18]	@ 000fcb44 a07c
.org 0xfcb46
	lsls r1, r0, #3	@ 000fcb46 c100
.org 0xfcb48
	adds r1, r1, r0	@ 000fcb48 0918
.org 0xfcb4a
	lsls r1, r1, #26	@ 000fcb4a 8906
.org 0xfcb4c
	lsrs r1, r1, #24	@ 000fcb4c 090e
.org 0xfcb4e
	movs r2, #128	@ 000fcb4e 8022
.org 0xfcb50
	lsls r2, r2, #2	@ 000fcb50 9200
.org 0xfcb52
	mov r0, sp	@ 000fcb52 6846
.org 0xfcb54
	bl 0xe1b14	@ 000fcb54 e4f7deff
.org 0xfcb58
	b.n 0xfcbc2	@ 000fcb58 33e0
.org 0xfcb5a
	.byte 0x00	@ 000fcb5a data
.org 0xfcb5b
	.byte 0x00	@ 000fcb5b data
.org 0xfcb5c
	.byte 0x00,0xf0,0xff,0xff	@ 000fcb5c data
.org 0xfcb60
	.byte 0x9c,0xae,0x86,0x08	@ 000fcb60 data
.org 0xfcb64
	.byte 0x38,0xdc,0x02,0x02	@ 000fcb64 data
.org 0xfcb68
	.byte 0xfd,0x43,0x03,0x00	@ 000fcb68 data
.org 0xfcb6c
	.byte 0xc3,0x9e,0x26,0x00	@ 000fcb6c data
.org 0xfcb70
	.byte 0x0c,0x93,0x12,0x08	@ 000fcb70 data
.org 0xfcb74
	ldr r3, [pc, #112]	@ 000fcb74 1c4b
.org 0xfcb76
	ldrb r0, [r4, #18]	@ 000fcb76 a07c
.org 0xfcb78
	lsls r1, r0, #3	@ 000fcb78 c100
.org 0xfcb7a
	adds r1, r1, r0	@ 000fcb7a 0918
.org 0xfcb7c
	lsls r1, r1, #2	@ 000fcb7c 8900
.org 0xfcb7e
	movs r0, #64	@ 000fcb7e 4020
.org 0xfcb80
	subs r0, r0, r1	@ 000fcb80 401a
.org 0xfcb82
	lsls r0, r0, #24	@ 000fcb82 0006
.org 0xfcb84
	lsrs r0, r0, #23	@ 000fcb84 c00d
.org 0xfcb86
	adds r0, r0, r3	@ 000fcb86 c018
.org 0xfcb88
	movs r5, #0	@ 000fcb88 0025
.org 0xfcb8a
	ldrsh r1, [r0, r5]	@ 000fcb8a 415f
.org 0xfcb8c
	lsls r1, r1, #1	@ 000fcb8c 4900
.org 0xfcb8e
	adds r1, r2, r1	@ 000fcb8e 5118
.org 0xfcb90
	str r1, [sp, #0]	@ 000fcb90 0091
.org 0xfcb92
	ldrb r2, [r4, #18]	@ 000fcb92 a27c
.org 0xfcb94
	lsls r0, r2, #3	@ 000fcb94 d000
.org 0xfcb96
	adds r0, r0, r2	@ 000fcb96 8018
.org 0xfcb98
	lsls r0, r0, #26	@ 000fcb98 8006
.org 0xfcb9a
	negs r0, r0	@ 000fcb9a 4042
.org 0xfcb9c
	lsrs r0, r0, #24	@ 000fcb9c 000e
.org 0xfcb9e
	lsls r0, r0, #1	@ 000fcb9e 4000
.org 0xfcba0
	adds r0, r0, r3	@ 000fcba0 c018
.org 0xfcba2
	movs r2, #0	@ 000fcba2 0022
.org 0xfcba4
	ldrsh r0, [r0, r2]	@ 000fcba4 805e
.org 0xfcba6
	lsls r0, r0, #1	@ 000fcba6 4000
.org 0xfcba8
	adds r1, r1, r0	@ 000fcba8 0918
.org 0xfcbaa
	str r1, [sp, #0]	@ 000fcbaa 0091
.org 0xfcbac
	ldrb r0, [r4, #18]	@ 000fcbac a07c
.org 0xfcbae
	lsls r1, r0, #3	@ 000fcbae c100
.org 0xfcbb0
	adds r1, r1, r0	@ 000fcbb0 0918
.org 0xfcbb2
	lsls r1, r1, #26	@ 000fcbb2 8906
.org 0xfcbb4
	negs r1, r1	@ 000fcbb4 4942
.org 0xfcbb6
	lsrs r1, r1, #24	@ 000fcbb6 090e
.org 0xfcbb8
	movs r2, #128	@ 000fcbb8 8022
.org 0xfcbba
	lsls r2, r2, #2	@ 000fcbba 9200
.org 0xfcbbc
	mov r0, sp	@ 000fcbbc 6846
.org 0xfcbbe
	bl 0xe1b14	@ 000fcbbe e4f7a9ff
.org 0xfcbc2
	ldrb r1, [r4, #18]	@ 000fcbc2 a17c
.org 0xfcbc4
	movs r0, #7	@ 000fcbc4 0720
.org 0xfcbc6
	ands r0, r1	@ 000fcbc6 0840
.org 0xfcbc8
	cmp r0, #0	@ 000fcbc8 0028
.org 0xfcbca
	bne.n 0xfcbd2	@ 000fcbca 02d1
.org 0xfcbcc
	movs r0, #166	@ 000fcbcc a620
.org 0xfcbce
	bl 0x2b10	@ 000fcbce 05f79fff
.org 0xfcbd2
	ldrb r0, [r4, #18]	@ 000fcbd2 a07c
.org 0xfcbd4
	subs r0, #1	@ 000fcbd4 0138
.org 0xfcbd6
	strb r0, [r4, #18]	@ 000fcbd6 a074
.org 0xfcbd8
	lsls r0, r0, #24	@ 000fcbd8 0006
.org 0xfcbda
	lsrs r0, r0, #24	@ 000fcbda 000e
.org 0xfcbdc
	cmp r0, #255	@ 000fcbdc ff28
.org 0xfcbde
	bne.n 0xfcc04	@ 000fcbde 11d1
.org 0xfcbe0
	ldrb r0, [r4, #14]	@ 000fcbe0 a07b
.org 0xfcbe2
	adds r0, #1	@ 000fcbe2 0130
.org 0xfcbe4
	strb r0, [r4, #14]	@ 000fcbe4 a073
.org 0xfcbe6
	b.n 0xfcc04	@ 000fcbe6 0de0
.org 0xfcbe8
	.byte 0x0c,0x93,0x12,0x08	@ 000fcbe8 data
.org 0xfcbec
	movs r0, #53	@ 000fcbec 3520
