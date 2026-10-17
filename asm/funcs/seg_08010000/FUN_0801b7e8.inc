@ FUN_0801b7e8  entry 0x0801b7e8  size 96
.thumb
.org 0x1b7e8
FUN_0801b7e8:
	push {r4, r5, r6, lr}	@ 0001b7e8 70b5
.org 0x1b7ea
	adds r5, r0, #0	@ 0001b7ea 051c
.org 0x1b7ec
	ldrb r6, [r5, #14]	@ 0001b7ec ae7b
.org 0x1b7ee
	cmp r6, #0	@ 0001b7ee 002e
.org 0x1b7f0
	bne.n 0x1b842	@ 0001b7f0 27d1
.org 0x1b7f2
	ldr r0, [r5, #92]	@ 0001b7f2 e86d
.org 0x1b7f4
	lsls r0, r0, #16	@ 0001b7f4 0004
.org 0x1b7f6
	lsrs r0, r0, #20	@ 0001b7f6 000d
.org 0x1b7f8
	lsls r3, r0, #1	@ 0001b7f8 4300
.org 0x1b7fa
	ldr r4, [pc, #76]	@ 0001b7fa 134c
.org 0x1b7fc
	adds r3, r3, r4	@ 0001b7fc 1b19
.org 0x1b7fe
	ldr r1, [r5, #100]	@ 0001b7fe 696e
.org 0x1b800
	movs r2, #71	@ 0001b800 4722
.org 0x1b802
	orrs r1, r2	@ 0001b802 1143
.org 0x1b804
	strh r1, [r3, #0]	@ 0001b804 1980
.org 0x1b806
	lsls r0, r0, #2	@ 0001b806 8000
.org 0x1b808
	adds r4, #8	@ 0001b808 0834
.org 0x1b80a
	adds r0, r0, r4	@ 0001b80a 0019
.org 0x1b80c
	str r6, [r0, #0]	@ 0001b80c 0660
.org 0x1b80e
	ldr r0, [pc, #60]	@ 0001b80e 0f48
.org 0x1b810
	ldr r0, [r0, #0]	@ 0001b810 0068
.org 0x1b812
	ldr r2, [pc, #60]	@ 0001b812 0f4a
.org 0x1b814
	adds r0, r0, r2	@ 0001b814 8018
.org 0x1b816
	movs r2, #248	@ 0001b816 f822
.org 0x1b818
	lsls r2, r2, #5	@ 0001b818 5201
.org 0x1b81a
	ands r1, r2	@ 0001b81a 1140
.org 0x1b81c
	lsls r1, r1, #3	@ 0001b81c c900
.org 0x1b81e
	movs r2, #192	@ 0001b81e c022
.org 0x1b820
	lsls r2, r2, #19	@ 0001b820 d204
.org 0x1b822
	adds r1, r1, r2	@ 0001b822 8918
.org 0x1b824
	movs r2, #128	@ 0001b824 8022
.org 0x1b826
	lsls r2, r2, #2	@ 0001b826 9200
.org 0x1b828
	bl 0x128be0	@ 0001b828 0df1daf9
.org 0x1b82c
	movs r0, #180	@ 0001b82c b420
.org 0x1b82e
	lsls r0, r0, #1	@ 0001b82e 4000
.org 0x1b830
	str r0, [r5, #76]	@ 0001b830 e864
.org 0x1b832
	adds r0, #104	@ 0001b832 6830
.org 0x1b834
	str r0, [r5, #80]	@ 0001b834 2865
.org 0x1b836
	movs r0, #128	@ 0001b836 8020
.org 0x1b838
	str r0, [r5, #68]	@ 0001b838 6864
.org 0x1b83a
	str r0, [r5, #72]	@ 0001b83a a864
.org 0x1b83c
	ldrb r0, [r5, #14]	@ 0001b83c a87b
.org 0x1b83e
	adds r0, #1	@ 0001b83e 0130
.org 0x1b840
	strb r0, [r5, #14]	@ 0001b840 a873
.org 0x1b842
	pop {r4, r5, r6}	@ 0001b842 70bc
.org 0x1b844
	pop {r0}	@ 0001b844 01bc
.org 0x1b846
	bx r0	@ 0001b846 0047
