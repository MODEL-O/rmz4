@ FUN_0811f168  entry 0x0811f168  size 134
.thumb
.org 0x11f168
FUN_0811f168:
	push {r4, r5, r6, r7, lr}	@ 0011f168 f0b5
.org 0x11f16a
	adds r7, r0, #0	@ 0011f16a 071c
.org 0x11f16c
	ldr r1, [pc, #108]	@ 0011f16c 1b49
.org 0x11f16e
	adds r0, r7, r1	@ 0011f16e 7818
.org 0x11f170
	ldr r5, [r0, #0]	@ 0011f170 0568
.org 0x11f172
	movs r0, #65	@ 0011f172 4120
.org 0x11f174
	bl 0x2624	@ 0011f174 e3f656fa
.org 0x11f178
	adds r6, r5, #0	@ 0011f178 2e1c
.org 0x11f17a
	adds r6, #164	@ 0011f17a a436
.org 0x11f17c
	movs r0, #0	@ 0011f17c 0020
.org 0x11f17e
	ldrsh r4, [r6, r0]	@ 0011f17e 345e
.org 0x11f180
	adds r0, r5, #0	@ 0011f180 281c
.org 0x11f182
	bl 0x2b61c	@ 0011f182 0cf74bfa
.org 0x11f186
	lsls r0, r0, #24	@ 0011f186 0006
.org 0x11f188
	lsrs r0, r0, #24	@ 0011f188 000e
.org 0x11f18a
	cmp r4, r0	@ 0011f18a 8442
.org 0x11f18c
	ble.n 0x11f19a	@ 0011f18c 05dd
.org 0x11f18e
	adds r0, r5, #0	@ 0011f18e 281c
.org 0x11f190
	bl 0x2b61c	@ 0011f190 0cf744fa
.org 0x11f194
	lsls r0, r0, #24	@ 0011f194 0006
.org 0x11f196
	lsrs r0, r0, #24	@ 0011f196 000e
.org 0x11f198
	strh r0, [r6, #0]	@ 0011f198 3080
.org 0x11f19a
	ldr r2, [pc, #68]	@ 0011f19a 114a
.org 0x11f19c
	ldrh r1, [r2, #0]	@ 0011f19c 1188
.org 0x11f19e
	ldr r0, [pc, #68]	@ 0011f19e 1148
.org 0x11f1a0
	ands r0, r1	@ 0011f1a0 0840
.org 0x11f1a2
	movs r1, #0	@ 0011f1a2 0021
.org 0x11f1a4
	strh r0, [r2, #0]	@ 0011f1a4 1080
.org 0x11f1a6
	ldr r0, [pc, #64]	@ 0011f1a6 1048
.org 0x11f1a8
	strh r1, [r0, #0]	@ 0011f1a8 0180
.org 0x11f1aa
	ldr r1, [pc, #64]	@ 0011f1aa 1049
.org 0x11f1ac
	adds r3, r7, r1	@ 0011f1ac 7b18
.org 0x11f1ae
	movs r0, #1	@ 0011f1ae 0120
.org 0x11f1b0
	strb r0, [r3, #4]	@ 0011f1b0 1871
.org 0x11f1b2
	adds r0, r5, #0	@ 0011f1b2 281c
.org 0x11f1b4
	adds r0, #241	@ 0011f1b4 f130
.org 0x11f1b6
	ldrb r0, [r0, #0]	@ 0011f1b6 0078
.org 0x11f1b8
	adds r1, r5, #0	@ 0011f1b8 291c
.org 0x11f1ba
	adds r1, #242	@ 0011f1ba f231
.org 0x11f1bc
	ldrb r1, [r1, #0]	@ 0011f1bc 0978
.org 0x11f1be
	adds r2, r5, #0	@ 0011f1be 2a1c
.org 0x11f1c0
	adds r2, #243	@ 0011f1c0 f332
.org 0x11f1c2
	adds r0, r0, r1	@ 0011f1c2 4018
.org 0x11f1c4
	ldrb r2, [r2, #0]	@ 0011f1c4 1278
.org 0x11f1c6
	adds r0, r0, r2	@ 0011f1c6 8018
.org 0x11f1c8
	cmp r0, #0	@ 0011f1c8 0028
.org 0x11f1ca
	beq.n 0x11f1f0	@ 0011f1ca 11d0
.org 0x11f1cc
	ldrb r0, [r3, #5]	@ 0011f1cc 5879
.org 0x11f1ce
	cmp r0, #0	@ 0011f1ce 0028
.org 0x11f1d0
	bne.n 0x11f1f6	@ 0011f1d0 11d1
.org 0x11f1d2
	adds r0, r5, #0	@ 0011f1d2 281c
.org 0x11f1d4
	bl 0x109320	@ 0011f1d4 eaf7a4f8
.org 0x11f1d8
	b.n 0x11f1f6	@ 0011f1d8 0de0
.org 0x11f1da
	.byte 0x00	@ 0011f1da data
.org 0x11f1db
	.byte 0x00	@ 0011f1db data
.org 0x11f1dc
	.byte 0xa8,0x63,0x00,0x00	@ 0011f1dc data
.org 0x11f1e0
	.byte 0x50,0x0a,0x00,0x02	@ 0011f1e0 data
.org 0x11f1e4
	.byte 0xff,0xdf,0x00,0x00	@ 0011f1e4 data
.org 0x11f1e8
	.byte 0xc0,0x2a,0x00,0x03	@ 0011f1e8 data
.org 0x11f1ec
	.byte 0xcc,0x0d,0x00,0x00	@ 0011f1ec data
