@ FUN_080cf810  entry 0x080cf810  size 112
.thumb
.org 0xcf810
FUN_080cf810:
	push {r4, r5, lr}	@ 000cf810 30b5
.org 0xcf812
	adds r4, r0, #0	@ 000cf812 041c
.org 0xcf814
	ldr r5, [r4, #40]	@ 000cf814 a56a
.org 0xcf816
	ldrb r1, [r4, #15]	@ 000cf816 e17b
.org 0xcf818
	cmp r1, #0	@ 000cf818 0029
.org 0xcf81a
	bne.n 0xcf83e	@ 000cf81a 10d1
.org 0xcf81c
	adds r0, #140	@ 000cf81c 8c30
.org 0xcf81e
	str r1, [r0, #0]	@ 000cf81e 0160
.org 0xcf820
	adds r0, #4	@ 000cf820 0430
.org 0xcf822
	str r1, [r0, #0]	@ 000cf822 0160
.org 0xcf824
	adds r0, #4	@ 000cf824 0430
.org 0xcf826
	strb r1, [r0, #0]	@ 000cf826 0170
.org 0xcf828
	ldrb r1, [r4, #10]	@ 000cf828 a17a
.org 0xcf82a
	movs r0, #251	@ 000cf82a fb20
.org 0xcf82c
	ands r0, r1	@ 000cf82c 0840
.org 0xcf82e
	strb r0, [r4, #10]	@ 000cf82e a072
.org 0xcf830
	ldr r1, [pc, #76]	@ 000cf830 1349
.org 0xcf832
	adds r0, r4, #0	@ 000cf832 201c
.org 0xcf834
	bl 0x1cf00	@ 000cf834 4df764fb
.org 0xcf838
	ldrb r0, [r4, #15]	@ 000cf838 e07b
.org 0xcf83a
	adds r0, #1	@ 000cf83a 0130
.org 0xcf83c
	strb r0, [r4, #15]	@ 000cf83c e073
.org 0xcf83e
	adds r0, r4, #0	@ 000cf83e 201c
.org 0xcf840
	bl 0x1cff0	@ 000cf840 4df7d6fb
.org 0xcf844
	adds r0, r4, #0	@ 000cf844 201c
.org 0xcf846
	adds r0, #115	@ 000cf846 7330
.org 0xcf848
	ldrb r0, [r0, #0]	@ 000cf848 0078
.org 0xcf84a
	cmp r0, #3	@ 000cf84a 0328
.org 0xcf84c
	bne.n 0xcf87a	@ 000cf84c 15d1
.org 0xcf84e
	adds r1, r5, #0	@ 000cf84e 291c
.org 0xcf850
	adds r1, #204	@ 000cf850 cc31
.org 0xcf852
	ldrh r2, [r1, #0]	@ 000cf852 0a88
.org 0xcf854
	movs r3, #0	@ 000cf854 0023
.org 0xcf856
	ldrsh r0, [r1, r3]	@ 000cf856 c85e
.org 0xcf858
	cmp r0, #0	@ 000cf858 0028
.org 0xcf85a
	beq.n 0xcf860	@ 000cf85a 01d0
.org 0xcf85c
	subs r0, r2, #1	@ 000cf85c 501e
.org 0xcf85e
	strh r0, [r1, #0]	@ 000cf85e 0880
.org 0xcf860
	ldrb r1, [r4, #10]	@ 000cf860 a17a
.org 0xcf862
	movs r0, #254	@ 000cf862 fe20
.org 0xcf864
	ands r0, r1	@ 000cf864 0840
.org 0xcf866
	strb r0, [r4, #10]	@ 000cf866 a072
.org 0xcf868
	ldr r1, [pc, #24]	@ 000cf868 0649
.org 0xcf86a
	ldrb r0, [r4, #9]	@ 000cf86a 607a
.org 0xcf86c
	lsls r0, r0, #2	@ 000cf86c 8000
.org 0xcf86e
	adds r0, r0, r1	@ 000cf86e 4018
.org 0xcf870
	movs r1, #4	@ 000cf870 0421
.org 0xcf872
	str r1, [r4, #12]	@ 000cf872 e160
.org 0xcf874
	ldr r0, [r0, #0]	@ 000cf874 0068
.org 0xcf876
	ldr r0, [r0, #16]	@ 000cf876 0069
.org 0xcf878
	str r0, [r4, #20]	@ 000cf878 6061
.org 0xcf87a
	pop {r4, r5}	@ 000cf87a 30bc
.org 0xcf87c
	pop {r0}	@ 000cf87c 01bc
.org 0xcf87e
	bx r0	@ 000cf87e 0047
