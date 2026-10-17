@ FUN_0807157c  entry 0x0807157c  size 30
.thumb
.org 0x7157c
FUN_0807157c:
	push {r4, lr}	@ 0007157c 10b5
.org 0x7157e
	adds r4, r0, #0	@ 0007157e 041c
.org 0x71580
	bl 0x73bcc	@ 00071580 02f024fb
.org 0x71584
	ldr r1, [pc, #20]	@ 00071584 0549
.org 0x71586
	ldrb r0, [r4, #13]	@ 00071586 607b
.org 0x71588
	lsls r0, r0, #2	@ 00071588 8000
.org 0x7158a
	adds r0, r0, r1	@ 0007158a 4018
.org 0x7158c
	ldr r1, [r0, #0]	@ 0007158c 0168
.org 0x7158e
	adds r0, r4, #0	@ 0007158e 201c
.org 0x71590
	bl 0x128f80	@ 00071590 b7f0f6fc
.org 0x71594
	pop {r4}	@ 00071594 10bc
.org 0x71596
	pop {r0}	@ 00071596 01bc
.org 0x71598
	bx r0	@ 00071598 0047
