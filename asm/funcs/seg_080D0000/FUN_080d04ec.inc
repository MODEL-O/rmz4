@ FUN_080d04ec  entry 0x080d04ec  size 50
.thumb
.org 0xd04ec
FUN_080d04ec:
	push {r4, lr}	@ 000d04ec 10b5
.org 0xd04ee
	adds r4, r0, #0	@ 000d04ee 041c
.org 0xd04f0
	bl 0x1cff0	@ 000d04f0 4cf77efd
.org 0xd04f4
	ldrb r0, [r4, #18]	@ 000d04f4 a07c
.org 0xd04f6
	subs r0, #1	@ 000d04f6 0138
.org 0xd04f8
	strb r0, [r4, #18]	@ 000d04f8 a074
.org 0xd04fa
	lsls r0, r0, #24	@ 000d04fa 0006
.org 0xd04fc
	cmp r0, #0	@ 000d04fc 0028
.org 0xd04fe
	bne.n 0xd0518	@ 000d04fe 0bd1
.org 0xd0500
	ldr r1, [pc, #28]	@ 000d0500 0749
.org 0xd0502
	ldrb r0, [r4, #9]	@ 000d0502 607a
.org 0xd0504
	lsls r0, r0, #2	@ 000d0504 8000
.org 0xd0506
	adds r0, r0, r1	@ 000d0506 4018
.org 0xd0508
	movs r1, #2	@ 000d0508 0221
.org 0xd050a
	str r1, [r4, #12]	@ 000d050a e160
.org 0xd050c
	ldr r0, [r0, #0]	@ 000d050c 0068
.org 0xd050e
	ldr r0, [r0, #8]	@ 000d050e 8068
.org 0xd0510
	str r0, [r4, #20]	@ 000d0510 6061
.org 0xd0512
	adds r0, r4, #0	@ 000d0512 201c
.org 0xd0514
	bl 0xd0524	@ 000d0514 00f006f8
.org 0xd0518
	pop {r4}	@ 000d0518 10bc
.org 0xd051a
	pop {r0}	@ 000d051a 01bc
.org 0xd051c
	bx r0	@ 000d051c 0047
