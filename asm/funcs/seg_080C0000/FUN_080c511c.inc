@ FUN_080c511c  entry 0x080c511c  size 116
.thumb
.org 0xc511c
FUN_080c511c:
	push {r4, r5, lr}	@ 000c511c 30b5
.org 0xc511e
	adds r4, r0, #0	@ 000c511e 041c
.org 0xc5120
	ldrb r0, [r4, #10]	@ 000c5120 a07a
.org 0xc5122
	lsrs r5, r0, #4	@ 000c5122 0509
.org 0xc5124
	movs r0, #1	@ 000c5124 0120
.org 0xc5126
	ands r5, r0	@ 000c5126 0540
.org 0xc5128
	ldrb r0, [r4, #15]	@ 000c5128 e07b
.org 0xc512a
	cmp r0, #0	@ 000c512a 0028
.org 0xc512c
	bne.n 0xc5166	@ 000c512c 1bd1
.org 0xc512e
	adds r0, r4, #0	@ 000c512e 201c
.org 0xc5130
	adds r0, #116	@ 000c5130 7430
.org 0xc5132
	ldr r1, [pc, #92]	@ 000c5132 1749
.org 0xc5134
	bl 0x5784	@ 000c5134 40f726fb
.org 0xc5138
	lsls r0, r5, #1	@ 000c5138 6800
.org 0xc513a
	subs r0, #1	@ 000c513a 0138
.org 0xc513c
	lsls r0, r0, #9	@ 000c513c 4002
.org 0xc513e
	str r0, [r4, #92]	@ 000c513e e065
.org 0xc5140
	adds r1, r4, #0	@ 000c5140 211c
.org 0xc5142
	adds r1, #180	@ 000c5142 b431
.org 0xc5144
	ldr r0, [r1, #0]	@ 000c5144 0868
.org 0xc5146
	cmp r0, #0	@ 000c5146 0028
.org 0xc5148
	bge.n 0xc514e	@ 000c5148 01da
.org 0xc514a
	ldr r2, [pc, #72]	@ 000c514a 124a
.org 0xc514c
	adds r0, r0, r2	@ 000c514c 8018
.org 0xc514e
	asrs r2, r0, #9	@ 000c514e 4212
.org 0xc5150
	strb r2, [r4, #18]	@ 000c5150 a274
.org 0xc5152
	ldr r0, [r1, #0]	@ 000c5152 0868
.org 0xc5154
	ldr r1, [pc, #60]	@ 000c5154 0f49
.org 0xc5156
	ands r0, r1	@ 000c5156 0840
.org 0xc5158
	cmp r0, #0	@ 000c5158 0028
.org 0xc515a
	beq.n 0xc5160	@ 000c515a 01d0
.org 0xc515c
	adds r0, r2, #1	@ 000c515c 501c
.org 0xc515e
	strb r0, [r4, #18]	@ 000c515e a074
.org 0xc5160
	ldrb r0, [r4, #15]	@ 000c5160 e07b
.org 0xc5162
	adds r0, #1	@ 000c5162 0130
.org 0xc5164
	strb r0, [r4, #15]	@ 000c5164 e073
.org 0xc5166
	adds r0, r4, #0	@ 000c5166 201c
.org 0xc5168
	bl 0x1cff0	@ 000c5168 57f742ff
.org 0xc516c
	ldr r0, [r4, #84]	@ 000c516c 606d
.org 0xc516e
	ldr r1, [r4, #92]	@ 000c516e e16d
.org 0xc5170
	adds r0, r0, r1	@ 000c5170 4018
.org 0xc5172
	str r0, [r4, #84]	@ 000c5172 6065
.org 0xc5174
	ldrb r0, [r4, #18]	@ 000c5174 a07c
.org 0xc5176
	subs r0, #1	@ 000c5176 0138
.org 0xc5178
	strb r0, [r4, #18]	@ 000c5178 a074
.org 0xc517a
	lsls r0, r0, #24	@ 000c517a 0006
.org 0xc517c
	lsrs r1, r0, #24	@ 000c517c 010e
.org 0xc517e
	cmp r1, #0	@ 000c517e 0029
.org 0xc5180
	bne.n 0xc518a	@ 000c5180 03d1
.org 0xc5182
	movs r0, #2	@ 000c5182 0220
.org 0xc5184
	strb r0, [r4, #13]	@ 000c5184 6073
.org 0xc5186
	strb r1, [r4, #14]	@ 000c5186 a173
.org 0xc5188
	strb r1, [r4, #15]	@ 000c5188 e173
.org 0xc518a
	pop {r4, r5}	@ 000c518a 30bc
.org 0xc518c
	pop {r0}	@ 000c518c 01bc
.org 0xc518e
	bx r0	@ 000c518e 0047
