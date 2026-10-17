@ FUN_08046318  entry 0x08046318  size 20
.thumb
.org 0x46318
FUN_08046318:
	push {lr}	@ 00046318 00b5
.org 0x4631a
	ldr r2, [pc, #16]	@ 0004631a 044a
.org 0x4631c
	ldrb r1, [r0, #16]	@ 0004631c 017c
.org 0x4631e
	lsls r1, r1, #2	@ 0004631e 8900
.org 0x46320
	adds r1, r1, r2	@ 00046320 8918
.org 0x46322
	ldr r1, [r1, #0]	@ 00046322 0968
.org 0x46324
	bl 0x128f80	@ 00046324 e2f02cfe
.org 0x46328
	pop {r0}	@ 00046328 01bc
.org 0x4632a
	bx r0	@ 0004632a 0047
