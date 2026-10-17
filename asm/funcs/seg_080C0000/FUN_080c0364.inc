@ FUN_080c0364  entry 0x080c0364  size 82
.thumb
.org 0xc0364
FUN_080c0364:
	push {r4, r5, r6, r7, lr}	@ 000c0364 f0b5
.org 0xc0366
	adds r7, r0, #0	@ 000c0366 071c
.org 0xc0368
	lsls r1, r1, #24	@ 000c0368 0906
.org 0xc036a
	lsrs r6, r1, #24	@ 000c036a 0e0e
.org 0xc036c
	lsls r2, r2, #24	@ 000c036c 1206
.org 0xc036e
	lsrs r4, r2, #24	@ 000c036e 140e
.org 0xc0370
	lsls r3, r3, #24	@ 000c0370 1b06
.org 0xc0372
	lsrs r5, r3, #24	@ 000c0372 1d0e
.org 0xc0374
	ldr r0, [pc, #64]	@ 000c0374 1048
.org 0xc0376
	ldr r0, [r0, #0]	@ 000c0376 0068
.org 0xc0378
	bl 0x5500	@ 000c0378 45f7c2f8
.org 0xc037c
	adds r3, r0, #0	@ 000c037c 031c
.org 0xc037e
	cmp r3, #0	@ 000c037e 002b
.org 0xc0380
	beq.n 0xc03ae	@ 000c0380 15d0
.org 0xc0382
	adds r1, r3, #0	@ 000c0382 191c
.org 0xc0384
	adds r1, #37	@ 000c0384 2531
.org 0xc0386
	movs r2, #0	@ 000c0386 0022
.org 0xc0388
	movs r0, #8	@ 000c0388 0820
.org 0xc038a
	strb r0, [r1, #0]	@ 000c038a 0870
.org 0xc038c
	ldr r1, [pc, #44]	@ 000c038c 0b49
.org 0xc038e
	movs r0, #11	@ 000c038e 0b20
.org 0xc0390
	strb r0, [r3, #9]	@ 000c0390 5872
.org 0xc0392
	ldr r0, [r1, #44]	@ 000c0392 c86a
.org 0xc0394
	ldr r0, [r0, #0]	@ 000c0394 0068
.org 0xc0396
	str r0, [r3, #20]	@ 000c0396 5861
.org 0xc0398
	movs r0, #0	@ 000c0398 0020
.org 0xc039a
	strh r2, [r3, #32]	@ 000c039a 1a84
.org 0xc039c
	adds r1, r3, #0	@ 000c039c 191c
.org 0xc039e
	adds r1, #34	@ 000c039e 2231
.org 0xc03a0
	strb r0, [r1, #0]	@ 000c03a0 0870
.org 0xc03a2
	str r7, [r3, #40]	@ 000c03a2 9f62
.org 0xc03a4
	strb r6, [r3, #16]	@ 000c03a4 1e74
.org 0xc03a6
	strb r4, [r3, #17]	@ 000c03a6 5c74
.org 0xc03a8
	adds r0, r3, #0	@ 000c03a8 181c
.org 0xc03aa
	adds r0, #180	@ 000c03aa b430
.org 0xc03ac
	strb r5, [r0, #0]	@ 000c03ac 0570
.org 0xc03ae
	adds r0, r3, #0	@ 000c03ae 181c
.org 0xc03b0
	pop {r4, r5, r6, r7}	@ 000c03b0 f0bc
.org 0xc03b2
	pop {r1}	@ 000c03b2 02bc
.org 0xc03b4
	bx r1	@ 000c03b4 0847
