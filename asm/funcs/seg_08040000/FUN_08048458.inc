@ FUN_08048458  entry 0x08048458  size 20
.thumb
.org 0x48458
FUN_08048458:
	push {lr}	@ 00048458 00b5
.org 0x4845a
	ldr r2, [pc, #16]	@ 0004845a 044a
.org 0x4845c
	ldrb r1, [r0, #16]	@ 0004845c 017c
.org 0x4845e
	lsls r1, r1, #2	@ 0004845e 8900
.org 0x48460
	adds r1, r1, r2	@ 00048460 8918
.org 0x48462
	ldr r1, [r1, #0]	@ 00048462 0968
.org 0x48464
	bl 0x128f80	@ 00048464 e0f08cfd
.org 0x48468
	pop {r0}	@ 00048468 01bc
.org 0x4846a
	bx r0	@ 0004846a 0047
