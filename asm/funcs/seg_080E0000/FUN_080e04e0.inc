@ FUN_080e04e0  entry 0x080e04e0  size 56
.thumb
.org 0xe04e0
FUN_080e04e0:
	push {r4, lr}	@ 000e04e0 10b5
.org 0xe04e2
	adds r4, r0, #0	@ 000e04e2 041c
.org 0xe04e4
	bl 0x1cff0	@ 000e04e4 3cf784fd
.org 0xe04e8
	ldr r0, [r4, #88]	@ 000e04e8 a06d
.org 0xe04ea
	ldr r1, [r4, #96]	@ 000e04ea 216e
.org 0xe04ec
	adds r0, r0, r1	@ 000e04ec 4018
.org 0xe04ee
	str r0, [r4, #88]	@ 000e04ee a065
.org 0xe04f0
	adds r0, r4, #0	@ 000e04f0 201c
.org 0xe04f2
	adds r0, #115	@ 000e04f2 7330
.org 0xe04f4
	ldrb r0, [r0, #0]	@ 000e04f4 0078
.org 0xe04f6
	cmp r0, #3	@ 000e04f6 0328
.org 0xe04f8
	bne.n 0xe0512	@ 000e04f8 0bd1
.org 0xe04fa
	ldr r1, [pc, #28]	@ 000e04fa 0749
.org 0xe04fc
	ldrb r0, [r4, #9]	@ 000e04fc 607a
.org 0xe04fe
	lsls r0, r0, #2	@ 000e04fe 8000
.org 0xe0500
	adds r0, r0, r1	@ 000e0500 4018
.org 0xe0502
	movs r1, #2	@ 000e0502 0221
.org 0xe0504
	str r1, [r4, #12]	@ 000e0504 e160
.org 0xe0506
	ldr r0, [r0, #0]	@ 000e0506 0068
.org 0xe0508
	ldr r0, [r0, #8]	@ 000e0508 8068
.org 0xe050a
	str r0, [r4, #20]	@ 000e050a 6061
.org 0xe050c
	adds r0, r4, #0	@ 000e050c 201c
.org 0xe050e
	bl 0xe055c	@ 000e050e 00f025f8
.org 0xe0512
	pop {r4}	@ 000e0512 10bc
.org 0xe0514
	pop {r0}	@ 000e0514 01bc
.org 0xe0516
	bx r0	@ 000e0516 0047
