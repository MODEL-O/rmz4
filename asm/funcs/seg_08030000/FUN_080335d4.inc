@ FUN_080335d4  entry 0x080335d4  size 120
.thumb
.org 0x335d4
FUN_080335d4:
	push {r4, lr}	@ 000335d4 10b5
.org 0x335d6
	adds r4, r0, #0	@ 000335d6 041c
.org 0x335d8
	adds r0, #180	@ 000335d8 b430
.org 0x335da
	ldrb r0, [r0, #12]	@ 000335da 007b
.org 0x335dc
	cmp r0, #0	@ 000335dc 0028
.org 0x335de
	bne.n 0x335f0	@ 000335de 07d1
.org 0x335e0
	ldr r0, [pc, #8]	@ 000335e0 0248
.org 0x335e2
	adds r2, r4, r0	@ 000335e2 2218
.org 0x335e4
	ldrb r0, [r2, #0]	@ 000335e4 1078
.org 0x335e6
	movs r1, #16	@ 000335e6 1021
.org 0x335e8
	b.n 0x335f8	@ 000335e8 06e0
.org 0x335ea
	.byte 0x00	@ 000335ea data
.org 0x335eb
	.byte 0x00	@ 000335eb data
.org 0x335ec
	.byte 0x53,0x01,0x00,0x00	@ 000335ec data
.org 0x335f0
	ldr r1, [pc, #28]	@ 000335f0 0749
.org 0x335f2
	adds r2, r4, r1	@ 000335f2 6218
.org 0x335f4
	ldrb r0, [r2, #0]	@ 000335f4 1078
.org 0x335f6
	movs r1, #32	@ 000335f6 2021
.org 0x335f8
	orrs r0, r1	@ 000335f8 0843
.org 0x335fa
	strb r0, [r2, #0]	@ 000335fa 1070
.org 0x335fc
	adds r0, r4, #0	@ 000335fc 201c
.org 0x335fe
	adds r0, #252	@ 000335fe fc30
.org 0x33600
	ldrb r0, [r0, #0]	@ 00033600 0078
.org 0x33602
	cmp r0, #1	@ 00033602 0128
.org 0x33604
	bne.n 0x33618	@ 00033604 08d1
.org 0x33606
	ldr r1, [pc, #12]	@ 00033606 0349
.org 0x33608
	adds r0, r4, #0	@ 00033608 201c
.org 0x3360a
	bl 0x1cf00	@ 0003360a e9f779fc
.org 0x3360e
	b.n 0x33636	@ 0003360e 12e0
.org 0x33610
	.byte 0x53,0x01,0x00,0x00	@ 00033610 data
.org 0x33614
	.byte 0x04,0x0b,0x00,0x00	@ 00033614 data
.org 0x33618
	ldrb r1, [r4, #30]	@ 00033618 a17f
.org 0x3361a
	lsls r1, r1, #8	@ 0003361a 0902
.org 0x3361c
	adds r0, r4, #0	@ 0003361c 201c
.org 0x3361e
	adds r0, #112	@ 0003361e 7030
.org 0x33620
	ldrb r0, [r0, #0]	@ 00033620 0078
.org 0x33622
	orrs r0, r1	@ 00033622 0843
.org 0x33624
	ldr r1, [pc, #32]	@ 00033624 0849
.org 0x33626
	cmp r0, r1	@ 00033626 8842
.org 0x33628
	beq.n 0x33636	@ 00033628 05d0
.org 0x3362a
	ldr r1, [pc, #32]	@ 0003362a 0849
.org 0x3362c
	adds r0, r4, #0	@ 0003362c 201c
.org 0x3362e
	movs r2, #1	@ 0003362e 0122
.org 0x33630
	movs r3, #4	@ 00033630 0423
.org 0x33632
	bl 0x1cfc8	@ 00033632 e9f7c9fc
.org 0x33636
	movs r2, #170	@ 00033636 aa22
.org 0x33638
	lsls r2, r2, #1	@ 00033638 5200
.org 0x3363a
	adds r0, r4, r2	@ 0003363a a018
.org 0x3363c
	ldrb r0, [r0, #0]	@ 0003363c 0078
.org 0x3363e
	cmp r0, #3	@ 0003363e 0328
.org 0x33640
	bne.n 0x33650	@ 00033640 06d1
.org 0x33642
	subs r2, #83	@ 00033642 533a
.org 0x33644
	adds r1, r4, r2	@ 00033644 a118
.org 0x33646
	b.n 0x3365a	@ 00033646 08e0
.org 0x33648
	.byte 0x04,0x0b,0x00,0x00	@ 00033648 data
