@ FUN_08090928  entry 0x08090928  size 94
.thumb
.org 0x90928
FUN_08090928:
	push {r4, r5, r6, r7, lr}	@ 00090928 f0b5
.org 0x9092a
	adds r6, r0, #0	@ 0009092a 061c
.org 0x9092c
	adds r7, r1, #0	@ 0009092c 0f1c
.org 0x9092e
	lsls r2, r2, #24	@ 0009092e 1206
.org 0x90930
	lsrs r5, r2, #24	@ 00090930 150e
.org 0x90932
	lsls r3, r3, #24	@ 00090932 1b06
.org 0x90934
	lsrs r4, r3, #24	@ 00090934 1c0e
.org 0x90936
	ldr r0, [pc, #80]	@ 00090936 1448
.org 0x90938
	ldr r0, [r0, #0]	@ 00090938 0068
.org 0x9093a
	bl 0x5500	@ 0009093a 74f7e1fd
.org 0x9093e
	adds r3, r0, #0	@ 0009093e 031c
.org 0x90940
	cmp r3, #0	@ 00090940 002b
.org 0x90942
	beq.n 0x9097e	@ 00090942 1cd0
.org 0x90944
	adds r1, r3, #0	@ 00090944 191c
.org 0x90946
	adds r1, #37	@ 00090946 2531
.org 0x90948
	movs r2, #0	@ 00090948 0022
.org 0x9094a
	movs r0, #24	@ 0009094a 1820
.org 0x9094c
	strb r0, [r1, #0]	@ 0009094c 0870
.org 0x9094e
	ldr r1, [pc, #60]	@ 0009094e 0f49
.org 0x90950
	movs r0, #20	@ 00090950 1420
.org 0x90952
	strb r0, [r3, #9]	@ 00090952 5872
.org 0x90954
	ldr r0, [r1, #80]	@ 00090954 086d
.org 0x90956
	ldr r0, [r0, #0]	@ 00090956 0068
.org 0x90958
	str r0, [r3, #20]	@ 00090958 5861
.org 0x9095a
	movs r0, #0	@ 0009095a 0020
.org 0x9095c
	strh r2, [r3, #32]	@ 0009095c 1a84
.org 0x9095e
	adds r1, r3, #0	@ 0009095e 191c
.org 0x90960
	adds r1, #34	@ 00090960 2231
.org 0x90962
	strb r0, [r1, #0]	@ 00090962 0870
.org 0x90964
	ldrb r1, [r3, #11]	@ 00090964 d97a
.org 0x90966
	movs r0, #16	@ 00090966 1020
.org 0x90968
	orrs r0, r1	@ 00090968 0843
.org 0x9096a
	strb r0, [r3, #11]	@ 0009096a d872
.org 0x9096c
	ldrb r0, [r3, #28]	@ 0009096c 187f
.org 0x9096e
	strb r0, [r3, #29]	@ 0009096e 5877
.org 0x90970
	str r6, [r3, #40]	@ 00090970 9e62
.org 0x90972
	ldr r0, [r7, #0]	@ 00090972 3868
.org 0x90974
	ldr r1, [r7, #4]	@ 00090974 7968
.org 0x90976
	str r0, [r3, #84]	@ 00090976 5865
.org 0x90978
	str r1, [r3, #88]	@ 00090978 9965
.org 0x9097a
	strb r5, [r3, #16]	@ 0009097a 1d74
.org 0x9097c
	strb r4, [r3, #17]	@ 0009097c 5c74
.org 0x9097e
	adds r0, r3, #0	@ 0009097e 181c
.org 0x90980
	pop {r4, r5, r6, r7}	@ 00090980 f0bc
.org 0x90982
	pop {r1}	@ 00090982 02bc
.org 0x90984
	bx r1	@ 00090984 0847
