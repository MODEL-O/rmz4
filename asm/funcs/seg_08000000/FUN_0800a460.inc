@ FUN_0800a460  entry 0x0800a460  size 50
.thumb
.org 0xa460
FUN_0800a460:
	push {lr}	@ 0000a460 00b5
.org 0xa462
	sub sp, #8	@ 0000a462 82b0
.org 0xa464
	asrs r0, r0, #12	@ 0000a464 0013
.org 0xa466
	subs r0, #1	@ 0000a466 0138
.org 0xa468
	asrs r1, r1, #12	@ 0000a468 0913
.org 0xa46a
	subs r1, #1	@ 0000a46a 0139
.org 0xa46c
	lsls r0, r0, #16	@ 0000a46c 0004
.org 0xa46e
	asrs r2, r0, #16	@ 0000a46e 0214
.org 0xa470
	movs r3, #240	@ 0000a470 f023
.org 0xa472
	lsls r3, r3, #14	@ 0000a472 9b03
.org 0xa474
	adds r0, r0, r3	@ 0000a474 c018
.org 0xa476
	lsls r1, r1, #16	@ 0000a476 0904
.org 0xa478
	lsrs r0, r0, #16	@ 0000a478 000c
.org 0xa47a
	orrs r0, r1	@ 0000a47a 0843
.org 0xa47c
	str r0, [sp, #0]	@ 0000a47c 0090
.org 0xa47e
	ldr r0, [pc, #20]	@ 0000a47e 0548
.org 0xa480
	str r0, [sp, #4]	@ 0000a480 0190
.org 0xa482
	asrs r1, r1, #16	@ 0000a482 0914
.org 0xa484
	adds r0, r2, #0	@ 0000a484 101c
.org 0xa486
	mov r2, sp	@ 0000a486 6a46
.org 0xa488
	bl 0x736c	@ 0000a488 fcf770ff
.org 0xa48c
	add sp, #8	@ 0000a48c 02b0
.org 0xa48e
	pop {r0}	@ 0000a48e 01bc
.org 0xa490
	bx r0	@ 0000a490 0047
