@ FUN_0801a788  entry 0x0801a788  size 140
.thumb
.org 0x1a788
FUN_0801a788:
	push {r4, r5, r6, lr}	@ 0001a788 70b5
.org 0x1a78a
	mov r6, r8	@ 0001a78a 4646
.org 0x1a78c
	push {r6}	@ 0001a78c 40b4
.org 0x1a78e
	sub sp, #8	@ 0001a78e 82b0
.org 0x1a790
	adds r5, r0, #0	@ 0001a790 051c
.org 0x1a792
	adds r6, r1, #0	@ 0001a792 0e1c
.org 0x1a794
	asrs r5, r5, #12	@ 0001a794 2d13
.org 0x1a796
	asrs r6, r6, #12	@ 0001a796 3613
.org 0x1a798
	ldr r1, [pc, #120]	@ 0001a798 1e49
.org 0x1a79a
	movs r0, #252	@ 0001a79a fc20
.org 0x1a79c
	lsls r0, r0, #3	@ 0001a79c c000
.org 0x1a79e
	adds r1, r1, r0	@ 0001a79e 0918
.org 0x1a7a0
	ldrh r0, [r1, #0]	@ 0001a7a0 0888
.org 0x1a7a2
	muls r0, r6	@ 0001a7a2 7043
.org 0x1a7a4
	adds r0, r0, r5	@ 0001a7a4 4019
.org 0x1a7a6
	adds r0, #2	@ 0001a7a6 0230
.org 0x1a7a8
	lsls r0, r0, #1	@ 0001a7a8 4000
.org 0x1a7aa
	adds r0, r0, r1	@ 0001a7aa 4018
.org 0x1a7ac
	ldrh r4, [r0, #0]	@ 0001a7ac 0488
.org 0x1a7ae
	movs r1, #3	@ 0001a7ae 0321
.org 0x1a7b0
	mov r8, r1	@ 0001a7b0 8846
.org 0x1a7b2
	adds r0, r4, #0	@ 0001a7b2 201c
.org 0x1a7b4
	bl 0x129198	@ 0001a7b4 0ef1f0fc
.org 0x1a7b8
	lsls r0, r0, #16	@ 0001a7b8 0004
.org 0x1a7ba
	lsrs r0, r0, #16	@ 0001a7ba 000c
.org 0x1a7bc
	subs r5, r5, r0	@ 0001a7bc 2d1a
.org 0x1a7be
	ldr r0, [pc, #88]	@ 0001a7be 1648
.org 0x1a7c0
	adds r4, r4, r0	@ 0001a7c0 2418
.org 0x1a7c2
	adds r0, r4, #0	@ 0001a7c2 201c
.org 0x1a7c4
	movs r1, #3	@ 0001a7c4 0321
.org 0x1a7c6
	bl 0x128fb8	@ 0001a7c6 0ef1f7fb
.org 0x1a7ca
	subs r6, r6, r0	@ 0001a7ca 361a
.org 0x1a7cc
	adds r0, r5, #0	@ 0001a7cc 281c
.org 0x1a7ce
	subs r0, #45	@ 0001a7ce 2d38
.org 0x1a7d0
	lsls r0, r0, #16	@ 0001a7d0 0004
.org 0x1a7d2
	ldr r2, [pc, #72]	@ 0001a7d2 124a
.org 0x1a7d4
	lsls r1, r6, #16	@ 0001a7d4 3104
.org 0x1a7d6
	ldr r3, [pc, #72]	@ 0001a7d6 124b
.org 0x1a7d8
	lsrs r0, r0, #16	@ 0001a7d8 000c
.org 0x1a7da
	orrs r0, r1	@ 0001a7da 0843
.org 0x1a7dc
	str r0, [sp, #0]	@ 0001a7dc 0090
.org 0x1a7de
	ldr r0, [sp, #4]	@ 0001a7de 0198
.org 0x1a7e0
	ands r0, r2	@ 0001a7e0 1040
.org 0x1a7e2
	mov r1, r8	@ 0001a7e2 4146
.org 0x1a7e4
	orrs r0, r1	@ 0001a7e4 0843
.org 0x1a7e6
	ands r0, r3	@ 0001a7e6 1840
.org 0x1a7e8
	movs r1, #192	@ 0001a7e8 c021
.org 0x1a7ea
	lsls r1, r1, #10	@ 0001a7ea 8902
.org 0x1a7ec
	orrs r0, r1	@ 0001a7ec 0843
.org 0x1a7ee
	str r0, [sp, #4]	@ 0001a7ee 0190
.org 0x1a7f0
	adds r0, r5, #0	@ 0001a7f0 281c
.org 0x1a7f2
	adds r1, r6, #0	@ 0001a7f2 311c
.org 0x1a7f4
	mov r2, sp	@ 0001a7f4 6a46
.org 0x1a7f6
	bl 0x736c	@ 0001a7f6 ecf7b9fd
.org 0x1a7fa
	lsls r5, r5, #12	@ 0001a7fa 2d03
.org 0x1a7fc
	lsls r6, r6, #12	@ 0001a7fc 3603
.org 0x1a7fe
	movs r0, #0	@ 0001a7fe 0020
.org 0x1a800
	adds r1, r5, #0	@ 0001a800 291c
.org 0x1a802
	adds r2, r6, #0	@ 0001a802 321c
.org 0x1a804
	bl 0x103888	@ 0001a804 e9f040f8
.org 0x1a808
	add sp, #8	@ 0001a808 02b0
.org 0x1a80a
	pop {r3}	@ 0001a80a 08bc
.org 0x1a80c
	mov r8, r3	@ 0001a80c 9846
.org 0x1a80e
	pop {r4, r5, r6}	@ 0001a80e 70bc
.org 0x1a810
	pop {r0}	@ 0001a810 01bc
.org 0x1a812
	bx r0	@ 0001a812 0047
