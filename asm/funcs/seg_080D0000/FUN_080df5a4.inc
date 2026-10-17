@ FUN_080df5a4  entry 0x080df5a4  size 272
.thumb
.org 0xdf5a4
FUN_080df5a4:
	push {r4, lr}	@ 000df5a4 10b5
.org 0xdf5a6
	adds r4, r0, #0	@ 000df5a6 041c
.org 0xdf5a8
	ldrb r0, [r4, #13]	@ 000df5a8 607b
.org 0xdf5aa
	cmp r0, #0	@ 000df5aa 0028
.org 0xdf5ac
	bne.n 0xdf652	@ 000df5ac 51d1
.org 0xdf5ae
	ldr r1, [pc, #28]	@ 000df5ae 0749
.org 0xdf5b0
	adds r0, r4, #0	@ 000df5b0 201c
.org 0xdf5b2
	bl 0x1cf00	@ 000df5b2 3df7a5fc
.org 0xdf5b6
	adds r2, r4, #0	@ 000df5b6 221c
.org 0xdf5b8
	adds r2, #116	@ 000df5b8 7432
.org 0xdf5ba
	ldrb r3, [r2, #0]	@ 000df5ba 1378
.org 0xdf5bc
	ldrb r1, [r4, #10]	@ 000df5bc a17a
.org 0xdf5be
	movs r0, #16	@ 000df5be 1020
.org 0xdf5c0
	ands r0, r1	@ 000df5c0 0840
.org 0xdf5c2
	cmp r0, #0	@ 000df5c2 0028
.org 0xdf5c4
	beq.n 0xdf5d0	@ 000df5c4 04d0
.org 0xdf5c6
	cmp r3, #0	@ 000df5c6 002b
.org 0xdf5c8
	beq.n 0xdf5d4	@ 000df5c8 04d0
.org 0xdf5ca
	b.n 0xdf634	@ 000df5ca 33e0
.org 0xdf5cc
	.byte 0x06,0x6e,0x00,0x00	@ 000df5cc data
.org 0xdf5d0
	cmp r3, #1	@ 000df5d0 012b
.org 0xdf5d2
	bne.n 0xdf634	@ 000df5d2 2fd1
.org 0xdf5d4
	movs r0, #0	@ 000df5d4 0020
.org 0xdf5d6
	str r0, [r4, #92]	@ 000df5d6 e065
.org 0xdf5d8
	str r0, [r4, #96]	@ 000df5d8 2066
.org 0xdf5da
	movs r0, #20	@ 000df5da 1420
.org 0xdf5dc
	strb r0, [r4, #18]	@ 000df5dc a074
.org 0xdf5de
	ldrb r0, [r2, #0]	@ 000df5de 1078
.org 0xdf5e0
	cmp r0, #0	@ 000df5e0 0028
.org 0xdf5e2
	beq.n 0xdf604	@ 000df5e2 0fd0
.org 0xdf5e4
	ldr r1, [pc, #24]	@ 000df5e4 0649
.org 0xdf5e6
	adds r0, r1, #0	@ 000df5e6 081c
.org 0xdf5e8
	adds r0, #164	@ 000df5e8 a430
.org 0xdf5ea
	movs r2, #0	@ 000df5ea 0022
.org 0xdf5ec
	ldrsh r0, [r0, r2]	@ 000df5ec 805e
.org 0xdf5ee
	cmp r0, #0	@ 000df5ee 0028
.org 0xdf5f0
	bge.n 0xdf5f4	@ 000df5f0 00da
.org 0xdf5f2
	adds r0, #15	@ 000df5f2 0f30
.org 0xdf5f4
	asrs r0, r0, #4	@ 000df5f4 0011
.org 0xdf5f6
	str r0, [r4, #100]	@ 000df5f6 6066
.org 0xdf5f8
	movs r2, #36	@ 000df5f8 2422
.org 0xdf5fa
	ldrsh r0, [r1, r2]	@ 000df5fa 885e
.org 0xdf5fc
	b.n 0xdf622	@ 000df5fc 11e0
.org 0xdf5fe
	.byte 0x00	@ 000df5fe data
.org 0xdf5ff
	.byte 0x00	@ 000df5ff data
.org 0xdf600
	.byte 0x0c,0x93,0x12,0x08	@ 000df600 data
.org 0xdf604
	ldr r1, [pc, #40]	@ 000df604 0a49
.org 0xdf606
	movs r2, #174	@ 000df606 ae22
.org 0xdf608
	lsls r2, r2, #1	@ 000df608 5200
.org 0xdf60a
	adds r0, r1, r2	@ 000df60a 8818
.org 0xdf60c
	movs r2, #0	@ 000df60c 0022
.org 0xdf60e
	ldrsh r0, [r0, r2]	@ 000df60e 805e
.org 0xdf610
	cmp r0, #0	@ 000df610 0028
.org 0xdf612
	bge.n 0xdf616	@ 000df612 00da
.org 0xdf614
	adds r0, #15	@ 000df614 0f30
.org 0xdf616
	asrs r0, r0, #4	@ 000df616 0011
.org 0xdf618
	str r0, [r4, #100]	@ 000df618 6066
.org 0xdf61a
	adds r0, r1, #0	@ 000df61a 081c
.org 0xdf61c
	adds r0, #220	@ 000df61c dc30
.org 0xdf61e
	movs r1, #0	@ 000df61e 0021
.org 0xdf620
	ldrsh r0, [r0, r1]	@ 000df620 405e
.org 0xdf622
	cmp r0, #0	@ 000df622 0028
.org 0xdf624
	bge.n 0xdf628	@ 000df624 00da
.org 0xdf626
	adds r0, #15	@ 000df626 0f30
.org 0xdf628
	asrs r0, r0, #4	@ 000df628 0011
.org 0xdf62a
	str r0, [r4, #104]	@ 000df62a a066
.org 0xdf62c
	b.n 0xdf64c	@ 000df62c 0ee0
.org 0xdf62e
	.byte 0x00	@ 000df62e data
.org 0xdf62f
	.byte 0x00	@ 000df62f data
.org 0xdf630
	.byte 0x0c,0x93,0x12,0x08	@ 000df630 data
.org 0xdf634
	movs r0, #0	@ 000df634 0020
.org 0xdf636
	strb r0, [r4, #18]	@ 000df636 a074
.org 0xdf638
	ldrb r0, [r2, #0]	@ 000df638 1078
.org 0xdf63a
	cmp r0, #0	@ 000df63a 0028
.org 0xdf63c
	beq.n 0xdf644	@ 000df63c 02d0
.org 0xdf63e
	movs r0, #128	@ 000df63e 8020
.org 0xdf640
	lsls r0, r0, #1	@ 000df640 4000
.org 0xdf642
	b.n 0xdf646	@ 000df642 00e0
.org 0xdf644
	ldr r0, [pc, #40]	@ 000df644 0a48
.org 0xdf646
	str r0, [r4, #92]	@ 000df646 e065
.org 0xdf648
	ldr r0, [pc, #36]	@ 000df648 0948
.org 0xdf64a
	str r0, [r4, #96]	@ 000df64a 2066
.org 0xdf64c
	ldrb r0, [r4, #13]	@ 000df64c 607b
.org 0xdf64e
	adds r0, #1	@ 000df64e 0130
.org 0xdf650
	strb r0, [r4, #13]	@ 000df650 6073
.org 0xdf652
	ldrb r3, [r4, #18]	@ 000df652 a37c
.org 0xdf654
	cmp r3, #0	@ 000df654 002b
.org 0xdf656
	bne.n 0xdf674	@ 000df656 0dd1
.org 0xdf658
	ldr r0, [r4, #84]	@ 000df658 606d
.org 0xdf65a
	ldr r1, [r4, #92]	@ 000df65a e16d
.org 0xdf65c
	adds r0, r0, r1	@ 000df65c 4018
.org 0xdf65e
	str r0, [r4, #84]	@ 000df65e 6065
.org 0xdf660
	ldr r0, [r4, #88]	@ 000df660 a06d
.org 0xdf662
	ldr r1, [r4, #96]	@ 000df662 216e
.org 0xdf664
	adds r0, r0, r1	@ 000df664 4018
.org 0xdf666
	str r0, [r4, #88]	@ 000df666 a065
.org 0xdf668
	adds r1, #64	@ 000df668 4031
.org 0xdf66a
	str r1, [r4, #96]	@ 000df66a 2166
.org 0xdf66c
	b.n 0xdf6a0	@ 000df66c 18e0
.org 0xdf66e
	.byte 0x00	@ 000df66e data
.org 0xdf66f
	.byte 0x00	@ 000df66f data
.org 0xdf670
	.byte 0x00,0xff,0xff,0xff	@ 000df670 data
.org 0xdf674
	ldr r2, [r4, #92]	@ 000df674 e26d
.org 0xdf676
	ldr r0, [r4, #100]	@ 000df676 606e
.org 0xdf678
	adds r2, r2, r0	@ 000df678 1218
.org 0xdf67a
	str r2, [r4, #92]	@ 000df67a e265
.org 0xdf67c
	ldr r1, [r4, #96]	@ 000df67c 216e
.org 0xdf67e
	ldr r0, [r4, #104]	@ 000df67e a06e
.org 0xdf680
	adds r1, r1, r0	@ 000df680 0918
.org 0xdf682
	str r1, [r4, #96]	@ 000df682 2166
.org 0xdf684
	ldr r0, [r4, #84]	@ 000df684 606d
.org 0xdf686
	adds r0, r0, r2	@ 000df686 8018
.org 0xdf688
	str r0, [r4, #84]	@ 000df688 6065
.org 0xdf68a
	ldr r0, [r4, #88]	@ 000df68a a06d
.org 0xdf68c
	adds r0, r0, r1	@ 000df68c 4018
.org 0xdf68e
	str r0, [r4, #88]	@ 000df68e a065
.org 0xdf690
	subs r0, r3, #1	@ 000df690 581e
.org 0xdf692
	strb r0, [r4, #18]	@ 000df692 a074
.org 0xdf694
	lsls r0, r0, #24	@ 000df694 0006
.org 0xdf696
	lsrs r0, r0, #24	@ 000df696 000e
.org 0xdf698
	cmp r0, #0	@ 000df698 0028
.org 0xdf69a
	bne.n 0xdf6a0	@ 000df69a 01d1
.org 0xdf69c
	str r0, [r4, #92]	@ 000df69c e065
.org 0xdf69e
	str r0, [r4, #96]	@ 000df69e 2066
.org 0xdf6a0
	ldr r0, [r4, #84]	@ 000df6a0 606d
.org 0xdf6a2
	ldr r1, [r4, #88]	@ 000df6a2 a16d
.org 0xdf6a4
	ldr r2, [pc, #36]	@ 000df6a4 094a
.org 0xdf6a6
	adds r1, r1, r2	@ 000df6a6 8918
.org 0xdf6a8
	bl 0x7c7c	@ 000df6a8 28f7e8fa
.org 0xdf6ac
	lsls r0, r0, #16	@ 000df6ac 0004
.org 0xdf6ae
	cmp r0, #0	@ 000df6ae 0028
.org 0xdf6b0
	beq.n 0xdf6c4	@ 000df6b0 08d0
.org 0xdf6b2
	ldr r1, [pc, #28]	@ 000df6b2 0749
