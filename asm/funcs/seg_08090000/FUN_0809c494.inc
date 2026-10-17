@ FUN_0809c494  entry 0x0809c494  size 148
.thumb
.org 0x9c494
FUN_0809c494:
	push {r4, r5, r6, r7, lr}	@ 0009c494 f0b5
.org 0x9c496
	adds r7, r0, #0	@ 0009c496 071c
.org 0x9c498
	lsls r1, r1, #24	@ 0009c498 0906
.org 0x9c49a
	lsrs r6, r1, #24	@ 0009c49a 0e0e
.org 0x9c49c
	lsls r2, r2, #24	@ 0009c49c 1206
.org 0x9c49e
	lsrs r5, r2, #24	@ 0009c49e 150e
.org 0x9c4a0
	lsls r3, r3, #24	@ 0009c4a0 1b06
.org 0x9c4a2
	lsrs r4, r3, #24	@ 0009c4a2 1c0e
.org 0x9c4a4
	ldr r0, [pc, #80]	@ 0009c4a4 1448
.org 0x9c4a6
	ldr r0, [r0, #0]	@ 0009c4a6 0068
.org 0x9c4a8
	bl 0x5500	@ 0009c4a8 69f72af8
.org 0x9c4ac
	mov ip, r0	@ 0009c4ac 8446
.org 0x9c4ae
	cmp r0, #0	@ 0009c4ae 0028
.org 0x9c4b0
	beq.n 0x9c528	@ 0009c4b0 3ad0
.org 0x9c4b2
	mov r1, ip	@ 0009c4b2 6146
.org 0x9c4b4
	adds r1, #37	@ 0009c4b4 2531
.org 0x9c4b6
	movs r2, #0	@ 0009c4b6 0022
.org 0x9c4b8
	movs r0, #24	@ 0009c4b8 1820
.org 0x9c4ba
	strb r0, [r1, #0]	@ 0009c4ba 0870
.org 0x9c4bc
	ldr r0, [pc, #60]	@ 0009c4bc 0f48
.org 0x9c4be
	movs r1, #41	@ 0009c4be 2921
.org 0x9c4c0
	mov r3, ip	@ 0009c4c0 6346
.org 0x9c4c2
	strb r1, [r3, #9]	@ 0009c4c2 5972
.org 0x9c4c4
	adds r0, #164	@ 0009c4c4 a430
.org 0x9c4c6
	ldr r0, [r0, #0]	@ 0009c4c6 0068
.org 0x9c4c8
	ldr r0, [r0, #0]	@ 0009c4c8 0068
.org 0x9c4ca
	str r0, [r3, #20]	@ 0009c4ca 5861
.org 0x9c4cc
	movs r0, #0	@ 0009c4cc 0020
.org 0x9c4ce
	strh r2, [r3, #32]	@ 0009c4ce 1a84
.org 0x9c4d0
	mov r1, ip	@ 0009c4d0 6146
.org 0x9c4d2
	adds r1, #34	@ 0009c4d2 2231
.org 0x9c4d4
	strb r0, [r1, #0]	@ 0009c4d4 0870
.org 0x9c4d6
	ldrb r0, [r3, #11]	@ 0009c4d6 d87a
.org 0x9c4d8
	movs r1, #16	@ 0009c4d8 1021
.org 0x9c4da
	orrs r0, r1	@ 0009c4da 0843
.org 0x9c4dc
	strb r0, [r3, #11]	@ 0009c4dc d872
.org 0x9c4de
	ldrb r0, [r3, #28]	@ 0009c4de 187f
.org 0x9c4e0
	strb r0, [r3, #29]	@ 0009c4e0 5877
.org 0x9c4e2
	str r7, [r3, #40]	@ 0009c4e2 9f62
.org 0x9c4e4
	strb r6, [r3, #16]	@ 0009c4e4 1e74
.org 0x9c4e6
	strb r5, [r3, #17]	@ 0009c4e6 5d74
.org 0x9c4e8
	adds r3, r4, #0	@ 0009c4e8 231c
.org 0x9c4ea
	cmp r3, #0	@ 0009c4ea 002b
.org 0x9c4ec
	beq.n 0x9c500	@ 0009c4ec 08d0
.org 0x9c4ee
	mov r2, ip	@ 0009c4ee 6246
.org 0x9c4f0
	ldrb r0, [r2, #10]	@ 0009c4f0 907a
.org 0x9c4f2
	orrs r0, r1	@ 0009c4f2 0843
.org 0x9c4f4
	strb r0, [r2, #10]	@ 0009c4f4 9072
.org 0x9c4f6
	b.n 0x9c50c	@ 0009c4f6 09e0
.org 0x9c4f8
	.byte 0x90,0xed,0x02,0x02	@ 0009c4f8 data
.org 0x9c4fc
	.byte 0x40,0xdb,0x85,0x08	@ 0009c4fc data
.org 0x9c500
	mov r0, ip	@ 0009c500 6046
.org 0x9c502
	ldrb r1, [r0, #10]	@ 0009c502 817a
.org 0x9c504
	movs r0, #239	@ 0009c504 ef20
.org 0x9c506
	ands r0, r1	@ 0009c506 0840
.org 0x9c508
	mov r1, ip	@ 0009c508 6146
.org 0x9c50a
	strb r0, [r1, #10]	@ 0009c50a 8872
.org 0x9c50c
	movs r1, #1	@ 0009c50c 0121
.org 0x9c50e
	ands r1, r3	@ 0009c50e 1940
.org 0x9c510
	mov r0, ip	@ 0009c510 6046
.org 0x9c512
	adds r0, #76	@ 0009c512 4c30
.org 0x9c514
	strb r1, [r0, #0]	@ 0009c514 0170
.org 0x9c516
	mov r3, ip	@ 0009c516 6346
.org 0x9c518
	adds r3, #74	@ 0009c518 4a33
.org 0x9c51a
	lsls r1, r1, #4	@ 0009c51a 0901
.org 0x9c51c
	ldrb r2, [r3, #0]	@ 0009c51c 1a78
.org 0x9c51e
	movs r0, #17	@ 0009c51e 1120
.org 0x9c520
	negs r0, r0	@ 0009c520 4042
.org 0x9c522
	ands r0, r2	@ 0009c522 1040
.org 0x9c524
	orrs r0, r1	@ 0009c524 0843
.org 0x9c526
	strb r0, [r3, #0]	@ 0009c526 1870
