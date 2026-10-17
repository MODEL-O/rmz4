@ FUN_08077398  entry 0x08077398  size 20
.thumb
.org 0x77398
FUN_08077398:
	push {lr}	@ 00077398 00b5
.org 0x7739a
	ldr r2, [pc, #16]	@ 0007739a 044a
.org 0x7739c
	ldrb r1, [r0, #14]	@ 0007739c 817b
.org 0x7739e
	lsls r1, r1, #2	@ 0007739e 8900
.org 0x773a0
	adds r1, r1, r2	@ 000773a0 8918
.org 0x773a2
	ldr r1, [r1, #0]	@ 000773a2 0968
.org 0x773a4
	bl 0x128f80	@ 000773a4 b1f0ecfd
.org 0x773a8
	pop {r0}	@ 000773a8 01bc
.org 0x773aa
	bx r0	@ 000773aa 0047
