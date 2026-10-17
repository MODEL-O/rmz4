@ FUN_0805ac68  entry 0x0805ac68  size 116
.thumb
.org 0x5ac68
FUN_0805ac68:
	push {r4, lr}	@ 0005ac68 10b5
.org 0x5ac6a
	adds r4, r0, #0	@ 0005ac6a 041c
.org 0x5ac6c
	ldrb r0, [r4, #15]	@ 0005ac6c e07b
.org 0x5ac6e
	cmp r0, #0	@ 0005ac6e 0028
.org 0x5ac70
	bne.n 0x5aca6	@ 0005ac70 19d1
.org 0x5ac72
	adds r0, r4, #0	@ 0005ac72 201c
.org 0x5ac74
	adds r0, #116	@ 0005ac74 7430
.org 0x5ac76
	ldr r1, [pc, #100]	@ 0005ac76 1949
.org 0x5ac78
	bl 0x5784	@ 0005ac78 aaf784fd
.org 0x5ac7c
	ldrb r0, [r4, #30]	@ 0005ac7c a07f
.org 0x5ac7e
	lsls r0, r0, #8	@ 0005ac7e 0002
.org 0x5ac80
	adds r1, r4, #0	@ 0005ac80 211c
.org 0x5ac82
	adds r1, #112	@ 0005ac82 7031
.org 0x5ac84
	ldrb r1, [r1, #0]	@ 0005ac84 0978
.org 0x5ac86
	orrs r0, r1	@ 0005ac86 0843
.org 0x5ac88
	ldr r1, [pc, #84]	@ 0005ac88 1549
.org 0x5ac8a
	cmp r0, r1	@ 0005ac8a 8842
.org 0x5ac8c
	beq.n 0x5ac9c	@ 0005ac8c 06d0
.org 0x5ac8e
	adds r0, r4, #0	@ 0005ac8e 201c
.org 0x5ac90
	bl 0x1cf00	@ 0005ac90 c2f736f9
.org 0x5ac94
	adds r1, r4, #0	@ 0005ac94 211c
.org 0x5ac96
	adds r1, #189	@ 0005ac96 bd31
.org 0x5ac98
	movs r0, #1	@ 0005ac98 0120
.org 0x5ac9a
	strb r0, [r1, #0]	@ 0005ac9a 0870
.org 0x5ac9c
	movs r0, #128	@ 0005ac9c 8020
.org 0x5ac9e
	strb r0, [r4, #18]	@ 0005ac9e a074
.org 0x5aca0
	ldrb r0, [r4, #15]	@ 0005aca0 e07b
.org 0x5aca2
	adds r0, #1	@ 0005aca2 0130
.org 0x5aca4
	strb r0, [r4, #15]	@ 0005aca4 e073
.org 0x5aca6
	adds r0, r4, #0	@ 0005aca6 201c
.org 0x5aca8
	bl 0x1cff0	@ 0005aca8 c2f7a2f9
.org 0x5acac
	ldrb r0, [r4, #18]	@ 0005acac a07c
.org 0x5acae
	cmp r0, #0	@ 0005acae 0028
.org 0x5acb0
	beq.n 0x5acbc	@ 0005acb0 04d0
.org 0x5acb2
	subs r0, #1	@ 0005acb2 0138
.org 0x5acb4
	strb r0, [r4, #18]	@ 0005acb4 a074
.org 0x5acb6
	lsls r0, r0, #24	@ 0005acb6 0006
.org 0x5acb8
	cmp r0, #0	@ 0005acb8 0028
.org 0x5acba
	bne.n 0x5acd6	@ 0005acba 0cd1
.org 0x5acbc
	adds r0, r4, #0	@ 0005acbc 201c
.org 0x5acbe
	adds r0, #200	@ 0005acbe c830
.org 0x5acc0
	ldr r0, [r0, #0]	@ 0005acc0 0068
.org 0x5acc2
	cmp r0, #0	@ 0005acc2 0028
.org 0x5acc4
	beq.n 0x5acd0	@ 0005acc4 04d0
.org 0x5acc6
	adds r0, r4, #0	@ 0005acc6 201c
.org 0x5acc8
	adds r0, #191	@ 0005acc8 bf30
.org 0x5acca
	ldrb r0, [r0, #0]	@ 0005acca 0078
.org 0x5accc
	cmp r0, #2	@ 0005accc 0228
.org 0x5acce
	beq.n 0x5acd6	@ 0005acce 02d0
.org 0x5acd0
	adds r0, r4, #0	@ 0005acd0 201c
.org 0x5acd2
	bl 0x5bf8c	@ 0005acd2 01f05bf9
.org 0x5acd6
	pop {r4}	@ 0005acd6 10bc
.org 0x5acd8
	pop {r0}	@ 0005acd8 01bc
.org 0x5acda
	bx r0	@ 0005acda 0047
