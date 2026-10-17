@ FUN_0804d2d4  entry 0x0804d2d4  size 84
.thumb
.org 0x4d2d4
FUN_0804d2d4:
	push {r4, r5, r6, lr}	@ 0004d2d4 70b5
.org 0x4d2d6
	adds r5, r0, #0	@ 0004d2d6 051c
.org 0x4d2d8
	ldr r0, [r5, #12]	@ 0004d2d8 e868
.org 0x4d2da
	ldr r4, [r0, #44]	@ 0004d2da c46a
.org 0x4d2dc
	ldr r6, [r5, #44]	@ 0004d2dc ee6a
.org 0x4d2de
	movs r0, #8	@ 0004d2de 0820
.org 0x4d2e0
	ldrsb r0, [r4, r0]	@ 0004d2e0 2056
.org 0x4d2e2
	cmp r0, #3	@ 0004d2e2 0328
.org 0x4d2e4
	bne.n 0x4d306	@ 0004d2e4 0fd1
.org 0x4d2e6
	ldrb r0, [r4, #9]	@ 0004d2e6 607a
.org 0x4d2e8
	cmp r0, #91	@ 0004d2e8 5b28
.org 0x4d2ea
	bne.n 0x4d2f6	@ 0004d2ea 04d1
.org 0x4d2ec
	adds r1, r6, #0	@ 0004d2ec 311c
.org 0x4d2ee
	adds r1, #84	@ 0004d2ee 5431
.org 0x4d2f0
	adds r0, r4, #0	@ 0004d2f0 201c
.org 0x4d2f2
	bl 0xb316c	@ 0004d2f2 65f03bff
.org 0x4d2f6
	ldrb r0, [r4, #9]	@ 0004d2f6 607a
.org 0x4d2f8
	cmp r0, #108	@ 0004d2f8 6c28
.org 0x4d2fa
	bne.n 0x4d306	@ 0004d2fa 04d1
.org 0x4d2fc
	adds r1, r6, #0	@ 0004d2fc 311c
.org 0x4d2fe
	adds r1, #84	@ 0004d2fe 5431
.org 0x4d300
	adds r0, r4, #0	@ 0004d300 201c
.org 0x4d302
	bl 0xb9a44	@ 0004d302 6cf09ffb
.org 0x4d306
	ldr r0, [r5, #20]	@ 0004d306 6869
.org 0x4d308
	movs r1, #1	@ 0004d308 0121
.org 0x4d30a
	ands r0, r1	@ 0004d30a 0840
.org 0x4d30c
	cmp r0, #0	@ 0004d30c 0028
.org 0x4d30e
	beq.n 0x4d322	@ 0004d30e 08d0
.org 0x4d310
	movs r2, #0	@ 0004d310 0022
.org 0x4d312
	ldr r1, [r4, #84]	@ 0004d312 616d
.org 0x4d314
	ldr r0, [r6, #84]	@ 0004d314 706d
.org 0x4d316
	cmp r1, r0	@ 0004d316 8142
.org 0x4d318
	ble.n 0x4d31c	@ 0004d318 00dd
.org 0x4d31a
	movs r2, #1	@ 0004d31a 0122
.org 0x4d31c
	adds r0, r6, #0	@ 0004d31c 301c
.org 0x4d31e
	adds r0, #188	@ 0004d31e bc30
.org 0x4d320
	strb r2, [r0, #0]	@ 0004d320 0270
.org 0x4d322
	pop {r4, r5, r6}	@ 0004d322 70bc
.org 0x4d324
	pop {r0}	@ 0004d324 01bc
.org 0x4d326
	bx r0	@ 0004d326 0047
