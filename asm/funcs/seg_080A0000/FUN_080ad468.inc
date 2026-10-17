@ FUN_080ad468  entry 0x080ad468  size 20
.thumb
.org 0xad468
FUN_080ad468:
	push {lr}	@ 000ad468 00b5
.org 0xad46a
	ldr r2, [pc, #16]	@ 000ad46a 044a
.org 0xad46c
	ldrb r1, [r0, #16]	@ 000ad46c 017c
.org 0xad46e
	lsls r1, r1, #2	@ 000ad46e 8900
.org 0xad470
	adds r1, r1, r2	@ 000ad470 8918
.org 0xad472
	ldr r1, [r1, #0]	@ 000ad472 0968
.org 0xad474
	bl 0x128f80	@ 000ad474 7bf084fd
.org 0xad478
	pop {r0}	@ 000ad478 01bc
.org 0xad47a
	bx r0	@ 000ad47a 0047
