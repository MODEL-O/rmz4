@ FUN_080fee14  entry 0x080fee14  size 518
.thumb
.org 0xfee14
FUN_080fee14:
	push {r4, r5, lr}	@ 000fee14 30b5
.org 0xfee16
	adds r4, r0, #0	@ 000fee16 041c
.org 0xfee18
	bl 0x1cff0	@ 000fee18 1ef7eaf8
.org 0xfee1c
	ldrb r5, [r4, #13]	@ 000fee1c 657b
.org 0xfee1e
	cmp r5, #1	@ 000fee1e 012d
.org 0xfee20
	beq.n 0xfeea4	@ 000fee20 40d0
.org 0xfee22
	cmp r5, #1	@ 000fee22 012d
.org 0xfee24
	bgt.n 0xfee2c	@ 000fee24 02dc
.org 0xfee26
	cmp r5, #0	@ 000fee26 002d
.org 0xfee28
	beq.n 0xfee32	@ 000fee28 03d0
.org 0xfee2a
	b.n 0xfef7c	@ 000fee2a a7e0
.org 0xfee2c
	cmp r5, #2	@ 000fee2c 022d
.org 0xfee2e
	beq.n 0xfeef0	@ 000fee2e 5fd0
.org 0xfee30
	b.n 0xfef7c	@ 000fee30 a4e0
.org 0xfee32
	ldrb r2, [r4, #14]	@ 000fee32 a27b
.org 0xfee34
	ldr r3, [r4, #84]	@ 000fee34 636d
.org 0xfee36
	cmp r2, #0	@ 000fee36 002a
.org 0xfee38
	bne.n 0xfee4e	@ 000fee38 09d1
.org 0xfee3a
	ldr r0, [pc, #92]	@ 000fee3a 1748
.org 0xfee3c
	ldr r0, [r0, #0]	@ 000fee3c 0068
.org 0xfee3e
	ldr r5, [pc, #92]	@ 000fee3e 174d
.org 0xfee40
	adds r1, r3, r5	@ 000fee40 5919
.org 0xfee42
	ldr r0, [r0, #84]	@ 000fee42 406d
.org 0xfee44
	cmp r0, r1	@ 000fee44 8842
.org 0xfee46
	bge.n 0xfee4a	@ 000fee46 00da
.org 0xfee48
	b.n 0xfeff4	@ 000fee48 d4e0
.org 0xfee4a
	adds r0, r2, #1	@ 000fee4a 501c
.org 0xfee4c
	strb r0, [r4, #14]	@ 000fee4c a073
.org 0xfee4e
	ldr r0, [r4, #88]	@ 000fee4e a06d
.org 0xfee50
	ldr r1, [r4, #96]	@ 000fee50 216e
.org 0xfee52
	adds r0, r0, r1	@ 000fee52 4018
.org 0xfee54
	str r0, [r4, #88]	@ 000fee54 a065
.org 0xfee56
	adds r1, #64	@ 000fee56 4031
.org 0xfee58
	str r1, [r4, #96]	@ 000fee58 2166
.org 0xfee5a
	movs r0, #224	@ 000fee5a e020
.org 0xfee5c
	lsls r0, r0, #3	@ 000fee5c c000
.org 0xfee5e
	cmp r1, r0	@ 000fee5e 8142
.org 0xfee60
	ble.n 0xfee64	@ 000fee60 00dd
.org 0xfee62
	str r0, [r4, #96]	@ 000fee62 2066
.org 0xfee64
	ldr r1, [r4, #88]	@ 000fee64 a16d
.org 0xfee66
	adds r0, r3, #0	@ 000fee66 181c
.org 0xfee68
	bl 0x7c7c	@ 000fee68 08f708ff
.org 0xfee6c
	lsls r0, r0, #16	@ 000fee6c 0004
.org 0xfee6e
	cmp r0, #0	@ 000fee6e 0028
.org 0xfee70
	bne.n 0xfee74	@ 000fee70 00d1
.org 0xfee72
	b.n 0xfeff4	@ 000fee72 bfe0
.org 0xfee74
	ldr r0, [r4, #84]	@ 000fee74 606d
.org 0xfee76
	ldr r1, [r4, #88]	@ 000fee76 a16d
.org 0xfee78
	bl 0x8534	@ 000fee78 09f75cfb
.org 0xfee7c
	str r0, [r4, #88]	@ 000fee7c a065
.org 0xfee7e
	ldr r0, [r4, #96]	@ 000fee7e 206e
.org 0xfee80
	movs r1, #3	@ 000fee80 0321
.org 0xfee82
	bl 0x128fb8	@ 000fee82 2af099f8
.org 0xfee86
	negs r0, r0	@ 000fee86 4042
.org 0xfee88
	str r0, [r4, #96]	@ 000fee88 2066
.org 0xfee8a
	ldr r0, [pc, #20]	@ 000fee8a 0548
.org 0xfee8c
	bl 0x2b10	@ 000fee8c 03f740fe
.org 0xfee90
	movs r0, #2	@ 000fee90 0220
.org 0xfee92
	strb r0, [r4, #13]	@ 000fee92 6073
.org 0xfee94
	b.n 0xfeff4	@ 000fee94 aee0
.org 0xfee96
	.byte 0x00	@ 000fee96 data
.org 0xfee97
	.byte 0x00	@ 000fee97 data
.org 0xfee98
	.byte 0xf0,0xdb,0x02,0x02	@ 000fee98 data
.org 0xfee9c
	.byte 0x00,0xf0,0xff,0xff	@ 000fee9c data
.org 0xfeea0
	.byte 0x7b,0x01,0x00,0x00	@ 000feea0 data
.org 0xfeea4
	ldr r0, [r4, #84]	@ 000feea4 606d
.org 0xfeea6
	ldr r1, [r4, #92]	@ 000feea6 e16d
.org 0xfeea8
	adds r0, r0, r1	@ 000feea8 4018
.org 0xfeeaa
	str r0, [r4, #84]	@ 000feeaa 6065
.org 0xfeeac
	adds r1, #8	@ 000feeac 0831
.org 0xfeeae
	str r1, [r4, #92]	@ 000feeae e165
.org 0xfeeb0
	movs r0, #160	@ 000feeb0 a020
.org 0xfeeb2
	lsls r0, r0, #2	@ 000feeb2 8000
.org 0xfeeb4
	cmp r1, r0	@ 000feeb4 8142
.org 0xfeeb6
	ble.n 0xfeeba	@ 000feeb6 00dd
.org 0xfeeb8
	str r0, [r4, #92]	@ 000feeb8 e065
.org 0xfeeba
	ldr r0, [r4, #84]	@ 000feeba 606d
.org 0xfeebc
	ldr r1, [r4, #88]	@ 000feebc a16d
.org 0xfeebe
	bl 0x8534	@ 000feebe 09f739fb
.org 0xfeec2
	adds r2, r0, #0	@ 000feec2 021c
.org 0xfeec4
	ldr r0, [r4, #88]	@ 000feec4 a06d
.org 0xfeec6
	subs r0, r2, r0	@ 000feec6 101a
.org 0xfeec8
	movs r1, #128	@ 000feec8 8021
.org 0xfeeca
	lsls r1, r1, #4	@ 000feeca 0901
.org 0xfeecc
	cmp r0, r1	@ 000feecc 8842
.org 0xfeece
	ble.n 0xfeedc	@ 000feece 05dd
.org 0xfeed0
	movs r0, #0	@ 000feed0 0020
.org 0xfeed2
	str r0, [r4, #96]	@ 000feed2 2066
.org 0xfeed4
	ldrb r0, [r4, #13]	@ 000feed4 607b
.org 0xfeed6
	adds r0, #1	@ 000feed6 0130
.org 0xfeed8
	strb r0, [r4, #13]	@ 000feed8 6073
.org 0xfeeda
	b.n 0xfeff4	@ 000feeda 8be0
.org 0xfeedc
	str r2, [r4, #88]	@ 000feedc a265
.org 0xfeede
	ldr r0, [pc, #8]	@ 000feede 0248
.org 0xfeee0
	ldr r1, [pc, #8]	@ 000feee0 0249
.org 0xfeee2
	adds r0, r0, r1	@ 000feee2 4018
.org 0xfeee4
	strb r5, [r0, #0]	@ 000feee4 0570
.org 0xfeee6
	b.n 0xfeff4	@ 000feee6 85e0
.org 0xfeee8
	.byte 0xb0,0x0a,0x00,0x02	@ 000feee8 data
.org 0xfeeec
	.byte 0x40,0xd0,0x02,0x00	@ 000feeec data
.org 0xfeef0
	ldr r0, [r4, #88]	@ 000feef0 a06d
.org 0xfeef2
	ldr r1, [r4, #96]	@ 000feef2 216e
.org 0xfeef4
	adds r0, r0, r1	@ 000feef4 4018
.org 0xfeef6
	str r0, [r4, #88]	@ 000feef6 a065
.org 0xfeef8
	adds r1, #64	@ 000feef8 4031
.org 0xfeefa
	str r1, [r4, #96]	@ 000feefa 2166
.org 0xfeefc
	movs r0, #224	@ 000feefc e020
.org 0xfeefe
	lsls r0, r0, #3	@ 000feefe c000
.org 0xfef00
	cmp r1, r0	@ 000fef00 8142
.org 0xfef02
	ble.n 0xfef06	@ 000fef02 00dd
.org 0xfef04
	str r0, [r4, #96]	@ 000fef04 2066
.org 0xfef06
	ldr r0, [r4, #84]	@ 000fef06 606d
.org 0xfef08
	ldr r1, [r4, #92]	@ 000fef08 e16d
.org 0xfef0a
	adds r0, r0, r1	@ 000fef0a 4018
.org 0xfef0c
	str r0, [r4, #84]	@ 000fef0c 6065
.org 0xfef0e
	adds r1, #8	@ 000fef0e 0831
.org 0xfef10
	str r1, [r4, #92]	@ 000fef10 e165
.org 0xfef12
	movs r0, #160	@ 000fef12 a020
.org 0xfef14
	lsls r0, r0, #2	@ 000fef14 8000
.org 0xfef16
	cmp r1, r0	@ 000fef16 8142
.org 0xfef18
	ble.n 0xfef1c	@ 000fef18 00dd
.org 0xfef1a
	str r0, [r4, #92]	@ 000fef1a e065
.org 0xfef1c
	ldr r0, [r4, #84]	@ 000fef1c 606d
.org 0xfef1e
	ldr r1, [r4, #88]	@ 000fef1e a16d
.org 0xfef20
	bl 0x7c7c	@ 000fef20 08f7acfe
.org 0xfef24
	lsls r0, r0, #16	@ 000fef24 0004
.org 0xfef26
	cmp r0, #0	@ 000fef26 0028
.org 0xfef28
	beq.n 0xfeff4	@ 000fef28 64d0
.org 0xfef2a
	ldr r1, [r4, #96]	@ 000fef2a 216e
.org 0xfef2c
	ldr r0, [pc, #8]	@ 000fef2c 0248
.org 0xfef2e
	cmp r1, r0	@ 000fef2e 8142
.org 0xfef30
	bgt.n 0xfef3c	@ 000fef30 04dc
.org 0xfef32
	movs r0, #1	@ 000fef32 0120
.org 0xfef34
	strb r0, [r4, #13]	@ 000fef34 6073
.org 0xfef36
	b.n 0xfef4e	@ 000fef36 0ae0
.org 0xfef38
	.byte 0x7f,0x02,0x00,0x00	@ 000fef38 data
.org 0xfef3c
	adds r0, r1, #0	@ 000fef3c 081c
.org 0xfef3e
	movs r1, #3	@ 000fef3e 0321
.org 0xfef40
	bl 0x128fb8	@ 000fef40 2af03af8
.org 0xfef44
	negs r0, r0	@ 000fef44 4042
.org 0xfef46
	str r0, [r4, #96]	@ 000fef46 2066
.org 0xfef48
	ldr r0, [pc, #36]	@ 000fef48 0948
.org 0xfef4a
	bl 0x2b10	@ 000fef4a 03f7e1fd
.org 0xfef4e
	ldr r0, [r4, #84]	@ 000fef4e 606d
.org 0xfef50
	ldr r1, [r4, #88]	@ 000fef50 a16d
.org 0xfef52
	bl 0x8534	@ 000fef52 09f7effa
.org 0xfef56
	str r0, [r4, #88]	@ 000fef56 a065
.org 0xfef58
	adds r1, r4, #0	@ 000fef58 211c
.org 0xfef5a
	adds r1, #84	@ 000fef5a 5431
.org 0xfef5c
	movs r0, #4	@ 000fef5c 0420
.org 0xfef5e
	bl 0x1fe64	@ 000fef5e 20f781ff
.org 0xfef62
	ldr r0, [pc, #16]	@ 000fef62 0448
.org 0xfef64
	ldr r2, [pc, #16]	@ 000fef64 044a
.org 0xfef66
	adds r0, r0, r2	@ 000fef66 8018
.org 0xfef68
	movs r1, #1	@ 000fef68 0121
.org 0xfef6a
	strb r1, [r0, #0]	@ 000fef6a 0170
.org 0xfef6c
	b.n 0xfeff4	@ 000fef6c 42e0
.org 0xfef6e
	.byte 0x00	@ 000fef6e data
.org 0xfef6f
	.byte 0x00	@ 000fef6f data
.org 0xfef70
	.byte 0x7b,0x01,0x00,0x00	@ 000fef70 data
.org 0xfef74
	.byte 0xb0,0x0a,0x00,0x02	@ 000fef74 data
.org 0xfef78
	.byte 0x40,0xd0,0x02,0x00	@ 000fef78 data
.org 0xfef7c
	ldrb r1, [r4, #18]	@ 000fef7c a17c
.org 0xfef7e
	movs r0, #1	@ 000fef7e 0120
.org 0xfef80
	ands r0, r1	@ 000fef80 0840
.org 0xfef82
	adds r2, r1, #0	@ 000fef82 0a1c
.org 0xfef84
	cmp r0, #0	@ 000fef84 0028
.org 0xfef86
	beq.n 0xfef90	@ 000fef86 03d0
.org 0xfef88
	ldrb r1, [r4, #10]	@ 000fef88 a17a
.org 0xfef8a
	movs r0, #1	@ 000fef8a 0120
.org 0xfef8c
	orrs r0, r1	@ 000fef8c 0843
.org 0xfef8e
	b.n 0xfef96	@ 000fef8e 02e0
.org 0xfef90
	ldrb r1, [r4, #10]	@ 000fef90 a17a
.org 0xfef92
	movs r0, #254	@ 000fef92 fe20
.org 0xfef94
	ands r0, r1	@ 000fef94 0840
.org 0xfef96
	strb r0, [r4, #10]	@ 000fef96 a072
.org 0xfef98
	ldr r0, [r4, #84]	@ 000fef98 606d
.org 0xfef9a
	ldr r1, [r4, #92]	@ 000fef9a e16d
.org 0xfef9c
	adds r0, r0, r1	@ 000fef9c 4018
.org 0xfef9e
	str r0, [r4, #84]	@ 000fef9e 6065
.org 0xfefa0
	ldr r0, [r4, #88]	@ 000fefa0 a06d
.org 0xfefa2
	ldr r1, [r4, #96]	@ 000fefa2 216e
.org 0xfefa4
	adds r0, r0, r1	@ 000fefa4 4018
.org 0xfefa6
	str r0, [r4, #88]	@ 000fefa6 a065
.org 0xfefa8
	adds r1, #64	@ 000fefa8 4031
.org 0xfefaa
	str r1, [r4, #96]	@ 000fefaa 2166
.org 0xfefac
	subs r0, r2, #1	@ 000fefac 501e
.org 0xfefae
	movs r2, #0	@ 000fefae 0022
.org 0xfefb0
	strb r0, [r4, #18]	@ 000fefb0 a074
.org 0xfefb2
	lsls r0, r0, #24	@ 000fefb2 0006
.org 0xfefb4
	lsrs r0, r0, #24	@ 000fefb4 000e
.org 0xfefb6
	cmp r0, #255	@ 000fefb6 ff28
.org 0xfefb8
	bne.n 0xff042	@ 000fefb8 43d1
.org 0xfefba
	ldrb r1, [r4, #10]	@ 000fefba a17a
.org 0xfefbc
	movs r0, #254	@ 000fefbc fe20
.org 0xfefbe
	ands r0, r1	@ 000fefbe 0840
.org 0xfefc0
	movs r1, #253	@ 000fefc0 fd21
.org 0xfefc2
	ands r0, r1	@ 000fefc2 0840
.org 0xfefc4
	strb r0, [r4, #10]	@ 000fefc4 a072
.org 0xfefc6
	adds r0, r4, #0	@ 000fefc6 201c
.org 0xfefc8
	adds r0, #140	@ 000fefc8 8c30
.org 0xfefca
	str r2, [r0, #0]	@ 000fefca 0260
.org 0xfefcc
	adds r0, #4	@ 000fefcc 0430
.org 0xfefce
	str r2, [r0, #0]	@ 000fefce 0260
.org 0xfefd0
	adds r0, #4	@ 000fefd0 0430
.org 0xfefd2
	strb r2, [r0, #0]	@ 000fefd2 0270
.org 0xfefd4
	ldrb r1, [r4, #10]	@ 000fefd4 a17a
.org 0xfefd6
	movs r0, #251	@ 000fefd6 fb20
.org 0xfefd8
	ands r0, r1	@ 000fefd8 0840
.org 0xfefda
	strb r0, [r4, #10]	@ 000fefda a072
.org 0xfefdc
	ldr r1, [pc, #16]	@ 000fefdc 0449
.org 0xfefde
	ldrb r0, [r4, #9]	@ 000fefde 607a
.org 0xfefe0
	lsls r0, r0, #2	@ 000fefe0 8000
.org 0xfefe2
	adds r0, r0, r1	@ 000fefe2 4018
.org 0xfefe4
	movs r1, #3	@ 000fefe4 0321
.org 0xfefe6
	str r1, [r4, #12]	@ 000fefe6 e160
.org 0xfefe8
	ldr r0, [r0, #0]	@ 000fefe8 0068
.org 0xfefea
	ldr r0, [r0, #12]	@ 000fefea c068
.org 0xfefec
	b.n 0xff040	@ 000fefec 28e0
.org 0xfefee
	.byte 0x00	@ 000fefee data
.org 0xfefef
	.byte 0x00	@ 000fefef data
.org 0xfeff0
	.byte 0xfc,0x92,0x86,0x08	@ 000feff0 data
.org 0xfeff4
	ldrb r0, [r4, #13]	@ 000feff4 607b
.org 0xfeff6
	cmp r0, #3	@ 000feff6 0328
.org 0xfeff8
	beq.n 0xff042	@ 000feff8 23d0
.org 0xfeffa
	ldr r0, [r4, #84]	@ 000feffa 606d
.org 0xfeffc
	ldr r1, [r4, #88]	@ 000feffc a16d
.org 0xfeffe
	movs r5, #128	@ 000feffe 8025
.org 0xff000
	lsls r5, r5, #4	@ 000ff000 2d01
.org 0xff002
	adds r1, r1, r5	@ 000ff002 4919
.org 0xff004
	bl 0x7c7c	@ 000ff004 08f73afe
.org 0xff008
	movs r1, #16	@ 000ff008 1021
.org 0xff00a
	ands r1, r0	@ 000ff00a 0140
.org 0xff00c
	cmp r1, #0	@ 000ff00c 0029
.org 0xff00e
	beq.n 0xff042	@ 000ff00e 18d0
.org 0xff010
	adds r0, r4, #0	@ 000ff010 201c
.org 0xff012
	adds r0, #140	@ 000ff012 8c30
.org 0xff014
	movs r1, #0	@ 000ff014 0021
.org 0xff016
	str r1, [r0, #0]	@ 000ff016 0160
.org 0xff018
	adds r0, #4	@ 000ff018 0430
