@ FUN_080e5050  entry 0x080e5050  size 328
.thumb
.org 0xe5050
FUN_080e5050:
	push {r4, r5, r6, r7, lr}	@ 000e5050 f0b5
.org 0xe5052
	sub sp, #8	@ 000e5052 82b0
.org 0xe5054
	adds r6, r0, #0	@ 000e5054 061c
.org 0xe5056
	ldr r1, [pc, #248]	@ 000e5056 3e49
.org 0xe5058
	mov r0, sp	@ 000e5058 6846
.org 0xe505a
	movs r2, #4	@ 000e505a 0422
.org 0xe505c
	bl 0x129258	@ 000e505c 44f0fcf8
.org 0xe5060
	add r7, sp, #4	@ 000e5060 01af
.org 0xe5062
	ldr r1, [pc, #240]	@ 000e5062 3c49
.org 0xe5064
	adds r0, r7, #0	@ 000e5064 381c
.org 0xe5066
	movs r2, #2	@ 000e5066 0222
.org 0xe5068
	bl 0x129258	@ 000e5068 44f0f6f8
.org 0xe506c
	ldrb r0, [r6, #17]	@ 000e506c 707c
.org 0xe506e
	cmp r0, #0	@ 000e506e 0028
.org 0xe5070
	bne.n 0xe50cc	@ 000e5070 2cd1
.org 0xe5072
	ldr r0, [r6, #84]	@ 000e5072 706d
.org 0xe5074
	ldr r1, [r6, #88]	@ 000e5074 b16d
.org 0xe5076
	movs r2, #1	@ 000e5076 0122
.org 0xe5078
	bl 0xd0ff4	@ 000e5078 ebf7bcff
.org 0xe507c
	ldr r0, [r6, #84]	@ 000e507c 706d
.org 0xe507e
	movs r5, #128	@ 000e507e 8025
.org 0xe5080
	lsls r5, r5, #2	@ 000e5080 ad00
.org 0xe5082
	adds r0, r0, r5	@ 000e5082 4019
.org 0xe5084
	ldr r1, [r6, #88]	@ 000e5084 b16d
.org 0xe5086
	movs r2, #0	@ 000e5086 0022
.org 0xe5088
	bl 0xd0ff4	@ 000e5088 ebf7b4ff
.org 0xe508c
	ldr r0, [r6, #84]	@ 000e508c 706d
.org 0xe508e
	ldr r1, [pc, #200]	@ 000e508e 3249
.org 0xe5090
	adds r0, r0, r1	@ 000e5090 4018
.org 0xe5092
	ldr r1, [r6, #88]	@ 000e5092 b16d
.org 0xe5094
	movs r2, #0	@ 000e5094 0022
.org 0xe5096
	bl 0xd0ff4	@ 000e5096 ebf7adff
.org 0xe509a
	adds r4, r6, #0	@ 000e509a 341c
.org 0xe509c
	adds r4, #84	@ 000e509c 5434
.org 0xe509e
	ldrb r3, [r6, #10]	@ 000e509e b37a
.org 0xe50a0
	lsrs r3, r3, #4	@ 000e50a0 1b09
.org 0xe50a2
	movs r0, #1	@ 000e50a2 0120
.org 0xe50a4
	ands r3, r0	@ 000e50a4 0340
.org 0xe50a6
	movs r0, #0	@ 000e50a6 0020
.org 0xe50a8
	adds r1, r4, #0	@ 000e50a8 211c
.org 0xe50aa
	adds r2, r5, #0	@ 000e50aa 2a1c
.org 0xe50ac
	bl 0xd0dc4	@ 000e50ac ebf78afe
.org 0xe50b0
	adds r0, r4, #0	@ 000e50b0 201c
.org 0xe50b2
	movs r1, #0	@ 000e50b2 0021
.org 0xe50b4
	movs r2, #1	@ 000e50b4 0122
.org 0xe50b6
	bl 0xe4f04	@ 000e50b6 fff725ff
.org 0xe50ba
	adds r0, r4, #0	@ 000e50ba 201c
.org 0xe50bc
	movs r1, #1	@ 000e50bc 0121
.org 0xe50be
	movs r2, #0	@ 000e50be 0022
.org 0xe50c0
	bl 0xe4f04	@ 000e50c0 fff720ff
.org 0xe50c4
	adds r1, r6, #0	@ 000e50c4 311c
.org 0xe50c6
	adds r1, #37	@ 000e50c6 2531
.org 0xe50c8
	movs r0, #24	@ 000e50c8 1820
.org 0xe50ca
	strb r0, [r1, #0]	@ 000e50ca 0870
.org 0xe50cc
	ldrb r0, [r6, #17]	@ 000e50cc 707c
.org 0xe50ce
	lsls r0, r0, #1	@ 000e50ce 4000
.org 0xe50d0
	add r0, sp	@ 000e50d0 6844
.org 0xe50d2
	ldrh r1, [r0, #0]	@ 000e50d2 0188
.org 0xe50d4
	adds r0, r6, #0	@ 000e50d4 301c
.org 0xe50d6
	bl 0x1cf00	@ 000e50d6 37f713ff
.org 0xe50da
	ldrb r0, [r6, #17]	@ 000e50da 707c
.org 0xe50dc
	cmp r0, #0	@ 000e50dc 0028
.org 0xe50de
	bne.n 0xe50ea	@ 000e50de 04d1
.org 0xe50e0
	ldr r0, [r6, #88]	@ 000e50e0 b06d
.org 0xe50e2
	movs r2, #128	@ 000e50e2 8022
.org 0xe50e4
	lsls r2, r2, #1	@ 000e50e4 5200
.org 0xe50e6
	adds r0, r0, r2	@ 000e50e6 8018
.org 0xe50e8
	str r0, [r6, #88]	@ 000e50e8 b065
.org 0xe50ea
	ldrb r0, [r6, #17]	@ 000e50ea 707c
.org 0xe50ec
	cmp r0, #1	@ 000e50ec 0128
.org 0xe50ee
	bne.n 0xe50f8	@ 000e50ee 03d1
.org 0xe50f0
	ldr r0, [r6, #88]	@ 000e50f0 b06d
.org 0xe50f2
	ldr r1, [pc, #104]	@ 000e50f2 1a49
.org 0xe50f4
	adds r0, r0, r1	@ 000e50f4 4018
.org 0xe50f6
	str r0, [r6, #88]	@ 000e50f6 b065
.org 0xe50f8
	ldr r2, [pc, #100]	@ 000e50f8 194a
.org 0xe50fa
	ldrb r0, [r6, #17]	@ 000e50fa 707c
.org 0xe50fc
	adds r0, r7, r0	@ 000e50fc 3818
.org 0xe50fe
	ldrb r0, [r0, #0]	@ 000e50fe 0078
.org 0xe5100
	adds r0, #64	@ 000e5100 4030
.org 0xe5102
	lsls r0, r0, #24	@ 000e5102 0006
.org 0xe5104
	lsrs r0, r0, #23	@ 000e5104 c00d
.org 0xe5106
	adds r0, r0, r2	@ 000e5106 8018
.org 0xe5108
	movs r1, #0	@ 000e5108 0021
.org 0xe510a
	ldrsh r0, [r0, r1]	@ 000e510a 405e
.org 0xe510c
	lsrs r1, r0, #31	@ 000e510c c10f
.org 0xe510e
	adds r0, r0, r1	@ 000e510e 4018
.org 0xe5110
	asrs r0, r0, #1	@ 000e5110 4010
.org 0xe5112
	str r0, [r6, #92]	@ 000e5112 f065
.org 0xe5114
	ldrb r0, [r6, #17]	@ 000e5114 707c
.org 0xe5116
	adds r0, r7, r0	@ 000e5116 3818
.org 0xe5118
	ldrb r0, [r0, #0]	@ 000e5118 0078
.org 0xe511a
	lsls r0, r0, #1	@ 000e511a 4000
.org 0xe511c
	adds r0, r0, r2	@ 000e511c 8018
.org 0xe511e
	movs r2, #0	@ 000e511e 0022
.org 0xe5120
	ldrsh r0, [r0, r2]	@ 000e5120 805e
.org 0xe5122
	lsrs r1, r0, #31	@ 000e5122 c10f
.org 0xe5124
	adds r0, r0, r1	@ 000e5124 4018
.org 0xe5126
	asrs r0, r0, #1	@ 000e5126 4010
.org 0xe5128
	lsls r0, r0, #8	@ 000e5128 0002
.org 0xe512a
	negs r0, r0	@ 000e512a 4042
.org 0xe512c
	cmp r0, #0	@ 000e512c 0028
.org 0xe512e
	bge.n 0xe5132	@ 000e512e 00da
.org 0xe5130
	adds r0, #255	@ 000e5130 ff30
.org 0xe5132
	asrs r0, r0, #8	@ 000e5132 0012
.org 0xe5134
	str r0, [r6, #96]	@ 000e5134 3066
.org 0xe5136
	ldr r1, [pc, #44]	@ 000e5136 0b49
.org 0xe5138
	ldr r0, [pc, #44]	@ 000e5138 0b48
.org 0xe513a
	adds r1, r1, r0	@ 000e513a 0918
.org 0xe513c
	ldr r0, [r6, #88]	@ 000e513c b06d
.org 0xe513e
	ldr r2, [pc, #44]	@ 000e513e 0b4a
.org 0xe5140
	adds r0, r0, r2	@ 000e5140 8018
.org 0xe5142
	ldr r1, [r1, #0]	@ 000e5142 0968
.org 0xe5144
	cmp r1, r0	@ 000e5144 8142
.org 0xe5146
	bge.n 0xe5170	@ 000e5146 13da
.org 0xe5148
	movs r0, #0	@ 000e5148 0020
.org 0xe514a
	str r0, [r6, #104]	@ 000e514a b066
.org 0xe514c
	b.n 0xe5178	@ 000e514c 14e0
.org 0xe514e
	.byte 0x00	@ 000e514e data
.org 0xe514f
	.byte 0x00	@ 000e514f data
.org 0xe5150
	.byte 0xcc,0xa2,0x12,0x08	@ 000e5150 data
.org 0xe5154
	.byte 0xd0,0xa2,0x12,0x08	@ 000e5154 data
.org 0xe5158
	.byte 0x00,0xfe,0xff,0xff	@ 000e5158 data
.org 0xe515c
	.byte 0x00,0xff,0xff,0xff	@ 000e515c data
.org 0xe5160
	.byte 0x0c,0x93,0x12,0x08	@ 000e5160 data
.org 0xe5164
	.byte 0xb0,0x0a,0x00,0x02	@ 000e5164 data
.org 0xe5168
	.byte 0x0c,0xc0,0x02,0x00	@ 000e5168 data
.org 0xe516c
	.byte 0x00,0xf0,0xff,0xff	@ 000e516c data
.org 0xe5170
	movs r0, #64	@ 000e5170 4020
.org 0xe5172
	str r0, [r6, #104]	@ 000e5172 b066
.org 0xe5174
	movs r0, #0	@ 000e5174 0020
.org 0xe5176
	str r0, [r6, #96]	@ 000e5176 3066
.org 0xe5178
	ldrb r1, [r6, #10]	@ 000e5178 b17a
.org 0xe517a
	movs r0, #16	@ 000e517a 1020
.org 0xe517c
	ands r0, r1	@ 000e517c 0840
.org 0xe517e
	cmp r0, #0	@ 000e517e 0028
.org 0xe5180
	beq.n 0xe5192	@ 000e5180 07d0
.org 0xe5182
	ldr r0, [r6, #92]	@ 000e5182 f06d
.org 0xe5184
	lsls r0, r0, #8	@ 000e5184 0002
.org 0xe5186
	negs r0, r0	@ 000e5186 4042
.org 0xe5188
	cmp r0, #0	@ 000e5188 0028
.org 0xe518a
	bge.n 0xe518e	@ 000e518a 00da
.org 0xe518c
	adds r0, #255	@ 000e518c ff30
.org 0xe518e
	asrs r0, r0, #8	@ 000e518e 0012
.org 0xe5190
	str r0, [r6, #92]	@ 000e5190 f065
.org 0xe5192
	ldr r2, [pc, #40]	@ 000e5192 0a4a
.org 0xe5194
	ldr r1, [r2, #0]	@ 000e5194 1168
.org 0xe5196
	ldr r0, [pc, #40]	@ 000e5196 0a48
