@ FUN_0802885c  entry 0x0802885c  size 60
.thumb
.org 0x2885c
FUN_0802885c:
	push {r4, lr}	@ 0002885c 10b5
.org 0x2885e
	sub sp, #8	@ 0002885e 82b0
.org 0x28860
	ldr r2, [r0, #12]	@ 00028860 c268
.org 0x28862
	ldrh r3, [r2, #4]	@ 00028862 9388
.org 0x28864
	movs r4, #2	@ 00028864 0224
.org 0x28866
	ldrsh r1, [r2, r4]	@ 00028866 115f
.org 0x28868
	lsls r1, r1, #8	@ 00028868 0902
.org 0x2886a
	str r1, [sp, #0]	@ 0002886a 0091
.org 0x2886c
	movs r4, #6	@ 0002886c 0624
.org 0x2886e
	ldrsh r1, [r2, r4]	@ 0002886e 115f
.org 0x28870
	lsls r1, r1, #8	@ 00028870 0902
.org 0x28872
	str r1, [sp, #4]	@ 00028872 0191
.org 0x28874
	ldrb r1, [r2, #1]	@ 00028874 5178
.org 0x28876
	lsls r1, r1, #4	@ 00028876 0901
.org 0x28878
	adds r0, #16	@ 00028878 1030
.org 0x2887a
	adds r0, r0, r1	@ 0002887a 4018
.org 0x2887c
	ldr r1, [r0, #0]	@ 0002887c 0168
.org 0x2887e
	cmp r1, #0	@ 0002887e 0029
.org 0x28880
	beq.n 0x2888e	@ 00028880 05d0
.org 0x28882
	lsls r0, r3, #24	@ 00028882 1806
.org 0x28884
	lsrs r0, r0, #24	@ 00028884 000e
.org 0x28886
	adds r1, #84	@ 00028886 5431
.org 0x28888
	mov r2, sp	@ 00028888 6a46
.org 0x2888a
	bl 0xd4b48	@ 0002888a acf05df9
.org 0x2888e
	movs r0, #0	@ 0002888e 0020
.org 0x28890
	add sp, #8	@ 00028890 02b0
.org 0x28892
	pop {r4}	@ 00028892 10bc
.org 0x28894
	pop {r1}	@ 00028894 02bc
.org 0x28896
	bx r1	@ 00028896 0847
