@ FUN_0805b4c8  entry 0x0805b4c8  size 116
.thumb
.org 0x5b4c8
FUN_0805b4c8:
	push {r4, lr}	@ 0005b4c8 10b5
.org 0x5b4ca
	adds r4, r0, #0	@ 0005b4ca 041c
.org 0x5b4cc
	ldrb r0, [r4, #15]	@ 0005b4cc e07b
.org 0x5b4ce
	cmp r0, #0	@ 0005b4ce 0028
.org 0x5b4d0
	bne.n 0x5b506	@ 0005b4d0 19d1
.org 0x5b4d2
	adds r0, r4, #0	@ 0005b4d2 201c
.org 0x5b4d4
	adds r0, #116	@ 0005b4d4 7430
.org 0x5b4d6
	ldr r1, [pc, #100]	@ 0005b4d6 1949
.org 0x5b4d8
	bl 0x5784	@ 0005b4d8 aaf754f9
.org 0x5b4dc
	ldrb r0, [r4, #30]	@ 0005b4dc a07f
.org 0x5b4de
	lsls r0, r0, #8	@ 0005b4de 0002
.org 0x5b4e0
	adds r1, r4, #0	@ 0005b4e0 211c
.org 0x5b4e2
	adds r1, #112	@ 0005b4e2 7031
.org 0x5b4e4
	ldrb r1, [r1, #0]	@ 0005b4e4 0978
.org 0x5b4e6
	orrs r0, r1	@ 0005b4e6 0843
.org 0x5b4e8
	ldr r1, [pc, #84]	@ 0005b4e8 1549
.org 0x5b4ea
	cmp r0, r1	@ 0005b4ea 8842
.org 0x5b4ec
	beq.n 0x5b4fc	@ 0005b4ec 06d0
.org 0x5b4ee
	adds r0, r4, #0	@ 0005b4ee 201c
.org 0x5b4f0
	bl 0x1cf00	@ 0005b4f0 c1f706fd
.org 0x5b4f4
	adds r1, r4, #0	@ 0005b4f4 211c
.org 0x5b4f6
	adds r1, #189	@ 0005b4f6 bd31
.org 0x5b4f8
	movs r0, #1	@ 0005b4f8 0120
.org 0x5b4fa
	strb r0, [r1, #0]	@ 0005b4fa 0870
.org 0x5b4fc
	movs r0, #128	@ 0005b4fc 8020
.org 0x5b4fe
	strb r0, [r4, #18]	@ 0005b4fe a074
.org 0x5b500
	ldrb r0, [r4, #15]	@ 0005b500 e07b
.org 0x5b502
	adds r0, #1	@ 0005b502 0130
.org 0x5b504
	strb r0, [r4, #15]	@ 0005b504 e073
.org 0x5b506
	adds r0, r4, #0	@ 0005b506 201c
.org 0x5b508
	bl 0x1cff0	@ 0005b508 c1f772fd
.org 0x5b50c
	ldrb r0, [r4, #18]	@ 0005b50c a07c
.org 0x5b50e
	cmp r0, #0	@ 0005b50e 0028
.org 0x5b510
	beq.n 0x5b51c	@ 0005b510 04d0
.org 0x5b512
	subs r0, #1	@ 0005b512 0138
.org 0x5b514
	strb r0, [r4, #18]	@ 0005b514 a074
.org 0x5b516
	lsls r0, r0, #24	@ 0005b516 0006
.org 0x5b518
	cmp r0, #0	@ 0005b518 0028
.org 0x5b51a
	bne.n 0x5b536	@ 0005b51a 0cd1
.org 0x5b51c
	adds r0, r4, #0	@ 0005b51c 201c
.org 0x5b51e
	adds r0, #200	@ 0005b51e c830
.org 0x5b520
	ldr r0, [r0, #0]	@ 0005b520 0068
.org 0x5b522
	cmp r0, #0	@ 0005b522 0028
.org 0x5b524
	beq.n 0x5b530	@ 0005b524 04d0
.org 0x5b526
	adds r0, r4, #0	@ 0005b526 201c
.org 0x5b528
	adds r0, #191	@ 0005b528 bf30
.org 0x5b52a
	ldrb r0, [r0, #0]	@ 0005b52a 0078
.org 0x5b52c
	cmp r0, #5	@ 0005b52c 0528
.org 0x5b52e
	beq.n 0x5b536	@ 0005b52e 02d0
.org 0x5b530
	adds r0, r4, #0	@ 0005b530 201c
.org 0x5b532
	bl 0x5bf8c	@ 0005b532 00f02bfd
.org 0x5b536
	pop {r4}	@ 0005b536 10bc
.org 0x5b538
	pop {r0}	@ 0005b538 01bc
.org 0x5b53a
	bx r0	@ 0005b53a 0047
