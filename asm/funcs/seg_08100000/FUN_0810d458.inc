@ FUN_0810d458  entry 0x0810d458  size 54
.thumb
.org 0x10d458
FUN_0810d458:
	push {lr}	@ 0010d458 00b5
.org 0x10d45a
	ldr r1, [pc, #52]	@ 0010d45a 0d49
.org 0x10d45c
	str r0, [r1, #0]	@ 0010d45c 0860
.org 0x10d45e
	ldr r0, [pc, #52]	@ 0010d45e 0d48
.org 0x10d460
	adds r2, r1, r0	@ 0010d460 0a18
.org 0x10d462
	ldr r0, [pc, #52]	@ 0010d462 0d48
.org 0x10d464
	str r0, [r2, #0]	@ 0010d464 1060
.org 0x10d466
	movs r2, #179	@ 0010d466 b322
.org 0x10d468
	lsls r2, r2, #3	@ 0010d468 d200
.org 0x10d46a
	adds r0, r1, r2	@ 0010d46a 8818
.org 0x10d46c
	movs r3, #0	@ 0010d46c 0023
.org 0x10d46e
	strb r3, [r0, #0]	@ 0010d46e 0370
.org 0x10d470
	ldr r0, [pc, #40]	@ 0010d470 0a48
.org 0x10d472
	adds r2, r1, r0	@ 0010d472 0a18
.org 0x10d474
	movs r0, #30	@ 0010d474 1e20
.org 0x10d476
	strb r0, [r2, #0]	@ 0010d476 1070
.org 0x10d478
	ldr r2, [pc, #36]	@ 0010d478 094a
.org 0x10d47a
	adds r0, r1, r2	@ 0010d47a 8818
.org 0x10d47c
	strb r3, [r0, #0]	@ 0010d47c 0370
.org 0x10d47e
	ldr r0, [pc, #36]	@ 0010d47e 0948
.org 0x10d480
	adds r1, r1, r0	@ 0010d480 0918
.org 0x10d482
	movs r0, #22	@ 0010d482 1620
.org 0x10d484
	strb r0, [r1, #0]	@ 0010d484 0870
.org 0x10d486
	bl 0x10d4a8	@ 0010d486 00f00ff8
.org 0x10d48a
	pop {r0}	@ 0010d48a 01bc
.org 0x10d48c
	bx r0	@ 0010d48c 0047
