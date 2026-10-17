@ FUN_08101158  entry 0x08101158  size 206
.thumb
.org 0x101158
FUN_08101158:
	push {r4, r5, r6, r7, lr}	@ 00101158 f0b5
.org 0x10115a
	mov r7, r8	@ 0010115a 4746
.org 0x10115c
	push {r7}	@ 0010115c 80b4
.org 0x10115e
	adds r7, r0, #0	@ 0010115e 071c
.org 0x101160
	ldrb r4, [r7, #14]	@ 00101160 bc7b
.org 0x101162
	cmp r4, #1	@ 00101162 012c
.org 0x101164
	beq.n 0x10117a	@ 00101164 09d0
.org 0x101166
	cmp r4, #1	@ 00101166 012c
.org 0x101168
	bgt.n 0x101170	@ 00101168 02dc
.org 0x10116a
	cmp r4, #0	@ 0010116a 002c
.org 0x10116c
	beq.n 0x101176	@ 0010116c 03d0
.org 0x10116e
	b.n 0x101236	@ 0010116e 62e0
.org 0x101170
	cmp r4, #2	@ 00101170 022c
.org 0x101172
	beq.n 0x101214	@ 00101172 4fd0
.org 0x101174
	b.n 0x101236	@ 00101174 5fe0
.org 0x101176
	movs r0, #1	@ 00101176 0120
.org 0x101178
	strb r0, [r7, #14]	@ 00101178 b873
.org 0x10117a
	adds r0, r7, #0	@ 0010117a 381c
.org 0x10117c
	bl 0x1cff0	@ 0010117c 1bf738ff
.org 0x101180
	adds r0, r7, #0	@ 00101180 381c
.org 0x101182
	adds r0, #115	@ 00101182 7330
.org 0x101184
	ldrb r0, [r0, #0]	@ 00101184 0078
.org 0x101186
	cmp r0, #3	@ 00101186 0328
.org 0x101188
	bne.n 0x101236	@ 00101188 55d1
.org 0x10118a
	ldr r2, [pc, #112]	@ 0010118a 1c4a
.org 0x10118c
	ldrb r1, [r2, #20]	@ 0010118c 117d
.org 0x10118e
	movs r0, #128	@ 0010118e 8020
.org 0x101190
	orrs r0, r1	@ 00101190 0843
.org 0x101192
	strb r0, [r2, #20]	@ 00101192 1075
.org 0x101194
	movs r0, #184	@ 00101194 b820
.org 0x101196
	adds r0, r0, r7	@ 00101196 c019
.org 0x101198
	mov r8, r0	@ 00101198 8046
.org 0x10119a
	movs r5, #128	@ 0010119a 8025
.org 0x10119c
	strb r5, [r0, #0]	@ 0010119c 0570
.org 0x10119e
	lsls r6, r5, #2	@ 0010119e ae00
.org 0x1011a0
	adds r4, r6, #0	@ 001011a0 341c
.org 0x1011a2
	adds r4, #128	@ 001011a2 8034
.org 0x1011a4
	lsls r4, r4, #2	@ 001011a4 a400
.org 0x1011a6
	ldr r0, [pc, #88]	@ 001011a6 1648
.org 0x1011a8
	adds r0, r4, r0	@ 001011a8 2018
.org 0x1011aa
	ldr r1, [pc, #88]	@ 001011aa 1649
.org 0x1011ac
	lsls r5, r5, #1	@ 001011ac 6d00
.org 0x1011ae
	adds r1, r1, r5	@ 001011ae 4919
.org 0x1011b0
	ldrh r1, [r1, #0]	@ 001011b0 0988
.org 0x1011b2
	ldrh r2, [r0, #6]	@ 001011b2 c288
.org 0x1011b4
	lsrs r2, r2, #6	@ 001011b4 9209
.org 0x1011b6
	subs r1, r1, r2	@ 001011b6 891a
.org 0x1011b8
	lsls r1, r1, #5	@ 001011b8 4901
.org 0x1011ba
	movs r2, #128	@ 001011ba 8022
.org 0x1011bc
	lsls r2, r2, #9	@ 001011bc 5202
.org 0x1011be
	adds r1, r1, r2	@ 001011be 8918
.org 0x1011c0
	bl 0x1ea4	@ 001011c0 00f770fe
.org 0x1011c4
	ldr r0, [pc, #64]	@ 001011c4 1048
.org 0x1011c6
	adds r4, r4, r0	@ 001011c6 2418
.org 0x1011c8
	ldr r0, [pc, #64]	@ 001011c8 1048
.org 0x1011ca
	adds r0, r0, r5	@ 001011ca 4019
.org 0x1011cc
	ldrh r1, [r0, #0]	@ 001011cc 0188
.org 0x1011ce
	ldrb r0, [r4, #7]	@ 001011ce e079
.org 0x1011d0
	subs r1, r1, r0	@ 001011d0 091a
.org 0x1011d2
	lsls r1, r1, #5	@ 001011d2 4901
.org 0x1011d4
	adds r1, r1, r6	@ 001011d4 8919
.org 0x1011d6
	adds r0, r4, #0	@ 001011d6 201c
.org 0x1011d8
	bl 0x2208	@ 001011d8 01f716f8
.org 0x1011dc
	mov r0, r8	@ 001011dc 4046
.org 0x1011de
	ldrb r1, [r0, #0]	@ 001011de 0178
.org 0x1011e0
	lsls r1, r1, #8	@ 001011e0 0902
.org 0x1011e2
	adds r0, r7, #0	@ 001011e2 381c
.org 0x1011e4
	bl 0x1cf00	@ 001011e4 1bf78cfe
.org 0x1011e8
	adds r0, r7, #0	@ 001011e8 381c
.org 0x1011ea
	bl 0x1cff0	@ 001011ea 1bf701ff
.org 0x1011ee
	ldr r0, [pc, #32]	@ 001011ee 0848
.org 0x1011f0
	bl 0xe9590	@ 001011f0 e8f7cef9
.org 0x1011f4
	ldrb r0, [r7, #14]	@ 001011f4 b87b
.org 0x1011f6
	adds r0, #1	@ 001011f6 0130
.org 0x1011f8
	b.n 0x101234	@ 001011f8 1ce0
.org 0x1011fa
	.byte 0x00	@ 001011fa data
.org 0x1011fb
	.byte 0x00	@ 001011fb data
.org 0x1011fc
	.byte 0xb0,0xe8,0x02,0x02	@ 001011fc data
.org 0x101200
	.byte 0x00,0x40,0xc4,0x08	@ 00101200 data
.org 0x101204
	.byte 0x40,0xe0,0x02,0x02	@ 00101204 data
.org 0x101208
	.byte 0x0c,0x40,0xc4,0x08	@ 00101208 data
.org 0x10120c
	.byte 0x40,0xde,0x02,0x02	@ 0010120c data
.org 0x101210
	.byte 0x95,0x12,0x10,0x08	@ 00101210 data
.org 0x101214
	adds r0, r7, #0	@ 00101214 381c
.org 0x101216
	bl 0x1cff0	@ 00101216 1bf7ebfe
.org 0x10121a
	ldrb r0, [r7, #16]	@ 0010121a 387c
.org 0x10121c
	ands r4, r0	@ 0010121c 0440
.org 0x10121e
	cmp r4, #0	@ 0010121e 002c
.org 0x101220
	beq.n 0x101236	@ 00101220 09d0
.org 0x101222
	ldr r0, [pc, #28]	@ 00101222 0748
.org 0x101224
	ldrb r1, [r0, #4]	@ 00101224 0179
