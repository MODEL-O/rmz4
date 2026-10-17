@ FUN_0800f61c  entry 0x0800f61c  size 128
.thumb
.org 0xf61c
FUN_0800f61c:
	push {r4, r5, r6, r7, lr}	@ 0000f61c f0b5
.org 0xf61e
	mov r7, r8	@ 0000f61e 4746
.org 0xf620
	push {r7}	@ 0000f620 80b4
.org 0xf622
	adds r7, r0, #0	@ 0000f622 071c
.org 0xf624
	ldr r0, [r7, #92]	@ 0000f624 f86d
.org 0xf626
	lsls r0, r0, #16	@ 0000f626 0004
.org 0xf628
	lsrs r0, r0, #16	@ 0000f628 000c
.org 0xf62a
	mov r8, r0	@ 0000f62a 8046
.org 0xf62c
	ldr r5, [pc, #108]	@ 0000f62c 1b4d
.org 0xf62e
	ldr r1, [pc, #112]	@ 0000f62e 1c49
.org 0xf630
	adds r0, r5, r1	@ 0000f630 6818
.org 0xf632
	ldrh r1, [r0, #0]	@ 0000f632 0188
.org 0xf634
	lsrs r0, r1, #8	@ 0000f634 080a
.org 0xf636
	cmp r0, #4	@ 0000f636 0428
.org 0xf638
	bne.n 0xf676	@ 0000f638 1dd1
.org 0xf63a
	movs r0, #255	@ 0000f63a ff20
.org 0xf63c
	ands r0, r1	@ 0000f63c 0840
.org 0xf63e
	cmp r0, #5	@ 0000f63e 0528
.org 0xf640
	bne.n 0xf676	@ 0000f640 19d1
.org 0xf642
	ldr r6, [pc, #96]	@ 0000f642 184e
.org 0xf644
	ldr r0, [pc, #96]	@ 0000f644 1848
.org 0xf646
	adds r5, r5, r0	@ 0000f646 2d18
.org 0xf648
	ldrb r0, [r5, #0]	@ 0000f648 2878
.org 0xf64a
	lsls r1, r0, #2	@ 0000f64a 8100
.org 0xf64c
	adds r1, r1, r0	@ 0000f64c 0918
.org 0xf64e
	lsls r1, r1, #2	@ 0000f64e 8900
.org 0xf650
	ldr r4, [pc, #88]	@ 0000f650 164c
.org 0xf652
	adds r1, r1, r4	@ 0000f652 0919
.org 0xf654
	ldr r0, [r6, #0]	@ 0000f654 3068
.org 0xf656
	adds r0, r0, r1	@ 0000f656 4018
.org 0xf658
	movs r1, #128	@ 0000f658 8021
.org 0xf65a
	lsls r1, r1, #7	@ 0000f65a c901
.org 0xf65c
	bl 0x1ea4	@ 0000f65c f2f722fc
.org 0xf660
	ldrb r0, [r5, #0]	@ 0000f660 2878
.org 0xf662
	lsls r1, r0, #2	@ 0000f662 8100
.org 0xf664
	adds r1, r1, r0	@ 0000f664 0918
.org 0xf666
	lsls r1, r1, #2	@ 0000f666 8900
.org 0xf668
	adds r1, r1, r4	@ 0000f668 0919
.org 0xf66a
	ldr r0, [r6, #0]	@ 0000f66a 3068
.org 0xf66c
	adds r0, r0, r1	@ 0000f66c 4018
.org 0xf66e
	adds r0, #12	@ 0000f66e 0c30
.org 0xf670
	movs r1, #0	@ 0000f670 0021
.org 0xf672
	bl 0x2208	@ 0000f672 f2f7c9fd
.org 0xf676
	mov r1, r8	@ 0000f676 4146
.org 0xf678
	lsrs r2, r1, #4	@ 0000f678 0a09
.org 0xf67a
	lsls r2, r2, #2	@ 0000f67a 9200
.org 0xf67c
	ldr r0, [pc, #48]	@ 0000f67c 0c48
.org 0xf67e
	adds r3, r2, r0	@ 0000f67e 1318
.org 0xf680
	movs r1, #0	@ 0000f680 0021
.org 0xf682
	strh r1, [r3, #0]	@ 0000f682 1980
.org 0xf684
	adds r0, #2	@ 0000f684 0230
.org 0xf686
	adds r2, r2, r0	@ 0000f686 1218
.org 0xf688
	ldr r1, [r7, #56]	@ 0000f688 b96b
.org 0xf68a
	ldr r0, [r7, #72]	@ 0000f68a b86c
.org 0xf68c
	muls r0, r1	@ 0000f68c 4843
.org 0xf68e
	asrs r0, r0, #8	@ 0000f68e 0012
.org 0xf690
	strh r0, [r2, #0]	@ 0000f690 1080
.org 0xf692
	pop {r3}	@ 0000f692 08bc
.org 0xf694
	mov r8, r3	@ 0000f694 9846
.org 0xf696
	pop {r4, r5, r6, r7}	@ 0000f696 f0bc
.org 0xf698
	pop {r0}	@ 0000f698 01bc
.org 0xf69a
	bx r0	@ 0000f69a 0047
