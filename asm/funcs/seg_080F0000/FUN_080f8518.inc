@ FUN_080f8518  entry 0x080f8518  size 40
.thumb
.org 0xf8518
FUN_080f8518:
	push {r4, lr}	@ 000f8518 10b5
.org 0xf851a
	adds r4, r0, #0	@ 000f851a 041c
.org 0xf851c
	ldr r0, [pc, #32]	@ 000f851c 0848
.org 0xf851e
	ldrb r2, [r4, #16]	@ 000f851e 227c
.org 0xf8520
	lsls r2, r2, #2	@ 000f8520 9200
.org 0xf8522
	adds r2, r2, r0	@ 000f8522 1218
.org 0xf8524
	adds r0, r4, #0	@ 000f8524 201c
.org 0xf8526
	adds r0, #84	@ 000f8526 5430
.org 0xf8528
	adds r1, r4, #0	@ 000f8528 211c
.org 0xf852a
	adds r1, #185	@ 000f852a b931
.org 0xf852c
	ldr r3, [r2, #0]	@ 000f852c 1368
.org 0xf852e
	movs r2, #1	@ 000f852e 0122
.org 0xf8530
	bl 0x128f88	@ 000f8530 30f02afd
.org 0xf8534
	adds r0, r4, #0	@ 000f8534 201c
.org 0xf8536
	bl 0x1cff0	@ 000f8536 24f75bfd
.org 0xf853a
	pop {r4}	@ 000f853a 10bc
.org 0xf853c
	pop {r0}	@ 000f853c 01bc
.org 0xf853e
	bx r0	@ 000f853e 0047
