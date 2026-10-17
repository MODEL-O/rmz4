@ FUN_0801d444  entry 0x0801d444  size 192
.thumb
.org 0x1d444
FUN_0801d444:
	push {r4, r5, r6, r7, lr}	@ 0001d444 f0b5
.org 0x1d446
	mov r7, r9	@ 0001d446 4f46
.org 0x1d448
	mov r6, r8	@ 0001d448 4646
.org 0x1d44a
	push {r6, r7}	@ 0001d44a c0b4
.org 0x1d44c
	ldr r4, [pc, #132]	@ 0001d44c 214c
.org 0x1d44e
	ldr r0, [r4, #0]	@ 0001d44e 2068
.org 0x1d450
	movs r1, #20	@ 0001d450 1421
.org 0x1d452
	bl 0x129120	@ 0001d452 0bf165fe
.org 0x1d456
	lsls r0, r0, #16	@ 0001d456 0004
.org 0x1d458
	ldr r1, [pc, #124]	@ 0001d458 1f49
.org 0x1d45a
	adds r0, r0, r1	@ 0001d45a 4018
.org 0x1d45c
	cmp r0, #0	@ 0001d45c 0028
.org 0x1d45e
	blt.n 0x1d48c	@ 0001d45e 15db
.org 0x1d460
	ldr r7, [pc, #120]	@ 0001d460 1e4f
.org 0x1d462
	ldr r6, [pc, #124]	@ 0001d462 1f4e
.org 0x1d464
	adds r5, r4, #0	@ 0001d464 251c
.org 0x1d466
	asrs r2, r0, #16	@ 0001d466 0214
.org 0x1d468
	lsls r3, r2, #1	@ 0001d468 5300
.org 0x1d46a
	adds r4, r3, r7	@ 0001d46a dc19
.org 0x1d46c
	lsls r1, r2, #2	@ 0001d46c 9100
.org 0x1d46e
	adds r1, r1, r2	@ 0001d46e 8918
.org 0x1d470
	lsls r1, r1, #2	@ 0001d470 8900
.org 0x1d472
	adds r0, r1, r5	@ 0001d472 4819
.org 0x1d474
	ldrh r0, [r0, #6]	@ 0001d474 c088
.org 0x1d476
	lsrs r0, r0, #6	@ 0001d476 8009
.org 0x1d478
	strh r0, [r4, #0]	@ 0001d478 2080
.org 0x1d47a
	adds r3, r3, r6	@ 0001d47a 9b19
.org 0x1d47c
	ldr r0, [pc, #100]	@ 0001d47c 1948
.org 0x1d47e
	adds r1, r1, r0	@ 0001d47e 0918
.org 0x1d480
	ldrb r0, [r1, #7]	@ 0001d480 c879
.org 0x1d482
	strh r0, [r3, #0]	@ 0001d482 1880
.org 0x1d484
	subs r2, #1	@ 0001d484 013a
.org 0x1d486
	lsls r0, r2, #16	@ 0001d486 1004
.org 0x1d488
	cmp r0, #0	@ 0001d488 0028
.org 0x1d48a
	bge.n 0x1d466	@ 0001d48a ecda
.org 0x1d48c
	ldr r1, [pc, #88]	@ 0001d48c 1649
.org 0x1d48e
	ldr r0, [r1, #0]	@ 0001d48e 0868
.org 0x1d490
	lsls r0, r0, #14	@ 0001d490 8003
.org 0x1d492
	asrs r0, r0, #16	@ 0001d492 0014
.org 0x1d494
	subs r0, #1	@ 0001d494 0138
.org 0x1d496
	lsls r0, r0, #16	@ 0001d496 0004
.org 0x1d498
	lsrs r6, r0, #16	@ 0001d498 060c
.org 0x1d49a
	lsls r0, r6, #16	@ 0001d49a 3004
.org 0x1d49c
	cmp r0, #0	@ 0001d49c 0028
.org 0x1d49e
	blt.n 0x1d51a	@ 0001d49e 3cdb
.org 0x1d4a0
	ldr r2, [pc, #72]	@ 0001d4a0 124a
.org 0x1d4a2
	mov r9, r2	@ 0001d4a2 9146
.org 0x1d4a4
	mov r8, r1	@ 0001d4a4 8846
.org 0x1d4a6
	movs r1, #0	@ 0001d4a6 0021
.org 0x1d4a8
	mov ip, r1	@ 0001d4a8 8c46
.org 0x1d4aa
	ldr r7, [pc, #68]	@ 0001d4aa 114f
.org 0x1d4ac
	asrs r2, r0, #16	@ 0001d4ac 0214
.org 0x1d4ae
	lsls r3, r2, #1	@ 0001d4ae 5300
.org 0x1d4b0
	mov r1, r9	@ 0001d4b0 4946
.org 0x1d4b2
	adds r0, r3, r1	@ 0001d4b2 5818
.org 0x1d4b4
	lsls r4, r2, #2	@ 0001d4b4 9400
.org 0x1d4b6
	mov r1, r8	@ 0001d4b6 4146
.org 0x1d4b8
	adds r5, r4, r1	@ 0001d4b8 6518
.org 0x1d4ba
	ldr r1, [r5, #0]	@ 0001d4ba 2968
.org 0x1d4bc
	adds r1, r4, r1	@ 0001d4bc 6118
.org 0x1d4be
	add r1, r8	@ 0001d4be 4144
.org 0x1d4c0
	ldrh r1, [r1, #6]	@ 0001d4c0 c988
.org 0x1d4c2
	lsrs r1, r1, #6	@ 0001d4c2 8909
.org 0x1d4c4
	strh r1, [r0, #0]	@ 0001d4c4 0180
.org 0x1d4c6
	cmp r2, #79	@ 0001d4c6 4f2a
.org 0x1d4c8
	bgt.n 0x1d4f4	@ 0001d4c8 14dc
.org 0x1d4ca
	adds r0, r3, r7	@ 0001d4ca d819
.org 0x1d4cc
	mov r2, ip	@ 0001d4cc 6246
.org 0x1d4ce
	strh r2, [r0, #0]	@ 0001d4ce 0280
.org 0x1d4d0
	b.n 0x1d50c	@ 0001d4d0 1ce0
.org 0x1d4d2
	.byte 0x00	@ 0001d4d2 data
.org 0x1d4d3
	.byte 0x00	@ 0001d4d3 data
.org 0x1d4d4
	.byte 0x00,0x40,0xc4,0x08	@ 0001d4d4 data
.org 0x1d4d8
	.byte 0x00,0x00,0xff,0xff	@ 0001d4d8 data
.org 0x1d4dc
	.byte 0x40,0xe0,0x02,0x02	@ 0001d4dc data
.org 0x1d4e0
	.byte 0x40,0xde,0x02,0x02	@ 0001d4e0 data
.org 0x1d4e4
	.byte 0x0c,0x40,0xc4,0x08	@ 0001d4e4 data
.org 0x1d4e8
	.byte 0x00,0xc0,0x8c,0x08	@ 0001d4e8 data
.org 0x1d4ec
	.byte 0x40,0xe2,0x02,0x02	@ 0001d4ec data
.org 0x1d4f0
	.byte 0x40,0xdc,0x02,0x02	@ 0001d4f0 data
.org 0x1d4f4
	cmp r2, #127	@ 0001d4f4 7f2a
.org 0x1d4f6
	bgt.n 0x1d4fe	@ 0001d4f6 02dc
.org 0x1d4f8
	adds r0, r3, r7	@ 0001d4f8 d819
.org 0x1d4fa
	mov r1, ip	@ 0001d4fa 6146
.org 0x1d4fc
	b.n 0x1d50a	@ 0001d4fc 05e0
.org 0x1d4fe
	adds r0, r3, r7	@ 0001d4fe d819
.org 0x1d500
	ldr r1, [r5, #0]	@ 0001d500 2968
.org 0x1d502
	adds r1, r4, r1	@ 0001d502 6118
