@ FUN_08065560  entry 0x08065560  size 52
.thumb
.org 0x65560
FUN_08065560:
	push {r4, lr}	@ 00065560 10b5
.org 0x65562
	adds r4, r0, #0	@ 00065562 041c
.org 0x65564
	adds r0, #224	@ 00065564 e030
.org 0x65566
	ldrb r0, [r0, #0]	@ 00065566 0078
.org 0x65568
	cmp r0, #0	@ 00065568 0028
.org 0x6556a
	beq.n 0x65578	@ 0006556a 05d0
.org 0x6556c
	movs r1, #0	@ 0006556c 0021
.org 0x6556e
	movs r0, #10	@ 0006556e 0a20
.org 0x65570
	strb r0, [r4, #13]	@ 00065570 6073
.org 0x65572
	strb r1, [r4, #14]	@ 00065572 a173
.org 0x65574
	strb r1, [r4, #15]	@ 00065574 e173
.org 0x65576
	b.n 0x6557e	@ 00065576 02e0
.org 0x65578
	adds r0, r4, #0	@ 00065578 201c
.org 0x6557a
	bl 0x65b08	@ 0006557a 00f0c5fa
.org 0x6557e
	ldr r0, [pc, #20]	@ 0006557e 0548
.org 0x65580
	ldrb r1, [r4, #13]	@ 00065580 617b
.org 0x65582
	lsls r1, r1, #2	@ 00065582 8900
.org 0x65584
	adds r1, r1, r0	@ 00065584 0918
.org 0x65586
	ldr r1, [r1, #0]	@ 00065586 0968
.org 0x65588
	adds r0, r4, #0	@ 00065588 201c
.org 0x6558a
	bl 0x128f80	@ 0006558a c3f0f9fc
.org 0x6558e
	pop {r4}	@ 0006558e 10bc
.org 0x65590
	pop {r0}	@ 00065590 01bc
.org 0x65592
	bx r0	@ 00065592 0047
