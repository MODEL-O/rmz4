@ FUN_08034058  entry 0x08034058  size 220
.thumb
.org 0x34058
FUN_08034058:
	push {r4, r5, r6, lr}	@ 00034058 70b5
.org 0x3405a
	adds r5, r0, #0	@ 0003405a 051c
.org 0x3405c
	movs r0, #129	@ 0003405c 8120
.org 0x3405e
	lsls r0, r0, #1	@ 0003405e 4000
.org 0x34060
	adds r4, r5, r0	@ 00034060 2c18
.org 0x34062
	ldrb r0, [r4, #0]	@ 00034062 2078
.org 0x34064
	cmp r0, #0	@ 00034064 0028
.org 0x34066
	bne.n 0x34092	@ 00034066 14d1
.org 0x34068
	ldr r1, [pc, #144]	@ 00034068 2449
.org 0x3406a
	movs r2, #171	@ 0003406a ab22
.org 0x3406c
	lsls r2, r2, #1	@ 0003406c 5200
.org 0x3406e
	adds r0, r5, r2	@ 0003406e a818
.org 0x34070
	ldrb r0, [r0, #0]	@ 00034070 0078
.org 0x34072
	lsls r0, r0, #1	@ 00034072 4000
.org 0x34074
	adds r0, r0, r1	@ 00034074 4018
.org 0x34076
	ldrh r1, [r0, #0]	@ 00034076 0188
.org 0x34078
	adds r0, r5, #0	@ 00034078 281c
.org 0x3407a
	bl 0x1cf00	@ 0003407a e8f741ff
.org 0x3407e
	adds r0, r5, #0	@ 0003407e 281c
.org 0x34080
	bl 0x40bb4	@ 00034080 0cf098fd
.org 0x34084
	ldr r0, [pc, #120]	@ 00034084 1e48
.org 0x34086
	adds r1, r5, r0	@ 00034086 2918
.org 0x34088
	movs r0, #24	@ 00034088 1820
.org 0x3408a
	strb r0, [r1, #0]	@ 0003408a 0870
.org 0x3408c
	ldrb r0, [r4, #0]	@ 0003408c 2078
.org 0x3408e
	adds r0, #1	@ 0003408e 0130
.org 0x34090
	strb r0, [r4, #0]	@ 00034090 2070
.org 0x34092
	ldr r4, [pc, #104]	@ 00034092 1a4c
.org 0x34094
	movs r1, #171	@ 00034094 ab21
.org 0x34096
	lsls r1, r1, #1	@ 00034096 4900
.org 0x34098
	adds r6, r5, r1	@ 00034098 6e18
.org 0x3409a
	ldrb r0, [r6, #0]	@ 0003409a 3078
.org 0x3409c
	lsls r0, r0, #1	@ 0003409c 4000
.org 0x3409e
	adds r0, r0, r4	@ 0003409e 0019
.org 0x340a0
	ldrh r1, [r0, #0]	@ 000340a0 0188
.org 0x340a2
	adds r0, r5, #0	@ 000340a2 281c
.org 0x340a4
	bl 0x3a3b0	@ 000340a4 06f084f9
.org 0x340a8
	ldrb r0, [r6, #0]	@ 000340a8 3078
.org 0x340aa
	lsls r0, r0, #1	@ 000340aa 4000
.org 0x340ac
	adds r0, r0, r4	@ 000340ac 0019
.org 0x340ae
	ldrh r1, [r0, #0]	@ 000340ae 0188
.org 0x340b0
	adds r0, r5, #0	@ 000340b0 281c
.org 0x340b2
	bl 0x3a3f0	@ 000340b2 06f09df9
.org 0x340b6
	adds r0, r5, #0	@ 000340b6 281c
.org 0x340b8
	adds r0, #113	@ 000340b8 7130
.org 0x340ba
	ldrb r0, [r0, #0]	@ 000340ba 0078
.org 0x340bc
	lsls r0, r0, #24	@ 000340bc 0006
.org 0x340be
	asrs r0, r0, #24	@ 000340be 0016
.org 0x340c0
	cmp r0, #0	@ 000340c0 0028
.org 0x340c2
	ble.n 0x34108	@ 000340c2 21dd
.org 0x340c4
	ldr r0, [pc, #60]	@ 000340c4 0f48
.org 0x340c6
	adds r2, r5, r0	@ 000340c6 2a18
.org 0x340c8
	ldrb r0, [r2, #0]	@ 000340c8 1078
.org 0x340ca
	movs r1, #8	@ 000340ca 0821
.org 0x340cc
	orrs r0, r1	@ 000340cc 0843
.org 0x340ce
	strb r0, [r2, #0]	@ 000340ce 1070
.org 0x340d0
	movs r2, #162	@ 000340d0 a222
.org 0x340d2
	lsls r2, r2, #1	@ 000340d2 5200
.org 0x340d4
	adds r1, r5, r2	@ 000340d4 a918
.org 0x340d6
	adds r0, r5, #0	@ 000340d6 281c
.org 0x340d8
	bl 0x39fd8	@ 000340d8 05f07eff
.org 0x340dc
	lsls r0, r0, #24	@ 000340dc 0006
.org 0x340de
	cmp r0, #0	@ 000340de 0028
.org 0x340e0
	beq.n 0x34118	@ 000340e0 1ad0
.org 0x340e2
	movs r1, #128	@ 000340e2 8021
.org 0x340e4
	lsls r1, r1, #1	@ 000340e4 4900
.org 0x340e6
	adds r0, r5, r1	@ 000340e6 6818
.org 0x340e8
	movs r2, #0	@ 000340e8 0022
.org 0x340ea
	movs r1, #3	@ 000340ea 0321
.org 0x340ec
	strb r1, [r0, #0]	@ 000340ec 0170
.org 0x340ee
	adds r1, #254	@ 000340ee fe31
.org 0x340f0
	adds r0, r5, r1	@ 000340f0 6818
.org 0x340f2
	strb r2, [r0, #0]	@ 000340f2 0270
.org 0x340f4
	adds r0, r5, #0	@ 000340f4 281c
.org 0x340f6
	bl 0x334dc	@ 000340f6 fff7f1f9
.org 0x340fa
	b.n 0x3413a	@ 000340fa 1ee0
.org 0x340fc
	.byte 0xc0,0x30,0x85,0x08	@ 000340fc data
.org 0x34100
	.byte 0x51,0x01,0x00,0x00	@ 00034100 data
.org 0x34104
	.byte 0x53,0x01,0x00,0x00	@ 00034104 data
.org 0x34108
	ldr r0, [pc, #52]	@ 00034108 0d48
.org 0x3410a
	adds r2, r5, r0	@ 0003410a 2a18
.org 0x3410c
	ldrb r0, [r2, #0]	@ 0003410c 1078
.org 0x3410e
	movs r1, #4	@ 0003410e 0421
.org 0x34110
	orrs r0, r1	@ 00034110 0843
.org 0x34112
	movs r1, #2	@ 00034112 0221
.org 0x34114
	orrs r0, r1	@ 00034114 0843
.org 0x34116
	strb r0, [r2, #0]	@ 00034116 1070
.org 0x34118
	ldr r2, [pc, #40]	@ 00034118 0a4a
.org 0x3411a
	adds r1, r5, r2	@ 0003411a a918
.org 0x3411c
	ldrb r0, [r1, #0]	@ 0003411c 0878
.org 0x3411e
	subs r0, #1	@ 0003411e 0138
.org 0x34120
	strb r0, [r1, #0]	@ 00034120 0870
.org 0x34122
	lsls r0, r0, #24	@ 00034122 0006
.org 0x34124
	lsrs r0, r0, #24	@ 00034124 000e
.org 0x34126
	cmp r0, #255	@ 00034126 ff28
.org 0x34128
	bne.n 0x3413a	@ 00034128 07d1
.org 0x3412a
	ldr r0, [pc, #28]	@ 0003412a 0748
.org 0x3412c
	adds r1, r5, r0	@ 0003412c 2918
.org 0x3412e
	movs r0, #3	@ 0003412e 0320
.org 0x34130
	strb r0, [r1, #0]	@ 00034130 0870
.org 0x34132
	subs r2, #79	@ 00034132 4f3a
