@ FUN_080cd2dc  entry 0x080cd2dc  size 80
.thumb
.org 0xcd2dc
FUN_080cd2dc:
	push {r4, r5, r6, lr}	@ 000cd2dc 70b5
.org 0xcd2de
	adds r6, r0, #0	@ 000cd2de 061c
.org 0xcd2e0
	lsls r1, r1, #24	@ 000cd2e0 0906
.org 0xcd2e2
	lsrs r5, r1, #24	@ 000cd2e2 0d0e
.org 0xcd2e4
	lsls r2, r2, #24	@ 000cd2e4 1206
.org 0xcd2e6
	lsrs r4, r2, #24	@ 000cd2e6 140e
.org 0xcd2e8
	ldr r0, [pc, #64]	@ 000cd2e8 1048
.org 0xcd2ea
	ldr r0, [r0, #0]	@ 000cd2ea 0068
.org 0xcd2ec
	bl 0x5500	@ 000cd2ec 38f708f9
.org 0xcd2f0
	adds r3, r0, #0	@ 000cd2f0 031c
.org 0xcd2f2
	cmp r3, #0	@ 000cd2f2 002b
.org 0xcd2f4
	beq.n 0xcd324	@ 000cd2f4 16d0
.org 0xcd2f6
	adds r1, r3, #0	@ 000cd2f6 191c
.org 0xcd2f8
	adds r1, #37	@ 000cd2f8 2531
.org 0xcd2fa
	movs r2, #0	@ 000cd2fa 0022
.org 0xcd2fc
	movs r0, #8	@ 000cd2fc 0820
.org 0xcd2fe
	strb r0, [r1, #0]	@ 000cd2fe 0870
.org 0xcd300
	ldr r0, [pc, #44]	@ 000cd300 0b48
.org 0xcd302
	movs r1, #47	@ 000cd302 2f21
.org 0xcd304
	strb r1, [r3, #9]	@ 000cd304 5972
.org 0xcd306
	adds r0, #188	@ 000cd306 bc30
.org 0xcd308
	ldr r0, [r0, #0]	@ 000cd308 0068
.org 0xcd30a
	ldr r0, [r0, #0]	@ 000cd30a 0068
.org 0xcd30c
	str r0, [r3, #20]	@ 000cd30c 5861
.org 0xcd30e
	movs r0, #0	@ 000cd30e 0020
.org 0xcd310
	strh r2, [r3, #32]	@ 000cd310 1a84
.org 0xcd312
	adds r1, r3, #0	@ 000cd312 191c
.org 0xcd314
	adds r1, #34	@ 000cd314 2231
.org 0xcd316
	strb r0, [r1, #0]	@ 000cd316 0870
.org 0xcd318
	ldr r0, [r6, #0]	@ 000cd318 3068
.org 0xcd31a
	ldr r1, [r6, #4]	@ 000cd31a 7168
.org 0xcd31c
	str r0, [r3, #84]	@ 000cd31c 5865
.org 0xcd31e
	str r1, [r3, #88]	@ 000cd31e 9965
.org 0xcd320
	strb r5, [r3, #16]	@ 000cd320 1d74
.org 0xcd322
	strb r4, [r3, #17]	@ 000cd322 5c74
.org 0xcd324
	adds r0, r3, #0	@ 000cd324 181c
.org 0xcd326
	pop {r4, r5, r6}	@ 000cd326 70bc
.org 0xcd328
	pop {r1}	@ 000cd328 02bc
.org 0xcd32a
	bx r1	@ 000cd32a 0847
