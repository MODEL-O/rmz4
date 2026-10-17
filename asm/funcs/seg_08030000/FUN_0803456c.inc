@ FUN_0803456c  entry 0x0803456c  size 40
.thumb
.org 0x3456c
FUN_0803456c:
	push {lr}	@ 0003456c 00b5
.org 0x3456e
	ldr r1, [pc, #36]	@ 0003456e 0949
.org 0x34570
	adds r3, r0, r1	@ 00034570 4318
.org 0x34572
	ldrb r1, [r3, #0]	@ 00034572 1978
.org 0x34574
	movs r2, #4	@ 00034574 0422
.org 0x34576
	orrs r1, r2	@ 00034576 1143
.org 0x34578
	movs r2, #2	@ 00034578 0222
.org 0x3457a
	orrs r1, r2	@ 0003457a 1143
.org 0x3457c
	strb r1, [r3, #0]	@ 0003457c 1970
.org 0x3457e
	ldr r2, [pc, #24]	@ 0003457e 064a
.org 0x34580
	ldr r3, [pc, #24]	@ 00034580 064b
.org 0x34582
	adds r1, r0, r3	@ 00034582 c118
.org 0x34584
	ldrb r1, [r1, #0]	@ 00034584 0978
.org 0x34586
	lsls r1, r1, #2	@ 00034586 8900
.org 0x34588
	adds r1, r1, r2	@ 00034588 8918
.org 0x3458a
	ldr r1, [r1, #0]	@ 0003458a 0968
.org 0x3458c
	bl 0x128f80	@ 0003458c f4f0f8fc
.org 0x34590
	pop {r0}	@ 00034590 01bc
.org 0x34592
	bx r0	@ 00034592 0047
