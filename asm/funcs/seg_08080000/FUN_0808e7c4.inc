@ FUN_0808e7c4  entry 0x0808e7c4  size 200
.thumb
.org 0x8e7c4
FUN_0808e7c4:
	push {r4, r5, lr}	@ 0008e7c4 30b5
.org 0x8e7c6
	adds r4, r0, #0	@ 0008e7c6 041c
.org 0x8e7c8
	ldr r5, [r4, #40]	@ 0008e7c8 a56a
.org 0x8e7ca
	ldrb r2, [r4, #13]	@ 0008e7ca 627b
.org 0x8e7cc
	cmp r2, #0	@ 0008e7cc 002a
.org 0x8e7ce
	beq.n 0x8e7d6	@ 0008e7ce 02d0
.org 0x8e7d0
	cmp r2, #1	@ 0008e7d0 012a
.org 0x8e7d2
	beq.n 0x8e826	@ 0008e7d2 28d0
.org 0x8e7d4
	b.n 0x8e894	@ 0008e7d4 5ee0
.org 0x8e7d6
	adds r0, r4, #0	@ 0008e7d6 201c
.org 0x8e7d8
	adds r0, #140	@ 0008e7d8 8c30
.org 0x8e7da
	str r2, [r0, #0]	@ 0008e7da 0260
.org 0x8e7dc
	adds r0, #4	@ 0008e7dc 0430
.org 0x8e7de
	str r2, [r0, #0]	@ 0008e7de 0260
.org 0x8e7e0
	adds r0, #4	@ 0008e7e0 0430
.org 0x8e7e2
	strb r2, [r0, #0]	@ 0008e7e2 0270
.org 0x8e7e4
	ldrb r1, [r4, #10]	@ 0008e7e4 a17a
.org 0x8e7e6
	movs r0, #251	@ 0008e7e6 fb20
.org 0x8e7e8
	ands r0, r1	@ 0008e7e8 0840
.org 0x8e7ea
	strb r0, [r4, #10]	@ 0008e7ea a072
.org 0x8e7ec
	str r2, [r4, #96]	@ 0008e7ec 2266
.org 0x8e7ee
	str r2, [r4, #92]	@ 0008e7ee e265
.org 0x8e7f0
	ldr r0, [r4, #88]	@ 0008e7f0 a06d
.org 0x8e7f2
	str r0, [r4, #100]	@ 0008e7f2 6066
.org 0x8e7f4
	adds r0, r4, #0	@ 0008e7f4 201c
.org 0x8e7f6
	adds r0, #184	@ 0008e7f6 b830
.org 0x8e7f8
	ldrh r0, [r0, #0]	@ 0008e7f8 0088
.org 0x8e7fa
	subs r0, #176	@ 0008e7fa b038
.org 0x8e7fc
	movs r1, #5	@ 0008e7fc 0521
.org 0x8e7fe
	bl 0x128fb8	@ 0008e7fe 9af0dbfb
.org 0x8e802
	ldr r3, [pc, #124]	@ 0008e802 1f4b
.org 0x8e804
	ldr r2, [r3, #0]	@ 0008e804 1a68
.org 0x8e806
	ldr r1, [pc, #124]	@ 0008e806 1f49
.org 0x8e808
	muls r1, r2	@ 0008e808 5143
.org 0x8e80a
	ldr r2, [pc, #124]	@ 0008e80a 1f4a
.org 0x8e80c
	adds r1, r1, r2	@ 0008e80c 8918
.org 0x8e80e
	lsls r1, r1, #1	@ 0008e80e 4900
.org 0x8e810
	lsrs r2, r1, #1	@ 0008e810 4a08
.org 0x8e812
	str r2, [r3, #0]	@ 0008e812 1a60
.org 0x8e814
	lsrs r1, r1, #17	@ 0008e814 490c
.org 0x8e816
	movs r2, #7	@ 0008e816 0722
.org 0x8e818
	ands r1, r2	@ 0008e818 1140
.org 0x8e81a
	adds r1, #32	@ 0008e81a 2031
.org 0x8e81c
	adds r0, r0, r1	@ 0008e81c 4018
.org 0x8e81e
	str r0, [r4, #104]	@ 0008e81e a066
.org 0x8e820
	ldrb r0, [r4, #13]	@ 0008e820 607b
.org 0x8e822
	adds r0, #1	@ 0008e822 0130
.org 0x8e824
	strb r0, [r4, #13]	@ 0008e824 6073
.org 0x8e826
	ldr r0, [r4, #92]	@ 0008e826 e06d
.org 0x8e828
	ldr r1, [r4, #96]	@ 0008e828 216e
.org 0x8e82a
	adds r0, r0, r1	@ 0008e82a 4018
.org 0x8e82c
	str r0, [r4, #92]	@ 0008e82c e065
.org 0x8e82e
	adds r1, #64	@ 0008e82e 4031
.org 0x8e830
	str r1, [r4, #96]	@ 0008e830 2166
.org 0x8e832
	movs r0, #224	@ 0008e832 e020
.org 0x8e834
	lsls r0, r0, #3	@ 0008e834 c000
.org 0x8e836
	cmp r1, r0	@ 0008e836 8142
.org 0x8e838
	ble.n 0x8e83c	@ 0008e838 00dd
.org 0x8e83a
	str r0, [r4, #96]	@ 0008e83a 2066
.org 0x8e83c
	ldr r1, [r4, #92]	@ 0008e83c e16d
.org 0x8e83e
	ldr r0, [r4, #104]	@ 0008e83e a06e
.org 0x8e840
	muls r0, r1	@ 0008e840 4843
.org 0x8e842
	cmp r0, #0	@ 0008e842 0028
.org 0x8e844
	bge.n 0x8e848	@ 0008e844 00da
.org 0x8e846
	adds r0, #255	@ 0008e846 ff30
.org 0x8e848
	asrs r0, r0, #8	@ 0008e848 0012
.org 0x8e84a
	ldr r1, [r4, #100]	@ 0008e84a 616e
.org 0x8e84c
	adds r1, r1, r0	@ 0008e84c 0918
.org 0x8e84e
	str r1, [r4, #88]	@ 0008e84e a165
.org 0x8e850
	adds r0, r4, #0	@ 0008e850 201c
.org 0x8e852
	adds r0, #180	@ 0008e852 b430
.org 0x8e854
	ldr r0, [r0, #0]	@ 0008e854 0068
.org 0x8e856
	ldr r2, [pc, #52]	@ 0008e856 0d4a
.org 0x8e858
	adds r0, r0, r2	@ 0008e858 8018
.org 0x8e85a
	cmp r1, r0	@ 0008e85a 8142
.org 0x8e85c
	bgt.n 0x8e864	@ 0008e85c 02dc
.org 0x8e85e
	ldrb r0, [r5, #12]	@ 0008e85e 287b
.org 0x8e860
	cmp r0, #4	@ 0008e860 0428
.org 0x8e862
	bne.n 0x8e894	@ 0008e862 17d1
.org 0x8e864
	ldrb r1, [r4, #10]	@ 0008e864 a17a
.org 0x8e866
	movs r0, #254	@ 0008e866 fe20
.org 0x8e868
	ands r0, r1	@ 0008e868 0840
.org 0x8e86a
	strb r0, [r4, #10]	@ 0008e86a a072
.org 0x8e86c
	ldr r1, [pc, #32]	@ 0008e86c 0849
.org 0x8e86e
	ldrb r0, [r4, #9]	@ 0008e86e 607a
.org 0x8e870
	lsls r0, r0, #2	@ 0008e870 8000
.org 0x8e872
	adds r0, r0, r1	@ 0008e872 4018
.org 0x8e874
	movs r1, #4	@ 0008e874 0421
.org 0x8e876
	str r1, [r4, #12]	@ 0008e876 e160
.org 0x8e878
	ldr r0, [r0, #0]	@ 0008e878 0068
.org 0x8e87a
	ldr r0, [r0, #16]	@ 0008e87a 0069
.org 0x8e87c
	str r0, [r4, #20]	@ 0008e87c 6061
.org 0x8e87e
	b.n 0x8e89a	@ 0008e87e 0ce0
.org 0x8e880
	.byte 0x38,0xdc,0x02,0x02	@ 0008e880 data
.org 0x8e884
	.byte 0xfd,0x43,0x03,0x00	@ 0008e884 data
.org 0x8e888
	.byte 0xc3,0x9e,0x26,0x00	@ 0008e888 data
