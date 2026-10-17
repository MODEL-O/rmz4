@ FUN_080b0124  entry 0x080b0124  size 192
.thumb
.org 0xb0124
FUN_080b0124:
	push {r4, r5, r6, r7, lr}	@ 000b0124 f0b5
.org 0xb0126
	mov r7, r8	@ 000b0126 4746
.org 0xb0128
	push {r7}	@ 000b0128 80b4
.org 0xb012a
	adds r7, r0, #0	@ 000b012a 071c
.org 0xb012c
	ldr r0, [r7, #40]	@ 000b012c b86a
.org 0xb012e
	cmp r0, #0	@ 000b012e 0028
.org 0xb0130
	bne.n 0xb01e6	@ 000b0130 59d1
.org 0xb0132
	adds r0, r7, #0	@ 000b0132 381c
.org 0xb0134
	adds r0, #140	@ 000b0134 8c30
.org 0xb0136
	ldr r0, [r0, #0]	@ 000b0136 0068
.org 0xb0138
	movs r1, #1	@ 000b0138 0121
.org 0xb013a
	ands r0, r1	@ 000b013a 0840
.org 0xb013c
	cmp r0, #0	@ 000b013c 0028
.org 0xb013e
	beq.n 0xb01e6	@ 000b013e 52d0
.org 0xb0140
	ldrb r0, [r7, #17]	@ 000b0140 787c
.org 0xb0142
	cmp r0, #0	@ 000b0142 0028
.org 0xb0144
	bne.n 0xb01bc	@ 000b0144 3ad1
.org 0xb0146
	adds r0, r7, #0	@ 000b0146 381c
.org 0xb0148
	adds r0, #151	@ 000b0148 9730
.org 0xb014a
	ldrb r1, [r0, #0]	@ 000b014a 0178
.org 0xb014c
	movs r0, #240	@ 000b014c f020
.org 0xb014e
	ands r0, r1	@ 000b014e 0840
.org 0xb0150
	cmp r0, #32	@ 000b0150 2028
.org 0xb0152
	bne.n 0xb01bc	@ 000b0152 33d1
.org 0xb0154
	ldr r0, [r7, #84]	@ 000b0154 786d
.org 0xb0156
	ldr r4, [pc, #88]	@ 000b0156 164c
.org 0xb0158
	ldr r1, [r4, #0]	@ 000b0158 2168
.org 0xb015a
	ldr r2, [pc, #88]	@ 000b015a 164a
.org 0xb015c
	mov r8, r2	@ 000b015c 9046
.org 0xb015e
	mov r2, r8	@ 000b015e 4246
.org 0xb0160
	muls r2, r1	@ 000b0160 4a43
.org 0xb0162
	ldr r6, [pc, #84]	@ 000b0162 154e
.org 0xb0164
	adds r2, r2, r6	@ 000b0164 9219
.org 0xb0166
	lsls r2, r2, #1	@ 000b0166 5200
.org 0xb0168
	lsrs r1, r2, #1	@ 000b0168 5108
.org 0xb016a
	str r1, [r4, #0]	@ 000b016a 2160
.org 0xb016c
	lsrs r2, r2, #17	@ 000b016c 520c
.org 0xb016e
	movs r5, #15	@ 000b016e 0f25
.org 0xb0170
	ands r2, r5	@ 000b0170 2a40
.org 0xb0172
	lsls r2, r2, #8	@ 000b0172 1202
.org 0xb0174
	ldr r1, [r7, #88]	@ 000b0174 b96d
.org 0xb0176
	adds r1, r1, r2	@ 000b0176 8918
.org 0xb0178
	movs r2, #1	@ 000b0178 0122
.org 0xb017a
	bl 0xd0ff4	@ 000b017a 20f03bff
.org 0xb017e
	ldr r0, [r7, #84]	@ 000b017e 786d
.org 0xb0180
	ldr r1, [r7, #88]	@ 000b0180 b96d
.org 0xb0182
	movs r2, #160	@ 000b0182 a022
.org 0xb0184
	lsls r2, r2, #3	@ 000b0184 d200
.org 0xb0186
	adds r1, r1, r2	@ 000b0186 8918
.org 0xb0188
	movs r2, #1	@ 000b0188 0122
.org 0xb018a
	bl 0xd0ff4	@ 000b018a 20f033ff
.org 0xb018e
	ldr r0, [r4, #0]	@ 000b018e 2068
.org 0xb0190
	mov r1, r8	@ 000b0190 4146
.org 0xb0192
	muls r1, r0	@ 000b0192 4143
.org 0xb0194
	adds r1, r1, r6	@ 000b0194 8919
.org 0xb0196
	lsls r1, r1, #1	@ 000b0196 4900
.org 0xb0198
	lsrs r0, r1, #1	@ 000b0198 4808
.org 0xb019a
	str r0, [r4, #0]	@ 000b019a 2060
.org 0xb019c
	lsrs r1, r1, #17	@ 000b019c 490c
.org 0xb019e
	ands r1, r5	@ 000b019e 2940
.org 0xb01a0
	lsls r1, r1, #8	@ 000b01a0 0902
.org 0xb01a2
	ldr r0, [r7, #84]	@ 000b01a2 786d
.org 0xb01a4
	adds r0, r0, r1	@ 000b01a4 4018
.org 0xb01a6
	ldr r1, [r7, #88]	@ 000b01a6 b96d
.org 0xb01a8
	movs r2, #0	@ 000b01a8 0022
.org 0xb01aa
	bl 0xd0ff4	@ 000b01aa 20f023ff
.org 0xb01ae
	b.n 0xb01e6	@ 000b01ae 1ae0
.org 0xb01b0
	.byte 0x38,0xdc,0x02,0x02	@ 000b01b0 data
.org 0xb01b4
	.byte 0xfd,0x43,0x03,0x00	@ 000b01b4 data
.org 0xb01b8
	.byte 0xc3,0x9e,0x26,0x00	@ 000b01b8 data
.org 0xb01bc
	ldr r2, [pc, #48]	@ 000b01bc 0c4a
.org 0xb01be
	movs r0, #0	@ 000b01be 0020
.org 0xb01c0
	adds r1, r7, #0	@ 000b01c0 391c
.org 0xb01c2
	bl 0x2adac	@ 000b01c2 7af7f3fd
.org 0xb01c6
	str r0, [r7, #40]	@ 000b01c6 b862
.org 0xb01c8
	cmp r0, #0	@ 000b01c8 0028
.org 0xb01ca
	beq.n 0xb01e6	@ 000b01ca 0cd0
.org 0xb01cc
	adds r0, r7, #0	@ 000b01cc 381c
.org 0xb01ce
	adds r0, #116	@ 000b01ce 7430
.org 0xb01d0
	ldr r1, [pc, #32]	@ 000b01d0 0849
.org 0xb01d2
	bl 0x5784	@ 000b01d2 55f7d7fa
.org 0xb01d6
	ldr r1, [pc, #32]	@ 000b01d6 0849
.org 0xb01d8
	adds r0, r7, #0	@ 000b01d8 381c
.org 0xb01da
	bl 0x1cf00	@ 000b01da 6cf791fe
.org 0xb01de
	ldr r0, [r7, #44]	@ 000b01de f86a
.org 0xb01e0
	ldr r1, [pc, #24]	@ 000b01e0 0649
.org 0xb01e2
	bl 0x1cf00	@ 000b01e2 6cf78dfe
