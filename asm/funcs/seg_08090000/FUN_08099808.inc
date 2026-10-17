@ FUN_08099808  entry 0x08099808  size 140
.thumb
.org 0x99808
FUN_08099808:
	push {r4, r5, lr}	@ 00099808 30b5
.org 0x9980a
	sub sp, #8	@ 0009980a 82b0
.org 0x9980c
	adds r4, r0, #0	@ 0009980c 041c
.org 0x9980e
	ldrb r0, [r4, #14]	@ 0009980e a07b
.org 0x99810
	cmp r0, #0	@ 00099810 0028
.org 0x99812
	bne.n 0x99882	@ 00099812 36d1
.org 0x99814
	adds r0, r4, #0	@ 00099814 201c
.org 0x99816
	adds r0, #189	@ 00099816 bd30
.org 0x99818
	ldrb r0, [r0, #0]	@ 00099818 0078
.org 0x9981a
	cmp r0, #0	@ 0009981a 0028
.org 0x9981c
	beq.n 0x99828	@ 0009981c 04d0
.org 0x9981e
	movs r0, #2	@ 0009981e 0220
.org 0x99820
	strb r0, [r4, #13]	@ 00099820 6073
.org 0x99822
	adds r5, r4, #0	@ 00099822 251c
.org 0x99824
	adds r5, #140	@ 00099824 8c35
.org 0x99826
	b.n 0x99866	@ 00099826 1ee0
.org 0x99828
	adds r1, r4, #0	@ 00099828 211c
.org 0x9982a
	adds r1, #140	@ 0009982a 8c31
.org 0x9982c
	ldr r2, [r1, #0]	@ 0009982c 0a68
.org 0x9982e
	movs r0, #128	@ 0009982e 8020
.org 0x99830
	lsls r0, r0, #9	@ 00099830 4002
.org 0x99832
	ands r2, r0	@ 00099832 0240
.org 0x99834
	adds r5, r1, #0	@ 00099834 0d1c
.org 0x99836
	cmp r2, #0	@ 00099836 002a
.org 0x99838
	beq.n 0x99864	@ 00099838 14d0
.org 0x9983a
	ldr r0, [r4, #84]	@ 0009983a 606d
.org 0x9983c
	str r0, [sp, #0]	@ 0009983c 0090
.org 0x9983e
	ldr r0, [r4, #88]	@ 0009983e a06d
.org 0x99840
	ldr r1, [pc, #28]	@ 00099840 0749
.org 0x99842
	adds r0, r0, r1	@ 00099842 4018
.org 0x99844
	str r0, [sp, #4]	@ 00099844 0190
.org 0x99846
	movs r2, #128	@ 00099846 8022
.org 0x99848
	lsls r2, r2, #2	@ 00099848 9200
.org 0x9984a
	adds r0, r4, #0	@ 0009984a 201c
.org 0x9984c
	adds r0, #188	@ 0009984c bc30
.org 0x9984e
	ldrb r3, [r0, #0]	@ 0009984e 0378
.org 0x99850
	movs r0, #0	@ 00099850 0020
.org 0x99852
	mov r1, sp	@ 00099852 6946
.org 0x99854
	bl 0xd0dc4	@ 00099854 37f0b6fa
.org 0x99858
	movs r0, #1	@ 00099858 0120
.org 0x9985a
	strb r0, [r4, #13]	@ 0009985a 6073
.org 0x9985c
	b.n 0x99866	@ 0009985c 03e0
.org 0x9985e
	.byte 0x00	@ 0009985e data
.org 0x9985f
	.byte 0x00	@ 0009985f data
.org 0x99860
	.byte 0x00,0xec,0xff,0xff	@ 00099860 data
.org 0x99864
	strb r2, [r4, #13]	@ 00099864 6273
.org 0x99866
	movs r1, #0	@ 00099866 0021
.org 0x99868
	str r1, [r5, #0]	@ 00099868 2960
.org 0x9986a
	adds r0, r4, #0	@ 0009986a 201c
.org 0x9986c
	adds r0, #144	@ 0009986c 9030
.org 0x9986e
	str r1, [r0, #0]	@ 0009986e 0160
.org 0x99870
	adds r0, #4	@ 00099870 0430
.org 0x99872
	strb r1, [r0, #0]	@ 00099872 0170
.org 0x99874
	ldrb r1, [r4, #10]	@ 00099874 a17a
.org 0x99876
	movs r0, #251	@ 00099876 fb20
.org 0x99878
	ands r0, r1	@ 00099878 0840
.org 0x9987a
	strb r0, [r4, #10]	@ 0009987a a072
.org 0x9987c
	ldrb r0, [r4, #14]	@ 0009987c a07b
.org 0x9987e
	adds r0, #1	@ 0009987e 0130
.org 0x99880
	strb r0, [r4, #14]	@ 00099880 a073
.org 0x99882
	ldr r0, [pc, #24]	@ 00099882 0648
.org 0x99884
	ldrb r1, [r4, #13]	@ 00099884 617b
.org 0x99886
	lsls r1, r1, #2	@ 00099886 8900
.org 0x99888
	adds r1, r1, r0	@ 00099888 0918
.org 0x9988a
	ldr r1, [r1, #0]	@ 0009988a 0968
.org 0x9988c
	adds r0, r4, #0	@ 0009988c 201c
.org 0x9988e
	bl 0x128f80	@ 0009988e 8ff077fb
.org 0x99892
	add sp, #8	@ 00099892 02b0
