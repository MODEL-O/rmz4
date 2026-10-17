@ FUN_080b260c  entry 0x080b260c  size 138
.thumb
.org 0xb260c
FUN_080b260c:
	push {r4, r5, r6, lr}	@ 000b260c 70b5
.org 0xb260e
	adds r5, r0, #0	@ 000b260e 051c
.org 0xb2610
	ldrb r0, [r5, #14]	@ 000b2610 a87b
.org 0xb2612
	cmp r0, #0	@ 000b2612 0028
.org 0xb2614
	bne.n 0xb2632	@ 000b2614 0dd1
.org 0xb2616
	adds r0, r5, #0	@ 000b2616 281c
.org 0xb2618
	adds r0, #181	@ 000b2618 b530
.org 0xb261a
	ldr r2, [pc, #80]	@ 000b261a 144a
.org 0xb261c
	adds r1, r2, #0	@ 000b261c 111c
.org 0xb261e
	ldrb r0, [r0, #0]	@ 000b261e 0078
.org 0xb2620
	adds r1, r1, r0	@ 000b2620 0918
.org 0xb2622
	lsls r1, r1, #16	@ 000b2622 0904
.org 0xb2624
	lsrs r1, r1, #16	@ 000b2624 090c
.org 0xb2626
	adds r0, r5, #0	@ 000b2626 281c
.org 0xb2628
	bl 0x1cf00	@ 000b2628 6af76afc
.org 0xb262c
	ldrb r0, [r5, #14]	@ 000b262c a87b
.org 0xb262e
	adds r0, #1	@ 000b262e 0130
.org 0xb2630
	strb r0, [r5, #14]	@ 000b2630 a873
.org 0xb2632
	adds r0, r5, #0	@ 000b2632 281c
.org 0xb2634
	bl 0xb2b94	@ 000b2634 00f0aefa
.org 0xb2638
	adds r0, r5, #0	@ 000b2638 281c
.org 0xb263a
	bl 0xb2b20	@ 000b263a 00f071fa
.org 0xb263e
	lsls r0, r0, #24	@ 000b263e 0006
.org 0xb2640
	cmp r0, #0	@ 000b2640 0028
.org 0xb2642
	beq.n 0xb2696	@ 000b2642 28d0
.org 0xb2644
	ldrb r0, [r5, #15]	@ 000b2644 e87b
.org 0xb2646
	movs r1, #0	@ 000b2646 0021
.org 0xb2648
	strb r0, [r5, #13]	@ 000b2648 6873
.org 0xb264a
	strb r1, [r5, #14]	@ 000b264a a973
.org 0xb264c
	adds r0, r5, #0	@ 000b264c 281c
.org 0xb264e
	adds r0, #183	@ 000b264e b730
.org 0xb2650
	ldrb r1, [r0, #0]	@ 000b2650 0178
.org 0xb2652
	adds r6, r0, #0	@ 000b2652 061c
.org 0xb2654
	cmp r1, #1	@ 000b2654 0129
.org 0xb2656
	bne.n 0xb2696	@ 000b2656 1ed1
.org 0xb2658
	ldrb r2, [r5, #10]	@ 000b2658 aa7a
.org 0xb265a
	lsrs r0, r2, #4	@ 000b265a 1009
.org 0xb265c
	adds r3, r1, #0	@ 000b265c 0b1c
.org 0xb265e
	bics r3, r0	@ 000b265e 8343
.org 0xb2660
	cmp r3, #0	@ 000b2660 002b
.org 0xb2662
	beq.n 0xb2670	@ 000b2662 05d0
.org 0xb2664
	movs r0, #16	@ 000b2664 1020
.org 0xb2666
	orrs r0, r2	@ 000b2666 1043
.org 0xb2668
	b.n 0xb2674	@ 000b2668 04e0
.org 0xb266a
	.byte 0x00	@ 000b266a data
.org 0xb266b
	.byte 0x00	@ 000b266b data
.org 0xb266c
	.byte 0x01,0xc5,0x00,0x00	@ 000b266c data
.org 0xb2670
	movs r0, #239	@ 000b2670 ef20
.org 0xb2672
	ands r0, r2	@ 000b2672 1040
.org 0xb2674
	strb r0, [r5, #10]	@ 000b2674 a872
.org 0xb2676
	movs r1, #1	@ 000b2676 0121
.org 0xb2678
	ands r1, r3	@ 000b2678 1940
.org 0xb267a
	adds r0, r5, #0	@ 000b267a 281c
.org 0xb267c
	adds r0, #76	@ 000b267c 4c30
.org 0xb267e
	movs r4, #0	@ 000b267e 0024
.org 0xb2680
	strb r1, [r0, #0]	@ 000b2680 0170
.org 0xb2682
	adds r3, r5, #0	@ 000b2682 2b1c
.org 0xb2684
	adds r3, #74	@ 000b2684 4a33
.org 0xb2686
	lsls r1, r1, #4	@ 000b2686 0901
.org 0xb2688
	ldrb r2, [r3, #0]	@ 000b2688 1a78
.org 0xb268a
	movs r0, #17	@ 000b268a 1120
.org 0xb268c
	negs r0, r0	@ 000b268c 4042
.org 0xb268e
	ands r0, r2	@ 000b268e 1040
.org 0xb2690
	orrs r0, r1	@ 000b2690 0843
.org 0xb2692
	strb r0, [r3, #0]	@ 000b2692 1870
.org 0xb2694
	strb r4, [r6, #0]	@ 000b2694 3470
