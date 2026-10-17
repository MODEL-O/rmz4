@ FUN_08002348  entry 0x08002348  size 22
.thumb
.org 0x2348
FUN_08002348:
	push {lr}	@ 00002348 00b5
.org 0x234a
	ldr r1, [pc, #20]	@ 0000234a 0549
.org 0x234c
	movs r2, #0	@ 0000234c 0022
.org 0x234e
	adds r0, r1, #0	@ 0000234e 081c
.org 0x2350
	adds r0, #30	@ 00002350 1e30
.org 0x2352
	strh r2, [r0, #0]	@ 00002352 0280
.org 0x2354
	subs r0, #2	@ 00002354 0238
.org 0x2356
	cmp r0, r1	@ 00002356 8842
.org 0x2358
	bge.n 0x2352	@ 00002358 fbda
.org 0x235a
	pop {r0}	@ 0000235a 01bc
.org 0x235c
	bx r0	@ 0000235c 0047
