@ FUN_080dafa4  entry 0x080dafa4  size 542
.thumb
.org 0xdafa4
FUN_080dafa4:
	push {r4, r5, r6, r7, lr}	@ 000dafa4 f0b5
.org 0xdafa6
	adds r4, r0, #0	@ 000dafa6 041c
.org 0xdafa8
	ldrb r0, [r4, #14]	@ 000dafa8 a07b
.org 0xdafaa
	cmp r0, #0	@ 000dafaa 0028
.org 0xdafac
	bne.n 0xdaff0	@ 000dafac 20d1
.org 0xdafae
	ldr r1, [pc, #104]	@ 000dafae 1a49
.org 0xdafb0
	ldrh r2, [r1, #0]	@ 000dafb0 0a88
.org 0xdafb2
	movs r3, #128	@ 000dafb2 8023
.org 0xdafb4
	lsls r3, r3, #7	@ 000dafb4 db01
.org 0xdafb6
	adds r0, r3, #0	@ 000dafb6 181c
.org 0xdafb8
	movs r3, #0	@ 000dafb8 0023
.org 0xdafba
	orrs r0, r2	@ 000dafba 1043
.org 0xdafbc
	strh r0, [r1, #0]	@ 000dafbc 0880
.org 0xdafbe
	movs r0, #49	@ 000dafbe 3120
.org 0xdafc0
	strb r0, [r1, #13]	@ 000dafc0 4873
.org 0xdafc2
	ldrb r2, [r1, #14]	@ 000dafc2 8a7b
.org 0xdafc4
	movs r0, #14	@ 000dafc4 0e20
.org 0xdafc6
	orrs r0, r2	@ 000dafc6 1043
.org 0xdafc8
	strb r0, [r1, #14]	@ 000dafc8 8873
.org 0xdafca
	adds r0, r4, #0	@ 000dafca 201c
.org 0xdafcc
	adds r0, #116	@ 000dafcc 7430
.org 0xdafce
	strb r3, [r0, #0]	@ 000dafce 0370
.org 0xdafd0
	adds r0, #1	@ 000dafd0 0130
.org 0xdafd2
	strb r3, [r0, #0]	@ 000dafd2 0370
.org 0xdafd4
	adds r0, #1	@ 000dafd4 0130
.org 0xdafd6
	strb r3, [r0, #0]	@ 000dafd6 0370
.org 0xdafd8
	adds r1, r4, #0	@ 000dafd8 211c
.org 0xdafda
	adds r1, #122	@ 000dafda 7a31
.org 0xdafdc
	movs r0, #255	@ 000dafdc ff20
.org 0xdafde
	strb r0, [r1, #0]	@ 000dafde 0870
.org 0xdafe0
	adds r0, r4, #0	@ 000dafe0 201c
.org 0xdafe2
	adds r0, #123	@ 000dafe2 7b30
.org 0xdafe4
	strb r3, [r0, #0]	@ 000dafe4 0370
.org 0xdafe6
	strb r3, [r4, #18]	@ 000dafe6 a374
.org 0xdafe8
	strb r3, [r4, #19]	@ 000dafe8 e374
.org 0xdafea
	ldrb r0, [r4, #14]	@ 000dafea a07b
.org 0xdafec
	adds r0, #1	@ 000dafec 0130
.org 0xdafee
	strb r0, [r4, #14]	@ 000dafee a073
.org 0xdaff0
	ldr r0, [pc, #40]	@ 000daff0 0a48
.org 0xdaff2
	ldr r0, [r0, #0]	@ 000daff2 0068
.org 0xdaff4
	ldr r5, [r0, #84]	@ 000daff4 456d
.org 0xdaff6
	ldr r0, [r0, #88]	@ 000daff6 806d
.org 0xdaff8
	ldr r7, [pc, #36]	@ 000daff8 094f
.org 0xdaffa
	adds r6, r0, r7	@ 000daffa c619
.org 0xdaffc
	ldrb r0, [r4, #19]	@ 000daffc e07c
.org 0xdaffe
	adds r0, #1	@ 000daffe 0130
.org 0xdb000
	movs r1, #3	@ 000db000 0321
.org 0xdb002
	bl 0x129050	@ 000db002 4ef025f8
.org 0xdb006
	strb r0, [r4, #19]	@ 000db006 e074
.org 0xdb008
	ldrb r0, [r4, #19]	@ 000db008 e07c
.org 0xdb00a
	cmp r0, #1	@ 000db00a 0128
.org 0xdb00c
	beq.n 0xdb0a8	@ 000db00c 4cd0
.org 0xdb00e
	cmp r0, #1	@ 000db00e 0128
.org 0xdb010
	bgt.n 0xdb024	@ 000db010 08dc
.org 0xdb012
	cmp r0, #0	@ 000db012 0028
.org 0xdb014
	beq.n 0xdb034	@ 000db014 0ed0
.org 0xdb016
	b.n 0xdb028	@ 000db016 07e0
.org 0xdb018
	.byte 0x50,0x0a,0x00,0x02	@ 000db018 data
.org 0xdb01c
	.byte 0xf0,0xdb,0x02,0x02	@ 000db01c data
.org 0xdb020
	.byte 0x00,0xd0,0xff,0xff	@ 000db020 data
.org 0xdb024
	cmp r0, #2	@ 000db024 0228
.org 0xdb026
	beq.n 0xdb114	@ 000db026 75d0
.org 0xdb028
	adds r5, r4, #0	@ 000db028 251c
.org 0xdb02a
	adds r5, #123	@ 000db02a 7b35
.org 0xdb02c
	ldr r3, [pc, #0]	@ 000db02c 004b
.org 0xdb02e
	b.n 0xdb170	@ 000db02e 9fe0
.org 0xdb030
	.byte 0x0c,0x93,0x12,0x08	@ 000db030 data
.org 0xdb034
	ldr r3, [pc, #108]	@ 000db034 1b4b
.org 0xdb036
	adds r2, r4, #0	@ 000db036 221c
.org 0xdb038
	adds r2, #123	@ 000db038 7b32
.org 0xdb03a
	ldrb r0, [r2, #0]	@ 000db03a 1078
.org 0xdb03c
	adds r0, #128	@ 000db03c 8030
.org 0xdb03e
	lsls r0, r0, #24	@ 000db03e 0006
.org 0xdb040
	lsrs r0, r0, #23	@ 000db040 c00d
.org 0xdb042
	adds r0, r0, r3	@ 000db042 c018
.org 0xdb044
	movs r7, #0	@ 000db044 0027
.org 0xdb046
	ldrsh r1, [r0, r7]	@ 000db046 c15f
.org 0xdb048
	lsls r0, r1, #2	@ 000db048 8800
.org 0xdb04a
	adds r0, r0, r1	@ 000db04a 4018
.org 0xdb04c
	adds r0, r0, r5	@ 000db04c 4019
.org 0xdb04e
	str r0, [r4, #84]	@ 000db04e 6065
.org 0xdb050
	ldrb r0, [r2, #0]	@ 000db050 1078
.org 0xdb052
	adds r0, #64	@ 000db052 4030
.org 0xdb054
	lsls r0, r0, #24	@ 000db054 0006
.org 0xdb056
	lsrs r0, r0, #23	@ 000db056 c00d
.org 0xdb058
	adds r0, r0, r3	@ 000db058 c018
.org 0xdb05a
	movs r7, #0	@ 000db05a 0027
.org 0xdb05c
	ldrsh r1, [r0, r7]	@ 000db05c c15f
.org 0xdb05e
	lsls r0, r1, #2	@ 000db05e 8800
.org 0xdb060
	adds r0, r0, r1	@ 000db060 4018
.org 0xdb062
	adds r0, r0, r6	@ 000db062 8019
.org 0xdb064
	str r0, [r4, #88]	@ 000db064 a065
.org 0xdb066
	ldrb r0, [r2, #0]	@ 000db066 1078
.org 0xdb068
	lsls r0, r0, #1	@ 000db068 4000
.org 0xdb06a
	adds r0, r0, r3	@ 000db06a c018
.org 0xdb06c
	movs r7, #0	@ 000db06c 0027
.org 0xdb06e
	ldrsh r1, [r0, r7]	@ 000db06e c15f
.org 0xdb070
	lsls r0, r1, #2	@ 000db070 8800
.org 0xdb072
	adds r0, r0, r1	@ 000db072 4018
.org 0xdb074
	adds r0, r0, r5	@ 000db074 4019
.org 0xdb076
	str r0, [r4, #100]	@ 000db076 6066
.org 0xdb078
	ldrb r0, [r2, #0]	@ 000db078 1078
.org 0xdb07a
	adds r0, #192	@ 000db07a c030
.org 0xdb07c
	lsls r0, r0, #24	@ 000db07c 0006
.org 0xdb07e
	lsrs r0, r0, #23	@ 000db07e c00d
.org 0xdb080
	adds r0, r0, r3	@ 000db080 c018
.org 0xdb082
	movs r7, #0	@ 000db082 0027
.org 0xdb084
	ldrsh r1, [r0, r7]	@ 000db084 c15f
.org 0xdb086
	lsls r0, r1, #2	@ 000db086 8800
.org 0xdb088
	adds r0, r0, r1	@ 000db088 4018
.org 0xdb08a
	adds r0, r0, r6	@ 000db08a 8019
.org 0xdb08c
	str r0, [r4, #104]	@ 000db08c a066
.org 0xdb08e
	adds r1, r4, #0	@ 000db08e 211c
.org 0xdb090
	adds r1, #116	@ 000db090 7431
.org 0xdb092
	movs r0, #31	@ 000db092 1f20
.org 0xdb094
	strb r0, [r1, #0]	@ 000db094 0870
.org 0xdb096
	adds r1, #1	@ 000db096 0131
.org 0xdb098
	movs r0, #10	@ 000db098 0a20
.org 0xdb09a
	strb r0, [r1, #0]	@ 000db09a 0870
.org 0xdb09c
	adds r1, #1	@ 000db09c 0131
.org 0xdb09e
	movs r0, #20	@ 000db09e 1420
.org 0xdb0a0
	b.n 0xdb16c	@ 000db0a0 64e0
.org 0xdb0a2
	.byte 0x00	@ 000db0a2 data
.org 0xdb0a3
	.byte 0x00	@ 000db0a3 data
.org 0xdb0a4
	.byte 0x0c,0x93,0x12,0x08	@ 000db0a4 data
.org 0xdb0a8
	ldr r3, [pc, #100]	@ 000db0a8 194b
.org 0xdb0aa
	adds r2, r4, #0	@ 000db0aa 221c
.org 0xdb0ac
	adds r2, #123	@ 000db0ac 7b32
.org 0xdb0ae
	ldrb r0, [r2, #0]	@ 000db0ae 1078
.org 0xdb0b0
	adds r0, #128	@ 000db0b0 8030
.org 0xdb0b2
	lsls r0, r0, #24	@ 000db0b2 0006
.org 0xdb0b4
	lsrs r0, r0, #23	@ 000db0b4 c00d
.org 0xdb0b6
	adds r0, r0, r3	@ 000db0b6 c018
.org 0xdb0b8
	movs r7, #0	@ 000db0b8 0027
.org 0xdb0ba
	ldrsh r1, [r0, r7]	@ 000db0ba c15f
.org 0xdb0bc
	lsls r0, r1, #1	@ 000db0bc 4800
.org 0xdb0be
	adds r0, r0, r1	@ 000db0be 4018
.org 0xdb0c0
	adds r0, r0, r5	@ 000db0c0 4019
.org 0xdb0c2
	str r0, [r4, #84]	@ 000db0c2 6065
.org 0xdb0c4
	ldrb r0, [r2, #0]	@ 000db0c4 1078
.org 0xdb0c6
	adds r0, #64	@ 000db0c6 4030
.org 0xdb0c8
	lsls r0, r0, #24	@ 000db0c8 0006
.org 0xdb0ca
	lsrs r0, r0, #23	@ 000db0ca c00d
.org 0xdb0cc
	adds r0, r0, r3	@ 000db0cc c018
.org 0xdb0ce
	movs r7, #0	@ 000db0ce 0027
.org 0xdb0d0
	ldrsh r1, [r0, r7]	@ 000db0d0 c15f
.org 0xdb0d2
	lsls r0, r1, #1	@ 000db0d2 4800
.org 0xdb0d4
	adds r0, r0, r1	@ 000db0d4 4018
.org 0xdb0d6
	adds r0, r0, r6	@ 000db0d6 8019
.org 0xdb0d8
	str r0, [r4, #88]	@ 000db0d8 a065
.org 0xdb0da
	ldrb r0, [r2, #0]	@ 000db0da 1078
.org 0xdb0dc
	lsls r0, r0, #1	@ 000db0dc 4000
.org 0xdb0de
	adds r0, r0, r3	@ 000db0de c018
.org 0xdb0e0
	movs r7, #0	@ 000db0e0 0027
.org 0xdb0e2
	ldrsh r1, [r0, r7]	@ 000db0e2 c15f
.org 0xdb0e4
	lsls r0, r1, #1	@ 000db0e4 4800
.org 0xdb0e6
	adds r0, r0, r1	@ 000db0e6 4018
.org 0xdb0e8
	adds r0, r0, r5	@ 000db0e8 4019
.org 0xdb0ea
	str r0, [r4, #100]	@ 000db0ea 6066
.org 0xdb0ec
	ldrb r0, [r2, #0]	@ 000db0ec 1078
.org 0xdb0ee
	adds r0, #192	@ 000db0ee c030
.org 0xdb0f0
	lsls r0, r0, #24	@ 000db0f0 0006
.org 0xdb0f2
	lsrs r0, r0, #23	@ 000db0f2 c00d
.org 0xdb0f4
	adds r0, r0, r3	@ 000db0f4 c018
.org 0xdb0f6
	movs r7, #0	@ 000db0f6 0027
.org 0xdb0f8
	ldrsh r1, [r0, r7]	@ 000db0f8 c15f
.org 0xdb0fa
	lsls r0, r1, #1	@ 000db0fa 4800
.org 0xdb0fc
	adds r0, r0, r1	@ 000db0fc 4018
.org 0xdb0fe
	adds r0, r0, r6	@ 000db0fe 8019
.org 0xdb100
	str r0, [r4, #104]	@ 000db100 a066
.org 0xdb102
	adds r1, r4, #0	@ 000db102 211c
.org 0xdb104
	adds r1, #116	@ 000db104 7431
.org 0xdb106
	movs r0, #31	@ 000db106 1f20
.org 0xdb108
	strb r0, [r1, #0]	@ 000db108 0870
.org 0xdb10a
	adds r1, #1	@ 000db10a 0131
.org 0xdb10c
	movs r0, #28	@ 000db10c 1c20
.org 0xdb10e
	b.n 0xdb168	@ 000db10e 2be0
.org 0xdb110
	.byte 0x0c,0x93,0x12,0x08	@ 000db110 data
.org 0xdb114
	ldr r3, [pc, #196]	@ 000db114 314b
.org 0xdb116
	adds r2, r4, #0	@ 000db116 221c
.org 0xdb118
	adds r2, #123	@ 000db118 7b32
.org 0xdb11a
	ldrb r0, [r2, #0]	@ 000db11a 1078
.org 0xdb11c
	adds r0, #128	@ 000db11c 8030
.org 0xdb11e
	lsls r0, r0, #24	@ 000db11e 0006
.org 0xdb120
	lsrs r0, r0, #23	@ 000db120 c00d
.org 0xdb122
	adds r0, r0, r3	@ 000db122 c018
.org 0xdb124
	movs r1, #0	@ 000db124 0021
.org 0xdb126
	ldrsh r0, [r0, r1]	@ 000db126 405e
.org 0xdb128
	adds r0, r0, r5	@ 000db128 4019
.org 0xdb12a
	str r0, [r4, #84]	@ 000db12a 6065
.org 0xdb12c
	ldrb r0, [r2, #0]	@ 000db12c 1078
.org 0xdb12e
	adds r0, #64	@ 000db12e 4030
.org 0xdb130
	lsls r0, r0, #24	@ 000db130 0006
.org 0xdb132
	lsrs r0, r0, #23	@ 000db132 c00d
.org 0xdb134
	adds r0, r0, r3	@ 000db134 c018
.org 0xdb136
	movs r7, #0	@ 000db136 0027
.org 0xdb138
	ldrsh r0, [r0, r7]	@ 000db138 c05f
.org 0xdb13a
	adds r0, r0, r6	@ 000db13a 8019
.org 0xdb13c
	str r0, [r4, #88]	@ 000db13c a065
.org 0xdb13e
	ldrb r0, [r2, #0]	@ 000db13e 1078
.org 0xdb140
	lsls r0, r0, #1	@ 000db140 4000
.org 0xdb142
	adds r0, r0, r3	@ 000db142 c018
.org 0xdb144
	movs r1, #0	@ 000db144 0021
.org 0xdb146
	ldrsh r0, [r0, r1]	@ 000db146 405e
.org 0xdb148
	adds r0, r0, r5	@ 000db148 4019
.org 0xdb14a
	str r0, [r4, #100]	@ 000db14a 6066
.org 0xdb14c
	ldrb r0, [r2, #0]	@ 000db14c 1078
.org 0xdb14e
	adds r0, #192	@ 000db14e c030
.org 0xdb150
	lsls r0, r0, #24	@ 000db150 0006
.org 0xdb152
	lsrs r0, r0, #23	@ 000db152 c00d
.org 0xdb154
	adds r0, r0, r3	@ 000db154 c018
.org 0xdb156
	movs r7, #0	@ 000db156 0027
.org 0xdb158
	ldrsh r0, [r0, r7]	@ 000db158 c05f
.org 0xdb15a
	adds r0, r0, r6	@ 000db15a 8019
.org 0xdb15c
	str r0, [r4, #104]	@ 000db15c a066
.org 0xdb15e
	adds r1, r4, #0	@ 000db15e 211c
.org 0xdb160
	adds r1, #116	@ 000db160 7431
.org 0xdb162
	movs r0, #31	@ 000db162 1f20
.org 0xdb164
	strb r0, [r1, #0]	@ 000db164 0870
.org 0xdb166
	adds r1, #1	@ 000db166 0131
.org 0xdb168
	strb r0, [r1, #0]	@ 000db168 0870
.org 0xdb16a
	adds r1, #1	@ 000db16a 0131
.org 0xdb16c
	strb r0, [r1, #0]	@ 000db16c 0870
.org 0xdb16e
	adds r5, r2, #0	@ 000db16e 151c
.org 0xdb170
	ldrb r0, [r5, #0]	@ 000db170 2878
.org 0xdb172
	adds r0, #64	@ 000db172 4030
.org 0xdb174
	lsls r0, r0, #24	@ 000db174 0006
.org 0xdb176
	lsrs r0, r0, #23	@ 000db176 c00d
.org 0xdb178
	adds r0, r0, r3	@ 000db178 c018
.org 0xdb17a
	movs r2, #0	@ 000db17a 0022
.org 0xdb17c
	ldrsh r1, [r0, r2]	@ 000db17c 815e
.org 0xdb17e
	adds r6, r4, #0	@ 000db17e 261c
.org 0xdb180
	adds r6, #122	@ 000db180 7a36
.org 0xdb182
	ldrb r0, [r6, #0]	@ 000db182 3078
.org 0xdb184
	muls r1, r0	@ 000db184 4143
.org 0xdb186
	ldr r0, [r4, #100]	@ 000db186 606e
.org 0xdb188
	adds r0, r0, r1	@ 000db188 4018
.org 0xdb18a
	str r0, [r4, #92]	@ 000db18a e065
.org 0xdb18c
	ldrb r0, [r5, #0]	@ 000db18c 2878
.org 0xdb18e
	lsls r0, r0, #1	@ 000db18e 4000
.org 0xdb190
	adds r0, r0, r3	@ 000db190 c018
.org 0xdb192
	movs r7, #0	@ 000db192 0027
.org 0xdb194
	ldrsh r1, [r0, r7]	@ 000db194 c15f
.org 0xdb196
	ldrb r0, [r6, #0]	@ 000db196 3078
.org 0xdb198
	muls r1, r0	@ 000db198 4143
.org 0xdb19a
	ldr r0, [r4, #104]	@ 000db19a a06e
.org 0xdb19c
	adds r0, r0, r1	@ 000db19c 4018
.org 0xdb19e
	str r0, [r4, #96]	@ 000db19e 2066
.org 0xdb1a0
	ldrb r0, [r5, #0]	@ 000db1a0 2878
.org 0xdb1a2
	adds r0, #64	@ 000db1a2 4030
.org 0xdb1a4
	lsls r0, r0, #24	@ 000db1a4 0006
.org 0xdb1a6
	lsrs r0, r0, #23	@ 000db1a6 c00d
.org 0xdb1a8
	adds r0, r0, r3	@ 000db1a8 c018
.org 0xdb1aa
	movs r2, #0	@ 000db1aa 0022
.org 0xdb1ac
	ldrsh r1, [r0, r2]	@ 000db1ac 815e
.org 0xdb1ae
	ldrb r0, [r6, #0]	@ 000db1ae 3078
.org 0xdb1b0
	muls r1, r0	@ 000db1b0 4143
.org 0xdb1b2
	ldr r0, [r4, #84]	@ 000db1b2 606d
.org 0xdb1b4
	adds r0, r0, r1	@ 000db1b4 4018
.org 0xdb1b6
	str r0, [r4, #124]	@ 000db1b6 e067
.org 0xdb1b8
	adds r2, r4, #0	@ 000db1b8 221c
.org 0xdb1ba
	adds r2, #128	@ 000db1ba 8032
.org 0xdb1bc
	ldrb r0, [r5, #0]	@ 000db1bc 2878
.org 0xdb1be
	lsls r0, r0, #1	@ 000db1be 4000
.org 0xdb1c0
	adds r0, r0, r3	@ 000db1c0 c018
