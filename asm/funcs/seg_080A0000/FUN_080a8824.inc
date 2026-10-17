@ FUN_080a8824  entry 0x080a8824  size 88
.thumb
.org 0xa8824
FUN_080a8824:
	push {r4, r5, r6, r7, lr}	@ 000a8824 f0b5
.org 0xa8826
	adds r6, r0, #0	@ 000a8826 061c
.org 0xa8828
	adds r7, r1, #0	@ 000a8828 0f1c
.org 0xa882a
	lsls r2, r2, #24	@ 000a882a 1206
.org 0xa882c
	lsrs r5, r2, #24	@ 000a882c 150e
.org 0xa882e
	ldr r0, [pc, #76]	@ 000a882e 1348
.org 0xa8830
	ldr r0, [r0, #0]	@ 000a8830 0068
.org 0xa8832
	bl 0x5500	@ 000a8832 5cf765fe
.org 0xa8836
	adds r4, r0, #0	@ 000a8836 041c
.org 0xa8838
	cmp r4, #0	@ 000a8838 002c
.org 0xa883a
	beq.n 0xa8874	@ 000a883a 1bd0
.org 0xa883c
	adds r1, r4, #0	@ 000a883c 211c
.org 0xa883e
	adds r1, #37	@ 000a883e 2531
.org 0xa8840
	movs r3, #0	@ 000a8840 0023
.org 0xa8842
	movs r0, #24	@ 000a8842 1820
.org 0xa8844
	strb r0, [r1, #0]	@ 000a8844 0870
.org 0xa8846
	ldr r0, [pc, #56]	@ 000a8846 0e48
.org 0xa8848
	movs r1, #67	@ 000a8848 4321
.org 0xa884a
	strb r1, [r4, #9]	@ 000a884a 6172
.org 0xa884c
	adds r1, #201	@ 000a884c c931
.org 0xa884e
	adds r0, r0, r1	@ 000a884e 4018
.org 0xa8850
	ldr r0, [r0, #0]	@ 000a8850 0068
.org 0xa8852
	ldr r0, [r0, #0]	@ 000a8852 0068
.org 0xa8854
	str r0, [r4, #20]	@ 000a8854 6061
.org 0xa8856
	movs r2, #0	@ 000a8856 0022
.org 0xa8858
	strh r3, [r4, #32]	@ 000a8858 2384
.org 0xa885a
	adds r0, r4, #0	@ 000a885a 201c
.org 0xa885c
	adds r0, #34	@ 000a885c 2230
.org 0xa885e
	strb r2, [r0, #0]	@ 000a885e 0270
.org 0xa8860
	ldrb r1, [r4, #11]	@ 000a8860 e17a
.org 0xa8862
	movs r0, #16	@ 000a8862 1020
.org 0xa8864
	orrs r0, r1	@ 000a8864 0843
.org 0xa8866
	strb r0, [r4, #11]	@ 000a8866 e072
.org 0xa8868
	ldrb r0, [r4, #28]	@ 000a8868 207f
.org 0xa886a
	strb r0, [r4, #29]	@ 000a886a 6077
.org 0xa886c
	str r6, [r4, #40]	@ 000a886c a662
.org 0xa886e
	str r7, [r4, #44]	@ 000a886e e762
.org 0xa8870
	strb r2, [r4, #16]	@ 000a8870 2274
.org 0xa8872
	strb r5, [r4, #17]	@ 000a8872 6574
.org 0xa8874
	adds r0, r4, #0	@ 000a8874 201c
.org 0xa8876
	pop {r4, r5, r6, r7}	@ 000a8876 f0bc
.org 0xa8878
	pop {r1}	@ 000a8878 02bc
.org 0xa887a
	bx r1	@ 000a887a 0847
