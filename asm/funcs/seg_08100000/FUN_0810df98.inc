@ FUN_0810df98  entry 0x0810df98  size 554
.thumb
.org 0x10df98
FUN_0810df98:
	push {r4, r5, r6, r7, lr}	@ 0010df98 f0b5
.org 0x10df9a
	mov r7, r8	@ 0010df9a 4746
.org 0x10df9c
	push {r7}	@ 0010df9c 80b4
.org 0x10df9e
	adds r5, r0, #0	@ 0010df9e 051c
.org 0x10dfa0
	ldr r4, [r5, #0]	@ 0010dfa0 2c68
.org 0x10dfa2
	ldr r3, [r5, #8]	@ 0010dfa2 ab68
.org 0x10dfa4
	cmp r3, #0	@ 0010dfa4 002b
.org 0x10dfa6
	bne.n 0x10dfaa	@ 0010dfa6 00d1
.org 0x10dfa8
	b.n 0x10e22e	@ 0010dfa8 41e1
.org 0x10dfaa
	ldr r2, [pc, #80]	@ 0010dfaa 144a
.org 0x10dfac
	ldrh r1, [r2, #0]	@ 0010dfac 1188
.org 0x10dfae
	movs r6, #128	@ 0010dfae 8026
.org 0x10dfb0
	lsls r6, r6, #1	@ 0010dfb0 7600
.org 0x10dfb2
	adds r0, r6, #0	@ 0010dfb2 301c
.org 0x10dfb4
	orrs r0, r1	@ 0010dfb4 0843
.org 0x10dfb6
	strh r0, [r2, #0]	@ 0010dfb6 1080
.org 0x10dfb8
	adds r0, r3, #0	@ 0010dfb8 181c
.org 0x10dfba
	adds r0, #164	@ 0010dfba a430
.org 0x10dfbc
	ldrh r6, [r0, #0]	@ 0010dfbc 0688
.org 0x10dfbe
	adds r0, r3, #0	@ 0010dfbe 181c
.org 0x10dfc0
	bl 0x2b62c	@ 0010dfc0 1df734fb
.org 0x10dfc4
	lsls r0, r0, #24	@ 0010dfc4 0006
.org 0x10dfc6
	lsrs r0, r0, #24	@ 0010dfc6 000e
.org 0x10dfc8
	mov ip, r0	@ 0010dfc8 8446
.org 0x10dfca
	ldr r0, [r5, #8]	@ 0010dfca a868
.org 0x10dfcc
	adds r1, r0, #0	@ 0010dfcc 011c
.org 0x10dfce
	adds r1, #180	@ 0010dfce b431
.org 0x10dfd0
	ldrb r2, [r1, #12]	@ 0010dfd0 0a7b
.org 0x10dfd2
	ldrb r1, [r1, #13]	@ 0010dfd2 497b
.org 0x10dfd4
	mov r8, r1	@ 0010dfd4 8846
.org 0x10dfd6
	adds r0, #230	@ 0010dfd6 e630
.org 0x10dfd8
	ldrb r3, [r0, #0]	@ 0010dfd8 0378
.org 0x10dfda
	movs r5, #0	@ 0010dfda 0025
.org 0x10dfdc
	ldr r0, [pc, #32]	@ 0010dfdc 0848
.org 0x10dfde
	ldrb r1, [r0, #4]	@ 0010dfde 0179
.org 0x10dfe0
	movs r0, #4	@ 0010dfe0 0420
.org 0x10dfe2
	ands r0, r1	@ 0010dfe2 0840
.org 0x10dfe4
	cmp r0, #0	@ 0010dfe4 0028
.org 0x10dfe6
	beq.n 0x10e00c	@ 0010dfe6 11d0
.org 0x10dfe8
	movs r7, #160	@ 0010dfe8 a027
.org 0x10dfea
	lsls r7, r7, #2	@ 0010dfea bf00
.org 0x10dfec
	adds r1, r4, r7	@ 0010dfec e119
.org 0x10dfee
	ldr r0, [pc, #20]	@ 0010dfee 0548
.org 0x10dff0
	str r0, [r1, #0]	@ 0010dff0 0860
.org 0x10dff2
	movs r0, #176	@ 0010dff2 b020
.org 0x10dff4
	lsls r0, r0, #2	@ 0010dff4 8000
.org 0x10dff6
	adds r1, r4, r0	@ 0010dff6 2118
.org 0x10dff8
	ldr r0, [pc, #12]	@ 0010dff8 0348
.org 0x10dffa
	b.n 0x10e066	@ 0010dffa 34e0
.org 0x10dffc
	.byte 0x00,0x0a,0x00,0x02	@ 0010dffc data
.org 0x10e000
	.byte 0xb0,0xe8,0x02,0x02	@ 0010e000 data
.org 0x10e004
	.byte 0x14,0x12,0x15,0x12	@ 0010e004 data
.org 0x10e008
	.byte 0x34,0x12,0x35,0x12	@ 0010e008 data
.org 0x10e00c
	movs r0, #1	@ 0010e00c 0120
.org 0x10e00e
	ands r0, r1	@ 0010e00e 0840
.org 0x10e010
	cmp r0, #0	@ 0010e010 0028
.org 0x10e012
	beq.n 0x10e030	@ 0010e012 0dd0
.org 0x10e014
	movs r7, #160	@ 0010e014 a027
.org 0x10e016
	lsls r7, r7, #2	@ 0010e016 bf00
.org 0x10e018
	adds r1, r4, r7	@ 0010e018 e119
.org 0x10e01a
	ldr r0, [pc, #12]	@ 0010e01a 0348
.org 0x10e01c
	str r0, [r1, #0]	@ 0010e01c 0860
.org 0x10e01e
	movs r0, #176	@ 0010e01e b020
.org 0x10e020
	lsls r0, r0, #2	@ 0010e020 8000
.org 0x10e022
	adds r1, r4, r0	@ 0010e022 2118
.org 0x10e024
	ldr r0, [pc, #4]	@ 0010e024 0148
.org 0x10e026
	b.n 0x10e066	@ 0010e026 1ee0
.org 0x10e028
	.byte 0x16,0x12,0x17,0x12	@ 0010e028 data
.org 0x10e02c
	.byte 0x36,0x12,0x37,0x12	@ 0010e02c data
.org 0x10e030
	movs r0, #2	@ 0010e030 0220
.org 0x10e032
	ands r0, r1	@ 0010e032 0840
.org 0x10e034
	cmp r0, #0	@ 0010e034 0028
.org 0x10e036
	beq.n 0x10e054	@ 0010e036 0dd0
.org 0x10e038
	movs r7, #160	@ 0010e038 a027
.org 0x10e03a
	lsls r7, r7, #2	@ 0010e03a bf00
.org 0x10e03c
	adds r1, r4, r7	@ 0010e03c e119
.org 0x10e03e
	ldr r0, [pc, #12]	@ 0010e03e 0348
.org 0x10e040
	str r0, [r1, #0]	@ 0010e040 0860
.org 0x10e042
	movs r0, #176	@ 0010e042 b020
.org 0x10e044
	lsls r0, r0, #2	@ 0010e044 8000
.org 0x10e046
	adds r1, r4, r0	@ 0010e046 2118
.org 0x10e048
	ldr r0, [pc, #4]	@ 0010e048 0148
.org 0x10e04a
	b.n 0x10e066	@ 0010e04a 0ce0
.org 0x10e04c
	.byte 0x18,0x12,0x19,0x12	@ 0010e04c data
.org 0x10e050
	.byte 0x38,0x12,0x39,0x12	@ 0010e050 data
.org 0x10e054
	movs r7, #160	@ 0010e054 a027
.org 0x10e056
	lsls r7, r7, #2	@ 0010e056 bf00
.org 0x10e058
	adds r1, r4, r7	@ 0010e058 e119
.org 0x10e05a
	ldr r0, [pc, #48]	@ 0010e05a 0c48
.org 0x10e05c
	str r0, [r1, #0]	@ 0010e05c 0860
.org 0x10e05e
	movs r0, #176	@ 0010e05e b020
.org 0x10e060
	lsls r0, r0, #2	@ 0010e060 8000
.org 0x10e062
	adds r1, r4, r0	@ 0010e062 2118
.org 0x10e064
	ldr r0, [pc, #40]	@ 0010e064 0a48
.org 0x10e066
	str r0, [r1, #0]	@ 0010e066 0860
.org 0x10e068
	adds r1, r2, #0	@ 0010e068 111c
.org 0x10e06a
	cmp r1, #2	@ 0010e06a 0229
.org 0x10e06c
	bgt.n 0x10e09c	@ 0010e06c 16dc
.org 0x10e06e
	movs r7, #192	@ 0010e06e c027
.org 0x10e070
	lsls r7, r7, #2	@ 0010e070 bf00
.org 0x10e072
	adds r2, r4, r7	@ 0010e072 e219
.org 0x10e074
	lsls r0, r1, #16	@ 0010e074 0804
.org 0x10e076
	adds r0, r0, r1	@ 0010e076 4018
.org 0x10e078
	lsls r0, r0, #1	@ 0010e078 4000
.org 0x10e07a
	ldr r7, [pc, #24]	@ 0010e07a 064f
.org 0x10e07c
	adds r1, r0, r7	@ 0010e07c c119
.org 0x10e07e
	str r1, [r2, #0]	@ 0010e07e 1160
.org 0x10e080
	movs r2, #208	@ 0010e080 d022
.org 0x10e082
	lsls r2, r2, #2	@ 0010e082 9200
.org 0x10e084
	adds r1, r4, r2	@ 0010e084 a118
.org 0x10e086
	ldr r7, [pc, #16]	@ 0010e086 044f
.org 0x10e088
	b.n 0x10e0d6	@ 0010e088 25e0
.org 0x10e08a
	.byte 0x00	@ 0010e08a data
.org 0x10e08b
	.byte 0x00	@ 0010e08b data
.org 0x10e08c
	.byte 0x8a,0x12,0x8b,0x12	@ 0010e08c data
.org 0x10e090
	.byte 0xaa,0x12,0xab,0x12	@ 0010e090 data
.org 0x10e094
	.byte 0x0c,0x12,0x0d,0x12	@ 0010e094 data
.org 0x10e098
	.byte 0x4c,0x12,0x4d,0x12	@ 0010e098 data
.org 0x10e09c
	cmp r3, #255	@ 0010e09c ff2b
.org 0x10e09e
	bne.n 0x10e0bc	@ 0010e09e 0dd1
.org 0x10e0a0
	movs r0, #192	@ 0010e0a0 c020
.org 0x10e0a2
	lsls r0, r0, #2	@ 0010e0a2 8000
.org 0x10e0a4
	adds r1, r4, r0	@ 0010e0a4 2118
.org 0x10e0a6
	ldr r0, [pc, #12]	@ 0010e0a6 0348
.org 0x10e0a8
	str r0, [r1, #0]	@ 0010e0a8 0860
.org 0x10e0aa
	movs r2, #208	@ 0010e0aa d022
.org 0x10e0ac
	lsls r2, r2, #2	@ 0010e0ac 9200
.org 0x10e0ae
	adds r1, r4, r2	@ 0010e0ae a118
.org 0x10e0b0
	ldr r0, [pc, #4]	@ 0010e0b0 0148
.org 0x10e0b2
	b.n 0x10e0d8	@ 0010e0b2 11e0
.org 0x10e0b4
	.byte 0x12,0x12,0x13,0x12	@ 0010e0b4 data
.org 0x10e0b8
	.byte 0x52,0x12,0x53,0x12	@ 0010e0b8 data
.org 0x10e0bc
	movs r7, #192	@ 0010e0bc c027
.org 0x10e0be
	lsls r7, r7, #2	@ 0010e0be bf00
.org 0x10e0c0
	adds r2, r4, r7	@ 0010e0c0 e219
.org 0x10e0c2
	lsls r0, r3, #16	@ 0010e0c2 1804
.org 0x10e0c4
	adds r0, r0, r3	@ 0010e0c4 c018
.org 0x10e0c6
	lsls r0, r0, #1	@ 0010e0c6 4000
.org 0x10e0c8
	ldr r7, [pc, #48]	@ 0010e0c8 0c4f
.org 0x10e0ca
	adds r1, r0, r7	@ 0010e0ca c119
.org 0x10e0cc
	str r1, [r2, #0]	@ 0010e0cc 1160
.org 0x10e0ce
	movs r2, #208	@ 0010e0ce d022
.org 0x10e0d0
	lsls r2, r2, #2	@ 0010e0d0 9200
.org 0x10e0d2
	adds r1, r4, r2	@ 0010e0d2 a118
.org 0x10e0d4
	ldr r7, [pc, #40]	@ 0010e0d4 0a4f
.org 0x10e0d6
	adds r0, r0, r7	@ 0010e0d6 c019
.org 0x10e0d8
	str r0, [r1, #0]	@ 0010e0d8 0860
.org 0x10e0da
	mov r1, r8	@ 0010e0da 4146
.org 0x10e0dc
	cmp r1, #2	@ 0010e0dc 0229
.org 0x10e0de
	bgt.n 0x10e10c	@ 0010e0de 15dc
.org 0x10e0e0
	movs r0, #224	@ 0010e0e0 e020
.org 0x10e0e2
	lsls r0, r0, #2	@ 0010e0e2 8000
.org 0x10e0e4
	adds r2, r4, r0	@ 0010e0e4 2218
.org 0x10e0e6
	lsls r0, r1, #16	@ 0010e0e6 0804
.org 0x10e0e8
	adds r0, r0, r1	@ 0010e0e8 4018
.org 0x10e0ea
	lsls r0, r0, #1	@ 0010e0ea 4000
.org 0x10e0ec
	ldr r3, [pc, #20]	@ 0010e0ec 054b
.org 0x10e0ee
	adds r1, r0, r3	@ 0010e0ee c118
.org 0x10e0f0
	str r1, [r2, #0]	@ 0010e0f0 1160
.org 0x10e0f2
	movs r7, #240	@ 0010e0f2 f027
.org 0x10e0f4
	lsls r7, r7, #2	@ 0010e0f4 bf00
.org 0x10e0f6
	adds r1, r4, r7	@ 0010e0f6 e119
.org 0x10e0f8
	ldr r2, [pc, #12]	@ 0010e0f8 034a
.org 0x10e0fa
	b.n 0x10e146	@ 0010e0fa 24e0
.org 0x10e0fc
	.byte 0x6c,0x12,0x6d,0x12	@ 0010e0fc data
.org 0x10e100
	.byte 0xac,0x12,0xad,0x12	@ 0010e100 data
.org 0x10e104
	.byte 0x0c,0x12,0x0d,0x12	@ 0010e104 data
.org 0x10e108
	.byte 0x2c,0x12,0x2d,0x12	@ 0010e108 data
.org 0x10e10c
	cmp r3, #255	@ 0010e10c ff2b
.org 0x10e10e
	bne.n 0x10e12c	@ 0010e10e 0dd1
.org 0x10e110
	movs r3, #224	@ 0010e110 e023
.org 0x10e112
	lsls r3, r3, #2	@ 0010e112 9b00
.org 0x10e114
	adds r1, r4, r3	@ 0010e114 e118
.org 0x10e116
	ldr r0, [pc, #12]	@ 0010e116 0348
.org 0x10e118
	str r0, [r1, #0]	@ 0010e118 0860
.org 0x10e11a
	movs r7, #240	@ 0010e11a f027
.org 0x10e11c
	lsls r7, r7, #2	@ 0010e11c bf00
.org 0x10e11e
	adds r1, r4, r7	@ 0010e11e e119
.org 0x10e120
	ldr r0, [pc, #4]	@ 0010e120 0148
.org 0x10e122
	b.n 0x10e148	@ 0010e122 11e0
.org 0x10e124
	.byte 0x12,0x12,0x13,0x12	@ 0010e124 data
.org 0x10e128
	.byte 0x32,0x12,0x33,0x12	@ 0010e128 data
.org 0x10e12c
	movs r0, #224	@ 0010e12c e020
.org 0x10e12e
	lsls r0, r0, #2	@ 0010e12e 8000
.org 0x10e130
	adds r2, r4, r0	@ 0010e130 2218
.org 0x10e132
	lsls r0, r3, #16	@ 0010e132 1804
.org 0x10e134
	adds r0, r0, r3	@ 0010e134 c018
.org 0x10e136
	lsls r0, r0, #1	@ 0010e136 4000
.org 0x10e138
	ldr r3, [pc, #76]	@ 0010e138 134b
.org 0x10e13a
	adds r1, r0, r3	@ 0010e13a c118
.org 0x10e13c
	str r1, [r2, #0]	@ 0010e13c 1160
.org 0x10e13e
	movs r7, #240	@ 0010e13e f027
.org 0x10e140
	lsls r7, r7, #2	@ 0010e140 bf00
.org 0x10e142
	adds r1, r4, r7	@ 0010e142 e119
.org 0x10e144
	ldr r2, [pc, #68]	@ 0010e144 114a
.org 0x10e146
	adds r0, r0, r2	@ 0010e146 8018
.org 0x10e148
	str r0, [r1, #0]	@ 0010e148 0860
.org 0x10e14a
	movs r3, #144	@ 0010e14a 9023
.org 0x10e14c
	lsls r3, r3, #2	@ 0010e14c 9b00
.org 0x10e14e
	adds r4, r4, r3	@ 0010e14e e418
.org 0x10e150
	lsls r0, r6, #16	@ 0010e150 3004
.org 0x10e152
	asrs r0, r0, #16	@ 0010e152 0014
.org 0x10e154
	mov r5, ip	@ 0010e154 6546
.org 0x10e156
	cmp r0, r5	@ 0010e156 a842
.org 0x10e158
	bgt.n 0x10e1b2	@ 0010e158 2bdc
.org 0x10e15a
	movs r2, #0	@ 0010e15a 0022
.org 0x10e15c
	ldr r6, [pc, #48]	@ 0010e15c 0c4e
.org 0x10e15e
	mov r8, r6	@ 0010e15e b046
.org 0x10e160
	cmp r2, r5	@ 0010e160 aa42
.org 0x10e162
	bge.n 0x10e208	@ 0010e162 51da
.org 0x10e164
	adds r3, r0, #0	@ 0010e164 031c
.org 0x10e166
	ldr r7, [pc, #44]	@ 0010e166 0b4f
.org 0x10e168
	movs r1, #3	@ 0010e168 0321
.org 0x10e16a
	ands r1, r3	@ 0010e16a 1940
.org 0x10e16c
	ldr r0, [pc, #40]	@ 0010e16c 0a48
.org 0x10e16e
	mov ip, r0	@ 0010e16e 8446
.org 0x10e170
	lsls r0, r1, #16	@ 0010e170 0804
.org 0x10e172
	adds r0, r0, r1	@ 0010e172 4018
.org 0x10e174
	lsls r0, r0, #5	@ 0010e174 4001
.org 0x10e176
	subs r6, r7, r0	@ 0010e176 3e1a
.org 0x10e178
	adds r1, r5, #0	@ 0010e178 291c
.org 0x10e17a
	adds r0, r2, #4	@ 0010e17a 101d
.org 0x10e17c
	cmp r0, r3	@ 0010e17c 9842
.org 0x10e17e
	bgt.n 0x10e19c	@ 0010e17e 0ddc
.org 0x10e180
	mov r2, ip	@ 0010e180 6246
.org 0x10e182
	str r2, [r4, #0]	@ 0010e182 2260
.org 0x10e184
	b.n 0x10e1a6	@ 0010e184 0fe0
.org 0x10e186
	.byte 0x00	@ 0010e186 data
.org 0x10e187
	.byte 0x00	@ 0010e187 data
.org 0x10e188
	.byte 0x6c,0x12,0x6d,0x12	@ 0010e188 data
.org 0x10e18c
	.byte 0x8c,0x12,0x8d,0x12	@ 0010e18c data
.org 0x10e190
	.byte 0xe0,0xe8,0x02,0x02	@ 0010e190 data
.org 0x10e194
	.byte 0xa0,0x12,0xa1,0x12	@ 0010e194 data
.org 0x10e198
	.byte 0x20,0x12,0x21,0x12	@ 0010e198 data
.org 0x10e19c
	cmp r2, r3	@ 0010e19c 9a42
.org 0x10e19e
	ble.n 0x10e1a4	@ 0010e19e 01dd
.org 0x10e1a0
	str r7, [r4, #0]	@ 0010e1a0 2760
.org 0x10e1a2
	b.n 0x10e1a6	@ 0010e1a2 00e0
.org 0x10e1a4
	str r6, [r4, #0]	@ 0010e1a4 2660
.org 0x10e1a6
	lsls r0, r0, #16	@ 0010e1a6 0004
.org 0x10e1a8
	lsrs r2, r0, #16	@ 0010e1a8 020c
.org 0x10e1aa
	subs r4, #64	@ 0010e1aa 403c
.org 0x10e1ac
	cmp r2, r1	@ 0010e1ac 8a42
.org 0x10e1ae
	blt.n 0x10e17a	@ 0010e1ae e4db
.org 0x10e1b0
	b.n 0x10e208	@ 0010e1b0 2ae0
.org 0x10e1b2
	subs r0, r0, r5	@ 0010e1b2 401b
.org 0x10e1b4
	lsls r0, r0, #16	@ 0010e1b4 0004
.org 0x10e1b6
	lsrs r6, r0, #16	@ 0010e1b6 060c
.org 0x10e1b8
	movs r2, #0	@ 0010e1b8 0022
.org 0x10e1ba
	ldr r3, [pc, #44]	@ 0010e1ba 0b4b
.org 0x10e1bc
	mov r8, r3	@ 0010e1bc 9846
.org 0x10e1be
	cmp r2, r5	@ 0010e1be aa42
.org 0x10e1c0
	bge.n 0x10e208	@ 0010e1c0 22da
