@ FUN_0807464c  entry 0x0807464c  size 150
.thumb
.org 0x7464c
FUN_0807464c:
	push {r4, r5, lr}	@ 0007464c 30b5
.org 0x7464e
	adds r4, r0, #0	@ 0007464e 041c
.org 0x74650
	bl 0x1cff0	@ 00074650 a8f7cefc
.org 0x74654
	adds r2, r4, #0	@ 00074654 221c
.org 0x74656
	adds r2, #180	@ 00074656 b432
.org 0x74658
	ldr r1, [pc, #88]	@ 00074658 1649
.org 0x7465a
	adds r3, r4, #0	@ 0007465a 231c
.org 0x7465c
	adds r3, #224	@ 0007465c e033
.org 0x7465e
	ldrb r0, [r3, #0]	@ 0007465e 1878
.org 0x74660
	lsls r0, r0, #1	@ 00074660 4000
.org 0x74662
	adds r0, r0, r1	@ 00074662 4018
.org 0x74664
	movs r5, #0	@ 00074664 0025
.org 0x74666
	ldrsh r1, [r0, r5]	@ 00074666 415f
.org 0x74668
	lsls r1, r1, #2	@ 00074668 8900
.org 0x7466a
	ldr r0, [r2, #4]	@ 0007466a 5068
.org 0x7466c
	adds r0, r0, r1	@ 0007466c 4018
.org 0x7466e
	str r0, [r4, #88]	@ 0007466e a065
.org 0x74670
	ldrb r0, [r3, #0]	@ 00074670 1878
.org 0x74672
	adds r0, #1	@ 00074672 0130
.org 0x74674
	strb r0, [r3, #0]	@ 00074674 1870
.org 0x74676
	ldrh r0, [r2, #20]	@ 00074676 908a
.org 0x74678
	ldrh r1, [r2, #16]	@ 00074678 118a
.org 0x7467a
	adds r0, r0, r1	@ 0007467a 4018
.org 0x7467c
	strh r0, [r2, #16]	@ 0007467c 1082
.org 0x7467e
	ldrh r0, [r2, #22]	@ 0007467e d08a
.org 0x74680
	ldrh r5, [r2, #18]	@ 00074680 558a
.org 0x74682
	adds r0, r0, r5	@ 00074682 4019
.org 0x74684
	strh r0, [r2, #18]	@ 00074684 5082
.org 0x74686
	ldr r0, [pc, #48]	@ 00074686 0c48
.org 0x74688
	ldrh r1, [r0, #8]	@ 00074688 0189
.org 0x7468a
	movs r0, #8	@ 0007468a 0820
.org 0x7468c
	ands r0, r1	@ 0007468c 0840
.org 0x7468e
	cmp r0, #0	@ 0007468e 0028
.org 0x74690
	bne.n 0x746f2	@ 00074690 2fd1
.org 0x74692
	ldr r5, [pc, #40]	@ 00074692 0a4d
.org 0x74694
	ldr r1, [r5, #0]	@ 00074694 2968
.org 0x74696
	ldr r0, [pc, #40]	@ 00074696 0a48
.org 0x74698
	muls r0, r1	@ 00074698 4843
.org 0x7469a
	ldr r1, [pc, #40]	@ 0007469a 0a49
.org 0x7469c
	adds r0, r0, r1	@ 0007469c 4018
.org 0x7469e
	lsls r0, r0, #1	@ 0007469e 4000
.org 0x746a0
	lsrs r1, r0, #1	@ 000746a0 4108
.org 0x746a2
	str r1, [r5, #0]	@ 000746a2 2960
.org 0x746a4
	lsrs r0, r0, #17	@ 000746a4 400c
.org 0x746a6
	movs r1, #1	@ 000746a6 0121
.org 0x746a8
	ands r0, r1	@ 000746a8 0840
.org 0x746aa
	cmp r0, #0	@ 000746aa 0028
.org 0x746ac
	beq.n 0x746c8	@ 000746ac 0cd0
.org 0x746ae
	movs r0, #5	@ 000746ae 0520
.org 0x746b0
	b.n 0x746ca	@ 000746b0 0be0
.org 0x746b2
	.byte 0x00	@ 000746b2 data
.org 0x746b3
	.byte 0x00	@ 000746b3 data
.org 0x746b4
	.byte 0x0c,0x93,0x12,0x08	@ 000746b4 data
.org 0x746b8
	.byte 0x10,0xe9,0x02,0x02	@ 000746b8 data
.org 0x746bc
	.byte 0x38,0xdc,0x02,0x02	@ 000746bc data
.org 0x746c0
	.byte 0xfd,0x43,0x03,0x00	@ 000746c0 data
.org 0x746c4
	.byte 0xc3,0x9e,0x26,0x00	@ 000746c4 data
.org 0x746c8
	movs r0, #4	@ 000746c8 0420
.org 0x746ca
	strb r0, [r4, #13]	@ 000746ca 6073
.org 0x746cc
	movs r0, #222	@ 000746cc de20
.org 0x746ce
	adds r0, r0, r4	@ 000746ce 0019
.org 0x746d0
	mov ip, r0	@ 000746d0 8446
.org 0x746d2
	ldrb r3, [r0, #0]	@ 000746d2 0378
.org 0x746d4
	adds r2, r3, #0	@ 000746d4 1a1c
.org 0x746d6
	adds r1, r4, #0	@ 000746d6 211c
.org 0x746d8
	adds r1, #223	@ 000746d8 df31
.org 0x746da
	ldrb r0, [r4, #13]	@ 000746da 607b
.org 0x746dc
	cmp r2, r0	@ 000746dc 8242
.org 0x746de
	bne.n 0x746e6	@ 000746de 02d1
.org 0x746e0
	ldrb r0, [r1, #0]	@ 000746e0 0878
