@ FUN_0800d4d4  entry 0x0800d4d4  size 148
.thumb
.org 0xd4d4
FUN_0800d4d4:
	push {r4, r5, r6, r7, lr}	@ 0000d4d4 f0b5
.org 0xd4d6
	mov r7, sl	@ 0000d4d6 5746
.org 0xd4d8
	mov r6, r9	@ 0000d4d8 4e46
.org 0xd4da
	mov r5, r8	@ 0000d4da 4546
.org 0xd4dc
	push {r5, r6, r7}	@ 0000d4dc e0b4
.org 0xd4de
	sub sp, #8	@ 0000d4de 82b0
.org 0xd4e0
	adds r7, r0, #0	@ 0000d4e0 071c
.org 0xd4e2
	ldr r0, [r7, #92]	@ 0000d4e2 f86d
.org 0xd4e4
	lsls r0, r0, #16	@ 0000d4e4 0004
.org 0xd4e6
	ldrb r1, [r7, #14]	@ 0000d4e6 b97b
.org 0xd4e8
	mov sl, r1	@ 0000d4e8 8a46
.org 0xd4ea
	cmp r1, #0	@ 0000d4ea 0029
.org 0xd4ec
	bne.n 0xd558	@ 0000d4ec 34d1
.org 0xd4ee
	lsrs r6, r0, #20	@ 0000d4ee 060d
.org 0xd4f0
	lsls r5, r6, #1	@ 0000d4f0 7500
.org 0xd4f2
	ldr r2, [pc, #116]	@ 0000d4f2 1d4a
.org 0xd4f4
	mov r8, r2	@ 0000d4f4 9046
.org 0xd4f6
	add r5, r8	@ 0000d4f6 4544
.org 0xd4f8
	ldr r1, [r7, #100]	@ 0000d4f8 796e
.org 0xd4fa
	ldr r2, [pc, #112]	@ 0000d4fa 1c4a
.org 0xd4fc
	adds r0, r2, #0	@ 0000d4fc 101c
.org 0xd4fe
	orrs r1, r0	@ 0000d4fe 0143
.org 0xd500
	strh r1, [r5, #0]	@ 0000d500 2980
.org 0xd502
	movs r4, #248	@ 0000d502 f824
.org 0xd504
	lsls r4, r4, #5	@ 0000d504 6401
.org 0xd506
	ands r1, r4	@ 0000d506 2140
.org 0xd508
	lsls r1, r1, #3	@ 0000d508 c900
.org 0xd50a
	movs r0, #192	@ 0000d50a c020
.org 0xd50c
	lsls r0, r0, #19	@ 0000d50c c004
.org 0xd50e
	adds r1, r1, r0	@ 0000d50e 0918
.org 0xd510
	mov r0, sl	@ 0000d510 5046
.org 0xd512
	str r0, [sp, #0]	@ 0000d512 0090
.org 0xd514
	movs r2, #128	@ 0000d514 8022
.org 0xd516
	lsls r2, r2, #2	@ 0000d516 9200
.org 0xd518
	mov r9, r2	@ 0000d518 9146
.org 0xd51a
	ldr r2, [pc, #84]	@ 0000d51a 154a
.org 0xd51c
	mov r0, sp	@ 0000d51c 6846
.org 0xd51e
	bl 0x128be0	@ 0000d51e 1bf15ffb
.org 0xd522
	ldr r0, [pc, #80]	@ 0000d522 1448
.org 0xd524
	ldr r0, [r0, #0]	@ 0000d524 0068
.org 0xd526
	ldr r1, [pc, #80]	@ 0000d526 1449
.org 0xd528
	adds r0, r0, r1	@ 0000d528 4018
.org 0xd52a
	ldrh r1, [r5, #0]	@ 0000d52a 2988
.org 0xd52c
	ands r4, r1	@ 0000d52c 0c40
.org 0xd52e
	lsls r4, r4, #3	@ 0000d52e e400
.org 0xd530
	ldr r2, [pc, #72]	@ 0000d530 124a
.org 0xd532
	adds r4, r4, r2	@ 0000d532 a418
.org 0xd534
	adds r1, r4, #0	@ 0000d534 211c
.org 0xd536
	mov r2, r9	@ 0000d536 4a46
.org 0xd538
	bl 0x128be0	@ 0000d538 1bf152fb
.org 0xd53c
	lsls r6, r6, #2	@ 0000d53c b600
.org 0xd53e
	movs r0, #8	@ 0000d53e 0820
.org 0xd540
	add r8, r0	@ 0000d540 8044
.org 0xd542
	add r6, r8	@ 0000d542 4644
.org 0xd544
	mov r1, sl	@ 0000d544 5146
.org 0xd546
	str r1, [r6, #0]	@ 0000d546 3160
.org 0xd548
	ldr r0, [pc, #52]	@ 0000d548 0d48
.org 0xd54a
	str r0, [r7, #76]	@ 0000d54a f864
.org 0xd54c
	movs r0, #148	@ 0000d54c 9420
.org 0xd54e
	lsls r0, r0, #2	@ 0000d54e 8000
.org 0xd550
	str r0, [r7, #80]	@ 0000d550 3865
.org 0xd552
	ldrb r0, [r7, #14]	@ 0000d552 b87b
.org 0xd554
	adds r0, #1	@ 0000d554 0130
.org 0xd556
	strb r0, [r7, #14]	@ 0000d556 b873
.org 0xd558
	add sp, #8	@ 0000d558 02b0
.org 0xd55a
	pop {r3, r4, r5}	@ 0000d55a 38bc
.org 0xd55c
	mov r8, r3	@ 0000d55c 9846
.org 0xd55e
	mov r9, r4	@ 0000d55e a146
.org 0xd560
	mov sl, r5	@ 0000d560 aa46
.org 0xd562
	pop {r4, r5, r6, r7}	@ 0000d562 f0bc
.org 0xd564
	pop {r0}	@ 0000d564 01bc
.org 0xd566
	bx r0	@ 0000d566 0047
