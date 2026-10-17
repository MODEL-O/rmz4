@ FUN_080ed4f0  entry 0x080ed4f0  size 84
.thumb
.org 0xed4f0
FUN_080ed4f0:
	push {r4, r5, lr}	@ 000ed4f0 30b5
.org 0xed4f2
	adds r5, r0, #0	@ 000ed4f2 051c
.org 0xed4f4
	lsls r1, r1, #24	@ 000ed4f4 0906
.org 0xed4f6
	lsrs r4, r1, #24	@ 000ed4f6 0c0e
.org 0xed4f8
	ldr r0, [pc, #72]	@ 000ed4f8 1248
.org 0xed4fa
	ldr r0, [r0, #0]	@ 000ed4fa 0068
.org 0xed4fc
	bl 0x5500	@ 000ed4fc 18f700f8
.org 0xed500
	adds r3, r0, #0	@ 000ed500 031c
.org 0xed502
	cmp r3, #0	@ 000ed502 002b
.org 0xed504
	beq.n 0xed53c	@ 000ed504 1ad0
.org 0xed506
	adds r1, r3, #0	@ 000ed506 191c
.org 0xed508
	adds r1, #37	@ 000ed508 2531
.org 0xed50a
	movs r2, #0	@ 000ed50a 0022
.org 0xed50c
	movs r0, #30	@ 000ed50c 1e20
.org 0xed50e
	strb r0, [r1, #0]	@ 000ed50e 0870
.org 0xed510
	ldr r1, [pc, #52]	@ 000ed510 0d49
.org 0xed512
	movs r0, #14	@ 000ed512 0e20
.org 0xed514
	strb r0, [r3, #9]	@ 000ed514 5872
.org 0xed516
	ldr r0, [r1, #56]	@ 000ed516 886b
.org 0xed518
	ldr r0, [r0, #0]	@ 000ed518 0068
.org 0xed51a
	str r0, [r3, #20]	@ 000ed51a 5861
.org 0xed51c
	movs r0, #0	@ 000ed51c 0020
.org 0xed51e
	strh r2, [r3, #32]	@ 000ed51e 1a84
.org 0xed520
	adds r1, r3, #0	@ 000ed520 191c
.org 0xed522
	adds r1, #34	@ 000ed522 2231
.org 0xed524
	strb r0, [r1, #0]	@ 000ed524 0870
.org 0xed526
	ldrb r1, [r3, #11]	@ 000ed526 d97a
.org 0xed528
	movs r0, #16	@ 000ed528 1020
.org 0xed52a
	orrs r0, r1	@ 000ed52a 0843
.org 0xed52c
	strb r0, [r3, #11]	@ 000ed52c d872
.org 0xed52e
	ldrb r0, [r3, #28]	@ 000ed52e 187f
.org 0xed530
	strb r0, [r3, #29]	@ 000ed530 5877
.org 0xed532
	ldr r0, [r5, #0]	@ 000ed532 2868
.org 0xed534
	ldr r1, [r5, #4]	@ 000ed534 6968
.org 0xed536
	str r0, [r3, #84]	@ 000ed536 5865
.org 0xed538
	str r1, [r3, #88]	@ 000ed538 9965
.org 0xed53a
	strb r4, [r3, #16]	@ 000ed53a 1c74
.org 0xed53c
	adds r0, r3, #0	@ 000ed53c 181c
.org 0xed53e
	pop {r4, r5}	@ 000ed53e 30bc
.org 0xed540
	pop {r1}	@ 000ed540 02bc
.org 0xed542
	bx r1	@ 000ed542 0847
