@ FUN_080bc4d4  entry 0x080bc4d4  size 96
.thumb
.org 0xbc4d4
FUN_080bc4d4:
	push {r4, r5, lr}	@ 000bc4d4 30b5
.org 0xbc4d6
	adds r4, r0, #0	@ 000bc4d6 041c
.org 0xbc4d8
	bl 0x1cc9c	@ 000bc4d8 60f7e0fb
.org 0xbc4dc
	ldrb r1, [r4, #10]	@ 000bc4dc a17a
.org 0xbc4de
	movs r0, #1	@ 000bc4de 0120
.org 0xbc4e0
	movs r5, #0	@ 000bc4e0 0025
.org 0xbc4e2
	orrs r0, r1	@ 000bc4e2 0843
.org 0xbc4e4
	movs r1, #2	@ 000bc4e4 0221
.org 0xbc4e6
	orrs r0, r1	@ 000bc4e6 0843
.org 0xbc4e8
	strb r0, [r4, #10]	@ 000bc4e8 a072
.org 0xbc4ea
	ldr r1, [pc, #72]	@ 000bc4ea 1249
.org 0xbc4ec
	ldrb r0, [r4, #9]	@ 000bc4ec 607a
.org 0xbc4ee
	lsls r0, r0, #2	@ 000bc4ee 8000
.org 0xbc4f0
	adds r0, r0, r1	@ 000bc4f0 4018
.org 0xbc4f2
	movs r1, #1	@ 000bc4f2 0121
.org 0xbc4f4
	str r1, [r4, #12]	@ 000bc4f4 e160
.org 0xbc4f6
	ldr r0, [r0, #0]	@ 000bc4f6 0068
.org 0xbc4f8
	ldr r0, [r0, #4]	@ 000bc4f8 4068
.org 0xbc4fa
	str r0, [r4, #20]	@ 000bc4fa 6061
.org 0xbc4fc
	strb r5, [r4, #18]	@ 000bc4fc a574
.org 0xbc4fe
	ldr r0, [r4, #84]	@ 000bc4fe 606d
.org 0xbc500
	ldr r1, [r4, #88]	@ 000bc500 a16d
.org 0xbc502
	bl 0x8748	@ 000bc502 4cf721f9
.org 0xbc506
	str r0, [r4, #88]	@ 000bc506 a065
.org 0xbc508
	str r5, [r4, #92]	@ 000bc508 e565
.org 0xbc50a
	str r5, [r4, #96]	@ 000bc50a 2566
.org 0xbc50c
	adds r0, r4, #0	@ 000bc50c 201c
.org 0xbc50e
	adds r0, #180	@ 000bc50e b430
.org 0xbc510
	strb r5, [r0, #0]	@ 000bc510 0570
.org 0xbc512
	strb r5, [r4, #18]	@ 000bc512 a574
.org 0xbc514
	adds r0, #1	@ 000bc514 0130
.org 0xbc516
	strb r5, [r0, #0]	@ 000bc516 0570
.org 0xbc518
	ldr r1, [pc, #28]	@ 000bc518 0749
.org 0xbc51a
	ldrb r0, [r4, #17]	@ 000bc51a 607c
.org 0xbc51c
	lsls r0, r0, #1	@ 000bc51c 4000
.org 0xbc51e
	adds r0, r0, r1	@ 000bc51e 4018
.org 0xbc520
	ldrh r1, [r0, #0]	@ 000bc520 0188
.org 0xbc522
	adds r0, r4, #0	@ 000bc522 201c
.org 0xbc524
	bl 0x1cf00	@ 000bc524 60f7ecfc
.org 0xbc528
	adds r0, r4, #0	@ 000bc528 201c
.org 0xbc52a
	bl 0xbc53c	@ 000bc52a 00f007f8
.org 0xbc52e
	pop {r4, r5}	@ 000bc52e 30bc
.org 0xbc530
	pop {r0}	@ 000bc530 01bc
.org 0xbc532
	bx r0	@ 000bc532 0047
