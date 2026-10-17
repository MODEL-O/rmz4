@ FUN_080e5378  entry 0x080e5378  size 32
.thumb
.org 0xe5378
FUN_080e5378:
	push {r4, lr}	@ 000e5378 10b5
.org 0xe537a
	adds r4, r0, #0	@ 000e537a 041c
.org 0xe537c
	ldr r1, [pc, #24]	@ 000e537c 0649
.org 0xe537e
	ldrb r0, [r4, #13]	@ 000e537e 607b
.org 0xe5380
	lsls r0, r0, #2	@ 000e5380 8000
.org 0xe5382
	adds r0, r0, r1	@ 000e5382 4018
.org 0xe5384
	ldr r1, [r0, #0]	@ 000e5384 0168
.org 0xe5386
	adds r0, r4, #0	@ 000e5386 201c
.org 0xe5388
	bl 0x128f80	@ 000e5388 43f0fafd
.org 0xe538c
	adds r0, r4, #0	@ 000e538c 201c
.org 0xe538e
	bl 0x1cff0	@ 000e538e 37f72ffe
.org 0xe5392
	pop {r4}	@ 000e5392 10bc
.org 0xe5394
	pop {r0}	@ 000e5394 01bc
.org 0xe5396
	bx r0	@ 000e5396 0047
