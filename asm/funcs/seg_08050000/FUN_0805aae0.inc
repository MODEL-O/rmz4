@ FUN_0805aae0  entry 0x0805aae0  size 182
.thumb
.org 0x5aae0
FUN_0805aae0:
	push {r4, r5, r6, lr}	@ 0005aae0 70b5
.org 0x5aae2
	adds r4, r0, #0	@ 0005aae2 041c
.org 0x5aae4
	ldrb r0, [r4, #15]	@ 0005aae4 e07b
.org 0x5aae6
	cmp r0, #0	@ 0005aae6 0028
.org 0x5aae8
	bne.n 0x5ab68	@ 0005aae8 3ed1
.org 0x5aaea
	ldr r0, [pc, #172]	@ 0005aaea 2b48
.org 0x5aaec
	ldr r1, [pc, #172]	@ 0005aaec 2b49
.org 0x5aaee
	adds r1, #140	@ 0005aaee 8c31
.org 0x5aaf0
	ldrh r1, [r1, #0]	@ 0005aaf0 0988
.org 0x5aaf2
	ldrh r2, [r0, #6]	@ 0005aaf2 c288
.org 0x5aaf4
	lsrs r2, r2, #6	@ 0005aaf4 9209
.org 0x5aaf6
	subs r1, r1, r2	@ 0005aaf6 891a
.org 0x5aaf8
	lsls r1, r1, #5	@ 0005aaf8 4901
.org 0x5aafa
	movs r2, #128	@ 0005aafa 8022
.org 0x5aafc
	lsls r2, r2, #9	@ 0005aafc 5202
.org 0x5aafe
	adds r1, r1, r2	@ 0005aafe 8918
.org 0x5ab00
	bl 0x1d30	@ 0005ab00 a7f716f9
.org 0x5ab04
	ldr r0, [pc, #152]	@ 0005ab04 2648
.org 0x5ab06
	ldr r1, [pc, #156]	@ 0005ab06 2749
.org 0x5ab08
	adds r1, #140	@ 0005ab08 8c31
.org 0x5ab0a
	ldrh r1, [r1, #0]	@ 0005ab0a 0988
.org 0x5ab0c
	ldrb r2, [r0, #7]	@ 0005ab0c c279
.org 0x5ab0e
	subs r1, r1, r2	@ 0005ab0e 891a
.org 0x5ab10
	lsls r1, r1, #5	@ 0005ab10 4901
.org 0x5ab12
	movs r2, #128	@ 0005ab12 8022
.org 0x5ab14
	lsls r2, r2, #2	@ 0005ab14 9200
.org 0x5ab16
	adds r1, r1, r2	@ 0005ab16 8918
.org 0x5ab18
	bl 0x2208	@ 0005ab18 a7f776fb
.org 0x5ab1c
	adds r5, r4, #0	@ 0005ab1c 251c
.org 0x5ab1e
	adds r5, #200	@ 0005ab1e c835
.org 0x5ab20
	ldr r0, [r5, #0]	@ 0005ab20 2868
.org 0x5ab22
	adds r6, r4, #0	@ 0005ab22 261c
.org 0x5ab24
	adds r6, #191	@ 0005ab24 bf36
.org 0x5ab26
	cmp r0, #0	@ 0005ab26 0028
.org 0x5ab28
	beq.n 0x5ab30	@ 0005ab28 02d0
.org 0x5ab2a
	ldrb r0, [r6, #0]	@ 0005ab2a 3078
.org 0x5ab2c
	cmp r0, #2	@ 0005ab2c 0228
.org 0x5ab2e
	beq.n 0x5ab44	@ 0005ab2e 09d0
.org 0x5ab30
	adds r0, r4, #0	@ 0005ab30 201c
.org 0x5ab32
	movs r1, #1	@ 0005ab32 0121
.org 0x5ab34
	bl 0x95120	@ 0005ab34 3af0f4fa
.org 0x5ab38
	str r0, [r5, #0]	@ 0005ab38 2860
.org 0x5ab3a
	movs r1, #255	@ 0005ab3a ff21
.org 0x5ab3c
	cmp r0, #0	@ 0005ab3c 0028
.org 0x5ab3e
	beq.n 0x5ab42	@ 0005ab3e 00d0
.org 0x5ab40
	movs r1, #2	@ 0005ab40 0221
.org 0x5ab42
	strb r1, [r6, #0]	@ 0005ab42 3170
.org 0x5ab44
	adds r0, r4, #0	@ 0005ab44 201c
.org 0x5ab46
	adds r0, #116	@ 0005ab46 7430
.org 0x5ab48
	ldr r1, [pc, #92]	@ 0005ab48 1749
.org 0x5ab4a
	bl 0x5784	@ 0005ab4a aaf71bfe
.org 0x5ab4e
	ldr r1, [pc, #92]	@ 0005ab4e 1749
.org 0x5ab50
	adds r0, r4, #0	@ 0005ab50 201c
.org 0x5ab52
	bl 0x1cf00	@ 0005ab52 c2f7d5f9
.org 0x5ab56
	adds r1, r4, #0	@ 0005ab56 211c
.org 0x5ab58
	adds r1, #189	@ 0005ab58 bd31
.org 0x5ab5a
	movs r0, #1	@ 0005ab5a 0120
.org 0x5ab5c
	strb r0, [r1, #0]	@ 0005ab5c 0870
.org 0x5ab5e
	movs r0, #48	@ 0005ab5e 3020
.org 0x5ab60
	strb r0, [r4, #18]	@ 0005ab60 a074
.org 0x5ab62
	ldrb r0, [r4, #15]	@ 0005ab62 e07b
.org 0x5ab64
	adds r0, #1	@ 0005ab64 0130
.org 0x5ab66
	strb r0, [r4, #15]	@ 0005ab66 e073
.org 0x5ab68
	adds r0, r4, #0	@ 0005ab68 201c
.org 0x5ab6a
	bl 0x1cff0	@ 0005ab6a c2f741fa
.org 0x5ab6e
	ldrb r0, [r4, #18]	@ 0005ab6e a07c
.org 0x5ab70
	cmp r0, #0	@ 0005ab70 0028
.org 0x5ab72
	beq.n 0x5ab7e	@ 0005ab72 04d0
.org 0x5ab74
	subs r0, #1	@ 0005ab74 0138
.org 0x5ab76
	strb r0, [r4, #18]	@ 0005ab76 a074
.org 0x5ab78
	lsls r0, r0, #24	@ 0005ab78 0006
.org 0x5ab7a
	cmp r0, #0	@ 0005ab7a 0028
.org 0x5ab7c
	bne.n 0x5ab90	@ 0005ab7c 08d1
.org 0x5ab7e
	adds r0, r4, #0	@ 0005ab7e 201c
.org 0x5ab80
	adds r0, #115	@ 0005ab80 7330
.org 0x5ab82
	ldrb r0, [r0, #0]	@ 0005ab82 0078
.org 0x5ab84
	cmp r0, #3	@ 0005ab84 0328
.org 0x5ab86
	bne.n 0x5ab90	@ 0005ab86 03d1
.org 0x5ab88
	movs r1, #0	@ 0005ab88 0021
.org 0x5ab8a
	movs r0, #1	@ 0005ab8a 0120
.org 0x5ab8c
	strb r0, [r4, #14]	@ 0005ab8c a073
.org 0x5ab8e
	strb r1, [r4, #15]	@ 0005ab8e e173
.org 0x5ab90
	pop {r4, r5, r6}	@ 0005ab90 70bc
.org 0x5ab92
	pop {r0}	@ 0005ab92 01bc
.org 0x5ab94
	bx r0	@ 0005ab94 0047
