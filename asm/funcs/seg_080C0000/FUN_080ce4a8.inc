@ FUN_080ce4a8  entry 0x080ce4a8  size 158
.thumb
.org 0xce4a8
FUN_080ce4a8:
	push {r4, r5, r6, r7, lr}	@ 000ce4a8 f0b5
.org 0xce4aa
	adds r4, r0, #0	@ 000ce4aa 041c
.org 0xce4ac
	adds r0, #188	@ 000ce4ac bc30
.org 0xce4ae
	ldr r5, [r0, #0]	@ 000ce4ae 0568
.org 0xce4b0
	subs r0, #8	@ 000ce4b0 0838
.org 0xce4b2
	ldrb r7, [r0, #0]	@ 000ce4b2 0778
.org 0xce4b4
	ldrb r6, [r4, #15]	@ 000ce4b4 e67b
.org 0xce4b6
	cmp r6, #0	@ 000ce4b6 002e
.org 0xce4b8
	bne.n 0xce4de	@ 000ce4b8 11d1
.org 0xce4ba
	subs r0, #64	@ 000ce4ba 4038
.org 0xce4bc
	ldr r1, [pc, #136]	@ 000ce4bc 2249
.org 0xce4be
	bl 0x5784	@ 000ce4be 37f761f9
.org 0xce4c2
	adds r5, r4, #0	@ 000ce4c2 251c
.org 0xce4c4
	adds r5, #182	@ 000ce4c4 b635
.org 0xce4c6
	ldrb r0, [r5, #0]	@ 000ce4c6 2878
.org 0xce4c8
	cmp r0, #0	@ 000ce4c8 0028
.org 0xce4ca
	beq.n 0xce4d6	@ 000ce4ca 04d0
.org 0xce4cc
	ldr r1, [pc, #124]	@ 000ce4cc 1f49
.org 0xce4ce
	adds r0, r4, #0	@ 000ce4ce 201c
.org 0xce4d0
	bl 0x1cf00	@ 000ce4d0 4ef716fd
.org 0xce4d4
	strb r6, [r5, #0]	@ 000ce4d4 2e70
.org 0xce4d6
	movs r5, #128	@ 000ce4d6 8025
.org 0xce4d8
	ldrb r0, [r4, #15]	@ 000ce4d8 e07b
.org 0xce4da
	adds r0, #1	@ 000ce4da 0130
.org 0xce4dc
	strb r0, [r4, #15]	@ 000ce4dc e073
.org 0xce4de
	adds r0, r4, #0	@ 000ce4de 201c
.org 0xce4e0
	bl 0x1cff0	@ 000ce4e0 4ef786fd
.org 0xce4e4
	adds r0, r4, #0	@ 000ce4e4 201c
.org 0xce4e6
	adds r0, #84	@ 000ce4e6 5430
.org 0xce4e8
	ldr r1, [pc, #100]	@ 000ce4e8 1949
.org 0xce4ea
	ldr r1, [r1, #0]	@ 000ce4ea 0968
.org 0xce4ec
	adds r1, #84	@ 000ce4ec 5431
.org 0xce4ee
	adds r2, r7, #0	@ 000ce4ee 3a1c
.org 0xce4f0
	movs r3, #2	@ 000ce4f0 0223
.org 0xce4f2
	bl 0x10d410	@ 000ce4f2 3ef08dff
.org 0xce4f6
	lsls r0, r0, #24	@ 000ce4f6 0006
.org 0xce4f8
	ldr r2, [pc, #88]	@ 000ce4f8 164a
.org 0xce4fa
	lsrs r7, r0, #24	@ 000ce4fa 070e
.org 0xce4fc
	movs r1, #128	@ 000ce4fc 8021
.org 0xce4fe
	lsls r1, r1, #23	@ 000ce4fe c905
.org 0xce500
	adds r0, r0, r1	@ 000ce500 4018
.org 0xce502
	lsrs r0, r0, #23	@ 000ce502 c00d
.org 0xce504
	adds r0, r0, r2	@ 000ce504 8018
.org 0xce506
	movs r1, #0	@ 000ce506 0021
.org 0xce508
	ldrsh r0, [r0, r1]	@ 000ce508 405e
.org 0xce50a
	adds r1, r5, #0	@ 000ce50a 291c
.org 0xce50c
	muls r1, r0	@ 000ce50c 4143
.org 0xce50e
	cmp r1, #0	@ 000ce50e 0029
.org 0xce510
	bge.n 0xce514	@ 000ce510 00da
.org 0xce512
	adds r1, #255	@ 000ce512 ff31
.org 0xce514
	asrs r1, r1, #8	@ 000ce514 0912
.org 0xce516
	ldr r0, [r4, #84]	@ 000ce516 606d
.org 0xce518
	adds r0, r0, r1	@ 000ce518 4018
.org 0xce51a
	str r0, [r4, #84]	@ 000ce51a 6065
.org 0xce51c
	lsls r0, r7, #1	@ 000ce51c 7800
.org 0xce51e
	adds r0, r0, r2	@ 000ce51e 8018
.org 0xce520
	movs r1, #0	@ 000ce520 0021
.org 0xce522
	ldrsh r0, [r0, r1]	@ 000ce522 405e
.org 0xce524
	adds r1, r5, #0	@ 000ce524 291c
.org 0xce526
	muls r1, r0	@ 000ce526 4143
.org 0xce528
	cmp r1, #0	@ 000ce528 0029
.org 0xce52a
	bge.n 0xce52e	@ 000ce52a 00da
.org 0xce52c
	adds r1, #255	@ 000ce52c ff31
.org 0xce52e
	asrs r1, r1, #8	@ 000ce52e 0912
.org 0xce530
	ldr r0, [r4, #88]	@ 000ce530 a06d
.org 0xce532
	adds r0, r0, r1	@ 000ce532 4018
.org 0xce534
	str r0, [r4, #88]	@ 000ce534 a065
.org 0xce536
	adds r0, r4, #0	@ 000ce536 201c
.org 0xce538
	adds r0, #188	@ 000ce538 bc30
.org 0xce53a
	str r5, [r0, #0]	@ 000ce53a 0560
.org 0xce53c
	subs r0, #8	@ 000ce53c 0838
.org 0xce53e
	strb r7, [r0, #0]	@ 000ce53e 0770
.org 0xce540
	pop {r4, r5, r6, r7}	@ 000ce540 f0bc
.org 0xce542
	pop {r0}	@ 000ce542 01bc
.org 0xce544
	bx r0	@ 000ce544 0047
