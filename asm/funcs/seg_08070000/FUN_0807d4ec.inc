@ FUN_0807d4ec  entry 0x0807d4ec  size 108
.thumb
.org 0x7d4ec
FUN_0807d4ec:
	push {r4, r5, lr}	@ 0007d4ec 30b5
.org 0x7d4ee
	adds r4, r0, #0	@ 0007d4ee 041c
.org 0x7d4f0
	ldrb r0, [r4, #15]	@ 0007d4f0 e07b
.org 0x7d4f2
	cmp r0, #0	@ 0007d4f2 0028
.org 0x7d4f4
	bne.n 0x7d504	@ 0007d4f4 06d1
.org 0x7d4f6
	adds r0, r4, #0	@ 0007d4f6 201c
.org 0x7d4f8
	movs r1, #16	@ 0007d4f8 1021
.org 0x7d4fa
	bl 0x7e8c8	@ 0007d4fa 01f0e5f9
.org 0x7d4fe
	ldrb r0, [r4, #15]	@ 0007d4fe e07b
.org 0x7d500
	adds r0, #1	@ 0007d500 0130
.org 0x7d502
	strb r0, [r4, #15]	@ 0007d502 e073
.org 0x7d504
	adds r5, r4, #0	@ 0007d504 251c
.org 0x7d506
	adds r5, #188	@ 0007d506 bc35
.org 0x7d508
	ldrb r0, [r5, #0]	@ 0007d508 2878
.org 0x7d50a
	cmp r0, #0	@ 0007d50a 0028
.org 0x7d50c
	beq.n 0x7d514	@ 0007d50c 02d0
.org 0x7d50e
	adds r0, r4, #0	@ 0007d50e 201c
.org 0x7d510
	bl 0x1cff0	@ 0007d510 9ff76efd
.org 0x7d514
	adds r0, r4, #0	@ 0007d514 201c
.org 0x7d516
	adds r0, #116	@ 0007d516 7430
.org 0x7d518
	ldr r3, [pc, #60]	@ 0007d518 0f4b
.org 0x7d51a
	ldr r2, [pc, #64]	@ 0007d51a 104a
.org 0x7d51c
	ldrb r1, [r5, #0]	@ 0007d51c 2978
.org 0x7d51e
	lsls r1, r1, #1	@ 0007d51e 4900
.org 0x7d520
	adds r1, r1, r2	@ 0007d520 8918
.org 0x7d522
	ldrh r2, [r1, #0]	@ 0007d522 0a88
.org 0x7d524
	lsls r2, r2, #2	@ 0007d524 9200
.org 0x7d526
	adds r2, r2, r3	@ 0007d526 d218
.org 0x7d528
	adds r1, r4, #0	@ 0007d528 211c
.org 0x7d52a
	adds r1, #113	@ 0007d52a 7131
.org 0x7d52c
	ldrb r1, [r1, #0]	@ 0007d52c 0978
.org 0x7d52e
	lsls r1, r1, #24	@ 0007d52e 0906
.org 0x7d530
	asrs r1, r1, #24	@ 0007d530 0916
.org 0x7d532
	ldr r2, [r2, #0]	@ 0007d532 1268
.org 0x7d534
	lsls r1, r1, #2	@ 0007d534 8900
.org 0x7d536
	adds r1, r1, r2	@ 0007d536 8918
.org 0x7d538
	ldr r1, [r1, #0]	@ 0007d538 0968
.org 0x7d53a
	bl 0x5784	@ 0007d53a 88f723f9
.org 0x7d53e
	adds r0, r4, #0	@ 0007d53e 201c
.org 0x7d540
	adds r0, #115	@ 0007d540 7330
.org 0x7d542
	ldrb r0, [r0, #0]	@ 0007d542 0078
.org 0x7d544
	cmp r0, #3	@ 0007d544 0328
.org 0x7d546
	bne.n 0x7d552	@ 0007d546 04d1
.org 0x7d548
	ldrb r0, [r4, #14]	@ 0007d548 a07b
.org 0x7d54a
	adds r0, #1	@ 0007d54a 0130
.org 0x7d54c
	movs r1, #0	@ 0007d54c 0021
.org 0x7d54e
	strb r0, [r4, #14]	@ 0007d54e a073
.org 0x7d550
	strb r1, [r4, #15]	@ 0007d550 e173
.org 0x7d552
	pop {r4, r5}	@ 0007d552 30bc
.org 0x7d554
	pop {r0}	@ 0007d554 01bc
.org 0x7d556
	bx r0	@ 0007d556 0047
