@ FUN_080e02e4  entry 0x080e02e4  size 48
.thumb
.org 0xe02e4
FUN_080e02e4:
	push {r4, lr}	@ 000e02e4 10b5
.org 0xe02e6
	adds r4, r0, #0	@ 000e02e6 041c
.org 0xe02e8
	bl 0x1cff0	@ 000e02e8 3cf782fe
.org 0xe02ec
	adds r0, r4, #0	@ 000e02ec 201c
.org 0xe02ee
	adds r0, #115	@ 000e02ee 7330
.org 0xe02f0
	ldrb r0, [r0, #0]	@ 000e02f0 0078
.org 0xe02f2
	cmp r0, #3	@ 000e02f2 0328
.org 0xe02f4
	bne.n 0xe030e	@ 000e02f4 0bd1
.org 0xe02f6
	ldr r1, [pc, #28]	@ 000e02f6 0749
.org 0xe02f8
	ldrb r0, [r4, #9]	@ 000e02f8 607a
.org 0xe02fa
	lsls r0, r0, #2	@ 000e02fa 8000
.org 0xe02fc
	adds r0, r0, r1	@ 000e02fc 4018
.org 0xe02fe
	movs r1, #2	@ 000e02fe 0221
.org 0xe0300
	str r1, [r4, #12]	@ 000e0300 e160
.org 0xe0302
	ldr r0, [r0, #0]	@ 000e0302 0068
.org 0xe0304
	ldr r0, [r0, #8]	@ 000e0304 8068
.org 0xe0306
	str r0, [r4, #20]	@ 000e0306 6061
.org 0xe0308
	adds r0, r4, #0	@ 000e0308 201c
.org 0xe030a
	bl 0xdff80	@ 000e030a fff739fe
.org 0xe030e
	pop {r4}	@ 000e030e 10bc
.org 0xe0310
	pop {r0}	@ 000e0310 01bc
.org 0xe0312
	bx r0	@ 000e0312 0047
