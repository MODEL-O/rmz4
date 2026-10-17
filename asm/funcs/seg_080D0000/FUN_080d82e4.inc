@ FUN_080d82e4  entry 0x080d82e4  size 78
.thumb
.org 0xd82e4
FUN_080d82e4:
	push {r4, r5, r6, lr}	@ 000d82e4 70b5
.org 0xd82e6
	adds r6, r0, #0	@ 000d82e6 061c
.org 0xd82e8
	lsls r1, r1, #24	@ 000d82e8 0906
.org 0xd82ea
	lsrs r5, r1, #24	@ 000d82ea 0d0e
.org 0xd82ec
	lsls r2, r2, #24	@ 000d82ec 1206
.org 0xd82ee
	lsrs r4, r2, #24	@ 000d82ee 140e
.org 0xd82f0
	ldr r0, [pc, #64]	@ 000d82f0 1048
.org 0xd82f2
	ldr r0, [r0, #0]	@ 000d82f2 0068
.org 0xd82f4
	bl 0x5500	@ 000d82f4 2df704f9
.org 0xd82f8
	adds r3, r0, #0	@ 000d82f8 031c
.org 0xd82fa
	cmp r3, #0	@ 000d82fa 002b
.org 0xd82fc
	beq.n 0xd832a	@ 000d82fc 15d0
.org 0xd82fe
	adds r1, r3, #0	@ 000d82fe 191c
.org 0xd8300
	adds r1, #37	@ 000d8300 2531
.org 0xd8302
	movs r2, #0	@ 000d8302 0022
.org 0xd8304
	movs r0, #1	@ 000d8304 0120
.org 0xd8306
	strb r0, [r1, #0]	@ 000d8306 0870
.org 0xd8308
	ldr r1, [pc, #44]	@ 000d8308 0b49
.org 0xd830a
	movs r0, #25	@ 000d830a 1920
.org 0xd830c
	strb r0, [r3, #9]	@ 000d830c 5872
.org 0xd830e
	ldr r0, [r1, #100]	@ 000d830e 486e
.org 0xd8310
	ldr r0, [r0, #0]	@ 000d8310 0068
.org 0xd8312
	str r0, [r3, #20]	@ 000d8312 5861
.org 0xd8314
	movs r0, #0	@ 000d8314 0020
.org 0xd8316
	strh r2, [r3, #32]	@ 000d8316 1a84
.org 0xd8318
	adds r1, r3, #0	@ 000d8318 191c
.org 0xd831a
	adds r1, #34	@ 000d831a 2231
.org 0xd831c
	strb r0, [r1, #0]	@ 000d831c 0870
.org 0xd831e
	ldr r0, [r6, #0]	@ 000d831e 3068
.org 0xd8320
	ldr r1, [r6, #4]	@ 000d8320 7168
.org 0xd8322
	str r0, [r3, #84]	@ 000d8322 5865
.org 0xd8324
	str r1, [r3, #88]	@ 000d8324 9965
.org 0xd8326
	strb r5, [r3, #16]	@ 000d8326 1d74
.org 0xd8328
	strb r4, [r3, #17]	@ 000d8328 5c74
.org 0xd832a
	adds r0, r3, #0	@ 000d832a 181c
.org 0xd832c
	pop {r4, r5, r6}	@ 000d832c 70bc
.org 0xd832e
	pop {r1}	@ 000d832e 02bc
.org 0xd8330
	bx r1	@ 000d8330 0847
