@ FUN_080ad7ec  entry 0x080ad7ec  size 184
.thumb
.org 0xad7ec
FUN_080ad7ec:
	push {r4, r5, lr}	@ 000ad7ec 30b5
.org 0xad7ee
	adds r5, r0, #0	@ 000ad7ee 051c
.org 0xad7f0
	bl 0x1cc9c	@ 000ad7f0 6ff754fa
.org 0xad7f4
	ldrb r1, [r5, #10]	@ 000ad7f4 a97a
.org 0xad7f6
	movs r0, #1	@ 000ad7f6 0120
.org 0xad7f8
	orrs r0, r1	@ 000ad7f8 0843
.org 0xad7fa
	movs r1, #2	@ 000ad7fa 0221
.org 0xad7fc
	orrs r0, r1	@ 000ad7fc 0843
.org 0xad7fe
	movs r2, #0	@ 000ad7fe 0022
.org 0xad800
	movs r1, #239	@ 000ad800 ef21
.org 0xad802
	ands r0, r1	@ 000ad802 0840
.org 0xad804
	strb r0, [r5, #10]	@ 000ad804 a872
.org 0xad806
	movs r4, #1	@ 000ad806 0124
.org 0xad808
	adds r0, r5, #0	@ 000ad808 281c
.org 0xad80a
	adds r0, #76	@ 000ad80a 4c30
.org 0xad80c
	strb r2, [r0, #0]	@ 000ad80c 0270
.org 0xad80e
	adds r2, r5, #0	@ 000ad80e 2a1c
.org 0xad810
	adds r2, #74	@ 000ad810 4a32
.org 0xad812
	ldrb r1, [r2, #0]	@ 000ad812 1178
.org 0xad814
	movs r0, #17	@ 000ad814 1120
.org 0xad816
	negs r0, r0	@ 000ad816 4042
.org 0xad818
	ands r0, r1	@ 000ad818 0840
.org 0xad81a
	strb r0, [r2, #0]	@ 000ad81a 1070
.org 0xad81c
	ldr r1, [pc, #36]	@ 000ad81c 0949
.org 0xad81e
	ldrb r0, [r5, #9]	@ 000ad81e 687a
.org 0xad820
	lsls r0, r0, #2	@ 000ad820 8000
.org 0xad822
	adds r0, r0, r1	@ 000ad822 4018
.org 0xad824
	str r4, [r5, #12]	@ 000ad824 ec60
.org 0xad826
	ldr r0, [r0, #0]	@ 000ad826 0068
.org 0xad828
	ldr r0, [r0, #4]	@ 000ad828 4068
.org 0xad82a
	str r0, [r5, #20]	@ 000ad82a 6861
.org 0xad82c
	ldrb r0, [r5, #16]	@ 000ad82c 287c
.org 0xad82e
	cmp r0, #0	@ 000ad82e 0028
.org 0xad830
	bne.n 0xad848	@ 000ad830 0ad1
.org 0xad832
	movs r1, #157	@ 000ad832 9d21
.org 0xad834
	lsls r1, r1, #8	@ 000ad834 0902
.org 0xad836
	adds r0, r5, #0	@ 000ad836 281c
.org 0xad838
	bl 0x1cf00	@ 000ad838 6ff762fb
.org 0xad83c
	adds r0, r5, #0	@ 000ad83c 281c
.org 0xad83e
	adds r0, #180	@ 000ad83e b430
.org 0xad840
	str r4, [r0, #0]	@ 000ad840 0460
.org 0xad842
	b.n 0xad858	@ 000ad842 09e0
.org 0xad844
	.byte 0x40,0xdb,0x85,0x08	@ 000ad844 data
.org 0xad848
	ldr r1, [pc, #92]	@ 000ad848 1749
.org 0xad84a
	adds r0, r5, #0	@ 000ad84a 281c
.org 0xad84c
	bl 0x1cf00	@ 000ad84c 6ff758fb
.org 0xad850
	adds r1, r5, #0	@ 000ad850 291c
.org 0xad852
	adds r1, #180	@ 000ad852 b431
.org 0xad854
	movs r0, #3	@ 000ad854 0320
.org 0xad856
	str r0, [r1, #0]	@ 000ad856 0860
.org 0xad858
	movs r1, #0	@ 000ad858 0021
.org 0xad85a
	str r1, [r5, #92]	@ 000ad85a e965
.org 0xad85c
	movs r0, #80	@ 000ad85c 5020
.org 0xad85e
	negs r0, r0	@ 000ad85e 4042
.org 0xad860
	str r0, [r5, #96]	@ 000ad860 2866
.org 0xad862
	adds r0, r5, #0	@ 000ad862 281c
.org 0xad864
	adds r0, #184	@ 000ad864 b830
.org 0xad866
	strb r1, [r0, #0]	@ 000ad866 0170
.org 0xad868
	adds r0, #1	@ 000ad868 0130
.org 0xad86a
	strb r1, [r0, #0]	@ 000ad86a 0170
.org 0xad86c
	adds r2, r5, #0	@ 000ad86c 2a1c
.org 0xad86e
	adds r2, #188	@ 000ad86e bc32
.org 0xad870
	ldr r0, [r5, #88]	@ 000ad870 a86d
.org 0xad872
	str r0, [r2, #0]	@ 000ad872 1060
.org 0xad874
	adds r0, r5, #0	@ 000ad874 281c
.org 0xad876
	adds r0, #186	@ 000ad876 ba30
.org 0xad878
	strb r1, [r0, #0]	@ 000ad878 0170
.org 0xad87a
	strb r1, [r5, #18]	@ 000ad87a a974
.org 0xad87c
	strb r1, [r5, #13]	@ 000ad87c 6973
.org 0xad87e
	ldrb r1, [r5, #10]	@ 000ad87e a97a
.org 0xad880
	movs r0, #4	@ 000ad880 0420
.org 0xad882
	orrs r0, r1	@ 000ad882 0843
.org 0xad884
	strb r0, [r5, #10]	@ 000ad884 a872
.org 0xad886
	adds r4, r5, #0	@ 000ad886 2c1c
.org 0xad888
	adds r4, #116	@ 000ad888 7434
.org 0xad88a
	ldr r1, [pc, #32]	@ 000ad88a 0849
.org 0xad88c
	subs r2, #104	@ 000ad88c 683a
.org 0xad88e
	adds r0, r4, #0	@ 000ad88e 201c
.org 0xad890
	movs r3, #128	@ 000ad890 8023
.org 0xad892
	bl 0x5760	@ 000ad892 57f765ff
.org 0xad896
	str r5, [r4, #44]	@ 000ad896 e562
.org 0xad898
	ldr r0, [pc, #20]	@ 000ad898 0548
.org 0xad89a
	str r0, [r4, #36]	@ 000ad89a 6062
.org 0xad89c
	adds r0, r5, #0	@ 000ad89c 281c
.org 0xad89e
	bl 0xad8b4	@ 000ad89e 00f009f8
.org 0xad8a2
	pop {r4, r5}	@ 000ad8a2 30bc
