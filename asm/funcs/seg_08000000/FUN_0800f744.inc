@ FUN_0800f744  entry 0x0800f744  size 96
.thumb
.org 0xf744
FUN_0800f744:
	push {r4, r5, r6, lr}	@ 0000f744 70b5
.org 0xf746
	sub sp, #8	@ 0000f746 82b0
.org 0xf748
	adds r4, r0, #0	@ 0000f748 041c
.org 0xf74a
	adds r6, r4, #0	@ 0000f74a 261c
.org 0xf74c
	adds r6, #20	@ 0000f74c 1436
.org 0xf74e
	ldr r1, [r4, #52]	@ 0000f74e 616b
.org 0xf750
	ldr r2, [r4, #56]	@ 0000f750 a26b
.org 0xf752
	movs r0, #240	@ 0000f752 f020
.org 0xf754
	lsls r0, r0, #1	@ 0000f754 4000
.org 0xf756
	adds r1, r1, r0	@ 0000f756 0918
.org 0xf758
	ldr r0, [r4, #44]	@ 0000f758 e06a
.org 0xf75a
	asrs r0, r0, #8	@ 0000f75a 0012
.org 0xf75c
	adds r0, r0, r1	@ 0000f75c 4018
.org 0xf75e
	str r0, [sp, #0]	@ 0000f75e 0090
.org 0xf760
	ldr r0, [r4, #48]	@ 0000f760 206b
.org 0xf762
	asrs r0, r0, #8	@ 0000f762 0012
.org 0xf764
	adds r0, r0, r2	@ 0000f764 8018
.org 0xf766
	str r0, [sp, #4]	@ 0000f766 0190
.org 0xf768
	ldr r0, [r4, #92]	@ 0000f768 e06d
.org 0xf76a
	lsrs r0, r0, #4	@ 0000f76a 0009
.org 0xf76c
	lsls r0, r0, #1	@ 0000f76c 4000
.org 0xf76e
	ldr r5, [pc, #52]	@ 0000f76e 0d4d
.org 0xf770
	adds r0, r0, r5	@ 0000f770 4019
.org 0xf772
	ldrh r0, [r0, #0]	@ 0000f772 0088
.org 0xf774
	movs r2, #248	@ 0000f774 f822
.org 0xf776
	lsls r2, r2, #5	@ 0000f776 5201
.org 0xf778
	ands r2, r0	@ 0000f778 0240
.org 0xf77a
	lsls r2, r2, #3	@ 0000f77a d200
.org 0xf77c
	movs r0, #192	@ 0000f77c c020
.org 0xf77e
	lsls r0, r0, #19	@ 0000f77e c004
.org 0xf780
	adds r2, r2, r0	@ 0000f780 1218
.org 0xf782
	ldr r3, [pc, #36]	@ 0000f782 094b
.org 0xf784
	adds r0, r6, #0	@ 0000f784 301c
.org 0xf786
	mov r1, sp	@ 0000f786 6946
.org 0xf788
	bl 0x5050	@ 0000f788 f5f762fc
.org 0xf78c
	ldr r1, [r4, #92]	@ 0000f78c e16d
.org 0xf78e
	lsrs r1, r1, #4	@ 0000f78e 0909
.org 0xf790
	lsls r1, r1, #2	@ 0000f790 8900
.org 0xf792
	adds r5, #8	@ 0000f792 0835
.org 0xf794
	adds r1, r1, r5	@ 0000f794 4919
.org 0xf796
	adds r0, r6, #0	@ 0000f796 301c
.org 0xf798
	bl 0x531c	@ 0000f798 f5f7c0fd
.org 0xf79c
	add sp, #8	@ 0000f79c 02b0
.org 0xf79e
	pop {r4, r5, r6}	@ 0000f79e 70bc
.org 0xf7a0
	pop {r0}	@ 0000f7a0 01bc
.org 0xf7a2
	bx r0	@ 0000f7a2 0047
