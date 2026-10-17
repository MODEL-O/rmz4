@ FUN_0807b650  entry 0x0807b650  size 106
.thumb
.org 0x7b650
FUN_0807b650:
	push {r4, r5, lr}	@ 0007b650 30b5
.org 0x7b652
	adds r4, r0, #0	@ 0007b652 041c
.org 0x7b654
	ldrb r0, [r4, #15]	@ 0007b654 e07b
.org 0x7b656
	cmp r0, #0	@ 0007b656 0028
.org 0x7b658
	bne.n 0x7b668	@ 0007b658 06d1
.org 0x7b65a
	adds r0, r4, #0	@ 0007b65a 201c
.org 0x7b65c
	movs r1, #1	@ 0007b65c 0121
.org 0x7b65e
	bl 0x7e8c8	@ 0007b65e 03f033f9
.org 0x7b662
	ldrb r0, [r4, #15]	@ 0007b662 e07b
.org 0x7b664
	adds r0, #1	@ 0007b664 0130
.org 0x7b666
	strb r0, [r4, #15]	@ 0007b666 e073
.org 0x7b668
	adds r5, r4, #0	@ 0007b668 251c
.org 0x7b66a
	adds r5, #188	@ 0007b66a bc35
.org 0x7b66c
	ldrb r0, [r5, #0]	@ 0007b66c 2878
.org 0x7b66e
	cmp r0, #0	@ 0007b66e 0028
.org 0x7b670
	beq.n 0x7b678	@ 0007b670 02d0
.org 0x7b672
	adds r0, r4, #0	@ 0007b672 201c
.org 0x7b674
	bl 0x1cff0	@ 0007b674 a1f7bcfc
.org 0x7b678
	adds r0, r4, #0	@ 0007b678 201c
.org 0x7b67a
	adds r0, #116	@ 0007b67a 7430
.org 0x7b67c
	ldr r3, [pc, #60]	@ 0007b67c 0f4b
.org 0x7b67e
	ldr r2, [pc, #64]	@ 0007b67e 104a
.org 0x7b680
	ldrb r1, [r5, #0]	@ 0007b680 2978
.org 0x7b682
	lsls r1, r1, #1	@ 0007b682 4900
.org 0x7b684
	adds r1, r1, r2	@ 0007b684 8918
.org 0x7b686
	ldrh r2, [r1, #0]	@ 0007b686 0a88
.org 0x7b688
	lsls r2, r2, #2	@ 0007b688 9200
.org 0x7b68a
	adds r2, r2, r3	@ 0007b68a d218
.org 0x7b68c
	adds r1, r4, #0	@ 0007b68c 211c
.org 0x7b68e
	adds r1, #113	@ 0007b68e 7131
.org 0x7b690
	ldrb r1, [r1, #0]	@ 0007b690 0978
.org 0x7b692
	lsls r1, r1, #24	@ 0007b692 0906
.org 0x7b694
	asrs r1, r1, #24	@ 0007b694 0916
.org 0x7b696
	ldr r2, [r2, #0]	@ 0007b696 1268
.org 0x7b698
	lsls r1, r1, #2	@ 0007b698 8900
.org 0x7b69a
	adds r1, r1, r2	@ 0007b69a 8918
.org 0x7b69c
	ldr r1, [r1, #0]	@ 0007b69c 0968
.org 0x7b69e
	bl 0x5784	@ 0007b69e 8af771f8
.org 0x7b6a2
	ldr r0, [pc, #32]	@ 0007b6a2 0848
.org 0x7b6a4
	ldrh r1, [r0, #8]	@ 0007b6a4 0189
.org 0x7b6a6
	movs r0, #8	@ 0007b6a6 0820
.org 0x7b6a8
	ands r0, r1	@ 0007b6a8 0840
.org 0x7b6aa
	cmp r0, #0	@ 0007b6aa 0028
.org 0x7b6ac
	bne.n 0x7b6b4	@ 0007b6ac 02d1
.org 0x7b6ae
	adds r0, r4, #0	@ 0007b6ae 201c
.org 0x7b6b0
	bl 0x7e9b0	@ 0007b6b0 03f07ef9
.org 0x7b6b4
	pop {r4, r5}	@ 0007b6b4 30bc
.org 0x7b6b6
	pop {r0}	@ 0007b6b6 01bc
.org 0x7b6b8
	bx r0	@ 0007b6b8 0047
