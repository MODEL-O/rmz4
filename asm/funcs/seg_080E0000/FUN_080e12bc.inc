@ FUN_080e12bc  entry 0x080e12bc  size 76
.thumb
.org 0xe12bc
FUN_080e12bc:
	push {r4, r5, r6, lr}	@ 000e12bc 70b5
.org 0xe12be
	adds r5, r0, #0	@ 000e12be 051c
.org 0xe12c0
	adds r6, r2, #0	@ 000e12c0 161c
.org 0xe12c2
	lsls r1, r1, #24	@ 000e12c2 0906
.org 0xe12c4
	lsrs r4, r1, #24	@ 000e12c4 0c0e
.org 0xe12c6
	ldr r0, [pc, #64]	@ 000e12c6 1048
.org 0xe12c8
	ldr r0, [r0, #0]	@ 000e12c8 0068
.org 0xe12ca
	bl 0x5500	@ 000e12ca 24f719f9
.org 0xe12ce
	adds r3, r0, #0	@ 000e12ce 031c
.org 0xe12d0
	cmp r3, #0	@ 000e12d0 002b
.org 0xe12d2
	beq.n 0xe1302	@ 000e12d2 16d0
.org 0xe12d4
	adds r1, r3, #0	@ 000e12d4 191c
.org 0xe12d6
	adds r1, #37	@ 000e12d6 2531
.org 0xe12d8
	movs r2, #0	@ 000e12d8 0022
.org 0xe12da
	movs r0, #1	@ 000e12da 0120
.org 0xe12dc
	strb r0, [r1, #0]	@ 000e12dc 0870
.org 0xe12de
	ldr r0, [pc, #44]	@ 000e12de 0b48
.org 0xe12e0
	movs r1, #60	@ 000e12e0 3c21
.org 0xe12e2
	strb r1, [r3, #9]	@ 000e12e2 5972
.org 0xe12e4
	adds r0, #240	@ 000e12e4 f030
.org 0xe12e6
	ldr r0, [r0, #0]	@ 000e12e6 0068
.org 0xe12e8
	ldr r0, [r0, #0]	@ 000e12e8 0068
.org 0xe12ea
	str r0, [r3, #20]	@ 000e12ea 5861
.org 0xe12ec
	movs r0, #0	@ 000e12ec 0020
.org 0xe12ee
	strh r2, [r3, #32]	@ 000e12ee 1a84
.org 0xe12f0
	adds r1, r3, #0	@ 000e12f0 191c
.org 0xe12f2
	adds r1, #34	@ 000e12f2 2231
.org 0xe12f4
	strb r0, [r1, #0]	@ 000e12f4 0870
.org 0xe12f6
	ldr r0, [r5, #0]	@ 000e12f6 2868
.org 0xe12f8
	ldr r1, [r5, #4]	@ 000e12f8 6968
.org 0xe12fa
	str r0, [r3, #84]	@ 000e12fa 5865
.org 0xe12fc
	str r1, [r3, #88]	@ 000e12fc 9965
.org 0xe12fe
	strb r4, [r3, #16]	@ 000e12fe 1c74
.org 0xe1300
	str r6, [r3, #116]	@ 000e1300 5e67
.org 0xe1302
	pop {r4, r5, r6}	@ 000e1302 70bc
.org 0xe1304
	pop {r0}	@ 000e1304 01bc
.org 0xe1306
	bx r0	@ 000e1306 0047
