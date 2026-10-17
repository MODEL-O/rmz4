@ FUN_0809aa9c  entry 0x0809aa9c  size 320
.thumb
.org 0x9aa9c
FUN_0809aa9c:
	push {r4, r5, r6, lr}	@ 0009aa9c 70b5
.org 0x9aa9e
	adds r5, r0, #0	@ 0009aa9e 051c
.org 0x9aaa0
	ldr r6, [r5, #40]	@ 0009aaa0 ae6a
.org 0x9aaa2
	adds r0, #140	@ 0009aaa2 8c30
.org 0x9aaa4
	ldr r1, [r0, #0]	@ 0009aaa4 0168
.org 0x9aaa6
	movs r0, #4	@ 0009aaa6 0420
.org 0x9aaa8
	ands r0, r1	@ 0009aaa8 0840
.org 0x9aaaa
	cmp r0, #0	@ 0009aaaa 0028
.org 0x9aaac
	beq.n 0x9aab0	@ 0009aaac 00d0
.org 0x9aaae
	b.n 0x9abcc	@ 0009aaae 8de0
.org 0x9aab0
	ldrb r0, [r6, #12]	@ 0009aab0 307b
.org 0x9aab2
	cmp r0, #1	@ 0009aab2 0128
.org 0x9aab4
	bls.n 0x9aab8	@ 0009aab4 00d9
.org 0x9aab6
	b.n 0x9abcc	@ 0009aab6 89e0
.org 0x9aab8
	ldrb r0, [r5, #13]	@ 0009aab8 687b
.org 0x9aaba
	cmp r0, #0	@ 0009aaba 0028
.org 0x9aabc
	bne.n 0x9ab74	@ 0009aabc 5ad1
.org 0x9aabe
	ldrb r1, [r6, #10]	@ 0009aabe b17a
.org 0x9aac0
	movs r0, #16	@ 0009aac0 1020
.org 0x9aac2
	ands r0, r1	@ 0009aac2 0840
.org 0x9aac4
	cmp r0, #0	@ 0009aac4 0028
.org 0x9aac6
	beq.n 0x9aae0	@ 0009aac6 0bd0
.org 0x9aac8
	ldr r2, [pc, #16]	@ 0009aac8 044a
.org 0x9aaca
	ldrb r1, [r5, #17]	@ 0009aaca 697c
.org 0x9aacc
	movs r0, #7	@ 0009aacc 0720
.org 0x9aace
	ands r0, r1	@ 0009aace 0840
.org 0x9aad0
	lsls r0, r0, #2	@ 0009aad0 8000
.org 0x9aad2
	adds r0, r0, r2	@ 0009aad2 8018
.org 0x9aad4
	ldr r1, [r6, #84]	@ 0009aad4 716d
.org 0x9aad6
	ldr r0, [r0, #0]	@ 0009aad6 0068
.org 0x9aad8
	subs r1, r1, r0	@ 0009aad8 091a
.org 0x9aada
	b.n 0x9aaf2	@ 0009aada 0ae0
.org 0x9aadc
	.byte 0xe4,0x0f,0x86,0x08	@ 0009aadc data
.org 0x9aae0
	ldr r2, [pc, #128]	@ 0009aae0 204a
.org 0x9aae2
	ldrb r1, [r5, #17]	@ 0009aae2 697c
.org 0x9aae4
	movs r0, #7	@ 0009aae4 0720
.org 0x9aae6
	ands r0, r1	@ 0009aae6 0840
.org 0x9aae8
	lsls r0, r0, #2	@ 0009aae8 8000
.org 0x9aaea
	adds r0, r0, r2	@ 0009aaea 8018
.org 0x9aaec
	ldr r1, [r6, #84]	@ 0009aaec 716d
.org 0x9aaee
	ldr r0, [r0, #0]	@ 0009aaee 0068
.org 0x9aaf0
	adds r1, r1, r0	@ 0009aaf0 0918
.org 0x9aaf2
	str r1, [r5, #84]	@ 0009aaf2 6965
.org 0x9aaf4
	ldr r0, [r6, #88]	@ 0009aaf4 b06d
.org 0x9aaf6
	ldr r1, [pc, #112]	@ 0009aaf6 1c49
.org 0x9aaf8
	adds r0, r0, r1	@ 0009aaf8 4018
.org 0x9aafa
	str r0, [r5, #88]	@ 0009aafa a865
.org 0x9aafc
	ldrb r0, [r5, #19]	@ 0009aafc e87c
.org 0x9aafe
	subs r0, #1	@ 0009aafe 0138
.org 0x9ab00
	strb r0, [r5, #19]	@ 0009ab00 e874
.org 0x9ab02
	lsls r0, r0, #24	@ 0009ab02 0006
.org 0x9ab04
	lsrs r0, r0, #24	@ 0009ab04 000e
.org 0x9ab06
	cmp r0, #255	@ 0009ab06 ff28
.org 0x9ab08
	bne.n 0x9ab9a	@ 0009ab08 47d1
.org 0x9ab0a
	ldrb r0, [r5, #10]	@ 0009ab0a a87a
.org 0x9ab0c
	movs r1, #4	@ 0009ab0c 0421
.org 0x9ab0e
	orrs r0, r1	@ 0009ab0e 0843
.org 0x9ab10
	strb r0, [r5, #10]	@ 0009ab10 a872
.org 0x9ab12
	adds r4, r5, #0	@ 0009ab12 2c1c
.org 0x9ab14
	adds r4, #116	@ 0009ab14 7434
.org 0x9ab16
	ldr r1, [pc, #84]	@ 0009ab16 1549
.org 0x9ab18
	adds r2, r5, #0	@ 0009ab18 2a1c
.org 0x9ab1a
	adds r2, #84	@ 0009ab1a 5432
.org 0x9ab1c
	adds r0, r4, #0	@ 0009ab1c 201c
.org 0x9ab1e
	movs r3, #8	@ 0009ab1e 0823
.org 0x9ab20
	bl 0x5760	@ 0009ab20 6af71efe
.org 0x9ab24
	str r5, [r4, #44]	@ 0009ab24 e562
.org 0x9ab26
	movs r0, #0	@ 0009ab26 0020
.org 0x9ab28
	str r0, [r4, #36]	@ 0009ab28 6062
.org 0x9ab2a
	ldrb r2, [r5, #17]	@ 0009ab2a 6a7c
.org 0x9ab2c
	cmp r2, #15	@ 0009ab2c 0f2a
.org 0x9ab2e
	bhi.n 0x9ab3e	@ 0009ab2e 06d8
.org 0x9ab30
	adds r2, #8	@ 0009ab30 0832
.org 0x9ab32
	lsls r2, r2, #24	@ 0009ab32 1206
.org 0x9ab34
	lsrs r2, r2, #24	@ 0009ab34 120e
.org 0x9ab36
	adds r0, r6, #0	@ 0009ab36 301c
.org 0x9ab38
	movs r1, #5	@ 0009ab38 0521
.org 0x9ab3a
	bl 0x99f0c	@ 0009ab3a fff7e7f9
.org 0x9ab3e
	ldr r1, [pc, #48]	@ 0009ab3e 0c49
.org 0x9ab40
	adds r0, r5, #0	@ 0009ab40 281c
.org 0x9ab42
	bl 0x1cf00	@ 0009ab42 82f7ddf9
.org 0x9ab46
	ldrb r0, [r5, #17]	@ 0009ab46 687c
.org 0x9ab48
	cmp r0, #0	@ 0009ab48 0028
.org 0x9ab4a
	bne.n 0x9ab54	@ 0009ab4a 03d1
.org 0x9ab4c
	movs r0, #144	@ 0009ab4c 9020
.org 0x9ab4e
	lsls r0, r0, #1	@ 0009ab4e 4000
.org 0x9ab50
	bl 0x2b10	@ 0009ab50 67f7deff
.org 0x9ab54
	movs r0, #157	@ 0009ab54 9d20
.org 0x9ab56
	lsls r0, r0, #1	@ 0009ab56 4000
.org 0x9ab58
	bl 0x2b10	@ 0009ab58 67f7daff
.org 0x9ab5c
	ldrb r0, [r5, #13]	@ 0009ab5c 687b
.org 0x9ab5e
	adds r0, #1	@ 0009ab5e 0130
.org 0x9ab60
	strb r0, [r5, #13]	@ 0009ab60 6873
.org 0x9ab62
	b.n 0x9ab9a	@ 0009ab62 1ae0
.org 0x9ab64
	.byte 0xe4,0x0f,0x86,0x08	@ 0009ab64 data
.org 0x9ab68
	.byte 0x00,0xf9,0xff,0xff	@ 0009ab68 data
.org 0x9ab6c
	.byte 0x88,0x0f,0x86,0x08	@ 0009ab6c data
.org 0x9ab70
	.byte 0x01,0x61,0x00,0x00	@ 0009ab70 data
.org 0x9ab74
	movs r0, #128	@ 0009ab74 8020
.org 0x9ab76
	lsls r0, r0, #2	@ 0009ab76 8000
.org 0x9ab78
	ands r1, r0	@ 0009ab78 0140
.org 0x9ab7a
	cmp r1, #0	@ 0009ab7a 0029
.org 0x9ab7c
	bne.n 0x9abcc	@ 0009ab7c 26d1
.org 0x9ab7e
	ldr r0, [r5, #84]	@ 0009ab7e 686d
.org 0x9ab80
	ldr r2, [r5, #92]	@ 0009ab80 ea6d
.org 0x9ab82
	adds r0, r0, r2	@ 0009ab82 8018
.org 0x9ab84
	str r0, [r5, #84]	@ 0009ab84 6865
.org 0x9ab86
	ldr r0, [r5, #88]	@ 0009ab86 a86d
.org 0x9ab88
	ldr r1, [r5, #96]	@ 0009ab88 296e
.org 0x9ab8a
	adds r0, r0, r1	@ 0009ab8a 4018
.org 0x9ab8c
	str r0, [r5, #88]	@ 0009ab8c a865
.org 0x9ab8e
	ldr r0, [r5, #100]	@ 0009ab8e 686e
.org 0x9ab90
	adds r2, r2, r0	@ 0009ab90 1218
.org 0x9ab92
	str r2, [r5, #92]	@ 0009ab92 ea65
.org 0x9ab94
	ldr r0, [r5, #104]	@ 0009ab94 a86e
.org 0x9ab96
	adds r1, r1, r0	@ 0009ab96 0918
.org 0x9ab98
	str r1, [r5, #96]	@ 0009ab98 2966
.org 0x9ab9a
	adds r0, r5, #0	@ 0009ab9a 281c
.org 0x9ab9c
	bl 0x1cff0	@ 0009ab9c 82f728fa
.org 0x9aba0
	ldrb r0, [r5, #13]	@ 0009aba0 687b
.org 0x9aba2
	cmp r0, #0	@ 0009aba2 0028
.org 0x9aba4
	beq.n 0x9abf0	@ 0009aba4 24d0
.org 0x9aba6
	adds r1, r5, #0	@ 0009aba6 291c
.org 0x9aba8
	adds r1, #190	@ 0009aba8 be31
.org 0x9abaa
	ldrh r0, [r1, #0]	@ 0009abaa 0888
.org 0x9abac
	cmp r0, #0	@ 0009abac 0028
.org 0x9abae
	bne.n 0x9abec	@ 0009abae 1dd1
.org 0x9abb0
	ldr r0, [r5, #84]	@ 0009abb0 686d
.org 0x9abb2
	ldr r1, [r5, #88]	@ 0009abb2 a96d
.org 0x9abb4
	bl 0x7020	@ 0009abb4 6cf734fa
.org 0x9abb8
	lsls r0, r0, #16	@ 0009abb8 0004
.org 0x9abba
	cmp r0, #0	@ 0009abba 0028
.org 0x9abbc
	beq.n 0x9abf0	@ 0009abbc 18d0
.org 0x9abbe
	ldr r0, [r5, #84]	@ 0009abbe 686d
.org 0x9abc0
	ldr r1, [r5, #88]	@ 0009abc0 a96d
.org 0x9abc2
	bl 0x8534	@ 0009abc2 6df7b7fc
.org 0x9abc6
	str r0, [r5, #88]	@ 0009abc6 a865
.org 0x9abc8
	movs r0, #1	@ 0009abc8 0120
.org 0x9abca
	strb r0, [r5, #18]	@ 0009abca a874
.org 0x9abcc
	ldr r1, [pc, #24]	@ 0009abcc 0649
.org 0x9abce
	ldrb r0, [r5, #9]	@ 0009abce 687a
.org 0x9abd0
	lsls r0, r0, #2	@ 0009abd0 8000
.org 0x9abd2
	adds r0, r0, r1	@ 0009abd2 4018
.org 0x9abd4
	movs r1, #2	@ 0009abd4 0221
.org 0x9abd6
	str r1, [r5, #12]	@ 0009abd6 e960
.org 0x9abd8
	ldr r0, [r0, #0]	@ 0009abd8 0068
.org 0x9abda
	ldr r0, [r0, #8]	@ 0009abda 8068
