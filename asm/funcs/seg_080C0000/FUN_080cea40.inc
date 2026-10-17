@ FUN_080cea40  entry 0x080cea40  size 282
.thumb
.org 0xcea40
FUN_080cea40:
	push {r4, r5, lr}	@ 000cea40 30b5
.org 0xcea42
	adds r5, r0, #0	@ 000cea42 051c
.org 0xcea44
	ldr r0, [r5, #96]	@ 000cea44 286e
.org 0xcea46
	cmp r0, #0	@ 000cea46 0028
.org 0xcea48
	bge.n 0xcea7c	@ 000cea48 18da
.org 0xcea4a
	ldr r0, [r5, #84]	@ 000cea4a 686d
.org 0xcea4c
	ldr r1, [r5, #88]	@ 000cea4c a96d
.org 0xcea4e
	ldr r2, [pc, #40]	@ 000cea4e 0a4a
.org 0xcea50
	adds r1, r1, r2	@ 000cea50 8918
.org 0xcea52
	bl 0x7c7c	@ 000cea52 39f713f9
.org 0xcea56
	lsls r0, r0, #16	@ 000cea56 0004
.org 0xcea58
	cmp r0, #0	@ 000cea58 0028
.org 0xcea5a
	beq.n 0xceac0	@ 000cea5a 31d0
.org 0xcea5c
	ldr r0, [r5, #96]	@ 000cea5c 286e
.org 0xcea5e
	lsls r0, r0, #8	@ 000cea5e 0002
.org 0xcea60
	negs r0, r0	@ 000cea60 4042
.org 0xcea62
	cmp r0, #0	@ 000cea62 0028
.org 0xcea64
	bge.n 0xcea68	@ 000cea64 00da
.org 0xcea66
	adds r0, #255	@ 000cea66 ff30
.org 0xcea68
	asrs r0, r0, #8	@ 000cea68 0012
.org 0xcea6a
	str r0, [r5, #96]	@ 000cea6a 2866
.org 0xcea6c
	movs r0, #182	@ 000cea6c b620
.org 0xcea6e
	lsls r0, r0, #1	@ 000cea6e 4000
.org 0xcea70
	bl 0x2b10	@ 000cea70 34f74ef8
.org 0xcea74
	b.n 0xceaa6	@ 000cea74 17e0
.org 0xcea76
	.byte 0x00	@ 000cea76 data
.org 0xcea77
	.byte 0x00	@ 000cea77 data
.org 0xcea78
	.byte 0x00,0xfb,0xff,0xff	@ 000cea78 data
.org 0xcea7c
	ldr r0, [r5, #84]	@ 000cea7c 686d
.org 0xcea7e
	ldr r1, [r5, #88]	@ 000cea7e a96d
.org 0xcea80
	movs r2, #160	@ 000cea80 a022
.org 0xcea82
	lsls r2, r2, #3	@ 000cea82 d200
.org 0xcea84
	adds r1, r1, r2	@ 000cea84 8918
.org 0xcea86
	bl 0x7c7c	@ 000cea86 39f7f9f8
.org 0xcea8a
	lsls r0, r0, #16	@ 000cea8a 0004
.org 0xcea8c
	lsrs r2, r0, #16	@ 000cea8c 020c
.org 0xcea8e
	cmp r2, #0	@ 000cea8e 002a
.org 0xcea90
	beq.n 0xceab4	@ 000cea90 10d0
.org 0xcea92
	adds r0, r5, #0	@ 000cea92 281c
.org 0xcea94
	bl 0xceb68	@ 000cea94 00f068f8
.org 0xcea98
	ldr r0, [r5, #84]	@ 000cea98 686d
.org 0xcea9a
	ldr r1, [r5, #88]	@ 000cea9a a96d
.org 0xcea9c
	bl 0x8534	@ 000cea9c 39f74afd
.org 0xceaa0
	ldr r1, [pc, #12]	@ 000ceaa0 0349
.org 0xceaa2
	adds r0, r0, r1	@ 000ceaa2 4018
.org 0xceaa4
	str r0, [r5, #88]	@ 000ceaa4 a865
.org 0xceaa6
	adds r1, r5, #0	@ 000ceaa6 291c
.org 0xceaa8
	adds r1, #186	@ 000ceaa8 ba31
.org 0xceaaa
	movs r0, #0	@ 000ceaaa 0020
.org 0xceaac
	strb r0, [r1, #0]	@ 000ceaac 0870
.org 0xceaae
	b.n 0xceac0	@ 000ceaae 07e0
.org 0xceab0
	.byte 0x00,0xfb,0xff,0xff	@ 000ceab0 data
.org 0xceab4
	adds r1, r5, #0	@ 000ceab4 291c
.org 0xceab6
	adds r1, #185	@ 000ceab6 b931
.org 0xceab8
	ldrb r0, [r1, #0]	@ 000ceab8 0878
.org 0xceaba
	cmp r0, #1	@ 000ceaba 0128
.org 0xceabc
	bne.n 0xceac0	@ 000ceabc 00d1
.org 0xceabe
	strb r2, [r1, #0]	@ 000ceabe 0a70
.org 0xceac0
	ldr r0, [r5, #92]	@ 000ceac0 e86d
.org 0xceac2
	cmp r0, #0	@ 000ceac2 0028
.org 0xceac4
	ble.n 0xceafc	@ 000ceac4 1add
.org 0xceac6
	ldr r0, [r5, #84]	@ 000ceac6 686d
.org 0xceac8
	movs r2, #160	@ 000ceac8 a022
.org 0xceaca
	lsls r2, r2, #3	@ 000ceaca d200
.org 0xceacc
	adds r0, r0, r2	@ 000ceacc 8018
.org 0xceace
	ldr r1, [r5, #88]	@ 000ceace a96d
.org 0xcead0
	bl 0x7c7c	@ 000cead0 39f7d4f8
.org 0xcead4
	lsls r0, r0, #16	@ 000cead4 0004
.org 0xcead6
	cmp r0, #0	@ 000cead6 0028
.org 0xcead8
	beq.n 0xceb62	@ 000cead8 43d0
.org 0xceada
	ldr r0, [r5, #92]	@ 000ceada e86d
.org 0xceadc
	lsls r0, r0, #8	@ 000ceadc 0002
.org 0xceade
	negs r0, r0	@ 000ceade 4042
.org 0xceae0
	cmp r0, #0	@ 000ceae0 0028
.org 0xceae2
	bge.n 0xceae6	@ 000ceae2 00da
.org 0xceae4
	adds r0, #255	@ 000ceae4 ff30
.org 0xceae6
	asrs r0, r0, #8	@ 000ceae6 0012
.org 0xceae8
	str r0, [r5, #92]	@ 000ceae8 e865
.org 0xceaea
	ldrb r2, [r5, #10]	@ 000ceaea aa7a
.org 0xceaec
	lsrs r0, r2, #4	@ 000ceaec 1009
.org 0xceaee
	movs r1, #1	@ 000ceaee 0121
.org 0xceaf0
	bics r1, r0	@ 000ceaf0 8143
.org 0xceaf2
	cmp r1, #0	@ 000ceaf2 0029
.org 0xceaf4
	beq.n 0xceb34	@ 000ceaf4 1ed0
.org 0xceaf6
	movs r0, #16	@ 000ceaf6 1020
.org 0xceaf8
	orrs r0, r2	@ 000ceaf8 1043
.org 0xceafa
	b.n 0xceb38	@ 000ceafa 1de0
.org 0xceafc
	ldr r0, [r5, #84]	@ 000ceafc 686d
.org 0xceafe
	ldr r1, [pc, #48]	@ 000ceafe 0c49
.org 0xceb00
	adds r0, r0, r1	@ 000ceb00 4018
.org 0xceb02
	ldr r1, [r5, #88]	@ 000ceb02 a96d
.org 0xceb04
	bl 0x7c7c	@ 000ceb04 39f7baf8
.org 0xceb08
	lsls r0, r0, #16	@ 000ceb08 0004
.org 0xceb0a
	cmp r0, #0	@ 000ceb0a 0028
.org 0xceb0c
	beq.n 0xceb62	@ 000ceb0c 29d0
.org 0xceb0e
	ldr r0, [r5, #92]	@ 000ceb0e e86d
.org 0xceb10
	lsls r0, r0, #8	@ 000ceb10 0002
.org 0xceb12
	negs r0, r0	@ 000ceb12 4042
.org 0xceb14
	cmp r0, #0	@ 000ceb14 0028
.org 0xceb16
	bge.n 0xceb1a	@ 000ceb16 00da
.org 0xceb18
	adds r0, #255	@ 000ceb18 ff30
.org 0xceb1a
	asrs r0, r0, #8	@ 000ceb1a 0012
.org 0xceb1c
	str r0, [r5, #92]	@ 000ceb1c e865
.org 0xceb1e
	ldrb r2, [r5, #10]	@ 000ceb1e aa7a
.org 0xceb20
	lsrs r0, r2, #4	@ 000ceb20 1009
.org 0xceb22
	movs r1, #1	@ 000ceb22 0121
.org 0xceb24
	bics r1, r0	@ 000ceb24 8143
.org 0xceb26
	cmp r1, #0	@ 000ceb26 0029
.org 0xceb28
	beq.n 0xceb34	@ 000ceb28 04d0
.org 0xceb2a
	movs r0, #16	@ 000ceb2a 1020
.org 0xceb2c
	orrs r0, r2	@ 000ceb2c 1043
.org 0xceb2e
	b.n 0xceb38	@ 000ceb2e 03e0
.org 0xceb30
	.byte 0x00,0xfb,0xff,0xff	@ 000ceb30 data
.org 0xceb34
	movs r0, #239	@ 000ceb34 ef20
.org 0xceb36
	ands r0, r2	@ 000ceb36 1040
.org 0xceb38
	strb r0, [r5, #10]	@ 000ceb38 a872
.org 0xceb3a
	adds r0, r5, #0	@ 000ceb3a 281c
.org 0xceb3c
	adds r0, #76	@ 000ceb3c 4c30
.org 0xceb3e
	movs r4, #0	@ 000ceb3e 0024
.org 0xceb40
	strb r1, [r0, #0]	@ 000ceb40 0170
.org 0xceb42
	adds r3, r5, #0	@ 000ceb42 2b1c
.org 0xceb44
	adds r3, #74	@ 000ceb44 4a33
.org 0xceb46
	lsls r1, r1, #4	@ 000ceb46 0901
.org 0xceb48
	ldrb r2, [r3, #0]	@ 000ceb48 1a78
.org 0xceb4a
	movs r0, #17	@ 000ceb4a 1120
.org 0xceb4c
	negs r0, r0	@ 000ceb4c 4042
.org 0xceb4e
	ands r0, r2	@ 000ceb4e 1040
.org 0xceb50
	orrs r0, r1	@ 000ceb50 0843
.org 0xceb52
	strb r0, [r3, #0]	@ 000ceb52 1870
.org 0xceb54
	movs r0, #182	@ 000ceb54 b620
.org 0xceb56
	lsls r0, r0, #1	@ 000ceb56 4000
.org 0xceb58
	bl 0x2b10	@ 000ceb58 33f7daff
