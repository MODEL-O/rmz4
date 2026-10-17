@ FUN_080d31d0  entry 0x080d31d0  size 88
.thumb
.org 0xd31d0
FUN_080d31d0:
	push {r4, r5, r6, r7, lr}	@ 000d31d0 f0b5
.org 0xd31d2
	adds r7, r0, #0	@ 000d31d2 071c
.org 0xd31d4
	lsls r1, r1, #24	@ 000d31d4 0906
.org 0xd31d6
	lsrs r4, r1, #24	@ 000d31d6 0c0e
.org 0xd31d8
	lsls r2, r2, #24	@ 000d31d8 1206
.org 0xd31da
	lsrs r5, r2, #24	@ 000d31da 150e
.org 0xd31dc
	lsls r3, r3, #16	@ 000d31dc 1b04
.org 0xd31de
	lsrs r6, r3, #16	@ 000d31de 1e0c
.org 0xd31e0
	ldr r0, [pc, #68]	@ 000d31e0 1148
.org 0xd31e2
	ldr r0, [r0, #0]	@ 000d31e2 0068
.org 0xd31e4
	bl 0x5500	@ 000d31e4 32f78cf9
.org 0xd31e8
	adds r3, r0, #0	@ 000d31e8 031c
.org 0xd31ea
	cmp r3, #0	@ 000d31ea 002b
.org 0xd31ec
	beq.n 0xd3222	@ 000d31ec 19d0
.org 0xd31ee
	adds r1, r3, #0	@ 000d31ee 191c
.org 0xd31f0
	adds r1, #37	@ 000d31f0 2531
.org 0xd31f2
	movs r2, #0	@ 000d31f2 0022
.org 0xd31f4
	movs r0, #1	@ 000d31f4 0120
.org 0xd31f6
	strb r0, [r1, #0]	@ 000d31f6 0870
.org 0xd31f8
	ldr r1, [pc, #48]	@ 000d31f8 0c49
.org 0xd31fa
	movs r0, #8	@ 000d31fa 0820
.org 0xd31fc
	strb r0, [r3, #9]	@ 000d31fc 5872
.org 0xd31fe
	ldr r0, [r1, #32]	@ 000d31fe 086a
.org 0xd3200
	ldr r0, [r0, #0]	@ 000d3200 0068
.org 0xd3202
	str r0, [r3, #20]	@ 000d3202 5861
.org 0xd3204
	movs r0, #0	@ 000d3204 0020
.org 0xd3206
	strh r2, [r3, #32]	@ 000d3206 1a84
.org 0xd3208
	adds r1, r3, #0	@ 000d3208 191c
.org 0xd320a
	adds r1, #34	@ 000d320a 2231
.org 0xd320c
	strb r0, [r1, #0]	@ 000d320c 0870
.org 0xd320e
	ldr r0, [r7, #0]	@ 000d320e 3868
.org 0xd3210
	ldr r1, [r7, #4]	@ 000d3210 7968
.org 0xd3212
	str r0, [r3, #84]	@ 000d3212 5865
.org 0xd3214
	str r1, [r3, #88]	@ 000d3214 9965
.org 0xd3216
	strb r4, [r3, #17]	@ 000d3216 5c74
.org 0xd3218
	adds r0, r3, #0	@ 000d3218 181c
.org 0xd321a
	adds r0, #116	@ 000d321a 7430
.org 0xd321c
	strb r5, [r0, #0]	@ 000d321c 0570
.org 0xd321e
	adds r0, #4	@ 000d321e 0430
.org 0xd3220
	strh r6, [r0, #0]	@ 000d3220 0680
.org 0xd3222
	pop {r4, r5, r6, r7}	@ 000d3222 f0bc
.org 0xd3224
	pop {r0}	@ 000d3224 01bc
.org 0xd3226
	bx r0	@ 000d3226 0047
