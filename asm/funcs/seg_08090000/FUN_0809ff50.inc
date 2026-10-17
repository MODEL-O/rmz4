@ FUN_0809ff50  entry 0x0809ff50  size 296
.thumb
.org 0x9ff50
FUN_0809ff50:
	push {r4, r5, r6, lr}	@ 0009ff50 70b5
.org 0x9ff52
	adds r4, r0, #0	@ 0009ff52 041c
.org 0x9ff54
	adds r5, r4, #0	@ 0009ff54 251c
.org 0x9ff56
	adds r5, #140	@ 0009ff56 8c35
.org 0x9ff58
	ldr r0, [r5, #0]	@ 0009ff58 2868
.org 0x9ff5a
	movs r6, #1	@ 0009ff5a 0126
.org 0x9ff5c
	ands r0, r6	@ 0009ff5c 3040
.org 0x9ff5e
	cmp r0, #0	@ 0009ff5e 0028
.org 0x9ff60
	beq.n 0x9ff68	@ 0009ff60 02d0
.org 0x9ff62
	movs r0, #41	@ 0009ff62 2920
.org 0x9ff64
	bl 0x6984	@ 0009ff64 66f70efd
.org 0x9ff68
	ldr r0, [pc, #68]	@ 0009ff68 1148
.org 0x9ff6a
	adds r1, r4, #0	@ 0009ff6a 211c
.org 0x9ff6c
	adds r1, #84	@ 0009ff6c 5431
.org 0x9ff6e
	bl 0x1fb14	@ 0009ff6e 7ff7d1fd
.org 0x9ff72
	movs r1, #128	@ 0009ff72 8021
.org 0x9ff74
	lsls r1, r1, #8	@ 0009ff74 0902
.org 0x9ff76
	cmp r0, r1	@ 0009ff76 8842
.org 0x9ff78
	bls.n 0x9ffb8	@ 0009ff78 1ed9
.org 0x9ff7a
	ldrb r1, [r4, #10]	@ 0009ff7a a17a
.org 0x9ff7c
	movs r0, #254	@ 0009ff7c fe20
.org 0x9ff7e
	ands r0, r1	@ 0009ff7e 0840
.org 0x9ff80
	movs r2, #0	@ 0009ff80 0022
.org 0x9ff82
	movs r1, #253	@ 0009ff82 fd21
.org 0x9ff84
	ands r0, r1	@ 0009ff84 0840
.org 0x9ff86
	strb r0, [r4, #10]	@ 0009ff86 a072
.org 0x9ff88
	str r2, [r5, #0]	@ 0009ff88 2a60
.org 0x9ff8a
	adds r0, r4, #0	@ 0009ff8a 201c
.org 0x9ff8c
	adds r0, #144	@ 0009ff8c 9030
.org 0x9ff8e
	str r2, [r0, #0]	@ 0009ff8e 0260
.org 0x9ff90
	adds r0, #4	@ 0009ff90 0430
.org 0x9ff92
	strb r2, [r0, #0]	@ 0009ff92 0270
.org 0x9ff94
	ldrb r1, [r4, #10]	@ 0009ff94 a17a
.org 0x9ff96
	movs r0, #251	@ 0009ff96 fb20
.org 0x9ff98
	ands r0, r1	@ 0009ff98 0840
.org 0x9ff9a
	strb r0, [r4, #10]	@ 0009ff9a a072
.org 0x9ff9c
	ldr r1, [pc, #20]	@ 0009ff9c 0549
.org 0x9ff9e
	ldrb r0, [r4, #9]	@ 0009ff9e 607a
.org 0x9ffa0
	lsls r0, r0, #2	@ 0009ffa0 8000
.org 0x9ffa2
	adds r0, r0, r1	@ 0009ffa2 4018
.org 0x9ffa4
	movs r1, #3	@ 0009ffa4 0321
.org 0x9ffa6
	str r1, [r4, #12]	@ 0009ffa6 e160
.org 0x9ffa8
	ldr r0, [r0, #0]	@ 0009ffa8 0068
.org 0x9ffaa
	ldr r0, [r0, #12]	@ 0009ffaa c068
.org 0x9ffac
	str r0, [r4, #20]	@ 0009ffac 6061
.org 0x9ffae
	b.n 0xa0080	@ 0009ffae 67e0
.org 0x9ffb0
	.byte 0xf8,0xe9,0x02,0x02	@ 0009ffb0 data
.org 0x9ffb4
	.byte 0x40,0xdb,0x85,0x08	@ 0009ffb4 data
.org 0x9ffb8
	ldr r0, [r5, #0]	@ 0009ffb8 2868
.org 0x9ffba
	movs r1, #128	@ 0009ffba 8021
.org 0x9ffbc
	lsls r1, r1, #2	@ 0009ffbc 8900
.org 0x9ffbe
	ands r0, r1	@ 0009ffbe 0840
.org 0x9ffc0
	cmp r0, #0	@ 0009ffc0 0028
.org 0x9ffc2
	beq.n 0xa0012	@ 0009ffc2 26d0
.org 0x9ffc4
	ldr r1, [pc, #36]	@ 0009ffc4 0949
.org 0x9ffc6
	ldrb r0, [r4, #9]	@ 0009ffc6 607a
.org 0x9ffc8
	lsls r0, r0, #2	@ 0009ffc8 8000
.org 0x9ffca
	adds r0, r0, r1	@ 0009ffca 4018
.org 0x9ffcc
	movs r1, #2	@ 0009ffcc 0221
.org 0x9ffce
	str r1, [r4, #12]	@ 0009ffce e160
.org 0x9ffd0
	ldr r0, [r0, #0]	@ 0009ffd0 0068
.org 0x9ffd2
	ldr r0, [r0, #8]	@ 0009ffd2 8068
.org 0x9ffd4
	str r0, [r4, #20]	@ 0009ffd4 6061
.org 0x9ffd6
	adds r0, r4, #0	@ 0009ffd6 201c
.org 0x9ffd8
	adds r0, #185	@ 0009ffd8 b930
.org 0x9ffda
	ldrb r2, [r0, #0]	@ 0009ffda 0278
.org 0x9ffdc
	cmp r2, #0	@ 0009ffdc 002a
.org 0x9ffde
	beq.n 0x9fff0	@ 0009ffde 07d0
.org 0x9ffe0
	movs r0, #0	@ 0009ffe0 0020
.org 0x9ffe2
	strb r1, [r4, #13]	@ 0009ffe2 6173
.org 0x9ffe4
	strb r0, [r4, #14]	@ 0009ffe4 a073
.org 0x9ffe6
	strb r0, [r4, #15]	@ 0009ffe6 e073
.org 0x9ffe8
	b.n 0xa000a	@ 0009ffe8 0fe0
.org 0x9ffea
	.byte 0x00	@ 0009ffea data
.org 0x9ffeb
	.byte 0x00	@ 0009ffeb data
.org 0x9ffec
	.byte 0x40,0xdb,0x85,0x08	@ 0009ffec data
.org 0x9fff0
	ldr r1, [r5, #0]	@ 0009fff0 2968
.org 0x9fff2
	movs r0, #128	@ 0009fff2 8020
.org 0x9fff4
	lsls r0, r0, #9	@ 0009fff4 4002
.org 0x9fff6
	ands r1, r0	@ 0009fff6 0140
.org 0x9fff8
	cmp r1, #0	@ 0009fff8 0029
.org 0x9fffa
	beq.n 0xa0004	@ 0009fffa 03d0
.org 0x9fffc
	strb r6, [r4, #13]	@ 0009fffc 6673
.org 0x9fffe
	strb r2, [r4, #14]	@ 0009fffe a273
.org 0xa0000
	strb r2, [r4, #15]	@ 000a0000 e273
.org 0xa0002
	b.n 0xa000a	@ 000a0002 02e0
.org 0xa0004
	strb r1, [r4, #13]	@ 000a0004 6173
.org 0xa0006
	strb r1, [r4, #14]	@ 000a0006 a173
.org 0xa0008
	strb r1, [r4, #15]	@ 000a0008 e173
.org 0xa000a
	adds r0, r4, #0	@ 000a000a 201c
.org 0xa000c
	bl 0xa0468	@ 000a000c 00f02cfa
.org 0xa0010
	b.n 0xa0080	@ 000a0010 36e0
.org 0xa0012
	ldrb r0, [r4, #13]	@ 000a0012 607b
.org 0xa0014
	cmp r0, #1	@ 000a0014 0128
.org 0xa0016
	bls.n 0xa0026	@ 000a0016 06d9
.org 0xa0018
	adds r1, r4, #0	@ 000a0018 211c
.org 0xa001a
	adds r1, #180	@ 000a001a b431
.org 0xa001c
	ldr r0, [r1, #0]	@ 000a001c 0868
.org 0xa001e
	cmp r0, #0	@ 000a001e 0028
.org 0xa0020
	beq.n 0xa0026	@ 000a0020 01d0
.org 0xa0022
	subs r0, #1	@ 000a0022 0138
.org 0xa0024
	str r0, [r1, #0]	@ 000a0024 0860
.org 0xa0026
	adds r0, r4, #0	@ 000a0026 201c
.org 0xa0028
	adds r0, #140	@ 000a0028 8c30
.org 0xa002a
	ldr r0, [r0, #0]	@ 000a002a 0068
.org 0xa002c
	movs r1, #1	@ 000a002c 0121
.org 0xa002e
	ands r0, r1	@ 000a002e 0840
.org 0xa0030
	cmp r0, #0	@ 000a0030 0028
.org 0xa0032
	beq.n 0xa005c	@ 000a0032 13d0
.org 0xa0034
	ldr r5, [r4, #44]	@ 000a0034 e56a
.org 0xa0036
	cmp r5, #0	@ 000a0036 002d
.org 0xa0038
	bne.n 0xa0062	@ 000a0038 13d1
.org 0xa003a
	ldr r2, [pc, #76]	@ 000a003a 134a
.org 0xa003c
	movs r0, #0	@ 000a003c 0020
.org 0xa003e
	adds r1, r4, #0	@ 000a003e 211c
.org 0xa0040
	bl 0x2adac	@ 000a0040 8af7b4fe
.org 0xa0044
	str r0, [r4, #44]	@ 000a0044 e062
.org 0xa0046
	cmp r0, #0	@ 000a0046 0028
.org 0xa0048
	beq.n 0xa0070	@ 000a0048 12d0
.org 0xa004a
	ldrb r0, [r4, #13]	@ 000a004a 607b
.org 0xa004c
	cmp r0, #0	@ 000a004c 0028
.org 0xa004e
	beq.n 0xa005c	@ 000a004e 05d0
.org 0xa0050
	cmp r0, #5	@ 000a0050 0528
.org 0xa0052
	beq.n 0xa005c	@ 000a0052 03d0
.org 0xa0054
	movs r0, #4	@ 000a0054 0420
.org 0xa0056
	strb r0, [r4, #13]	@ 000a0056 6073
.org 0xa0058
	strb r5, [r4, #14]	@ 000a0058 a573
.org 0xa005a
	strb r5, [r4, #15]	@ 000a005a e573
.org 0xa005c
	ldr r5, [r4, #44]	@ 000a005c e56a
.org 0xa005e
	cmp r5, #0	@ 000a005e 002d
.org 0xa0060
	beq.n 0xa0070	@ 000a0060 06d0
.org 0xa0062
	adds r0, r5, #0	@ 000a0062 281c
.org 0xa0064
	bl 0x2b3e4	@ 000a0064 8bf7bef9
.org 0xa0068
	cmp r0, #0	@ 000a0068 0028
.org 0xa006a
	beq.n 0xa0070	@ 000a006a 01d0
.org 0xa006c
	movs r0, #0	@ 000a006c 0020
.org 0xa006e
	str r0, [r4, #44]	@ 000a006e e062
.org 0xa0070
	ldr r0, [pc, #24]	@ 000a0070 0648
.org 0xa0072
	ldrb r1, [r4, #13]	@ 000a0072 617b
.org 0xa0074
	lsls r1, r1, #2	@ 000a0074 8900
.org 0xa0076
	adds r1, r1, r0	@ 000a0076 0918
