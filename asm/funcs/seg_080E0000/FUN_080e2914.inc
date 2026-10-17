@ FUN_080e2914  entry 0x080e2914  size 90
.thumb
.org 0xe2914
FUN_080e2914:
	push {r4, r5, r6, r7, lr}	@ 000e2914 f0b5
.org 0xe2916
	adds r5, r0, #0	@ 000e2916 051c
.org 0xe2918
	lsls r4, r1, #16	@ 000e2918 0c04
.org 0xe291a
	lsrs r6, r4, #16	@ 000e291a 260c
.org 0xe291c
	lsls r2, r2, #24	@ 000e291c 1206
.org 0xe291e
	lsrs r7, r2, #24	@ 000e291e 170e
.org 0xe2920
	ldr r0, [pc, #76]	@ 000e2920 1348
.org 0xe2922
	ldr r0, [r0, #0]	@ 000e2922 0068
.org 0xe2924
	bl 0x5500	@ 000e2924 22f7ecfd
.org 0xe2928
	adds r3, r0, #0	@ 000e2928 031c
.org 0xe292a
	cmp r3, #0	@ 000e292a 002b
.org 0xe292c
	beq.n 0xe2968	@ 000e292c 1cd0
.org 0xe292e
	adds r1, r3, #0	@ 000e292e 191c
.org 0xe2930
	adds r1, #37	@ 000e2930 2531
.org 0xe2932
	movs r2, #0	@ 000e2932 0022
.org 0xe2934
	movs r0, #1	@ 000e2934 0120
.org 0xe2936
	strb r0, [r1, #0]	@ 000e2936 0870
.org 0xe2938
	ldr r0, [pc, #56]	@ 000e2938 0e48
.org 0xe293a
	movs r1, #67	@ 000e293a 4321
.org 0xe293c
	strb r1, [r3, #9]	@ 000e293c 5972
.org 0xe293e
	adds r1, #201	@ 000e293e c931
.org 0xe2940
	adds r0, r0, r1	@ 000e2940 4018
.org 0xe2942
	ldr r0, [r0, #0]	@ 000e2942 0068
.org 0xe2944
	ldr r0, [r0, #0]	@ 000e2944 0068
.org 0xe2946
	str r0, [r3, #20]	@ 000e2946 5861
.org 0xe2948
	movs r0, #0	@ 000e2948 0020
.org 0xe294a
	strh r2, [r3, #32]	@ 000e294a 1a84
.org 0xe294c
	adds r1, r3, #0	@ 000e294c 191c
.org 0xe294e
	adds r1, #34	@ 000e294e 2231
.org 0xe2950
	strb r0, [r1, #0]	@ 000e2950 0870
.org 0xe2952
	ldr r0, [r5, #0]	@ 000e2952 2868
.org 0xe2954
	ldr r1, [r5, #4]	@ 000e2954 6968
.org 0xe2956
	str r0, [r3, #84]	@ 000e2956 5865
.org 0xe2958
	str r1, [r3, #88]	@ 000e2958 9965
.org 0xe295a
	lsrs r0, r4, #24	@ 000e295a 200e
.org 0xe295c
	strb r0, [r3, #16]	@ 000e295c 1874
.org 0xe295e
	strb r6, [r3, #17]	@ 000e295e 5e74
.org 0xe2960
	adds r0, r3, #0	@ 000e2960 181c
.org 0xe2962
	adds r0, #117	@ 000e2962 7530
.org 0xe2964
	strb r7, [r0, #0]	@ 000e2964 0770
.org 0xe2966
	str r5, [r3, #40]	@ 000e2966 9d62
.org 0xe2968
	pop {r4, r5, r6, r7}	@ 000e2968 f0bc
.org 0xe296a
	pop {r0}	@ 000e296a 01bc
.org 0xe296c
	bx r0	@ 000e296c 0047
