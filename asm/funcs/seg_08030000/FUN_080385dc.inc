@ FUN_080385dc  entry 0x080385dc  size 86
.thumb
.org 0x385dc
FUN_080385dc:
	push {r4, lr}	@ 000385dc 10b5
.org 0x385de
	adds r2, r0, #0	@ 000385de 021c
.org 0x385e0
	ldr r1, [pc, #52]	@ 000385e0 0d49
.org 0x385e2
	movs r3, #186	@ 000385e2 ba23
.org 0x385e4
	lsls r3, r3, #1	@ 000385e4 5b00
.org 0x385e6
	adds r0, r2, r3	@ 000385e6 d018
.org 0x385e8
	ldrb r0, [r0, #0]	@ 000385e8 0078
.org 0x385ea
	lsls r0, r0, #3	@ 000385ea c000
.org 0x385ec
	adds r0, r0, r1	@ 000385ec 4018
.org 0x385ee
	ldrh r0, [r0, #6]	@ 000385ee c088
.org 0x385f0
	lsls r0, r0, #16	@ 000385f0 0004
.org 0x385f2
	asrs r0, r0, #17	@ 000385f2 4014
.org 0x385f4
	ldr r1, [r2, #88]	@ 000385f4 916d
.org 0x385f6
	subs r4, r1, r0	@ 000385f6 0c1a
.org 0x385f8
	ldr r3, [pc, #32]	@ 000385f8 084b
.org 0x385fa
	movs r1, #232	@ 000385fa e821
.org 0x385fc
	lsls r1, r1, #1	@ 000385fc 4900
.org 0x385fe
	adds r0, r3, r1	@ 000385fe 5818
.org 0x38600
	ldrh r1, [r0, #0]	@ 00038600 0188
.org 0x38602
	movs r0, #127	@ 00038602 7f20
.org 0x38604
	ands r0, r1	@ 00038604 0840
.org 0x38606
	cmp r0, #2	@ 00038606 0228
.org 0x38608
	bne.n 0x38620	@ 00038608 0ad1
.org 0x3860a
	adds r0, r2, #0	@ 0003860a 101c
.org 0x3860c
	adds r0, #84	@ 0003860c 5430
.org 0x3860e
	bl 0x7b84	@ 0003860e cff7b9fa
.org 0x38612
	cmp r4, r0	@ 00038612 8442
.org 0x38614
	bgt.n 0x3862a	@ 00038614 09dc
.org 0x38616
	b.n 0x38634	@ 00038616 0de0
.org 0x38618
	.byte 0x6c,0x33,0x85,0x08	@ 00038618 data
.org 0x3861c
	.byte 0xb0,0x0a,0x00,0x02	@ 0003861c data
.org 0x38620
	ldr r1, [pc, #12]	@ 00038620 0349
.org 0x38622
	adds r0, r3, r1	@ 00038622 5818
.org 0x38624
	ldr r0, [r0, #0]	@ 00038624 0068
.org 0x38626
	cmp r4, r0	@ 00038626 8442
.org 0x38628
	ble.n 0x38634	@ 00038628 04dd
.org 0x3862a
	movs r0, #224	@ 0003862a e020
.org 0x3862c
	lsls r0, r0, #2	@ 0003862c 8000
.org 0x3862e
	b.n 0x38638	@ 0003862e 03e0
.org 0x38630
	.byte 0x0c,0xc0,0x02,0x00	@ 00038630 data
