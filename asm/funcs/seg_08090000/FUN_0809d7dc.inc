@ FUN_0809d7dc  entry 0x0809d7dc  size 134
.thumb
.org 0x9d7dc
FUN_0809d7dc:
	push {r4, r5, lr}	@ 0009d7dc 30b5
.org 0x9d7de
	adds r4, r0, #0	@ 0009d7de 041c
.org 0x9d7e0
	ldr r5, [r4, #40]	@ 0009d7e0 a56a
.org 0x9d7e2
	bl 0x1cff0	@ 0009d7e2 7ff705fc
.org 0x9d7e6
	ldrb r2, [r4, #15]	@ 0009d7e6 e27b
.org 0x9d7e8
	adds r3, r2, #0	@ 0009d7e8 131c
.org 0x9d7ea
	cmp r3, #0	@ 0009d7ea 002b
.org 0x9d7ec
	bne.n 0x9d820	@ 0009d7ec 18d1
.org 0x9d7ee
	ldr r0, [r4, #84]	@ 0009d7ee 606d
.org 0x9d7f0
	ldr r1, [r4, #92]	@ 0009d7f0 e16d
.org 0x9d7f2
	adds r0, r0, r1	@ 0009d7f2 4018
.org 0x9d7f4
	str r0, [r4, #84]	@ 0009d7f4 6065
.org 0x9d7f6
	ldr r0, [r4, #100]	@ 0009d7f6 606e
.org 0x9d7f8
	adds r1, r1, r0	@ 0009d7f8 0918
.org 0x9d7fa
	str r1, [r4, #92]	@ 0009d7fa e165
.org 0x9d7fc
	ldr r0, [r4, #88]	@ 0009d7fc a06d
.org 0x9d7fe
	ldr r1, [r4, #96]	@ 0009d7fe 216e
.org 0x9d800
	adds r0, r0, r1	@ 0009d800 4018
.org 0x9d802
	str r0, [r4, #88]	@ 0009d802 a065
.org 0x9d804
	ldr r0, [r4, #104]	@ 0009d804 a06e
.org 0x9d806
	adds r1, r1, r0	@ 0009d806 0918
.org 0x9d808
	str r1, [r4, #96]	@ 0009d808 2166
.org 0x9d80a
	ldrb r0, [r4, #18]	@ 0009d80a a07c
.org 0x9d80c
	adds r1, r0, #1	@ 0009d80c 411c
.org 0x9d80e
	strb r1, [r4, #18]	@ 0009d80e a174
.org 0x9d810
	lsls r0, r0, #24	@ 0009d810 0006
.org 0x9d812
	lsrs r0, r0, #24	@ 0009d812 000e
.org 0x9d814
	cmp r0, #64	@ 0009d814 4028
.org 0x9d816
	bls.n 0x9d85c	@ 0009d816 21d9
.org 0x9d818
	adds r0, r2, #1	@ 0009d818 501c
.org 0x9d81a
	strb r0, [r4, #15]	@ 0009d81a e073
.org 0x9d81c
	strb r3, [r4, #18]	@ 0009d81c a374
.org 0x9d81e
	b.n 0x9d85c	@ 0009d81e 1de0
.org 0x9d820
	ldrb r0, [r5, #13]	@ 0009d820 687b
.org 0x9d822
	cmp r0, #3	@ 0009d822 0328
.org 0x9d824
	bls.n 0x9d85c	@ 0009d824 1ad9
.org 0x9d826
	ldrb r1, [r4, #10]	@ 0009d826 a17a
.org 0x9d828
	movs r0, #254	@ 0009d828 fe20
.org 0x9d82a
	ands r0, r1	@ 0009d82a 0840
.org 0x9d82c
	movs r2, #0	@ 0009d82c 0022
.org 0x9d82e
	movs r1, #253	@ 0009d82e fd21
.org 0x9d830
	ands r0, r1	@ 0009d830 0840
.org 0x9d832
	strb r0, [r4, #10]	@ 0009d832 a072
.org 0x9d834
	adds r0, r4, #0	@ 0009d834 201c
.org 0x9d836
	adds r0, #140	@ 0009d836 8c30
.org 0x9d838
	str r2, [r0, #0]	@ 0009d838 0260
.org 0x9d83a
	adds r0, #4	@ 0009d83a 0430
.org 0x9d83c
	str r2, [r0, #0]	@ 0009d83c 0260
.org 0x9d83e
	adds r0, #4	@ 0009d83e 0430
.org 0x9d840
	strb r2, [r0, #0]	@ 0009d840 0270
.org 0x9d842
	ldrb r1, [r4, #10]	@ 0009d842 a17a
.org 0x9d844
	movs r0, #251	@ 0009d844 fb20
.org 0x9d846
	ands r0, r1	@ 0009d846 0840
.org 0x9d848
	strb r0, [r4, #10]	@ 0009d848 a072
.org 0x9d84a
	ldr r1, [pc, #24]	@ 0009d84a 0649
.org 0x9d84c
	ldrb r0, [r4, #9]	@ 0009d84c 607a
.org 0x9d84e
	lsls r0, r0, #2	@ 0009d84e 8000
.org 0x9d850
	adds r0, r0, r1	@ 0009d850 4018
.org 0x9d852
	movs r1, #3	@ 0009d852 0321
.org 0x9d854
	str r1, [r4, #12]	@ 0009d854 e160
.org 0x9d856
	ldr r0, [r0, #0]	@ 0009d856 0068
.org 0x9d858
	ldr r0, [r0, #12]	@ 0009d858 c068
.org 0x9d85a
	str r0, [r4, #20]	@ 0009d85a 6061
.org 0x9d85c
	pop {r4, r5}	@ 0009d85c 30bc
.org 0x9d85e
	pop {r0}	@ 0009d85e 01bc
.org 0x9d860
	bx r0	@ 0009d860 0047
