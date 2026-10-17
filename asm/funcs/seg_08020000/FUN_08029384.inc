@ FUN_08029384  entry 0x08029384  size 52
.thumb
.org 0x29384
FUN_08029384:
	push {lr}	@ 00029384 00b5
.org 0x29386
	ldr r2, [r0, #12]	@ 00029386 c268
.org 0x29388
	ldr r3, [r2, #4]	@ 00029388 5368
.org 0x2938a
	lsls r1, r3, #4	@ 0002938a 1901
.org 0x2938c
	adds r1, #16	@ 0002938c 1031
.org 0x2938e
	adds r0, r0, r1	@ 0002938e 4018
.org 0x29390
	ldr r1, [r0, #0]	@ 00029390 0168
.org 0x29392
	ldrb r0, [r2, #1]	@ 00029392 5078
.org 0x29394
	cmp r0, #0	@ 00029394 0028
.org 0x29396
	bne.n 0x293a4	@ 00029396 05d1
.org 0x29398
	movs r1, #2	@ 00029398 0221
.org 0x2939a
	ldrsh r0, [r2, r1]	@ 0002939a 505e
.org 0x2939c
	adds r1, r3, #0	@ 0002939c 191c
.org 0x2939e
	bl 0x2aaec	@ 0002939e 01f0a5fb
.org 0x293a2
	b.n 0x293b2	@ 000293a2 06e0
.org 0x293a4
	cmp r1, #0	@ 000293a4 0029
.org 0x293a6
	beq.n 0x293b2	@ 000293a6 04d0
.org 0x293a8
	movs r3, #2	@ 000293a8 0223
.org 0x293aa
	ldrsh r0, [r2, r3]	@ 000293aa d05e
.org 0x293ac
	adds r1, #84	@ 000293ac 5431
.org 0x293ae
	bl 0x2aaec	@ 000293ae 01f09dfb
.org 0x293b2
	movs r0, #0	@ 000293b2 0020
.org 0x293b4
	pop {r1}	@ 000293b4 02bc
.org 0x293b6
	bx r1	@ 000293b6 0847
