@ FUN_080b847c  entry 0x080b847c  size 42
.thumb
.org 0xb847c
FUN_080b847c:
	push {lr}	@ 000b847c 00b5
.org 0xb847e
	adds r2, r0, #0	@ 000b847e 021c
.org 0xb8480
	ldr r0, [r2, #20]	@ 000b8480 5069
.org 0xb8482
	movs r1, #1	@ 000b8482 0121
.org 0xb8484
	ands r0, r1	@ 000b8484 0840
.org 0xb8486
	cmp r0, #0	@ 000b8486 0028
.org 0xb8488
	beq.n 0xb84a2	@ 000b8488 0bd0
.org 0xb848a
	ldr r0, [r2, #12]	@ 000b848a d068
.org 0xb848c
	ldr r0, [r0, #44]	@ 000b848c c06a
.org 0xb848e
	ldr r2, [r2, #44]	@ 000b848e d26a
.org 0xb8490
	movs r3, #0	@ 000b8490 0023
.org 0xb8492
	ldr r1, [r0, #84]	@ 000b8492 416d
.org 0xb8494
	ldr r0, [r2, #84]	@ 000b8494 506d
.org 0xb8496
	cmp r1, r0	@ 000b8496 8142
.org 0xb8498
	ble.n 0xb849c	@ 000b8498 00dd
.org 0xb849a
	movs r3, #1	@ 000b849a 0123
.org 0xb849c
	adds r0, r2, #0	@ 000b849c 101c
.org 0xb849e
	adds r0, #188	@ 000b849e bc30
.org 0xb84a0
	strb r3, [r0, #0]	@ 000b84a0 0370
.org 0xb84a2
	pop {r0}	@ 000b84a2 01bc
.org 0xb84a4
	bx r0	@ 000b84a4 0047
