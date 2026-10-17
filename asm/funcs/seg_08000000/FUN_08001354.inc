@ FUN_08001354  entry 0x08001354  size 42
.thumb
.org 0x1354
FUN_08001354:
	push {lr}	@ 00001354 00b5
.org 0x1356
	ldr r2, [pc, #40]	@ 00001356 0a4a
.org 0x1358
	ldr r1, [pc, #40]	@ 00001358 0a49
.org 0x135a
	adds r0, r2, r1	@ 0000135a 5018
.org 0x135c
	ldr r0, [r0, #0]	@ 0000135c 0068
.org 0x135e
	lsls r1, r0, #1	@ 0000135e 4100
.org 0x1360
	adds r1, r1, r0	@ 00001360 0918
.org 0x1362
	lsls r1, r1, #3	@ 00001362 c900
.org 0x1364
	ldr r0, [pc, #32]	@ 00001364 0848
.org 0x1366
	adds r2, r2, r0	@ 00001366 1218
.org 0x1368
	adds r1, r1, r2	@ 00001368 8918
.org 0x136a
	movs r0, #1	@ 0000136a 0120
.org 0x136c
	strb r0, [r1, #0]	@ 0000136c 0870
.org 0x136e
	adds r0, r1, #4	@ 0000136e 081d
.org 0x1370
	adds r1, #8	@ 00001370 0831
.org 0x1372
	ldr r2, [pc, #24]	@ 00001372 064a
.org 0x1374
	ldr r2, [r2, #0]	@ 00001374 1268
.org 0x1376
	bl 0x300	@ 00001376 fef7c3ff
.org 0x137a
	pop {r0}	@ 0000137a 01bc
.org 0x137c
	bx r0	@ 0000137c 0047
