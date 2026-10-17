@ FUN_0803d734  entry 0x0803d734  size 106
.thumb
.org 0x3d734
FUN_0803d734:
	push {r4, lr}	@ 0003d734 10b5
.org 0x3d736
	adds r3, r0, #0	@ 0003d736 031c
.org 0x3d738
	adds r0, #180	@ 0003d738 b430
.org 0x3d73a
	ldr r4, [r0, #0]	@ 0003d73a 0468
.org 0x3d73c
	ldrb r0, [r4, #10]	@ 0003d73c a07a
.org 0x3d73e
	lsrs r2, r0, #4	@ 0003d73e 0209
.org 0x3d740
	movs r0, #1	@ 0003d740 0120
.org 0x3d742
	ands r2, r0	@ 0003d742 0240
.org 0x3d744
	cmp r2, #0	@ 0003d744 002a
.org 0x3d746
	beq.n 0x3d750	@ 0003d746 03d0
.org 0x3d748
	ldrb r1, [r3, #10]	@ 0003d748 997a
.org 0x3d74a
	movs r0, #16	@ 0003d74a 1020
.org 0x3d74c
	orrs r0, r1	@ 0003d74c 0843
.org 0x3d74e
	b.n 0x3d756	@ 0003d74e 02e0
.org 0x3d750
	ldrb r1, [r3, #10]	@ 0003d750 997a
.org 0x3d752
	movs r0, #239	@ 0003d752 ef20
.org 0x3d754
	ands r0, r1	@ 0003d754 0840
.org 0x3d756
	strb r0, [r3, #10]	@ 0003d756 9872
.org 0x3d758
	adds r1, r2, #0	@ 0003d758 111c
.org 0x3d75a
	adds r0, r3, #0	@ 0003d75a 181c
.org 0x3d75c
	adds r0, #76	@ 0003d75c 4c30
.org 0x3d75e
	strb r1, [r0, #0]	@ 0003d75e 0170
.org 0x3d760
	movs r0, #74	@ 0003d760 4a20
.org 0x3d762
	adds r0, r0, r3	@ 0003d762 c018
.org 0x3d764
	mov ip, r0	@ 0003d764 8446
.org 0x3d766
	lsls r1, r1, #4	@ 0003d766 0901
.org 0x3d768
	ldrb r2, [r0, #0]	@ 0003d768 0278
.org 0x3d76a
	movs r0, #17	@ 0003d76a 1120
.org 0x3d76c
	negs r0, r0	@ 0003d76c 4042
.org 0x3d76e
	ands r0, r2	@ 0003d76e 1040
.org 0x3d770
	orrs r0, r1	@ 0003d770 0843
.org 0x3d772
	mov r1, ip	@ 0003d772 6146
.org 0x3d774
	strb r0, [r1, #0]	@ 0003d774 0870
.org 0x3d776
	ldrb r1, [r3, #10]	@ 0003d776 997a
.org 0x3d778
	movs r0, #16	@ 0003d778 1020
.org 0x3d77a
	ands r0, r1	@ 0003d77a 0840
.org 0x3d77c
	cmp r0, #0	@ 0003d77c 0028
.org 0x3d77e
	beq.n 0x3d788	@ 0003d77e 03d0
.org 0x3d780
	ldr r0, [r4, #84]	@ 0003d780 606d
.org 0x3d782
	movs r1, #136	@ 0003d782 8821
.org 0x3d784
	lsls r1, r1, #5	@ 0003d784 4901
.org 0x3d786
	b.n 0x3d78c	@ 0003d786 01e0
.org 0x3d788
	ldr r0, [r4, #84]	@ 0003d788 606d
.org 0x3d78a
	ldr r1, [pc, #20]	@ 0003d78a 0549
.org 0x3d78c
	adds r0, r0, r1	@ 0003d78c 4018
.org 0x3d78e
	str r0, [r3, #84]	@ 0003d78e 5865
.org 0x3d790
	ldr r0, [r4, #88]	@ 0003d790 a06d
.org 0x3d792
	ldr r1, [pc, #16]	@ 0003d792 0449
.org 0x3d794
	adds r0, r0, r1	@ 0003d794 4018
.org 0x3d796
	str r0, [r3, #88]	@ 0003d796 9865
.org 0x3d798
	pop {r4}	@ 0003d798 10bc
.org 0x3d79a
	pop {r0}	@ 0003d79a 01bc
.org 0x3d79c
	bx r0	@ 0003d79c 0047
