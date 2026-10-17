@ FUN_08058558  entry 0x08058558  size 114
.thumb
.org 0x58558
FUN_08058558:
	push {r4, lr}	@ 00058558 10b5
.org 0x5855a
	adds r4, r0, #0	@ 0005855a 041c
.org 0x5855c
	ldrb r0, [r4, #15]	@ 0005855c e07b
.org 0x5855e
	cmp r0, #0	@ 0005855e 0028
.org 0x58560
	bne.n 0x58570	@ 00058560 06d1
.org 0x58562
	ldr r1, [pc, #104]	@ 00058562 1a49
.org 0x58564
	adds r0, r4, #0	@ 00058564 201c
.org 0x58566
	bl 0x1cf00	@ 00058566 c4f7cbfc
.org 0x5856a
	ldrb r0, [r4, #15]	@ 0005856a e07b
.org 0x5856c
	adds r0, #1	@ 0005856c 0130
.org 0x5856e
	strb r0, [r4, #15]	@ 0005856e e073
.org 0x58570
	adds r0, r4, #0	@ 00058570 201c
.org 0x58572
	bl 0x1cff0	@ 00058572 c4f73dfd
.org 0x58576
	adds r0, r4, #0	@ 00058576 201c
.org 0x58578
	adds r0, #116	@ 00058578 7430
.org 0x5857a
	ldr r3, [pc, #84]	@ 0005857a 154b
.org 0x5857c
	ldrb r1, [r4, #30]	@ 0005857c a17f
.org 0x5857e
	lsls r1, r1, #8	@ 0005857e 0902
.org 0x58580
	adds r2, r4, #0	@ 00058580 221c
.org 0x58582
	adds r2, #112	@ 00058582 7032
.org 0x58584
	ldrb r2, [r2, #0]	@ 00058584 1278
.org 0x58586
	orrs r1, r2	@ 00058586 1143
.org 0x58588
	ldr r2, [pc, #72]	@ 00058588 124a
.org 0x5858a
	adds r1, r1, r2	@ 0005858a 8918
.org 0x5858c
	lsls r1, r1, #2	@ 0005858c 8900
.org 0x5858e
	adds r1, r1, r3	@ 0005858e c918
.org 0x58590
	adds r2, r4, #0	@ 00058590 221c
.org 0x58592
	adds r2, #113	@ 00058592 7132
.org 0x58594
	ldrb r2, [r2, #0]	@ 00058594 1278
.org 0x58596
	lsls r2, r2, #24	@ 00058596 1206
.org 0x58598
	asrs r2, r2, #24	@ 00058598 1216
.org 0x5859a
	ldr r1, [r1, #0]	@ 0005859a 0968
.org 0x5859c
	lsls r2, r2, #2	@ 0005859c 9200
.org 0x5859e
	adds r2, r2, r1	@ 0005859e 5218
.org 0x585a0
	ldr r1, [r2, #0]	@ 000585a0 1168
.org 0x585a2
	ldrb r2, [r1, #0]	@ 000585a2 0a78
.org 0x585a4
	lsls r1, r2, #1	@ 000585a4 5100
.org 0x585a6
	adds r1, r1, r2	@ 000585a6 8918
.org 0x585a8
	lsls r1, r1, #3	@ 000585a8 c900
.org 0x585aa
	ldr r2, [pc, #44]	@ 000585aa 0b4a
.org 0x585ac
	adds r1, r1, r2	@ 000585ac 8918
.org 0x585ae
	bl 0x5784	@ 000585ae adf7e9f8
.org 0x585b2
	adds r0, r4, #0	@ 000585b2 201c
.org 0x585b4
	adds r0, #115	@ 000585b4 7330
.org 0x585b6
	ldrb r0, [r0, #0]	@ 000585b6 0078
.org 0x585b8
	cmp r0, #3	@ 000585b8 0328
.org 0x585ba
	bne.n 0x585c4	@ 000585ba 03d1
.org 0x585bc
	movs r1, #0	@ 000585bc 0021
.org 0x585be
	movs r0, #2	@ 000585be 0220
.org 0x585c0
	strb r0, [r4, #14]	@ 000585c0 a073
.org 0x585c2
	strb r1, [r4, #15]	@ 000585c2 e173
.org 0x585c4
	pop {r4}	@ 000585c4 10bc
.org 0x585c6
	pop {r0}	@ 000585c6 01bc
.org 0x585c8
	bx r0	@ 000585c8 0047
