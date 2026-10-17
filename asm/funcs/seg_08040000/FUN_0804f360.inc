@ FUN_0804f360  entry 0x0804f360  size 40
.thumb
.org 0x4f360
FUN_0804f360:
	push {lr}	@ 0004f360 00b5
.org 0x4f362
	bl 0x7c7c	@ 0004f362 b8f78bfc
.org 0x4f366
	lsls r0, r0, #16	@ 0004f366 0004
.org 0x4f368
	lsrs r0, r0, #16	@ 0004f368 000c
.org 0x4f36a
	adds r1, r0, #0	@ 0004f36a 011c
.org 0x4f36c
	movs r0, #15	@ 0004f36c 0f20
.org 0x4f36e
	ands r0, r1	@ 0004f36e 0840
.org 0x4f370
	cmp r0, #15	@ 0004f370 0f28
.org 0x4f372
	beq.n 0x4f382	@ 0004f372 06d0
.org 0x4f374
	movs r0, #128	@ 0004f374 8020
.org 0x4f376
	lsls r0, r0, #8	@ 0004f376 0002
.org 0x4f378
	ands r0, r1	@ 0004f378 0840
.org 0x4f37a
	cmp r0, #0	@ 0004f37a 0028
.org 0x4f37c
	bne.n 0x4f382	@ 0004f37c 01d1
.org 0x4f37e
	adds r0, r1, #0	@ 0004f37e 081c
.org 0x4f380
	b.n 0x4f384	@ 0004f380 00e0
.org 0x4f382
	movs r0, #0	@ 0004f382 0020
.org 0x4f384
	pop {r1}	@ 0004f384 02bc
.org 0x4f386
	bx r1	@ 0004f386 0847
