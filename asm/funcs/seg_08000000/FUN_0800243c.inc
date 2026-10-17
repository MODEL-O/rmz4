@ FUN_0800243c  entry 0x0800243c  size 34
.thumb
.org 0x243c
FUN_0800243c:
	push {r4, lr}	@ 0000243c 10b5
.org 0x243e
	movs r4, #1	@ 0000243e 0124
.org 0x2440
	ldr r1, [pc, #28]	@ 00002440 0749
.org 0x2442
	adds r3, r1, #0	@ 00002442 0b1c
.org 0x2444
	movs r2, #15	@ 00002444 0f22
.org 0x2446
	ldrh r0, [r1, #0]	@ 00002446 0888
.org 0x2448
	cmp r0, #0	@ 00002448 0028
.org 0x244a
	beq.n 0x244e	@ 0000244a 00d0
.org 0x244c
	strh r4, [r3, #48]	@ 0000244c 1c86
.org 0x244e
	adds r3, #20	@ 0000244e 1433
.org 0x2450
	adds r1, #2	@ 00002450 0231
.org 0x2452
	subs r2, #1	@ 00002452 013a
.org 0x2454
	cmp r2, #0	@ 00002454 002a
.org 0x2456
	bge.n 0x2446	@ 00002456 f6da
.org 0x2458
	pop {r4}	@ 00002458 10bc
.org 0x245a
	pop {r0}	@ 0000245a 01bc
.org 0x245c
	bx r0	@ 0000245c 0047
