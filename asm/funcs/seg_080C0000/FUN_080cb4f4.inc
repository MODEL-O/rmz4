@ FUN_080cb4f4  entry 0x080cb4f4  size 72
.thumb
.org 0xcb4f4
FUN_080cb4f4:
	push {r4, r5, r6, lr}	@ 000cb4f4 70b5
.org 0xcb4f6
	adds r6, r0, #0	@ 000cb4f6 061c
.org 0xcb4f8
	lsls r1, r1, #24	@ 000cb4f8 0906
.org 0xcb4fa
	lsrs r5, r1, #24	@ 000cb4fa 0d0e
.org 0xcb4fc
	lsls r2, r2, #24	@ 000cb4fc 1206
.org 0xcb4fe
	lsrs r4, r2, #24	@ 000cb4fe 140e
.org 0xcb500
	ldr r0, [pc, #56]	@ 000cb500 0e48
.org 0xcb502
	ldr r0, [r0, #0]	@ 000cb502 0068
.org 0xcb504
	bl 0x5500	@ 000cb504 39f7fcff
.org 0xcb508
	adds r3, r0, #0	@ 000cb508 031c
.org 0xcb50a
	cmp r3, #0	@ 000cb50a 002b
.org 0xcb50c
	beq.n 0xcb536	@ 000cb50c 13d0
.org 0xcb50e
	adds r1, r3, #0	@ 000cb50e 191c
.org 0xcb510
	adds r1, #37	@ 000cb510 2531
.org 0xcb512
	movs r2, #0	@ 000cb512 0022
.org 0xcb514
	movs r0, #8	@ 000cb514 0820
.org 0xcb516
	strb r0, [r1, #0]	@ 000cb516 0870
.org 0xcb518
	ldr r0, [pc, #36]	@ 000cb518 0948
.org 0xcb51a
	movs r1, #40	@ 000cb51a 2821
.org 0xcb51c
	strb r1, [r3, #9]	@ 000cb51c 5972
.org 0xcb51e
	adds r0, #160	@ 000cb51e a030
.org 0xcb520
	ldr r0, [r0, #0]	@ 000cb520 0068
.org 0xcb522
	ldr r0, [r0, #0]	@ 000cb522 0068
.org 0xcb524
	str r0, [r3, #20]	@ 000cb524 5861
.org 0xcb526
	movs r0, #0	@ 000cb526 0020
.org 0xcb528
	strh r2, [r3, #32]	@ 000cb528 1a84
.org 0xcb52a
	adds r1, r3, #0	@ 000cb52a 191c
.org 0xcb52c
	adds r1, #34	@ 000cb52c 2231
.org 0xcb52e
	strb r0, [r1, #0]	@ 000cb52e 0870
.org 0xcb530
	str r6, [r3, #40]	@ 000cb530 9e62
.org 0xcb532
	strb r5, [r3, #16]	@ 000cb532 1d74
.org 0xcb534
	strb r4, [r3, #17]	@ 000cb534 5c74
.org 0xcb536
	pop {r4, r5, r6}	@ 000cb536 70bc
.org 0xcb538
	pop {r0}	@ 000cb538 01bc
.org 0xcb53a
	bx r0	@ 000cb53a 0047
