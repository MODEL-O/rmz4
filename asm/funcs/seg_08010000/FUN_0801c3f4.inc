@ FUN_0801c3f4  entry 0x0801c3f4  size 56
.thumb
.org 0x1c3f4
FUN_0801c3f4:
	push {lr}	@ 0001c3f4 00b5
.org 0x1c3f6
	adds r3, r0, #0	@ 0001c3f6 031c
.org 0x1c3f8
	ldr r2, [r3, #104]	@ 0001c3f8 9a6e
.org 0x1c3fa
	cmp r2, #0	@ 0001c3fa 002a
.org 0x1c3fc
	beq.n 0x1c410	@ 0001c3fc 08d0
.org 0x1c3fe
	ldr r1, [pc, #44]	@ 0001c3fe 0b49
.org 0x1c400
	ldrb r0, [r2, #9]	@ 0001c400 507a
.org 0x1c402
	lsls r0, r0, #2	@ 0001c402 8000
.org 0x1c404
	adds r0, r0, r1	@ 0001c404 4018
.org 0x1c406
	movs r1, #2	@ 0001c406 0221
.org 0x1c408
	str r1, [r2, #12]	@ 0001c408 d160
.org 0x1c40a
	ldr r0, [r0, #0]	@ 0001c40a 0068
.org 0x1c40c
	ldr r0, [r0, #8]	@ 0001c40c 8068
.org 0x1c40e
	str r0, [r2, #20]	@ 0001c40e 5061
.org 0x1c410
	ldr r2, [r3, #108]	@ 0001c410 da6e
.org 0x1c412
	cmp r2, #0	@ 0001c412 002a
.org 0x1c414
	beq.n 0x1c428	@ 0001c414 08d0
.org 0x1c416
	ldr r1, [pc, #20]	@ 0001c416 0549
.org 0x1c418
	ldrb r0, [r2, #9]	@ 0001c418 507a
.org 0x1c41a
	lsls r0, r0, #2	@ 0001c41a 8000
.org 0x1c41c
	adds r0, r0, r1	@ 0001c41c 4018
.org 0x1c41e
	movs r1, #2	@ 0001c41e 0221
.org 0x1c420
	str r1, [r2, #12]	@ 0001c420 d160
.org 0x1c422
	ldr r0, [r0, #0]	@ 0001c422 0068
.org 0x1c424
	ldr r0, [r0, #8]	@ 0001c424 8068
.org 0x1c426
	str r0, [r2, #20]	@ 0001c426 5061
.org 0x1c428
	pop {r0}	@ 0001c428 01bc
.org 0x1c42a
	bx r0	@ 0001c42a 0047
