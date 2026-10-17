@ FUN_08046394  entry 0x08046394  size 20
.thumb
.org 0x46394
FUN_08046394:
	push {lr}	@ 00046394 00b5
.org 0x46396
	ldr r2, [pc, #16]	@ 00046396 044a
.org 0x46398
	ldrb r1, [r0, #16]	@ 00046398 017c
.org 0x4639a
	lsls r1, r1, #2	@ 0004639a 8900
.org 0x4639c
	adds r1, r1, r2	@ 0004639c 8918
.org 0x4639e
	ldr r1, [r1, #0]	@ 0004639e 0968
.org 0x463a0
	bl 0x128f80	@ 000463a0 e2f0eefd
.org 0x463a4
	pop {r0}	@ 000463a4 01bc
.org 0x463a6
	bx r0	@ 000463a6 0047
