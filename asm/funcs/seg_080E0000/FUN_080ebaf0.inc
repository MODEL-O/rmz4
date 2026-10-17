@ FUN_080ebaf0  entry 0x080ebaf0  size 144
.thumb
.org 0xebaf0
FUN_080ebaf0:
	push {r4, r5, lr}	@ 000ebaf0 30b5
.org 0xebaf2
	adds r5, r0, #0	@ 000ebaf2 051c
.org 0xebaf4
	bl 0x1cc9c	@ 000ebaf4 31f7d2f8
.org 0xebaf8
	ldrb r1, [r5, #10]	@ 000ebaf8 a97a
.org 0xebafa
	movs r0, #1	@ 000ebafa 0120
.org 0xebafc
	movs r4, #0	@ 000ebafc 0024
.org 0xebafe
	orrs r0, r1	@ 000ebafe 0843
.org 0xebb00
	movs r1, #2	@ 000ebb00 0221
.org 0xebb02
	orrs r0, r1	@ 000ebb02 0843
.org 0xebb04
	strb r0, [r5, #10]	@ 000ebb04 a872
.org 0xebb06
	ldr r1, [pc, #32]	@ 000ebb06 0849
.org 0xebb08
	adds r0, r5, #0	@ 000ebb08 281c
.org 0xebb0a
	bl 0x1cf00	@ 000ebb0a 31f7f9f9
.org 0xebb0e
	adds r0, r5, #0	@ 000ebb0e 281c
.org 0xebb10
	bl 0x1cff0	@ 000ebb10 31f76efa
.org 0xebb14
	adds r0, r5, #0	@ 000ebb14 281c
.org 0xebb16
	adds r0, #190	@ 000ebb16 be30
.org 0xebb18
	ldrb r2, [r0, #0]	@ 000ebb18 0278
.org 0xebb1a
	cmp r2, #0	@ 000ebb1a 002a
.org 0xebb1c
	beq.n 0xebb2c	@ 000ebb1c 06d0
.org 0xebb1e
	ldrb r0, [r5, #10]	@ 000ebb1e a87a
.org 0xebb20
	movs r1, #16	@ 000ebb20 1021
.org 0xebb22
	orrs r0, r1	@ 000ebb22 0843
.org 0xebb24
	b.n 0xebb32	@ 000ebb24 05e0
.org 0xebb26
	.byte 0x00	@ 000ebb26 data
.org 0xebb27
	.byte 0x00	@ 000ebb27 data
.org 0xebb28
	.byte 0x10,0x1c,0x00,0x00	@ 000ebb28 data
.org 0xebb2c
	ldrb r1, [r5, #10]	@ 000ebb2c a97a
.org 0xebb2e
	movs r0, #239	@ 000ebb2e ef20
.org 0xebb30
	ands r0, r1	@ 000ebb30 0840
.org 0xebb32
	strb r0, [r5, #10]	@ 000ebb32 a872
.org 0xebb34
	movs r4, #1	@ 000ebb34 0124
.org 0xebb36
	adds r1, r4, #0	@ 000ebb36 211c
.org 0xebb38
	ands r1, r2	@ 000ebb38 1140
.org 0xebb3a
	adds r0, r5, #0	@ 000ebb3a 281c
.org 0xebb3c
	adds r0, #76	@ 000ebb3c 4c30
.org 0xebb3e
	movs r3, #0	@ 000ebb3e 0023
.org 0xebb40
	strb r1, [r0, #0]	@ 000ebb40 0170
.org 0xebb42
	movs r0, #74	@ 000ebb42 4a20
.org 0xebb44
	adds r0, r0, r5	@ 000ebb44 4019
.org 0xebb46
	mov ip, r0	@ 000ebb46 8446
.org 0xebb48
	lsls r1, r1, #4	@ 000ebb48 0901
.org 0xebb4a
	ldrb r2, [r0, #0]	@ 000ebb4a 0278
.org 0xebb4c
	movs r0, #17	@ 000ebb4c 1120
.org 0xebb4e
	negs r0, r0	@ 000ebb4e 4042
.org 0xebb50
	ands r0, r2	@ 000ebb50 1040
.org 0xebb52
	orrs r0, r1	@ 000ebb52 0843
.org 0xebb54
	mov r1, ip	@ 000ebb54 6146
.org 0xebb56
	strb r0, [r1, #0]	@ 000ebb56 0870
.org 0xebb58
	str r3, [r5, #96]	@ 000ebb58 2b66
.org 0xebb5a
	adds r1, r5, #0	@ 000ebb5a 291c
.org 0xebb5c
	adds r1, #192	@ 000ebb5c c031
.org 0xebb5e
	movs r0, #128	@ 000ebb5e 8020
.org 0xebb60
	lsls r0, r0, #1	@ 000ebb60 4000
.org 0xebb62
	str r0, [r1, #0]	@ 000ebb62 0860
.org 0xebb64
	adds r0, r5, #0	@ 000ebb64 281c
.org 0xebb66
	adds r0, #191	@ 000ebb66 bf30
.org 0xebb68
	strb r3, [r0, #0]	@ 000ebb68 0370
.org 0xebb6a
	ldr r1, [pc, #28]	@ 000ebb6a 0749
.org 0xebb6c
	ldrb r0, [r5, #9]	@ 000ebb6c 687a
.org 0xebb6e
	lsls r0, r0, #2	@ 000ebb6e 8000
.org 0xebb70
	adds r0, r0, r1	@ 000ebb70 4018
.org 0xebb72
	str r4, [r5, #12]	@ 000ebb72 ec60
.org 0xebb74
	ldr r0, [r0, #0]	@ 000ebb74 0068
.org 0xebb76
	ldr r0, [r0, #4]	@ 000ebb76 4068
.org 0xebb78
	str r0, [r5, #20]	@ 000ebb78 6861
.org 0xebb7a
	adds r0, r5, #0	@ 000ebb7a 281c
.org 0xebb7c
	bl 0xebb8c	@ 000ebb7c 00f006f8
