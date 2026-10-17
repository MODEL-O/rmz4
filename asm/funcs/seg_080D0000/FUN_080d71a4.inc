@ FUN_080d71a4  entry 0x080d71a4  size 162
.thumb
.org 0xd71a4
FUN_080d71a4:
	push {r4, r5, r6, r7, lr}	@ 000d71a4 f0b5
.org 0xd71a6
	adds r4, r0, #0	@ 000d71a6 041c
.org 0xd71a8
	adds r5, r4, #0	@ 000d71a8 251c
.org 0xd71aa
	adds r5, #84	@ 000d71aa 5435
.org 0xd71ac
	ldr r6, [pc, #28]	@ 000d71ac 074e
.org 0xd71ae
	ldrb r1, [r4, #10]	@ 000d71ae a17a
.org 0xd71b0
	movs r2, #16	@ 000d71b0 1022
.org 0xd71b2
	adds r0, r2, #0	@ 000d71b2 101c
.org 0xd71b4
	ands r0, r1	@ 000d71b4 0840
.org 0xd71b6
	lsls r0, r0, #24	@ 000d71b6 0006
.org 0xd71b8
	lsrs r0, r0, #24	@ 000d71b8 000e
.org 0xd71ba
	negs r1, r0	@ 000d71ba 4142
.org 0xd71bc
	asrs r1, r1, #31	@ 000d71bc c917
.org 0xd71be
	ands r1, r2	@ 000d71be 1140
.org 0xd71c0
	cmp r0, #0	@ 000d71c0 0028
.org 0xd71c2
	beq.n 0xd71d0	@ 000d71c2 05d0
.org 0xd71c4
	movs r3, #1	@ 000d71c4 0123
.org 0xd71c6
	orrs r3, r1	@ 000d71c6 0b43
.org 0xd71c8
	b.n 0xd71d4	@ 000d71c8 04e0
.org 0xd71ca
	.byte 0x00	@ 000d71ca data
.org 0xd71cb
	.byte 0x00	@ 000d71cb data
.org 0xd71cc
	.byte 0x54,0xea,0x85,0x08	@ 000d71cc data
.org 0xd71d0
	lsls r0, r1, #24	@ 000d71d0 0806
.org 0xd71d2
	lsrs r3, r0, #24	@ 000d71d2 030e
.org 0xd71d4
	adds r0, r5, #0	@ 000d71d4 281c
.org 0xd71d6
	adds r1, r6, #0	@ 000d71d6 311c
.org 0xd71d8
	movs r2, #0	@ 000d71d8 0022
.org 0xd71da
	bl 0xd4c8c	@ 000d71da fdf757fd
.org 0xd71de
	adds r6, r4, #0	@ 000d71de 261c
.org 0xd71e0
	adds r6, #84	@ 000d71e0 5436
.org 0xd71e2
	ldr r7, [pc, #32]	@ 000d71e2 084f
.org 0xd71e4
	ldrb r1, [r4, #10]	@ 000d71e4 a17a
.org 0xd71e6
	movs r2, #16	@ 000d71e6 1022
.org 0xd71e8
	adds r0, r2, #0	@ 000d71e8 101c
.org 0xd71ea
	ands r0, r1	@ 000d71ea 0840
.org 0xd71ec
	lsls r0, r0, #24	@ 000d71ec 0006
.org 0xd71ee
	lsrs r0, r0, #24	@ 000d71ee 000e
.org 0xd71f0
	negs r1, r0	@ 000d71f0 4142
.org 0xd71f2
	asrs r1, r1, #31	@ 000d71f2 c917
.org 0xd71f4
	ands r1, r2	@ 000d71f4 1140
.org 0xd71f6
	adds r5, r6, #0	@ 000d71f6 351c
.org 0xd71f8
	cmp r0, #0	@ 000d71f8 0028
.org 0xd71fa
	beq.n 0xd7208	@ 000d71fa 05d0
.org 0xd71fc
	movs r3, #1	@ 000d71fc 0123
.org 0xd71fe
	orrs r3, r1	@ 000d71fe 0b43
.org 0xd7200
	b.n 0xd720c	@ 000d7200 04e0
.org 0xd7202
	.byte 0x00	@ 000d7202 data
.org 0xd7203
	.byte 0x00	@ 000d7203 data
.org 0xd7204
	.byte 0x70,0xea,0x85,0x08	@ 000d7204 data
.org 0xd7208
	lsls r0, r1, #24	@ 000d7208 0806
.org 0xd720a
	lsrs r3, r0, #24	@ 000d720a 030e
.org 0xd720c
	adds r0, r6, #0	@ 000d720c 301c
.org 0xd720e
	adds r1, r7, #0	@ 000d720e 391c
.org 0xd7210
	movs r2, #0	@ 000d7210 0022
.org 0xd7212
	bl 0xd4c8c	@ 000d7212 fdf73bfd
.org 0xd7216
	movs r0, #1	@ 000d7216 0120
.org 0xd7218
	adds r1, r5, #0	@ 000d7218 291c
.org 0xd721a
	bl 0xd0c88	@ 000d721a f9f735fd
.org 0xd721e
	ldrb r1, [r4, #10]	@ 000d721e a17a
.org 0xd7220
	movs r0, #16	@ 000d7220 1020
.org 0xd7222
	ands r0, r1	@ 000d7222 0840
.org 0xd7224
	cmp r0, #0	@ 000d7224 0028
.org 0xd7226
	beq.n 0xd7232	@ 000d7226 04d0
.org 0xd7228
	movs r0, #2	@ 000d7228 0220
.org 0xd722a
	adds r1, r5, #0	@ 000d722a 291c
.org 0xd722c
	bl 0xd0c88	@ 000d722c f9f72cfd
.org 0xd7230
	b.n 0xd723a	@ 000d7230 03e0
.org 0xd7232
	movs r0, #2	@ 000d7232 0220
.org 0xd7234
	adds r1, r5, #0	@ 000d7234 291c
.org 0xd7236
	bl 0xd0c88	@ 000d7236 f9f727fd
.org 0xd723a
	ldr r1, [pc, #24]	@ 000d723a 0649
.org 0xd723c
	ldrb r0, [r4, #9]	@ 000d723c 607a
.org 0xd723e
	lsls r0, r0, #2	@ 000d723e 8000
.org 0xd7240
	adds r0, r0, r1	@ 000d7240 4018
.org 0xd7242
	movs r1, #4	@ 000d7242 0421
.org 0xd7244
	str r1, [r4, #12]	@ 000d7244 e160
