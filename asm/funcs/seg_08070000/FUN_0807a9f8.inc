@ FUN_0807a9f8  entry 0x0807a9f8  size 488
.thumb
.org 0x7a9f8
FUN_0807a9f8:
	push {r4, r5, r6, lr}	@ 0007a9f8 70b5
.org 0x7a9fa
	adds r5, r0, #0	@ 0007a9fa 051c
.org 0x7a9fc
	ldrb r6, [r5, #14]	@ 0007a9fc ae7b
.org 0x7a9fe
	cmp r6, #0	@ 0007a9fe 002e
.org 0x7aa00
	bne.n 0x7aa52	@ 0007aa00 27d1
.org 0x7aa02
	ldr r1, [pc, #104]	@ 0007aa02 1a49
.org 0x7aa04
	bl 0x1cf00	@ 0007aa04 a2f77cfa
.org 0x7aa08
	ldr r0, [pc, #100]	@ 0007aa08 1948
.org 0x7aa0a
	ldr r1, [pc, #104]	@ 0007aa0a 1a49
.org 0x7aa0c
	movs r4, #214	@ 0007aa0c d624
.org 0x7aa0e
	lsls r4, r4, #1	@ 0007aa0e 6400
.org 0x7aa10
	adds r1, r1, r4	@ 0007aa10 0919
.org 0x7aa12
	ldrh r1, [r1, #0]	@ 0007aa12 0988
.org 0x7aa14
	ldrh r2, [r0, #6]	@ 0007aa14 c288
.org 0x7aa16
	lsrs r2, r2, #6	@ 0007aa16 9209
.org 0x7aa18
	subs r1, r1, r2	@ 0007aa18 891a
.org 0x7aa1a
	lsls r1, r1, #5	@ 0007aa1a 4901
.org 0x7aa1c
	movs r2, #128	@ 0007aa1c 8022
.org 0x7aa1e
	lsls r2, r2, #9	@ 0007aa1e 5202
.org 0x7aa20
	adds r1, r1, r2	@ 0007aa20 8918
.org 0x7aa22
	bl 0x1d30	@ 0007aa22 87f785f9
.org 0x7aa26
	ldr r0, [pc, #80]	@ 0007aa26 1448
.org 0x7aa28
	ldr r1, [pc, #80]	@ 0007aa28 1449
.org 0x7aa2a
	adds r1, r1, r4	@ 0007aa2a 0919
.org 0x7aa2c
	ldrh r1, [r1, #0]	@ 0007aa2c 0988
.org 0x7aa2e
	ldrb r2, [r0, #7]	@ 0007aa2e c279
.org 0x7aa30
	subs r1, r1, r2	@ 0007aa30 891a
.org 0x7aa32
	lsls r1, r1, #5	@ 0007aa32 4901
.org 0x7aa34
	movs r2, #128	@ 0007aa34 8022
.org 0x7aa36
	lsls r2, r2, #2	@ 0007aa36 9200
.org 0x7aa38
	adds r1, r1, r2	@ 0007aa38 8918
.org 0x7aa3a
	bl 0x2208	@ 0007aa3a 87f7e5fb
.org 0x7aa3e
	movs r0, #212	@ 0007aa3e d420
.org 0x7aa40
	lsls r0, r0, #1	@ 0007aa40 4000
.org 0x7aa42
	bl 0x2b10	@ 0007aa42 88f765f8
.org 0x7aa46
	movs r0, #127	@ 0007aa46 7f20
.org 0x7aa48
	strb r0, [r5, #18]	@ 0007aa48 a874
.org 0x7aa4a
	strb r6, [r5, #15]	@ 0007aa4a ee73
.org 0x7aa4c
	ldrb r0, [r5, #14]	@ 0007aa4c a87b
.org 0x7aa4e
	adds r0, #1	@ 0007aa4e 0130
.org 0x7aa50
	strb r0, [r5, #14]	@ 0007aa50 a873
.org 0x7aa52
	adds r0, r5, #0	@ 0007aa52 281c
.org 0x7aa54
	bl 0x1cff0	@ 0007aa54 a2f7ccfa
.org 0x7aa58
	ldrb r2, [r5, #15]	@ 0007aa58 ea7b
.org 0x7aa5a
	cmp r2, #1	@ 0007aa5a 012a
.org 0x7aa5c
	bne.n 0x7aa60	@ 0007aa5c 00d1
.org 0x7aa5e
	b.n 0x7abc4	@ 0007aa5e b1e0
.org 0x7aa60
	cmp r2, #1	@ 0007aa60 012a
.org 0x7aa62
	bgt.n 0x7aa80	@ 0007aa62 0ddc
.org 0x7aa64
	cmp r2, #0	@ 0007aa64 002a
.org 0x7aa66
	beq.n 0x7aa8e	@ 0007aa66 12d0
.org 0x7aa68
	b.n 0x7ac22	@ 0007aa68 dbe0
.org 0x7aa6a
	.byte 0x00	@ 0007aa6a data
.org 0x7aa6b
	.byte 0x00	@ 0007aa6b data
.org 0x7aa6c
	.byte 0x02,0xb1,0x00,0x00	@ 0007aa6c data
.org 0x7aa70
	.byte 0xb8,0x50,0xc4,0x08	@ 0007aa70 data
.org 0x7aa74
	.byte 0x40,0xe0,0x02,0x02	@ 0007aa74 data
.org 0x7aa78
	.byte 0xc4,0x50,0xc4,0x08	@ 0007aa78 data
.org 0x7aa7c
	.byte 0x40,0xde,0x02,0x02	@ 0007aa7c data
.org 0x7aa80
	cmp r2, #2	@ 0007aa80 022a
.org 0x7aa82
	bne.n 0x7aa86	@ 0007aa82 00d1
.org 0x7aa84
	b.n 0x7abf8	@ 0007aa84 b8e0
.org 0x7aa86
	cmp r2, #3	@ 0007aa86 032a
.org 0x7aa88
	bne.n 0x7aa8c	@ 0007aa88 00d1
.org 0x7aa8a
	b.n 0x7ac0e	@ 0007aa8a c0e0
.org 0x7aa8c
	b.n 0x7ac22	@ 0007aa8c c9e0
.org 0x7aa8e
	ldrb r0, [r5, #18]	@ 0007aa8e a87c
.org 0x7aa90
	cmp r0, #35	@ 0007aa90 2328
.org 0x7aa92
	bls.n 0x7ab44	@ 0007aa92 57d9
.org 0x7aa94
	ldr r0, [pc, #92]	@ 0007aa94 1748
.org 0x7aa96
	ldrh r1, [r0, #8]	@ 0007aa96 0189
.org 0x7aa98
	movs r0, #8	@ 0007aa98 0820
.org 0x7aa9a
	ands r0, r1	@ 0007aa9a 0840
.org 0x7aa9c
	cmp r0, #0	@ 0007aa9c 0028
.org 0x7aa9e
	bne.n 0x7aac0	@ 0007aa9e 0fd1
.org 0x7aaa0
	ldr r0, [pc, #84]	@ 0007aaa0 1548
.org 0x7aaa2
	ldr r2, [r0, #0]	@ 0007aaa2 0268
.org 0x7aaa4
	ldr r0, [r5, #84]	@ 0007aaa4 686d
.org 0x7aaa6
	ldr r1, [pc, #84]	@ 0007aaa6 1549
.org 0x7aaa8
	adds r0, r0, r1	@ 0007aaa8 4018
.org 0x7aaaa
	ldr r1, [r2, #84]	@ 0007aaaa 516d
.org 0x7aaac
	cmp r1, r0	@ 0007aaac 8142
.org 0x7aaae
	bge.n 0x7aac0	@ 0007aaae 07da
.org 0x7aab0
	movs r0, #222	@ 0007aab0 de20
.org 0x7aab2
	lsls r0, r0, #1	@ 0007aab2 4000
.org 0x7aab4
	adds r1, r2, r0	@ 0007aab4 1118
.org 0x7aab6
	ldr r0, [r1, #0]	@ 0007aab6 0868
.org 0x7aab8
	movs r2, #128	@ 0007aab8 8022
.org 0x7aaba
	lsls r2, r2, #1	@ 0007aaba 5200
.org 0x7aabc
	adds r0, r0, r2	@ 0007aabc 8018
.org 0x7aabe
	str r0, [r1, #0]	@ 0007aabe 0860
.org 0x7aac0
	ldrb r1, [r5, #18]	@ 0007aac0 a97c
.org 0x7aac2
	movs r0, #3	@ 0007aac2 0320
.org 0x7aac4
	ands r0, r1	@ 0007aac4 0840
.org 0x7aac6
	cmp r0, #0	@ 0007aac6 0028
.org 0x7aac8
	bne.n 0x7ab4c	@ 0007aac8 40d1
.org 0x7aaca
	lsrs r0, r1, #2	@ 0007aaca 8808
.org 0x7aacc
	movs r1, #1	@ 0007aacc 0121
.org 0x7aace
	ands r0, r1	@ 0007aace 0840
.org 0x7aad0
	cmp r0, #0	@ 0007aad0 0028
.org 0x7aad2
	beq.n 0x7ab0c	@ 0007aad2 1bd0
.org 0x7aad4
	ldr r2, [pc, #40]	@ 0007aad4 0a4a
.org 0x7aad6
	ldr r1, [r2, #0]	@ 0007aad6 1168
.org 0x7aad8
	ldr r0, [pc, #40]	@ 0007aad8 0a48
.org 0x7aada
	muls r0, r1	@ 0007aada 4843
.org 0x7aadc
	ldr r1, [pc, #40]	@ 0007aadc 0a49
.org 0x7aade
	adds r0, r0, r1	@ 0007aade 4018
.org 0x7aae0
	lsls r0, r0, #1	@ 0007aae0 4000
.org 0x7aae2
	lsrs r1, r0, #1	@ 0007aae2 4108
.org 0x7aae4
	str r1, [r2, #0]	@ 0007aae4 1160
.org 0x7aae6
	lsrs r0, r0, #17	@ 0007aae6 400c
.org 0x7aae8
	movs r1, #48	@ 0007aae8 3021
.org 0x7aaea
	bl 0x129198	@ 0007aaea aef055fb
.org 0x7aaee
	adds r2, r0, #0	@ 0007aaee 021c
.org 0x7aaf0
	adds r2, #128	@ 0007aaf0 8032
.org 0x7aaf2
	b.n 0x7ab2a	@ 0007aaf2 1ae0
.org 0x7aaf4
	.byte 0x10,0xe9,0x02,0x02	@ 0007aaf4 data
.org 0x7aaf8
	.byte 0xf0,0xdb,0x02,0x02	@ 0007aaf8 data
.org 0x7aafc
	.byte 0x00,0xe0,0xff,0xff	@ 0007aafc data
.org 0x7ab00
	.byte 0x38,0xdc,0x02,0x02	@ 0007ab00 data
.org 0x7ab04
	.byte 0xfd,0x43,0x03,0x00	@ 0007ab04 data
.org 0x7ab08
	.byte 0xc3,0x9e,0x26,0x00	@ 0007ab08 data
.org 0x7ab0c
	ldr r2, [pc, #40]	@ 0007ab0c 0a4a
.org 0x7ab0e
	ldr r1, [r2, #0]	@ 0007ab0e 1168
.org 0x7ab10
	ldr r0, [pc, #40]	@ 0007ab10 0a48
.org 0x7ab12
	muls r0, r1	@ 0007ab12 4843
.org 0x7ab14
	ldr r1, [pc, #40]	@ 0007ab14 0a49
.org 0x7ab16
	adds r0, r0, r1	@ 0007ab16 4018
.org 0x7ab18
	lsls r0, r0, #1	@ 0007ab18 4000
.org 0x7ab1a
	lsrs r1, r0, #1	@ 0007ab1a 4108
.org 0x7ab1c
	str r1, [r2, #0]	@ 0007ab1c 1160
.org 0x7ab1e
	lsrs r0, r0, #17	@ 0007ab1e 400c
.org 0x7ab20
	movs r1, #48	@ 0007ab20 3021
.org 0x7ab22
	bl 0x129198	@ 0007ab22 aef039fb
.org 0x7ab26
	movs r2, #128	@ 0007ab26 8022
.org 0x7ab28
	subs r2, r2, r0	@ 0007ab28 121a
.org 0x7ab2a
	lsls r2, r2, #24	@ 0007ab2a 1206
.org 0x7ab2c
	lsrs r2, r2, #24	@ 0007ab2c 120e
.org 0x7ab2e
	adds r0, r5, #0	@ 0007ab2e 281c
.org 0x7ab30
	movs r1, #1	@ 0007ab30 0121
.org 0x7ab32
	bl 0xe4210	@ 0007ab32 69f06dfb
.org 0x7ab36
	b.n 0x7ab4c	@ 0007ab36 09e0
.org 0x7ab38
	.byte 0x38,0xdc,0x02,0x02	@ 0007ab38 data
.org 0x7ab3c
	.byte 0xfd,0x43,0x03,0x00	@ 0007ab3c data
.org 0x7ab40
	.byte 0xc3,0x9e,0x26,0x00	@ 0007ab40 data
.org 0x7ab44
	adds r1, r5, #0	@ 0007ab44 291c
.org 0x7ab46
	adds r1, #214	@ 0007ab46 d631
.org 0x7ab48
	movs r0, #1	@ 0007ab48 0120
.org 0x7ab4a
	strb r0, [r1, #0]	@ 0007ab4a 0870
.org 0x7ab4c
	ldrb r0, [r5, #18]	@ 0007ab4c a87c
.org 0x7ab4e
	subs r0, #1	@ 0007ab4e 0138
.org 0x7ab50
	strb r0, [r5, #18]	@ 0007ab50 a874
.org 0x7ab52
	lsls r0, r0, #24	@ 0007ab52 0006
.org 0x7ab54
	lsrs r0, r0, #24	@ 0007ab54 000e
.org 0x7ab56
	cmp r0, #255	@ 0007ab56 ff28
.org 0x7ab58
	bne.n 0x7ac22	@ 0007ab58 63d1
.org 0x7ab5a
	ldr r1, [pc, #96]	@ 0007ab5a 1849
.org 0x7ab5c
	adds r0, r5, #0	@ 0007ab5c 281c
.org 0x7ab5e
	bl 0x1cf00	@ 0007ab5e a2f7cff9
.org 0x7ab62
	adds r0, r5, #0	@ 0007ab62 281c
.org 0x7ab64
	bl 0x1cff0	@ 0007ab64 a2f744fa
.org 0x7ab68
	ldr r0, [pc, #84]	@ 0007ab68 1548
.org 0x7ab6a
	bl 0x2b10	@ 0007ab6a 87f7d1ff
.org 0x7ab6e
	adds r0, r5, #0	@ 0007ab6e 281c
.org 0x7ab70
	movs r1, #0	@ 0007ab70 0021
.org 0x7ab72
	movs r2, #0	@ 0007ab72 0022
.org 0x7ab74
	bl 0xcd6d0	@ 0007ab74 52f0acfd
.org 0x7ab78
	adds r0, r5, #0	@ 0007ab78 281c
.org 0x7ab7a
	movs r1, #1	@ 0007ab7a 0121
.org 0x7ab7c
	movs r2, #0	@ 0007ab7c 0022
.org 0x7ab7e
	bl 0xcd6d0	@ 0007ab7e 52f0a7fd
.org 0x7ab82
	adds r0, r5, #0	@ 0007ab82 281c
.org 0x7ab84
	movs r1, #2	@ 0007ab84 0221
.org 0x7ab86
	movs r2, #0	@ 0007ab86 0022
.org 0x7ab88
	bl 0xcd6d0	@ 0007ab88 52f0a2fd
.org 0x7ab8c
	adds r0, r5, #0	@ 0007ab8c 281c
.org 0x7ab8e
	movs r1, #3	@ 0007ab8e 0321
.org 0x7ab90
	movs r2, #0	@ 0007ab90 0022
.org 0x7ab92
	bl 0xcd6d0	@ 0007ab92 52f09dfd
.org 0x7ab96
	adds r0, r5, #0	@ 0007ab96 281c
.org 0x7ab98
	movs r1, #4	@ 0007ab98 0421
.org 0x7ab9a
	movs r2, #0	@ 0007ab9a 0022
.org 0x7ab9c
	bl 0xcd6d0	@ 0007ab9c 52f098fd
.org 0x7aba0
	adds r0, r5, #0	@ 0007aba0 281c
.org 0x7aba2
	movs r1, #5	@ 0007aba2 0521
.org 0x7aba4
	movs r2, #0	@ 0007aba4 0022
.org 0x7aba6
	bl 0xcd6d0	@ 0007aba6 52f093fd
.org 0x7abaa
	adds r0, r5, #0	@ 0007abaa 281c
.org 0x7abac
	movs r1, #6	@ 0007abac 0621
.org 0x7abae
	movs r2, #0	@ 0007abae 0022
.org 0x7abb0
	bl 0xcd6d0	@ 0007abb0 52f08efd
.org 0x7abb4
	movs r0, #60	@ 0007abb4 3c20
.org 0x7abb6
	strb r0, [r5, #18]	@ 0007abb6 a874
.org 0x7abb8
	b.n 0x7ac06	@ 0007abb8 25e0
.org 0x7abba
	.byte 0x00	@ 0007abba data
.org 0x7abbb
	.byte 0x00	@ 0007abbb data
.org 0x7abbc
	.byte 0x03,0xb1,0x00,0x00	@ 0007abbc data
.org 0x7abc0
	.byte 0x55,0x01,0x00,0x00	@ 0007abc0 data
.org 0x7abc4
	ldrb r0, [r5, #30]	@ 0007abc4 a87f
.org 0x7abc6
	lsls r0, r0, #8	@ 0007abc6 0002
.org 0x7abc8
	adds r1, r5, #0	@ 0007abc8 291c
.org 0x7abca
	adds r1, #112	@ 0007abca 7031
.org 0x7abcc
	ldrb r1, [r1, #0]	@ 0007abcc 0978
.org 0x7abce
	orrs r0, r1	@ 0007abce 0843
.org 0x7abd0
	ldr r1, [pc, #32]	@ 0007abd0 0849
.org 0x7abd2
	cmp r0, r1	@ 0007abd2 8842
.org 0x7abd4
	bne.n 0x7ac22	@ 0007abd4 25d1
.org 0x7abd6
	adds r0, r5, #0	@ 0007abd6 281c
.org 0x7abd8
	adds r0, #115	@ 0007abd8 7330
.org 0x7abda
	ldrb r0, [r0, #0]	@ 0007abda 0078
.org 0x7abdc
	cmp r0, #3	@ 0007abdc 0328
.org 0x7abde
	bne.n 0x7ac22	@ 0007abde 20d1
