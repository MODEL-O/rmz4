@ FUN_080de294  entry 0x080de294  size 124
.thumb
.org 0xde294
FUN_080de294:
	push {r4, r5, r6, r7, lr}	@ 000de294 f0b5
.org 0xde296
	adds r4, r0, #0	@ 000de296 041c
.org 0xde298
	adds r5, r4, #0	@ 000de298 251c
.org 0xde29a
	adds r5, #84	@ 000de29a 5435
.org 0xde29c
	ldr r6, [pc, #52]	@ 000de29c 0d4e
.org 0xde29e
	ldrb r0, [r4, #10]	@ 000de29e a07a
.org 0xde2a0
	movs r7, #16	@ 000de2a0 1027
.org 0xde2a2
	adds r3, r7, #0	@ 000de2a2 3b1c
.org 0xde2a4
	ands r3, r0	@ 000de2a4 0340
.org 0xde2a6
	lsls r3, r3, #24	@ 000de2a6 1b06
.org 0xde2a8
	lsrs r3, r3, #24	@ 000de2a8 1b0e
.org 0xde2aa
	adds r0, r5, #0	@ 000de2aa 281c
.org 0xde2ac
	adds r1, r6, #0	@ 000de2ac 311c
.org 0xde2ae
	movs r2, #0	@ 000de2ae 0022
.org 0xde2b0
	bl 0xd4c8c	@ 000de2b0 f6f7ecfc
.org 0xde2b4
	ldrb r0, [r4, #17]	@ 000de2b4 607c
.org 0xde2b6
	cmp r0, #0	@ 000de2b6 0028
.org 0xde2b8
	bne.n 0xde2d8	@ 000de2b8 0ed1
.org 0xde2ba
	adds r1, r6, #0	@ 000de2ba 311c
.org 0xde2bc
	adds r1, #28	@ 000de2bc 1c31
.org 0xde2be
	ldrb r0, [r4, #10]	@ 000de2be a07a
.org 0xde2c0
	adds r3, r7, #0	@ 000de2c0 3b1c
.org 0xde2c2
	ands r3, r0	@ 000de2c2 0340
.org 0xde2c4
	lsls r3, r3, #24	@ 000de2c4 1b06
.org 0xde2c6
	lsrs r3, r3, #24	@ 000de2c6 1b0e
.org 0xde2c8
	adds r0, r5, #0	@ 000de2c8 281c
.org 0xde2ca
	movs r2, #0	@ 000de2ca 0022
.org 0xde2cc
	bl 0xd4c8c	@ 000de2cc f6f7defc
.org 0xde2d0
	b.n 0xde2ee	@ 000de2d0 0de0
.org 0xde2d2
	.byte 0x00	@ 000de2d2 data
.org 0xde2d3
	.byte 0x00	@ 000de2d3 data
.org 0xde2d4
	.byte 0xb8,0x38,0x86,0x08	@ 000de2d4 data
.org 0xde2d8
	adds r1, r6, #0	@ 000de2d8 311c
.org 0xde2da
	adds r1, #84	@ 000de2da 5431
.org 0xde2dc
	ldrb r0, [r4, #10]	@ 000de2dc a07a
.org 0xde2de
	adds r3, r7, #0	@ 000de2de 3b1c
.org 0xde2e0
	ands r3, r0	@ 000de2e0 0340
.org 0xde2e2
	lsls r3, r3, #24	@ 000de2e2 1b06
.org 0xde2e4
	lsrs r3, r3, #24	@ 000de2e4 1b0e
.org 0xde2e6
	adds r0, r5, #0	@ 000de2e6 281c
.org 0xde2e8
	movs r2, #0	@ 000de2e8 0022
.org 0xde2ea
	bl 0xd4c8c	@ 000de2ea f6f7cffc
.org 0xde2ee
	adds r1, r4, #0	@ 000de2ee 211c
.org 0xde2f0
	adds r1, #84	@ 000de2f0 5431
.org 0xde2f2
	movs r0, #1	@ 000de2f2 0120
.org 0xde2f4
	bl 0xd0c88	@ 000de2f4 f2f7c8fc
.org 0xde2f8
	movs r0, #42	@ 000de2f8 2a20
.org 0xde2fa
	bl 0x2b10	@ 000de2fa 24f709fc
.org 0xde2fe
	ldr r1, [pc, #24]	@ 000de2fe 0649
.org 0xde300
	ldrb r0, [r4, #9]	@ 000de300 607a
.org 0xde302
	lsls r0, r0, #2	@ 000de302 8000
.org 0xde304
	adds r0, r0, r1	@ 000de304 4018
.org 0xde306
	movs r1, #4	@ 000de306 0421
.org 0xde308
	str r1, [r4, #12]	@ 000de308 e160
.org 0xde30a
	ldr r0, [r0, #0]	@ 000de30a 0068
.org 0xde30c
	ldr r0, [r0, #16]	@ 000de30c 0069
.org 0xde30e
	str r0, [r4, #20]	@ 000de30e 6061
