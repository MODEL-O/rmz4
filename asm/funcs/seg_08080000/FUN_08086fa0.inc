@ FUN_08086fa0  entry 0x08086fa0  size 278
.thumb
.org 0x86fa0
FUN_08086fa0:
	push {r4, r5, r6, lr}	@ 00086fa0 70b5
.org 0x86fa2
	adds r4, r0, #0	@ 00086fa2 041c
.org 0x86fa4
	adds r5, r4, #0	@ 00086fa4 251c
.org 0x86fa6
	adds r5, #140	@ 00086fa6 8c35
.org 0x86fa8
	ldr r0, [r5, #0]	@ 00086fa8 2868
.org 0x86faa
	movs r6, #1	@ 00086faa 0126
.org 0x86fac
	ands r0, r6	@ 00086fac 3040
.org 0x86fae
	cmp r0, #0	@ 00086fae 0028
.org 0x86fb0
	beq.n 0x86fb8	@ 00086fb0 02d0
.org 0x86fb2
	movs r0, #55	@ 00086fb2 3720
.org 0x86fb4
	bl 0x6984	@ 00086fb4 7ff7e6fc
.org 0x86fb8
	ldr r0, [r4, #84]	@ 00086fb8 606d
.org 0x86fba
	ldr r1, [r4, #88]	@ 00086fba a16d
.org 0x86fbc
	ldr r2, [pc, #68]	@ 00086fbc 114a
.org 0x86fbe
	adds r1, r1, r2	@ 00086fbe 8918
.org 0x86fc0
	bl 0x7098	@ 00086fc0 80f76af8
.org 0x86fc4
	lsls r0, r0, #24	@ 00086fc4 0006
.org 0x86fc6
	lsrs r3, r0, #24	@ 00086fc6 030e
.org 0x86fc8
	cmp r3, #0	@ 00086fc8 002b
.org 0x86fca
	beq.n 0x8700c	@ 00086fca 1fd0
.org 0x86fcc
	ldrb r1, [r4, #10]	@ 00086fcc a17a
.org 0x86fce
	movs r0, #254	@ 00086fce fe20
.org 0x86fd0
	ands r0, r1	@ 00086fd0 0840
.org 0x86fd2
	movs r2, #0	@ 00086fd2 0022
.org 0x86fd4
	movs r1, #253	@ 00086fd4 fd21
.org 0x86fd6
	ands r0, r1	@ 00086fd6 0840
.org 0x86fd8
	strb r0, [r4, #10]	@ 00086fd8 a072
.org 0x86fda
	str r2, [r5, #0]	@ 00086fda 2a60
.org 0x86fdc
	adds r0, r4, #0	@ 00086fdc 201c
.org 0x86fde
	adds r0, #144	@ 00086fde 9030
.org 0x86fe0
	str r2, [r0, #0]	@ 00086fe0 0260
.org 0x86fe2
	adds r0, #4	@ 00086fe2 0430
.org 0x86fe4
	strb r2, [r0, #0]	@ 00086fe4 0270
.org 0x86fe6
	ldrb r1, [r4, #10]	@ 00086fe6 a17a
.org 0x86fe8
	movs r0, #251	@ 00086fe8 fb20
.org 0x86fea
	ands r0, r1	@ 00086fea 0840
.org 0x86fec
	strb r0, [r4, #10]	@ 00086fec a072
.org 0x86fee
	ldr r1, [pc, #24]	@ 00086fee 0649
.org 0x86ff0
	ldrb r0, [r4, #9]	@ 00086ff0 607a
.org 0x86ff2
	lsls r0, r0, #2	@ 00086ff2 8000
.org 0x86ff4
	adds r0, r0, r1	@ 00086ff4 4018
.org 0x86ff6
	movs r1, #3	@ 00086ff6 0321
.org 0x86ff8
	str r1, [r4, #12]	@ 00086ff8 e160
.org 0x86ffa
	ldr r0, [r0, #0]	@ 00086ffa 0068
.org 0x86ffc
	ldr r0, [r0, #12]	@ 00086ffc c068
.org 0x86ffe
	str r0, [r4, #20]	@ 00086ffe 6061
.org 0x87000
	b.n 0x870c8	@ 00087000 62e0
.org 0x87002
	.byte 0x00	@ 00087002 data
.org 0x87003
	.byte 0x00	@ 00087003 data
.org 0x87004
	.byte 0x00,0xe0,0xff,0xff	@ 00087004 data
.org 0x87008
	.byte 0x40,0xdb,0x85,0x08	@ 00087008 data
.org 0x8700c
	ldr r0, [r5, #0]	@ 0008700c 2868
.org 0x8700e
	movs r1, #128	@ 0008700e 8021
.org 0x87010
	lsls r1, r1, #2	@ 00087010 8900
.org 0x87012
	ands r0, r1	@ 00087012 0840
.org 0x87014
	cmp r0, #0	@ 00087014 0028
.org 0x87016
	beq.n 0x87062	@ 00087016 24d0
.org 0x87018
	ldr r1, [pc, #32]	@ 00087018 0849
.org 0x8701a
	ldrb r0, [r4, #9]	@ 0008701a 607a
.org 0x8701c
	lsls r0, r0, #2	@ 0008701c 8000
.org 0x8701e
	adds r0, r0, r1	@ 0008701e 4018
.org 0x87020
	movs r1, #2	@ 00087020 0221
.org 0x87022
	str r1, [r4, #12]	@ 00087022 e160
.org 0x87024
	ldr r0, [r0, #0]	@ 00087024 0068
.org 0x87026
	ldr r0, [r0, #8]	@ 00087026 8068
.org 0x87028
	str r0, [r4, #20]	@ 00087028 6061
.org 0x8702a
	adds r0, r4, #0	@ 0008702a 201c
.org 0x8702c
	adds r0, #183	@ 0008702c b730
.org 0x8702e
	ldrb r2, [r0, #0]	@ 0008702e 0278
.org 0x87030
	cmp r2, #0	@ 00087030 002a
.org 0x87032
	beq.n 0x87040	@ 00087032 05d0
.org 0x87034
	strb r1, [r4, #13]	@ 00087034 6173
.org 0x87036
	strb r3, [r4, #14]	@ 00087036 a373
.org 0x87038
	strb r3, [r4, #15]	@ 00087038 e373
.org 0x8703a
	b.n 0x8705a	@ 0008703a 0ee0
.org 0x8703c
	.byte 0x40,0xdb,0x85,0x08	@ 0008703c data
.org 0x87040
	ldr r1, [r5, #0]	@ 00087040 2968
.org 0x87042
	movs r0, #128	@ 00087042 8020
.org 0x87044
	lsls r0, r0, #9	@ 00087044 4002
.org 0x87046
	ands r1, r0	@ 00087046 0140
.org 0x87048
	cmp r1, #0	@ 00087048 0029
.org 0x8704a
	beq.n 0x87054	@ 0008704a 03d0
.org 0x8704c
	strb r6, [r4, #13]	@ 0008704c 6673
.org 0x8704e
	strb r2, [r4, #14]	@ 0008704e a273
.org 0x87050
	strb r2, [r4, #15]	@ 00087050 e273
.org 0x87052
	b.n 0x8705a	@ 00087052 02e0
.org 0x87054
	strb r1, [r4, #13]	@ 00087054 6173
.org 0x87056
	strb r1, [r4, #14]	@ 00087056 a173
.org 0x87058
	strb r1, [r4, #15]	@ 00087058 e173
.org 0x8705a
	adds r0, r4, #0	@ 0008705a 201c
.org 0x8705c
	bl 0x88650	@ 0008705c 01f0f8fa
.org 0x87060
	b.n 0x870c8	@ 00087060 32e0
.org 0x87062
	adds r0, r4, #0	@ 00087062 201c
.org 0x87064
	bl 0x7f90c	@ 00087064 f8f752fc
.org 0x87068
	cmp r0, #0	@ 00087068 0028
.org 0x8706a
	beq.n 0x870a8	@ 0008706a 1dd0
.org 0x8706c
	ldr r1, [pc, #48]	@ 0008706c 0c49
.org 0x8706e
	ldrb r0, [r4, #13]	@ 0008706e 607b
.org 0x87070
	lsls r0, r0, #2	@ 00087070 8000
.org 0x87072
	adds r0, r0, r1	@ 00087072 4018
.org 0x87074
	ldr r1, [r0, #0]	@ 00087074 0168
.org 0x87076
	adds r0, r4, #0	@ 00087076 201c
.org 0x87078
	bl 0x128f80	@ 00087078 a1f082ff
.org 0x8707c
	adds r0, r4, #0	@ 0008707c 201c
.org 0x8707e
	adds r0, #181	@ 0008707e b530
.org 0x87080
	ldrb r0, [r0, #0]	@ 00087080 0078
.org 0x87082
	cmp r0, #0	@ 00087082 0028
.org 0x87084
	beq.n 0x870c8	@ 00087084 20d0
.org 0x87086
	ldrb r0, [r4, #13]	@ 00087086 607b
.org 0x87088
	cmp r0, #7	@ 00087088 0728
.org 0x8708a
	bne.n 0x870c8	@ 0008708a 1dd1
.org 0x8708c
	ldr r0, [pc, #20]	@ 0008708c 0548
.org 0x8708e
	ldrb r1, [r4, #13]	@ 0008708e 617b
.org 0x87090
	lsls r1, r1, #2	@ 00087090 8900
.org 0x87092
	adds r1, r1, r0	@ 00087092 0918
.org 0x87094
	ldr r1, [r1, #0]	@ 00087094 0968
.org 0x87096
	adds r0, r4, #0	@ 00087096 201c
.org 0x87098
	bl 0x128f80	@ 00087098 a1f072ff
.org 0x8709c
	b.n 0x870c8	@ 0008709c 14e0
.org 0x8709e
	.byte 0x00	@ 0008709e data
.org 0x8709f
	.byte 0x00	@ 0008709f data
.org 0x870a0
	.byte 0xe4,0xee,0x85,0x08	@ 000870a0 data
.org 0x870a4
	.byte 0x14,0xef,0x85,0x08	@ 000870a4 data
.org 0x870a8
	ldr r1, [pc, #36]	@ 000870a8 0949
.org 0x870aa
	ldrb r0, [r4, #13]	@ 000870aa 607b
.org 0x870ac
	lsls r0, r0, #2	@ 000870ac 8000
.org 0x870ae
	adds r0, r0, r1	@ 000870ae 4018
.org 0x870b0
	ldr r1, [r0, #0]	@ 000870b0 0168
.org 0x870b2
	adds r0, r4, #0	@ 000870b2 201c
.org 0x870b4
	bl 0x128f80	@ 000870b4 a1f064ff
