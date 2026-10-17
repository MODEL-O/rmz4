@ FUN_08086804  entry 0x08086804  size 128
.thumb
.org 0x86804
FUN_08086804:
	push {r4, lr}	@ 00086804 10b5
.org 0x86806
	sub sp, #8	@ 00086806 82b0
.org 0x86808
	adds r4, r0, #0	@ 00086808 041c
.org 0x8680a
	bl 0x86b14	@ 0008680a 00f083f9
.org 0x8680e
	cmp r0, #0	@ 0008680e 0028
.org 0x86810
	beq.n 0x8687c	@ 00086810 34d0
.org 0x86812
	ldrb r1, [r4, #10]	@ 00086812 a17a
.org 0x86814
	movs r0, #254	@ 00086814 fe20
.org 0x86816
	ands r0, r1	@ 00086816 0840
.org 0x86818
	movs r1, #0	@ 00086818 0021
.org 0x8681a
	strb r0, [r4, #10]	@ 0008681a a072
.org 0x8681c
	adds r0, r4, #0	@ 0008681c 201c
.org 0x8681e
	adds r0, #140	@ 0008681e 8c30
.org 0x86820
	str r1, [r0, #0]	@ 00086820 0160
.org 0x86822
	adds r0, #4	@ 00086822 0430
.org 0x86824
	str r1, [r0, #0]	@ 00086824 0160
.org 0x86826
	adds r0, #4	@ 00086826 0430
.org 0x86828
	strb r1, [r0, #0]	@ 00086828 0170
.org 0x8682a
	ldrb r1, [r4, #10]	@ 0008682a a17a
.org 0x8682c
	movs r0, #251	@ 0008682c fb20
.org 0x8682e
	ands r0, r1	@ 0008682e 0840
.org 0x86830
	strb r0, [r4, #10]	@ 00086830 a072
.org 0x86832
	ldr r0, [r4, #84]	@ 00086832 606d
.org 0x86834
	ldr r2, [pc, #76]	@ 00086834 134a
.org 0x86836
	ands r0, r2	@ 00086836 1040
.org 0x86838
	movs r1, #128	@ 00086838 8021
.org 0x8683a
	lsls r1, r1, #4	@ 0008683a 0901
.org 0x8683c
	adds r0, r0, r1	@ 0008683c 4018
.org 0x8683e
	str r0, [sp, #0]	@ 0008683e 0090
.org 0x86840
	ldr r0, [r4, #88]	@ 00086840 a06d
.org 0x86842
	ands r0, r2	@ 00086842 1040
.org 0x86844
	adds r0, r0, r1	@ 00086844 4018
.org 0x86846
	str r0, [sp, #4]	@ 00086846 0190
.org 0x86848
	movs r0, #0	@ 00086848 0020
.org 0x8684a
	movs r1, #20	@ 0008684a 1421
.org 0x8684c
	mov r2, sp	@ 0008684c 6a46
.org 0x8684e
	bl 0x2ab88	@ 0008684e a4f79bf9
.org 0x86852
	ldr r2, [pc, #52]	@ 00086852 0d4a
.org 0x86854
	ldrh r1, [r2, #12]	@ 00086854 9189
.org 0x86856
	ldr r0, [pc, #52]	@ 00086856 0d48
.org 0x86858
	cmp r1, r0	@ 00086858 8142
.org 0x8685a
	bhi.n 0x86860	@ 0008685a 01d8
.org 0x8685c
	adds r0, r1, #1	@ 0008685c 481c
.org 0x8685e
	strh r0, [r2, #12]	@ 0008685e 9081
.org 0x86860
	adds r1, r4, #0	@ 00086860 211c
.org 0x86862
	adds r1, #84	@ 00086862 5431
.org 0x86864
	adds r0, r4, #0	@ 00086864 201c
.org 0x86866
	bl 0x2abe0	@ 00086866 a4f7bbf9
.org 0x8686a
	ldr r1, [pc, #36]	@ 0008686a 0949
.org 0x8686c
	ldrb r0, [r4, #9]	@ 0008686c 607a
.org 0x8686e
	lsls r0, r0, #2	@ 0008686e 8000
.org 0x86870
	adds r0, r0, r1	@ 00086870 4018
.org 0x86872
	movs r1, #4	@ 00086872 0421
.org 0x86874
	str r1, [r4, #12]	@ 00086874 e160
.org 0x86876
	ldr r0, [r0, #0]	@ 00086876 0068
.org 0x86878
	ldr r0, [r0, #16]	@ 00086878 0069
.org 0x8687a
	str r0, [r4, #20]	@ 0008687a 6061
.org 0x8687c
	add sp, #8	@ 0008687c 02b0
.org 0x8687e
	pop {r4}	@ 0008687e 10bc
.org 0x86880
	pop {r0}	@ 00086880 01bc
.org 0x86882
	bx r0	@ 00086882 0047
