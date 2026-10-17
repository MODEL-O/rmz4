@ FUN_0801c350  entry 0x0801c350  size 42
.thumb
.org 0x1c350
FUN_0801c350:
	push {lr}	@ 0001c350 00b5
.org 0x1c352
	adds r3, r0, #0	@ 0001c352 031c
.org 0x1c354
	ldrb r0, [r3, #14]	@ 0001c354 987b
.org 0x1c356
	cmp r0, #0	@ 0001c356 0028
.org 0x1c358
	bne.n 0x1c376	@ 0001c358 0dd1
.org 0x1c35a
	ldr r1, [r3, #92]	@ 0001c35a d96d
.org 0x1c35c
	lsrs r1, r1, #4	@ 0001c35c 0909
.org 0x1c35e
	lsls r1, r1, #1	@ 0001c35e 4900
.org 0x1c360
	ldr r0, [pc, #24]	@ 0001c360 0648
.org 0x1c362
	adds r1, r1, r0	@ 0001c362 0918
.org 0x1c364
	ldrh r2, [r1, #0]	@ 0001c364 0a88
.org 0x1c366
	ldr r0, [pc, #24]	@ 0001c366 0648
.org 0x1c368
	ands r0, r2	@ 0001c368 1040
.org 0x1c36a
	movs r2, #2	@ 0001c36a 0222
.org 0x1c36c
	orrs r0, r2	@ 0001c36c 1043
.org 0x1c36e
	strh r0, [r1, #0]	@ 0001c36e 0880
.org 0x1c370
	ldrb r0, [r3, #14]	@ 0001c370 987b
.org 0x1c372
	adds r0, #1	@ 0001c372 0130
.org 0x1c374
	strb r0, [r3, #14]	@ 0001c374 9873
.org 0x1c376
	pop {r0}	@ 0001c376 01bc
.org 0x1c378
	bx r0	@ 0001c378 0047
