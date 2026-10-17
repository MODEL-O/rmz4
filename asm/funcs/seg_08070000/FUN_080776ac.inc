@ FUN_080776ac  entry 0x080776ac  size 108
.thumb
.org 0x776ac
FUN_080776ac:
	push {r4, lr}	@ 000776ac 10b5
.org 0x776ae
	adds r4, r0, #0	@ 000776ae 041c
.org 0x776b0
	ldrb r0, [r4, #15]	@ 000776b0 e07b
.org 0x776b2
	cmp r0, #0	@ 000776b2 0028
.org 0x776b4
	bne.n 0x776c4	@ 000776b4 06d1
.org 0x776b6
	adds r0, r4, #0	@ 000776b6 201c
.org 0x776b8
	movs r1, #0	@ 000776b8 0021
.org 0x776ba
	bl 0x78fdc	@ 000776ba 01f08ffc
.org 0x776be
	ldrb r0, [r4, #15]	@ 000776be e07b
.org 0x776c0
	adds r0, #1	@ 000776c0 0130
.org 0x776c2
	strb r0, [r4, #15]	@ 000776c2 e073
.org 0x776c4
	adds r0, r4, #0	@ 000776c4 201c
.org 0x776c6
	bl 0x1cff0	@ 000776c6 a5f793fc
.org 0x776ca
	adds r0, r4, #0	@ 000776ca 201c
.org 0x776cc
	adds r0, #116	@ 000776cc 7430
.org 0x776ce
	ldr r3, [pc, #72]	@ 000776ce 124b
.org 0x776d0
	ldr r2, [pc, #72]	@ 000776d0 124a
.org 0x776d2
	adds r1, r4, #0	@ 000776d2 211c
.org 0x776d4
	adds r1, #196	@ 000776d4 c431
.org 0x776d6
	ldrb r1, [r1, #0]	@ 000776d6 0978
.org 0x776d8
	lsls r1, r1, #1	@ 000776d8 4900
.org 0x776da
	adds r1, r1, r2	@ 000776da 8918
.org 0x776dc
	ldrh r2, [r1, #0]	@ 000776dc 0a88
.org 0x776de
	lsls r2, r2, #2	@ 000776de 9200
.org 0x776e0
	adds r2, r2, r3	@ 000776e0 d218
.org 0x776e2
	adds r1, r4, #0	@ 000776e2 211c
.org 0x776e4
	adds r1, #113	@ 000776e4 7131
.org 0x776e6
	ldrb r1, [r1, #0]	@ 000776e6 0978
.org 0x776e8
	lsls r1, r1, #24	@ 000776e8 0906
.org 0x776ea
	asrs r1, r1, #24	@ 000776ea 0916
.org 0x776ec
	ldr r2, [r2, #0]	@ 000776ec 1268
.org 0x776ee
	lsls r1, r1, #2	@ 000776ee 8900
.org 0x776f0
	adds r1, r1, r2	@ 000776f0 8918
.org 0x776f2
	ldr r1, [r1, #0]	@ 000776f2 0968
.org 0x776f4
	bl 0x5784	@ 000776f4 8ef746f8
.org 0x776f8
	adds r0, r4, #0	@ 000776f8 201c
.org 0x776fa
	bl 0x78f28	@ 000776fa 01f015fc
.org 0x776fe
	ldr r0, [pc, #32]	@ 000776fe 0848
.org 0x77700
	ldrb r0, [r0, #18]	@ 00077700 807c
.org 0x77702
	movs r1, #1	@ 00077702 0121
.org 0x77704
	ands r1, r0	@ 00077704 0140
.org 0x77706
	cmp r1, #0	@ 00077706 0029
.org 0x77708
	bne.n 0x77712	@ 00077708 03d1
.org 0x7770a
	ldrb r0, [r4, #14]	@ 0007770a a07b
.org 0x7770c
	adds r0, #1	@ 0007770c 0130
.org 0x7770e
	strb r0, [r4, #14]	@ 0007770e a073
.org 0x77710
	strb r1, [r4, #15]	@ 00077710 e173
.org 0x77712
	pop {r4}	@ 00077712 10bc
.org 0x77714
	pop {r0}	@ 00077714 01bc
.org 0x77716
	bx r0	@ 00077716 0047
