@ FUN_080ce558  entry 0x080ce558  size 168
.thumb
.org 0xce558
FUN_080ce558:
	push {r4, r5, r6, r7, lr}	@ 000ce558 f0b5
.org 0xce55a
	mov r7, r9	@ 000ce55a 4f46
.org 0xce55c
	mov r6, r8	@ 000ce55c 4646
.org 0xce55e
	push {r6, r7}	@ 000ce55e c0b4
.org 0xce560
	adds r4, r0, #0	@ 000ce560 041c
.org 0xce562
	movs r0, #188	@ 000ce562 bc20
.org 0xce564
	adds r0, r0, r4	@ 000ce564 0019
.org 0xce566
	mov r8, r0	@ 000ce566 8046
.org 0xce568
	ldr r6, [r0, #0]	@ 000ce568 0668
.org 0xce56a
	adds r7, r4, #0	@ 000ce56a 271c
.org 0xce56c
	adds r7, #180	@ 000ce56c b437
.org 0xce56e
	ldrb r5, [r7, #0]	@ 000ce56e 3d78
.org 0xce570
	mov r9, r5	@ 000ce570 a946
.org 0xce572
	ldrb r0, [r4, #15]	@ 000ce572 e07b
.org 0xce574
	cmp r0, #0	@ 000ce574 0028
.org 0xce576
	bne.n 0xce590	@ 000ce576 0bd1
.org 0xce578
	adds r0, r4, #0	@ 000ce578 201c
.org 0xce57a
	adds r0, #116	@ 000ce57a 7430
.org 0xce57c
	ldr r1, [pc, #128]	@ 000ce57c 2049
.org 0xce57e
	bl 0x5784	@ 000ce57e 37f701f9
.org 0xce582
	ldr r1, [pc, #128]	@ 000ce582 2049
.org 0xce584
	adds r0, r4, #0	@ 000ce584 201c
.org 0xce586
	bl 0x1cf00	@ 000ce586 4ef7bbfc
.org 0xce58a
	ldrb r0, [r4, #15]	@ 000ce58a e07b
.org 0xce58c
	adds r0, #1	@ 000ce58c 0130
.org 0xce58e
	strb r0, [r4, #15]	@ 000ce58e e073
.org 0xce590
	adds r0, r4, #0	@ 000ce590 201c
.org 0xce592
	bl 0x1cff0	@ 000ce592 4ef72dfd
.org 0xce596
	adds r2, r4, #0	@ 000ce596 221c
.org 0xce598
	adds r2, #181	@ 000ce598 b532
.org 0xce59a
	ldrb r0, [r2, #0]	@ 000ce59a 1078
.org 0xce59c
	cmp r0, #0	@ 000ce59c 0028
.org 0xce59e
	beq.n 0xce5a4	@ 000ce59e 01d0
.org 0xce5a0
	subs r0, #1	@ 000ce5a0 0138
.org 0xce5a2
	strb r0, [r2, #0]	@ 000ce5a2 1070
.org 0xce5a4
	ldr r3, [pc, #96]	@ 000ce5a4 184b
.org 0xce5a6
	adds r0, r5, #0	@ 000ce5a6 281c
.org 0xce5a8
	adds r0, #64	@ 000ce5a8 4030
.org 0xce5aa
	lsls r0, r0, #24	@ 000ce5aa 0006
.org 0xce5ac
	lsrs r0, r0, #23	@ 000ce5ac c00d
.org 0xce5ae
	adds r0, r0, r3	@ 000ce5ae c018
.org 0xce5b0
	movs r1, #0	@ 000ce5b0 0021
.org 0xce5b2
	ldrsh r0, [r0, r1]	@ 000ce5b2 405e
.org 0xce5b4
	adds r1, r6, #0	@ 000ce5b4 311c
.org 0xce5b6
	muls r1, r0	@ 000ce5b6 4143
.org 0xce5b8
	cmp r1, #0	@ 000ce5b8 0029
.org 0xce5ba
	bge.n 0xce5be	@ 000ce5ba 00da
.org 0xce5bc
	adds r1, #255	@ 000ce5bc ff31
.org 0xce5be
	asrs r1, r1, #8	@ 000ce5be 0912
.org 0xce5c0
	ldr r0, [r4, #84]	@ 000ce5c0 606d
.org 0xce5c2
	adds r0, r0, r1	@ 000ce5c2 4018
.org 0xce5c4
	str r0, [r4, #84]	@ 000ce5c4 6065
.org 0xce5c6
	lsls r0, r5, #1	@ 000ce5c6 6800
.org 0xce5c8
	adds r0, r0, r3	@ 000ce5c8 c018
.org 0xce5ca
	movs r1, #0	@ 000ce5ca 0021
.org 0xce5cc
	ldrsh r0, [r0, r1]	@ 000ce5cc 405e
.org 0xce5ce
	muls r0, r6	@ 000ce5ce 7043
.org 0xce5d0
	cmp r0, #0	@ 000ce5d0 0028
.org 0xce5d2
	bge.n 0xce5d6	@ 000ce5d2 00da
.org 0xce5d4
	adds r0, #255	@ 000ce5d4 ff30
.org 0xce5d6
	asrs r1, r0, #8	@ 000ce5d6 0112
.org 0xce5d8
	ldr r0, [r4, #88]	@ 000ce5d8 a06d
.org 0xce5da
	adds r0, r0, r1	@ 000ce5da 4018
.org 0xce5dc
	str r0, [r4, #88]	@ 000ce5dc a065
.org 0xce5de
	mov r0, r8	@ 000ce5de 4046
.org 0xce5e0
	str r6, [r0, #0]	@ 000ce5e0 0660
.org 0xce5e2
	mov r1, r9	@ 000ce5e2 4946
.org 0xce5e4
	strb r1, [r7, #0]	@ 000ce5e4 3970
.org 0xce5e6
	ldrb r1, [r2, #0]	@ 000ce5e6 1178
.org 0xce5e8
	cmp r1, #0	@ 000ce5e8 0029
.org 0xce5ea
	bne.n 0xce5f4	@ 000ce5ea 03d1
.org 0xce5ec
	movs r0, #3	@ 000ce5ec 0320
.org 0xce5ee
	strb r0, [r4, #13]	@ 000ce5ee 6073
.org 0xce5f0
	strb r1, [r4, #14]	@ 000ce5f0 a173
.org 0xce5f2
	strb r1, [r4, #15]	@ 000ce5f2 e173
.org 0xce5f4
	pop {r3, r4}	@ 000ce5f4 18bc
.org 0xce5f6
	mov r8, r3	@ 000ce5f6 9846
.org 0xce5f8
	mov r9, r4	@ 000ce5f8 a146
.org 0xce5fa
	pop {r4, r5, r6, r7}	@ 000ce5fa f0bc
.org 0xce5fc
	pop {r0}	@ 000ce5fc 01bc
.org 0xce5fe
	bx r0	@ 000ce5fe 0047
