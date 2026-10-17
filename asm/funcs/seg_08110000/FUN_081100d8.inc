@ FUN_081100d8  entry 0x081100d8  size 326
.thumb
.org 0x1100d8
FUN_081100d8:
	push {r4, r5, r6, r7, lr}	@ 001100d8 f0b5
.org 0x1100da
	adds r7, r0, #0	@ 001100da 071c
.org 0x1100dc
	ldrb r6, [r7, #5]	@ 001100dc 7e79
.org 0x1100de
	cmp r6, #0	@ 001100de 002e
.org 0x1100e0
	beq.n 0x1100e8	@ 001100e0 02d0
.org 0x1100e2
	cmp r6, #1	@ 001100e2 012e
.org 0x1100e4
	beq.n 0x110194	@ 001100e4 56d0
.org 0x1100e6
	b.n 0x11025e	@ 001100e6 bae0
.org 0x1100e8
	ldr r4, [pc, #200]	@ 001100e8 324c
.org 0x1100ea
	ldr r1, [pc, #204]	@ 001100ea 3349
.org 0x1100ec
	adds r0, r4, r1	@ 001100ec 6018
.org 0x1100ee
	movs r1, #32	@ 001100ee 2021
.org 0x1100f0
	strb r1, [r0, #0]	@ 001100f0 0170
.org 0x1100f2
	ldr r2, [pc, #200]	@ 001100f2 324a
.org 0x1100f4
	adds r0, r4, r2	@ 001100f4 a018
.org 0x1100f6
	strb r1, [r0, #0]	@ 001100f6 0170
.org 0x1100f8
	movs r3, #128	@ 001100f8 8023
.org 0x1100fa
	lsls r3, r3, #3	@ 001100fa db00
.org 0x1100fc
	adds r0, r4, r3	@ 001100fc e018
.org 0x1100fe
	strb r1, [r0, #0]	@ 001100fe 0170
.org 0x110100
	movs r1, #129	@ 00110100 8121
.org 0x110102
	lsls r1, r1, #3	@ 00110102 c900
.org 0x110104
	adds r0, r4, r1	@ 00110104 6018
.org 0x110106
	str r6, [r0, #0]	@ 00110106 0660
.org 0x110108
	bl 0x2348	@ 00110108 f2f61ef9
.org 0x11010c
	ldr r0, [pc, #176]	@ 0011010c 2c48
.org 0x11010e
	movs r5, #0	@ 0011010e 0025
.org 0x110110
	strh r6, [r0, #0]	@ 00110110 0680
.org 0x110112
	ldr r1, [pc, #176]	@ 00110112 2c49
.org 0x110114
	strh r6, [r1, #0]	@ 00110114 0e80
.org 0x110116
	movs r0, #255	@ 00110116 ff20
.org 0x110118
	strb r0, [r1, #14]	@ 00110118 8873
.org 0x11011a
	ldr r0, [pc, #172]	@ 0011011a 2b48
.org 0x11011c
	strh r6, [r0, #0]	@ 0011011c 0680
.org 0x11011e
	strh r6, [r4, #0]	@ 0011011e 2680
.org 0x110120
	bl 0x10d4a8	@ 00110120 fdf7c2f9
.org 0x110124
	ldr r2, [pc, #164]	@ 00110124 294a
.org 0x110126
	ldrh r1, [r2, #0]	@ 00110126 1188
.org 0x110128
	ldr r0, [pc, #164]	@ 00110128 2948
.org 0x11012a
	ands r0, r1	@ 0011012a 0840
.org 0x11012c
	ldr r1, [pc, #164]	@ 0011012c 2949
.org 0x11012e
	ands r0, r1	@ 0011012e 0840
.org 0x110130
	movs r3, #128	@ 00110130 8023
.org 0x110132
	lsls r3, r3, #1	@ 00110132 5b00
.org 0x110134
	adds r1, r3, #0	@ 00110134 191c
.org 0x110136
	orrs r0, r1	@ 00110136 0843
.org 0x110138
	strh r0, [r2, #0]	@ 00110138 1080
.org 0x11013a
	movs r0, #1	@ 0011013a 0120
.org 0x11013c
	bl 0x12ec	@ 0011013c f1f6d6f8
.org 0x110140
	ldr r4, [pc, #148]	@ 00110140 254c
.org 0x110142
	movs r1, #224	@ 00110142 e021
.org 0x110144
	lsls r1, r1, #4	@ 00110144 0901
.org 0x110146
	adds r0, r4, #0	@ 00110146 201c
.org 0x110148
	bl 0x1126ac	@ 00110148 02f0b0fa
.org 0x11014c
	ldr r2, [pc, #140]	@ 0011014c 234a
.org 0x11014e
	ldrh r0, [r7, #18]	@ 0011014e 788a
.org 0x110150
	lsrs r0, r0, #1	@ 00110150 4008
.org 0x110152
	movs r1, #3	@ 00110152 0321
.org 0x110154
	ands r0, r1	@ 00110154 0840
.org 0x110156
	adds r0, r0, r2	@ 00110156 8018
.org 0x110158
	ldrb r0, [r0, #0]	@ 00110158 0078
.org 0x11015a
	ldr r1, [pc, #132]	@ 0011015a 2149
.org 0x11015c
	adds r4, r4, r1	@ 0011015c 6418
.org 0x11015e
	strh r0, [r4, #0]	@ 0011015e 2080
.org 0x110160
	ldr r1, [pc, #128]	@ 00110160 2049
.org 0x110162
	movs r0, #1	@ 00110162 0120
.org 0x110164
	bl 0x12b8	@ 00110164 f1f6a8f8
.org 0x110168
	movs r2, #147	@ 00110168 9322
.org 0x11016a
	lsls r2, r2, #2	@ 0011016a 9200
.org 0x11016c
	adds r1, r7, r2	@ 0011016c b918
.org 0x11016e
	movs r0, #1	@ 0011016e 0120
.org 0x110170
	strh r0, [r1, #0]	@ 00110170 0880
.org 0x110172
	ldr r3, [pc, #116]	@ 00110172 1d4b
.org 0x110174
	adds r0, r7, r3	@ 00110174 f818
.org 0x110176
	strb r5, [r0, #0]	@ 00110176 0570
.org 0x110178
	ldr r1, [pc, #112]	@ 00110178 1c49
.org 0x11017a
	adds r0, r7, r1	@ 0011017a 7818
.org 0x11017c
	strb r5, [r0, #0]	@ 0011017c 0570
.org 0x11017e
	adds r2, #4	@ 0011017e 0432
.org 0x110180
	adds r0, r7, r2	@ 00110180 b818
.org 0x110182
	strh r6, [r0, #0]	@ 00110182 0680
.org 0x110184
	ldr r0, [pc, #104]	@ 00110184 1a48
.org 0x110186
	ldrh r1, [r0, #0]	@ 00110186 0188
.org 0x110188
	adds r3, #4	@ 00110188 0433
.org 0x11018a
	adds r0, r7, r3	@ 0011018a f818
.org 0x11018c
	strh r1, [r0, #0]	@ 0011018c 0180
.org 0x11018e
	ldrb r0, [r7, #5]	@ 0011018e 7879
.org 0x110190
	adds r0, #1	@ 00110190 0130
.org 0x110192
	strb r0, [r7, #5]	@ 00110192 7871
.org 0x110194
	ldr r0, [pc, #92]	@ 00110194 1748
.org 0x110196
	adds r3, r7, r0	@ 00110196 3b18
.org 0x110198
	ldr r0, [pc, #84]	@ 00110198 1548
.org 0x11019a
	ldrh r1, [r3, #0]	@ 0011019a 1988
.org 0x11019c
	ldrh r2, [r0, #0]	@ 0011019c 0288
.org 0x11019e
	eors r1, r2	@ 0011019e 5140
.org 0x1101a0
	ands r1, r2	@ 001101a0 1140
.org 0x1101a2
	movs r0, #11	@ 001101a2 0b20
.org 0x1101a4
	ands r1, r0	@ 001101a4 0140
.org 0x1101a6
	cmp r1, #0	@ 001101a6 0029
.org 0x1101a8
	beq.n 0x1101f8	@ 001101a8 26d0
.org 0x1101aa
	movs r0, #1	@ 001101aa 0120
.org 0x1101ac
	bl 0x1390	@ 001101ac f1f6f0f8
.org 0x1101b0
	b.n 0x110200	@ 001101b0 26e0
.org 0x1101b2
	.byte 0x00	@ 001101b2 data
.org 0x1101b3
	.byte 0x00	@ 001101b3 data
.org 0x1101b4
	.byte 0xc0,0x2a,0x00,0x03	@ 001101b4 data
.org 0x1101b8
	.byte 0x02,0x04,0x00,0x00	@ 001101b8 data
.org 0x1101bc
	.byte 0x01,0x04,0x00,0x00	@ 001101bc data
.org 0x1101c0
	.byte 0x40,0x0a,0x00,0x02	@ 001101c0 data
.org 0x1101c4
	.byte 0x50,0x0a,0x00,0x02	@ 001101c4 data
.org 0x1101c8
	.byte 0x60,0x0a,0x00,0x02	@ 001101c8 data
.org 0x1101cc
	.byte 0x00,0x0a,0x00,0x02	@ 001101cc data
.org 0x1101d0
	.byte 0xf8,0xff,0x00,0x00	@ 001101d0 data
.org 0x1101d4
	.byte 0xff,0xf0,0x00,0x00	@ 001101d4 data
.org 0x1101d8
	.byte 0x10,0xf6,0x02,0x02	@ 001101d8 data
.org 0x1101dc
	.byte 0x14,0x1a,0x88,0x08	@ 001101dc data
.org 0x1101e0
	.byte 0x60,0x62,0x00,0x00	@ 001101e0 data
.org 0x1101e4
	.byte 0x85,0x26,0x11,0x08	@ 001101e4 data
.org 0x1101e8
	.byte 0x4e,0x02,0x00,0x00	@ 001101e8 data
.org 0x1101ec
	.byte 0x4f,0x02,0x00,0x00	@ 001101ec data
.org 0x1101f0
	.byte 0x60,0x07,0x00,0x02	@ 001101f0 data
.org 0x1101f4
	.byte 0x52,0x02,0x00,0x00	@ 001101f4 data
.org 0x1101f8
	strh r2, [r3, #0]	@ 001101f8 1a80
.org 0x1101fa
	adds r0, r7, #0	@ 001101fa 381c
.org 0x1101fc
	bl 0x110288	@ 001101fc 00f044f8
.org 0x110200
	ldr r0, [pc, #96]	@ 00110200 1848
.org 0x110202
	movs r1, #153	@ 00110202 9921
.org 0x110204
	lsls r1, r1, #5	@ 00110204 4901
.org 0x110206
	adds r0, r0, r1	@ 00110206 4018
.org 0x110208
	ldrb r0, [r0, #0]	@ 00110208 0078
.org 0x11020a
	cmp r0, #1	@ 0011020a 0128
.org 0x11020c
	bne.n 0x11025e	@ 0011020c 27d1
.org 0x11020e
	ldr r5, [pc, #88]	@ 0011020e 164d
.org 0x110210
	ldr r2, [pc, #88]	@ 00110210 164a
.org 0x110212
	adds r0, r5, r2	@ 00110212 a818
.org 0x110214
	movs r4, #0	@ 00110214 0024
.org 0x110216
	movs r1, #32	@ 00110216 2021
.org 0x110218
	strb r1, [r0, #0]	@ 00110218 0170
.org 0x11021a
	ldr r3, [pc, #84]	@ 0011021a 154b
.org 0x11021c
	adds r0, r5, r3	@ 0011021c e818
