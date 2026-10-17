@ FUN_0809c638  entry 0x0809c638  size 180
.thumb
.org 0x9c638
FUN_0809c638:
	push {r4, r5, r6, lr}	@ 0009c638 70b5
.org 0x9c63a
	adds r5, r0, #0	@ 0009c63a 051c
.org 0x9c63c
	ldr r4, [r5, #40]	@ 0009c63c ac6a
.org 0x9c63e
	bl 0x1cc9c	@ 0009c63e 80f72dfb
.org 0x9c642
	ldrb r1, [r5, #10]	@ 0009c642 a97a
.org 0x9c644
	movs r0, #1	@ 0009c644 0120
.org 0x9c646
	movs r6, #0	@ 0009c646 0026
.org 0x9c648
	orrs r0, r1	@ 0009c648 0843
.org 0x9c64a
	movs r1, #2	@ 0009c64a 0221
.org 0x9c64c
	orrs r0, r1	@ 0009c64c 0843
.org 0x9c64e
	strb r0, [r5, #10]	@ 0009c64e a872
.org 0x9c650
	adds r0, r5, #0	@ 0009c650 281c
.org 0x9c652
	bl 0x1ceec	@ 0009c652 80f74bfc
.org 0x9c656
	movs r1, #198	@ 0009c656 c621
.org 0x9c658
	lsls r1, r1, #8	@ 0009c658 0902
.org 0x9c65a
	adds r0, r5, #0	@ 0009c65a 281c
.org 0x9c65c
	bl 0x1cf00	@ 0009c65c 80f750fc
.org 0x9c660
	adds r0, r5, #0	@ 0009c660 281c
.org 0x9c662
	bl 0x1cff0	@ 0009c662 80f7c5fc
.org 0x9c666
	ldrb r2, [r5, #10]	@ 0009c666 aa7a
.org 0x9c668
	lsrs r1, r2, #4	@ 0009c668 1109
.org 0x9c66a
	movs r0, #1	@ 0009c66a 0120
.org 0x9c66c
	ands r1, r0	@ 0009c66c 0140
.org 0x9c66e
	cmp r1, #0	@ 0009c66e 0029
.org 0x9c670
	beq.n 0x9c678	@ 0009c670 02d0
.org 0x9c672
	movs r0, #16	@ 0009c672 1020
.org 0x9c674
	orrs r0, r2	@ 0009c674 1043
.org 0x9c676
	b.n 0x9c67c	@ 0009c676 01e0
.org 0x9c678
	movs r0, #239	@ 0009c678 ef20
.org 0x9c67a
	ands r0, r2	@ 0009c67a 1040
.org 0x9c67c
	strb r0, [r5, #10]	@ 0009c67c a872
.org 0x9c67e
	adds r0, r5, #0	@ 0009c67e 281c
.org 0x9c680
	adds r0, #76	@ 0009c680 4c30
.org 0x9c682
	strb r1, [r0, #0]	@ 0009c682 0170
.org 0x9c684
	adds r3, r5, #0	@ 0009c684 2b1c
.org 0x9c686
	adds r3, #74	@ 0009c686 4a33
.org 0x9c688
	lsls r1, r1, #4	@ 0009c688 0901
.org 0x9c68a
	ldrb r2, [r3, #0]	@ 0009c68a 1a78
.org 0x9c68c
	movs r0, #17	@ 0009c68c 1120
.org 0x9c68e
	negs r0, r0	@ 0009c68e 4042
.org 0x9c690
	ands r0, r2	@ 0009c690 1040
.org 0x9c692
	orrs r0, r1	@ 0009c692 0843
.org 0x9c694
	strb r0, [r3, #0]	@ 0009c694 1870
.org 0x9c696
	ldrb r1, [r4, #10]	@ 0009c696 a17a
.org 0x9c698
	movs r0, #16	@ 0009c698 1020
.org 0x9c69a
	ands r0, r1	@ 0009c69a 0840
.org 0x9c69c
	cmp r0, #0	@ 0009c69c 0028
.org 0x9c69e
	beq.n 0x9c6a8	@ 0009c69e 03d0
.org 0x9c6a0
	ldr r0, [r4, #84]	@ 0009c6a0 606d
.org 0x9c6a2
	movs r1, #184	@ 0009c6a2 b821
.org 0x9c6a4
	lsls r1, r1, #5	@ 0009c6a4 4901
.org 0x9c6a6
	b.n 0x9c6ac	@ 0009c6a6 01e0
.org 0x9c6a8
	ldr r0, [r4, #84]	@ 0009c6a8 606d
.org 0x9c6aa
	ldr r1, [pc, #64]	@ 0009c6aa 1049
.org 0x9c6ac
	adds r0, r0, r1	@ 0009c6ac 4018
.org 0x9c6ae
	str r0, [r5, #84]	@ 0009c6ae 6865
.org 0x9c6b0
	ldr r0, [r4, #88]	@ 0009c6b0 a06d
.org 0x9c6b2
	ldr r1, [pc, #60]	@ 0009c6b2 0f49
.org 0x9c6b4
	adds r0, r0, r1	@ 0009c6b4 4018
.org 0x9c6b6
	str r0, [r5, #88]	@ 0009c6b6 a865
.org 0x9c6b8
	movs r4, #0	@ 0009c6b8 0024
.org 0x9c6ba
	str r4, [r5, #92]	@ 0009c6ba ec65
.org 0x9c6bc
	movs r0, #128	@ 0009c6bc 8020
.org 0x9c6be
	negs r0, r0	@ 0009c6be 4042
.org 0x9c6c0
	str r0, [r5, #96]	@ 0009c6c0 2866
.org 0x9c6c2
	adds r1, r5, #0	@ 0009c6c2 291c
.org 0x9c6c4
	adds r1, #180	@ 0009c6c4 b431
.org 0x9c6c6
	ldr r0, [r5, #84]	@ 0009c6c6 686d
.org 0x9c6c8
	str r0, [r1, #0]	@ 0009c6c8 0860
.org 0x9c6ca
	adds r1, #4	@ 0009c6ca 0431
.org 0x9c6cc
	ldr r0, [r5, #88]	@ 0009c6cc a86d
.org 0x9c6ce
	str r0, [r1, #0]	@ 0009c6ce 0860
.org 0x9c6d0
	ldr r0, [r5, #84]	@ 0009c6d0 686d
.org 0x9c6d2
	ldr r1, [r5, #88]	@ 0009c6d2 a96d
.org 0x9c6d4
	bl 0x8534	@ 0009c6d4 6bf72eff
.org 0x9c6d8
	adds r1, r5, #0	@ 0009c6d8 291c
.org 0x9c6da
	adds r1, #188	@ 0009c6da bc31
.org 0x9c6dc
	str r0, [r1, #0]	@ 0009c6dc 0860
.org 0x9c6de
	strb r4, [r5, #18]	@ 0009c6de ac74
.org 0x9c6e0
	movs r0, #16	@ 0009c6e0 1020
.org 0x9c6e2
	strb r0, [r5, #19]	@ 0009c6e2 e874
.org 0x9c6e4
	str r4, [r5, #44]	@ 0009c6e4 ec62
.org 0x9c6e6
	pop {r4, r5, r6}	@ 0009c6e6 70bc
.org 0x9c6e8
	pop {r0}	@ 0009c6e8 01bc
.org 0x9c6ea
	bx r0	@ 0009c6ea 0047
