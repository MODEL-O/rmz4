@ FUN_0801a728  entry 0x0801a728  size 78
.thumb
.org 0x1a728
FUN_0801a728:
	push {r4, r5, lr}	@ 0001a728 30b5
.org 0x1a72a
	adds r4, r0, #0	@ 0001a72a 041c
.org 0x1a72c
	adds r2, r1, #0	@ 0001a72c 0a1c
.org 0x1a72e
	ldr r0, [pc, #12]	@ 0001a72e 0348
.org 0x1a730
	adds r1, r2, r0	@ 0001a730 1118
.org 0x1a732
	ldr r0, [pc, #12]	@ 0001a732 0348
.org 0x1a734
	cmp r1, r0	@ 0001a734 8142
.org 0x1a736
	bls.n 0x1a744	@ 0001a736 05d9
.org 0x1a738
	movs r0, #0	@ 0001a738 0020
.org 0x1a73a
	b.n 0x1a778	@ 0001a73a 1de0
.org 0x1a73c
	.byte 0xff,0xdf,0xf7,0xff	@ 0001a73c data
.org 0x1a740
	.byte 0xfe,0xdf,0x01,0x00	@ 0001a740 data
.org 0x1a744
	ldr r3, [pc, #56]	@ 0001a744 0e4b
.org 0x1a746
	movs r5, #252	@ 0001a746 fc25
.org 0x1a748
	lsls r5, r5, #3	@ 0001a748 ed00
.org 0x1a74a
	adds r3, r3, r5	@ 0001a74a 5b19
.org 0x1a74c
	ldrh r1, [r3, #0]	@ 0001a74c 1988
.org 0x1a74e
	asrs r0, r2, #12	@ 0001a74e 1013
.org 0x1a750
	adds r2, r1, #0	@ 0001a750 0a1c
.org 0x1a752
	muls r2, r0	@ 0001a752 4243
.org 0x1a754
	asrs r1, r4, #12	@ 0001a754 2113
.org 0x1a756
	adds r1, r2, r1	@ 0001a756 5118
.org 0x1a758
	adds r1, #2	@ 0001a758 0231
.org 0x1a75a
	lsls r1, r1, #1	@ 0001a75a 4900
.org 0x1a75c
	adds r1, r1, r3	@ 0001a75c c918
.org 0x1a75e
	ldr r5, [pc, #36]	@ 0001a75e 094d
.org 0x1a760
	adds r0, r4, r5	@ 0001a760 6019
.org 0x1a762
	asrs r0, r0, #12	@ 0001a762 0013
.org 0x1a764
	adds r2, r2, r0	@ 0001a764 1218
.org 0x1a766
	adds r2, #2	@ 0001a766 0232
.org 0x1a768
	lsls r2, r2, #1	@ 0001a768 5200
.org 0x1a76a
	adds r2, r2, r3	@ 0001a76a d218
.org 0x1a76c
	ldrh r1, [r1, #0]	@ 0001a76c 0988
.org 0x1a76e
	ldrh r0, [r2, #0]	@ 0001a76e 1088
.org 0x1a770
	eors r1, r0	@ 0001a770 4140
.org 0x1a772
	negs r0, r1	@ 0001a772 4842
.org 0x1a774
	orrs r0, r1	@ 0001a774 0843
