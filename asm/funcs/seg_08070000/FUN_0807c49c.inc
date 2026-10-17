@ FUN_0807c49c  entry 0x0807c49c  size 180
.thumb
.org 0x7c49c
FUN_0807c49c:
	push {r4, r5, lr}	@ 0007c49c 30b5
.org 0x7c49e
	adds r4, r0, #0	@ 0007c49e 041c
.org 0x7c4a0
	movs r5, #1	@ 0007c4a0 0125
.org 0x7c4a2
	ldrb r0, [r4, #15]	@ 0007c4a2 e07b
.org 0x7c4a4
	cmp r0, #0	@ 0007c4a4 0028
.org 0x7c4a6
	bne.n 0x7c502	@ 0007c4a6 2cd1
.org 0x7c4a8
	adds r0, r4, #0	@ 0007c4a8 201c
.org 0x7c4aa
	movs r1, #4	@ 0007c4aa 0421
.org 0x7c4ac
	bl 0x7e8c8	@ 0007c4ac 02f00cfa
.org 0x7c4b0
	movs r3, #0	@ 0007c4b0 0023
.org 0x7c4b2
	ldr r0, [pc, #60]	@ 0007c4b2 0f48
.org 0x7c4b4
	ldr r0, [r0, #0]	@ 0007c4b4 0068
.org 0x7c4b6
	ldr r1, [r4, #84]	@ 0007c4b6 616d
.org 0x7c4b8
	ldr r0, [r0, #84]	@ 0007c4b8 406d
.org 0x7c4ba
	cmp r1, r0	@ 0007c4ba 8142
.org 0x7c4bc
	bge.n 0x7c4c0	@ 0007c4bc 00da
.org 0x7c4be
	movs r3, #1	@ 0007c4be 0123
.org 0x7c4c0
	adds r1, r3, #0	@ 0007c4c0 191c
.org 0x7c4c2
	ands r1, r5	@ 0007c4c2 2940
.org 0x7c4c4
	adds r0, r4, #0	@ 0007c4c4 201c
.org 0x7c4c6
	adds r0, #76	@ 0007c4c6 4c30
.org 0x7c4c8
	strb r1, [r0, #0]	@ 0007c4c8 0170
.org 0x7c4ca
	movs r0, #74	@ 0007c4ca 4a20
.org 0x7c4cc
	adds r0, r0, r4	@ 0007c4cc 0019
.org 0x7c4ce
	mov ip, r0	@ 0007c4ce 8446
.org 0x7c4d0
	lsls r1, r1, #4	@ 0007c4d0 0901
.org 0x7c4d2
	ldrb r2, [r0, #0]	@ 0007c4d2 0278
.org 0x7c4d4
	movs r0, #17	@ 0007c4d4 1120
.org 0x7c4d6
	negs r0, r0	@ 0007c4d6 4042
.org 0x7c4d8
	ands r0, r2	@ 0007c4d8 1040
.org 0x7c4da
	orrs r0, r1	@ 0007c4da 0843
.org 0x7c4dc
	mov r1, ip	@ 0007c4dc 6146
.org 0x7c4de
	strb r0, [r1, #0]	@ 0007c4de 0870
.org 0x7c4e0
	ands r3, r5	@ 0007c4e0 2b40
.org 0x7c4e2
	cmp r3, #0	@ 0007c4e2 002b
.org 0x7c4e4
	beq.n 0x7c4f4	@ 0007c4e4 06d0
.org 0x7c4e6
	ldrb r0, [r4, #10]	@ 0007c4e6 a07a
.org 0x7c4e8
	movs r1, #16	@ 0007c4e8 1021
.org 0x7c4ea
	orrs r0, r1	@ 0007c4ea 0843
.org 0x7c4ec
	b.n 0x7c4fa	@ 0007c4ec 05e0
.org 0x7c4ee
	.byte 0x00	@ 0007c4ee data
.org 0x7c4ef
	.byte 0x00	@ 0007c4ef data
.org 0x7c4f0
	.byte 0xf0,0xdb,0x02,0x02	@ 0007c4f0 data
.org 0x7c4f4
	ldrb r1, [r4, #10]	@ 0007c4f4 a17a
.org 0x7c4f6
	movs r0, #239	@ 0007c4f6 ef20
.org 0x7c4f8
	ands r0, r1	@ 0007c4f8 0840
.org 0x7c4fa
	strb r0, [r4, #10]	@ 0007c4fa a072
.org 0x7c4fc
	ldrb r0, [r4, #15]	@ 0007c4fc e07b
.org 0x7c4fe
	adds r0, #1	@ 0007c4fe 0130
.org 0x7c500
	strb r0, [r4, #15]	@ 0007c500 e073
.org 0x7c502
	adds r5, r4, #0	@ 0007c502 251c
.org 0x7c504
	adds r5, #188	@ 0007c504 bc35
.org 0x7c506
	ldrb r0, [r5, #0]	@ 0007c506 2878
.org 0x7c508
	cmp r0, #0	@ 0007c508 0028
.org 0x7c50a
	beq.n 0x7c512	@ 0007c50a 02d0
.org 0x7c50c
	adds r0, r4, #0	@ 0007c50c 201c
.org 0x7c50e
	bl 0x1cff0	@ 0007c50e a0f76ffd
.org 0x7c512
	adds r0, r4, #0	@ 0007c512 201c
.org 0x7c514
	adds r0, #116	@ 0007c514 7430
.org 0x7c516
	ldr r3, [pc, #64]	@ 0007c516 104b
.org 0x7c518
	ldr r2, [pc, #64]	@ 0007c518 104a
.org 0x7c51a
	ldrb r1, [r5, #0]	@ 0007c51a 2978
.org 0x7c51c
	lsls r1, r1, #1	@ 0007c51c 4900
.org 0x7c51e
	adds r1, r1, r2	@ 0007c51e 8918
.org 0x7c520
	ldrh r2, [r1, #0]	@ 0007c520 0a88
.org 0x7c522
	lsls r2, r2, #2	@ 0007c522 9200
.org 0x7c524
	adds r2, r2, r3	@ 0007c524 d218
.org 0x7c526
	adds r1, r4, #0	@ 0007c526 211c
.org 0x7c528
	adds r1, #113	@ 0007c528 7131
.org 0x7c52a
	ldrb r1, [r1, #0]	@ 0007c52a 0978
.org 0x7c52c
	lsls r1, r1, #24	@ 0007c52c 0906
.org 0x7c52e
	asrs r1, r1, #24	@ 0007c52e 0916
.org 0x7c530
	ldr r2, [r2, #0]	@ 0007c530 1268
.org 0x7c532
	lsls r1, r1, #2	@ 0007c532 8900
.org 0x7c534
	adds r1, r1, r2	@ 0007c534 8918
.org 0x7c536
	ldr r1, [r1, #0]	@ 0007c536 0968
.org 0x7c538
	bl 0x5784	@ 0007c538 89f724f9
.org 0x7c53c
	adds r0, r4, #0	@ 0007c53c 201c
.org 0x7c53e
	adds r0, #115	@ 0007c53e 7330
.org 0x7c540
	ldrb r0, [r0, #0]	@ 0007c540 0078
.org 0x7c542
	cmp r0, #3	@ 0007c542 0328
.org 0x7c544
	bne.n 0x7c550	@ 0007c544 04d1
.org 0x7c546
	ldrb r0, [r4, #14]	@ 0007c546 a07b
.org 0x7c548
	adds r0, #1	@ 0007c548 0130
.org 0x7c54a
	movs r1, #0	@ 0007c54a 0021
.org 0x7c54c
	strb r0, [r4, #14]	@ 0007c54c a073
.org 0x7c54e
	strb r1, [r4, #15]	@ 0007c54e e173
