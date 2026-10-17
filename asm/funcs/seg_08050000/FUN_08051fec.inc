@ FUN_08051fec  entry 0x08051fec  size 368
.thumb
.org 0x51fec
FUN_08051fec:
	push {r4, r5, r6, r7, lr}	@ 00051fec f0b5
.org 0x51fee
	mov r7, r9	@ 00051fee 4f46
.org 0x51ff0
	mov r6, r8	@ 00051ff0 4646
.org 0x51ff2
	push {r6, r7}	@ 00051ff2 c0b4
.org 0x51ff4
	sub sp, #8	@ 00051ff4 82b0
.org 0x51ff6
	adds r4, r0, #0	@ 00051ff6 041c
.org 0x51ff8
	ldrb r0, [r4, #14]	@ 00051ff8 a07b
.org 0x51ffa
	cmp r0, #0	@ 00051ffa 0028
.org 0x51ffc
	bne.n 0x52026	@ 00051ffc 13d1
.org 0x51ffe
	movs r0, #235	@ 00051ffe eb20
.org 0x52000
	bl 0x2b10	@ 00052000 b0f786fd
.org 0x52004
	ldrb r1, [r4, #10]	@ 00052004 a17a
.org 0x52006
	movs r0, #32	@ 00052006 2020
.org 0x52008
	ands r0, r1	@ 00052008 0840
.org 0x5200a
	cmp r0, #0	@ 0005200a 0028
.org 0x5200c
	beq.n 0x52014	@ 0005200c 02d0
.org 0x5200e
	movs r0, #224	@ 0005200e e020
.org 0x52010
	lsls r0, r0, #1	@ 00052010 4000
.org 0x52012
	b.n 0x52016	@ 00052012 00e0
.org 0x52014
	ldr r0, [pc, #128]	@ 00052014 2048
.org 0x52016
	str r0, [r4, #96]	@ 00052016 2066
.org 0x52018
	movs r1, #0	@ 00052018 0021
.org 0x5201a
	movs r0, #25	@ 0005201a 1920
.org 0x5201c
	strb r0, [r4, #18]	@ 0005201c a074
.org 0x5201e
	strb r1, [r4, #19]	@ 0005201e e174
.org 0x52020
	ldrb r0, [r4, #14]	@ 00052020 a07b
.org 0x52022
	adds r0, #1	@ 00052022 0130
.org 0x52024
	strb r0, [r4, #14]	@ 00052024 a073
.org 0x52026
	adds r0, r4, #0	@ 00052026 201c
.org 0x52028
	bl 0x1cff0	@ 00052028 caf7e2ff
.org 0x5202c
	adds r0, r4, #0	@ 0005202c 201c
.org 0x5202e
	adds r0, #140	@ 0005202e 8c30
.org 0x52030
	ldr r0, [r0, #0]	@ 00052030 0068
.org 0x52032
	movs r1, #1	@ 00052032 0121
.org 0x52034
	ands r0, r1	@ 00052034 0840
.org 0x52036
	cmp r0, #0	@ 00052036 0028
.org 0x52038
	beq.n 0x52040	@ 00052038 02d0
.org 0x5203a
	adds r0, r4, #0	@ 0005203a 201c
.org 0x5203c
	adds r0, #226	@ 0005203c e230
.org 0x5203e
	strb r1, [r0, #0]	@ 0005203e 0170
.org 0x52040
	ldrb r6, [r4, #19]	@ 00052040 e67c
.org 0x52042
	movs r0, #1	@ 00052042 0120
.org 0x52044
	mov r9, r0	@ 00052044 8146
.org 0x52046
	adds r0, r1, #0	@ 00052046 081c
.org 0x52048
	ands r0, r6	@ 00052048 3040
.org 0x5204a
	cmp r0, #0	@ 0005204a 0028
.org 0x5204c
	beq.n 0x52126	@ 0005204c 6bd0
.org 0x5204e
	ldr r3, [r4, #84]	@ 0005204e 636d
.org 0x52050
	movs r1, #128	@ 00052050 8021
.org 0x52052
	lsls r1, r1, #5	@ 00052052 4901
.org 0x52054
	adds r2, r3, r1	@ 00052054 5a18
.org 0x52056
	ldr r5, [pc, #68]	@ 00052056 114d
.org 0x52058
	ldr r0, [r5, #0]	@ 00052058 2868
.org 0x5205a
	ldr r7, [pc, #68]	@ 0005205a 114f
.org 0x5205c
	muls r0, r7	@ 0005205c 7843
.org 0x5205e
	ldr r1, [pc, #68]	@ 0005205e 1149
.org 0x52060
	mov r8, r1	@ 00052060 8846
.org 0x52062
	add r0, r8	@ 00052062 4044
.org 0x52064
	lsls r0, r0, #1	@ 00052064 4000
.org 0x52066
	lsrs r1, r0, #1	@ 00052066 4108
.org 0x52068
	str r1, [r5, #0]	@ 00052068 2960
.org 0x5206a
	lsrs r0, r0, #17	@ 0005206a 400c
.org 0x5206c
	movs r1, #31	@ 0005206c 1f21
.org 0x5206e
	ands r0, r1	@ 0005206e 0840
.org 0x52070
	lsls r0, r0, #8	@ 00052070 0002
.org 0x52072
	subs r2, r2, r0	@ 00052072 121a
.org 0x52074
	str r2, [sp, #0]	@ 00052074 0092
.org 0x52076
	movs r0, #3	@ 00052076 0320
.org 0x52078
	ands r0, r6	@ 00052078 3040
.org 0x5207a
	cmp r0, #1	@ 0005207a 0128
.org 0x5207c
	bne.n 0x520c0	@ 0005207c 20d1
.org 0x5207e
	ldrb r1, [r4, #10]	@ 0005207e a17a
.org 0x52080
	movs r0, #32	@ 00052080 2020
.org 0x52082
	ands r0, r1	@ 00052082 0840
.org 0x52084
	cmp r0, #0	@ 00052084 0028
.org 0x52086
	beq.n 0x520ac	@ 00052086 11d0
.org 0x52088
	ldr r1, [r4, #88]	@ 00052088 a16d
.org 0x5208a
	adds r0, r3, #0	@ 0005208a 181c
.org 0x5208c
	bl 0x8748	@ 0005208c b6f75cfb
.org 0x52090
	str r0, [sp, #4]	@ 00052090 0190
.org 0x52092
	ldr r1, [pc, #20]	@ 00052092 0549
.org 0x52094
	b.n 0x520d6	@ 00052094 1fe0
.org 0x52096
	.byte 0x00	@ 00052096 data
.org 0x52097
	.byte 0x00	@ 00052097 data
.org 0x52098
	.byte 0x40,0xfe,0xff,0xff	@ 00052098 data
.org 0x5209c
	.byte 0x38,0xdc,0x02,0x02	@ 0005209c data
.org 0x520a0
	.byte 0xfd,0x43,0x03,0x00	@ 000520a0 data
.org 0x520a4
	.byte 0xc3,0x9e,0x26,0x00	@ 000520a4 data
.org 0x520a8
	.byte 0xb8,0x81,0x85,0x08	@ 000520a8 data
.org 0x520ac
	ldr r1, [r4, #88]	@ 000520ac a16d
.org 0x520ae
	adds r0, r3, #0	@ 000520ae 181c
.org 0x520b0
	bl 0x8534	@ 000520b0 b6f740fa
.org 0x520b4
	str r0, [sp, #4]	@ 000520b4 0190
.org 0x520b6
	ldr r1, [pc, #4]	@ 000520b6 0149
.org 0x520b8
	b.n 0x520d6	@ 000520b8 0de0
.org 0x520ba
	.byte 0x00	@ 000520ba data
.org 0x520bb
	.byte 0x00	@ 000520bb data
.org 0x520bc
	.byte 0x80,0x81,0x85,0x08	@ 000520bc data
.org 0x520c0
	ldrb r1, [r4, #10]	@ 000520c0 a17a
.org 0x520c2
	movs r0, #32	@ 000520c2 2020
.org 0x520c4
	ands r0, r1	@ 000520c4 0840
.org 0x520c6
	cmp r0, #0	@ 000520c6 0028
.org 0x520c8
	beq.n 0x520fc	@ 000520c8 18d0
.org 0x520ca
	ldr r1, [r4, #88]	@ 000520ca a16d
.org 0x520cc
	adds r0, r3, #0	@ 000520cc 181c
.org 0x520ce
	bl 0x8748	@ 000520ce b6f73bfb
.org 0x520d2
	str r0, [sp, #4]	@ 000520d2 0190
.org 0x520d4
	ldr r1, [pc, #32]	@ 000520d4 0849
.org 0x520d6
	ldr r0, [r5, #0]	@ 000520d6 2868
.org 0x520d8
	adds r3, r0, #0	@ 000520d8 031c
.org 0x520da
	muls r3, r7	@ 000520da 7b43
.org 0x520dc
	add r3, r8	@ 000520dc 4344
.org 0x520de
	lsls r3, r3, #1	@ 000520de 5b00
.org 0x520e0
	lsrs r0, r3, #1	@ 000520e0 5808
.org 0x520e2
	str r0, [r5, #0]	@ 000520e2 2860
.org 0x520e4
	lsrs r3, r3, #17	@ 000520e4 5b0c
.org 0x520e6
	mov r0, r9	@ 000520e6 4846
.org 0x520e8
	ands r3, r0	@ 000520e8 0340
.org 0x520ea
	lsls r3, r3, #4	@ 000520ea 1b01
.org 0x520ec
	mov r0, sp	@ 000520ec 6846
.org 0x520ee
	movs r2, #0	@ 000520ee 0022
.org 0x520f0
	bl 0xd4c8c	@ 000520f0 82f0ccfd
.org 0x520f4
	b.n 0x52126	@ 000520f4 17e0
.org 0x520f6
	.byte 0x00	@ 000520f6 data
.org 0x520f7
	.byte 0x00	@ 000520f7 data
.org 0x520f8
	.byte 0x9c,0x81,0x85,0x08	@ 000520f8 data
.org 0x520fc
	ldr r1, [r4, #88]	@ 000520fc a16d
.org 0x520fe
	adds r0, r3, #0	@ 000520fe 181c
.org 0x52100
	bl 0x8534	@ 00052100 b6f718fa
.org 0x52104
	str r0, [sp, #4]	@ 00052104 0190
.org 0x52106
	ldr r1, [pc, #52]	@ 00052106 0d49
.org 0x52108
	ldr r0, [r5, #0]	@ 00052108 2868
.org 0x5210a
	adds r3, r0, #0	@ 0005210a 031c
.org 0x5210c
	muls r3, r7	@ 0005210c 7b43
.org 0x5210e
	add r3, r8	@ 0005210e 4344
.org 0x52110
	lsls r3, r3, #1	@ 00052110 5b00
.org 0x52112
	lsrs r0, r3, #1	@ 00052112 5808
.org 0x52114
	str r0, [r5, #0]	@ 00052114 2860
.org 0x52116
	lsrs r3, r3, #17	@ 00052116 5b0c
.org 0x52118
	mov r0, r9	@ 00052118 4846
.org 0x5211a
	ands r3, r0	@ 0005211a 0340
.org 0x5211c
	lsls r3, r3, #4	@ 0005211c 1b01
.org 0x5211e
	mov r0, sp	@ 0005211e 6846
.org 0x52120
	movs r2, #0	@ 00052120 0022
.org 0x52122
	bl 0xd4c8c	@ 00052122 82f0b3fd
.org 0x52126
	ldrb r1, [r4, #19]	@ 00052126 e17c
.org 0x52128
	adds r0, r1, #1	@ 00052128 481c
.org 0x5212a
	strb r0, [r4, #19]	@ 0005212a e074
.org 0x5212c
	movs r0, #3	@ 0005212c 0320
.org 0x5212e
	ands r0, r1	@ 0005212e 0840
.org 0x52130
	cmp r0, #1	@ 00052130 0128
.org 0x52132
	bhi.n 0x52140	@ 00052132 05d8
.org 0x52134
	ldr r0, [r4, #84]	@ 00052134 606d
.org 0x52136
	movs r1, #128	@ 00052136 8021
.org 0x52138
	lsls r1, r1, #1	@ 00052138 4900
.org 0x5213a
	b.n 0x52144	@ 0005213a 03e0
.org 0x5213c
	.byte 0x64,0x81,0x85,0x08	@ 0005213c data
.org 0x52140
	ldr r0, [r4, #84]	@ 00052140 606d
.org 0x52142
	ldr r1, [pc, #28]	@ 00052142 0749
.org 0x52144
	adds r0, r0, r1	@ 00052144 4018
.org 0x52146
	str r0, [r4, #84]	@ 00052146 6065
.org 0x52148
	ldr r0, [r4, #88]	@ 00052148 a06d
.org 0x5214a
	ldr r1, [r4, #96]	@ 0005214a 216e
.org 0x5214c
	adds r0, r0, r1	@ 0005214c 4018
.org 0x5214e
	str r0, [r4, #88]	@ 0005214e a065
.org 0x52150
	adds r0, r4, #0	@ 00052150 201c
.org 0x52152
	adds r0, #217	@ 00052152 d930
.org 0x52154
	ldrb r1, [r0, #0]	@ 00052154 0178
.org 0x52156
	cmp r1, #0	@ 00052156 0029
.org 0x52158
	beq.n 0x52164	@ 00052158 04d0
.org 0x5215a
	movs r1, #0	@ 0005215a 0021
