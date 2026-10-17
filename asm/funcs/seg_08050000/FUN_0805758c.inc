@ FUN_0805758c  entry 0x0805758c  size 114
.thumb
.org 0x5758c
FUN_0805758c:
	push {r4, lr}	@ 0005758c 10b5
.org 0x5758e
	adds r4, r0, #0	@ 0005758e 041c
.org 0x57590
	ldrb r0, [r4, #15]	@ 00057590 e07b
.org 0x57592
	cmp r0, #0	@ 00057592 0028
.org 0x57594
	bne.n 0x575a4	@ 00057594 06d1
.org 0x57596
	ldr r1, [pc, #104]	@ 00057596 1a49
.org 0x57598
	adds r0, r4, #0	@ 00057598 201c
.org 0x5759a
	bl 0x1cf00	@ 0005759a c5f7b1fc
.org 0x5759e
	ldrb r0, [r4, #15]	@ 0005759e e07b
.org 0x575a0
	adds r0, #1	@ 000575a0 0130
.org 0x575a2
	strb r0, [r4, #15]	@ 000575a2 e073
.org 0x575a4
	adds r0, r4, #0	@ 000575a4 201c
.org 0x575a6
	bl 0x1cff0	@ 000575a6 c5f723fd
.org 0x575aa
	adds r0, r4, #0	@ 000575aa 201c
.org 0x575ac
	adds r0, #116	@ 000575ac 7430
.org 0x575ae
	ldr r3, [pc, #84]	@ 000575ae 154b
.org 0x575b0
	ldrb r1, [r4, #30]	@ 000575b0 a17f
.org 0x575b2
	lsls r1, r1, #8	@ 000575b2 0902
.org 0x575b4
	adds r2, r4, #0	@ 000575b4 221c
.org 0x575b6
	adds r2, #112	@ 000575b6 7032
.org 0x575b8
	ldrb r2, [r2, #0]	@ 000575b8 1278
.org 0x575ba
	orrs r1, r2	@ 000575ba 1143
.org 0x575bc
	ldr r2, [pc, #72]	@ 000575bc 124a
.org 0x575be
	adds r1, r1, r2	@ 000575be 8918
.org 0x575c0
	lsls r1, r1, #2	@ 000575c0 8900
.org 0x575c2
	adds r1, r1, r3	@ 000575c2 c918
.org 0x575c4
	adds r2, r4, #0	@ 000575c4 221c
.org 0x575c6
	adds r2, #113	@ 000575c6 7132
.org 0x575c8
	ldrb r2, [r2, #0]	@ 000575c8 1278
.org 0x575ca
	lsls r2, r2, #24	@ 000575ca 1206
.org 0x575cc
	asrs r2, r2, #24	@ 000575cc 1216
.org 0x575ce
	ldr r1, [r1, #0]	@ 000575ce 0968
.org 0x575d0
	lsls r2, r2, #2	@ 000575d0 9200
.org 0x575d2
	adds r2, r2, r1	@ 000575d2 5218
.org 0x575d4
	ldr r1, [r2, #0]	@ 000575d4 1168
.org 0x575d6
	ldrb r2, [r1, #0]	@ 000575d6 0a78
.org 0x575d8
	lsls r1, r2, #1	@ 000575d8 5100
.org 0x575da
	adds r1, r1, r2	@ 000575da 8918
.org 0x575dc
	lsls r1, r1, #3	@ 000575dc c900
.org 0x575de
	ldr r2, [pc, #44]	@ 000575de 0b4a
.org 0x575e0
	adds r1, r1, r2	@ 000575e0 8918
.org 0x575e2
	bl 0x5784	@ 000575e2 aef7cff8
.org 0x575e6
	adds r0, r4, #0	@ 000575e6 201c
.org 0x575e8
	adds r0, #115	@ 000575e8 7330
.org 0x575ea
	ldrb r0, [r0, #0]	@ 000575ea 0078
.org 0x575ec
	cmp r0, #3	@ 000575ec 0328
.org 0x575ee
	bne.n 0x575f8	@ 000575ee 03d1
.org 0x575f0
	movs r1, #0	@ 000575f0 0021
.org 0x575f2
	movs r0, #7	@ 000575f2 0720
.org 0x575f4
	strb r0, [r4, #14]	@ 000575f4 a073
.org 0x575f6
	strb r1, [r4, #15]	@ 000575f6 e173
.org 0x575f8
	pop {r4}	@ 000575f8 10bc
.org 0x575fa
	pop {r0}	@ 000575fa 01bc
.org 0x575fc
	bx r0	@ 000575fc 0047
