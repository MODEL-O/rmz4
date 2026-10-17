@ FUN_080a4810  entry 0x080a4810  size 90
.thumb
.org 0xa4810
FUN_080a4810:
	push {r4, r5, lr}	@ 000a4810 30b5
.org 0xa4812
	adds r4, r0, #0	@ 000a4812 041c
.org 0xa4814
	lsls r1, r1, #24	@ 000a4814 0906
.org 0xa4816
	lsrs r5, r1, #24	@ 000a4816 0d0e
.org 0xa4818
	ldr r0, [pc, #80]	@ 000a4818 1448
.org 0xa481a
	ldr r0, [r0, #0]	@ 000a481a 0068
.org 0xa481c
	bl 0x5500	@ 000a481c 60f770fe
.org 0xa4820
	adds r3, r0, #0	@ 000a4820 031c
.org 0xa4822
	cmp r3, #0	@ 000a4822 002b
.org 0xa4824
	beq.n 0xa4862	@ 000a4824 1dd0
.org 0xa4826
	adds r1, r3, #0	@ 000a4826 191c
.org 0xa4828
	adds r1, #37	@ 000a4828 2531
.org 0xa482a
	movs r2, #0	@ 000a482a 0022
.org 0xa482c
	movs r0, #24	@ 000a482c 1820
.org 0xa482e
	strb r0, [r1, #0]	@ 000a482e 0870
.org 0xa4830
	ldr r0, [pc, #60]	@ 000a4830 0f48
.org 0xa4832
	movs r1, #60	@ 000a4832 3c21
.org 0xa4834
	strb r1, [r3, #9]	@ 000a4834 5972
.org 0xa4836
	adds r0, #240	@ 000a4836 f030
.org 0xa4838
	ldr r0, [r0, #0]	@ 000a4838 0068
.org 0xa483a
	ldr r0, [r0, #0]	@ 000a483a 0068
.org 0xa483c
	str r0, [r3, #20]	@ 000a483c 5861
.org 0xa483e
	movs r0, #0	@ 000a483e 0020
.org 0xa4840
	strh r2, [r3, #32]	@ 000a4840 1a84
.org 0xa4842
	adds r1, r3, #0	@ 000a4842 191c
.org 0xa4844
	adds r1, #34	@ 000a4844 2231
.org 0xa4846
	strb r0, [r1, #0]	@ 000a4846 0870
.org 0xa4848
	ldrb r1, [r3, #11]	@ 000a4848 d97a
.org 0xa484a
	movs r0, #16	@ 000a484a 1020
.org 0xa484c
	orrs r0, r1	@ 000a484c 0843
.org 0xa484e
	strb r0, [r3, #11]	@ 000a484e d872
.org 0xa4850
	ldrb r0, [r3, #28]	@ 000a4850 187f
.org 0xa4852
	strb r0, [r3, #29]	@ 000a4852 5877
.org 0xa4854
	ldr r0, [r4, #0]	@ 000a4854 2068
.org 0xa4856
	ldr r1, [r4, #4]	@ 000a4856 6168
.org 0xa4858
	str r0, [r3, #84]	@ 000a4858 5865
.org 0xa485a
	str r1, [r3, #88]	@ 000a485a 9965
.org 0xa485c
	movs r0, #1	@ 000a485c 0120
.org 0xa485e
	strb r0, [r3, #16]	@ 000a485e 1874
.org 0xa4860
	strb r5, [r3, #17]	@ 000a4860 5d74
.org 0xa4862
	adds r0, r3, #0	@ 000a4862 181c
.org 0xa4864
	pop {r4, r5}	@ 000a4864 30bc
.org 0xa4866
	pop {r1}	@ 000a4866 02bc
.org 0xa4868
	bx r1	@ 000a4868 0847
