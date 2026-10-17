@ FUN_0808e8f4  entry 0x0808e8f4  size 104
.thumb
.org 0x8e8f4
FUN_0808e8f4:
	push {r4, r5, lr}	@ 0008e8f4 30b5
.org 0x8e8f6
	adds r5, r0, #0	@ 0008e8f6 051c
.org 0x8e8f8
	ldrb r4, [r5, #17]	@ 0008e8f8 6c7c
.org 0x8e8fa
	bl 0x1cc9c	@ 0008e8fa 8ef7cff9
.org 0x8e8fe
	cmp r4, #0	@ 0008e8fe 002c
.org 0x8e900
	beq.n 0x8e90a	@ 0008e900 03d0
.org 0x8e902
	ldrb r1, [r5, #10]	@ 0008e902 a97a
.org 0x8e904
	movs r0, #16	@ 0008e904 1020
.org 0x8e906
	orrs r0, r1	@ 0008e906 0843
.org 0x8e908
	b.n 0x8e910	@ 0008e908 02e0
.org 0x8e90a
	ldrb r1, [r5, #10]	@ 0008e90a a97a
.org 0x8e90c
	movs r0, #239	@ 0008e90c ef20
.org 0x8e90e
	ands r0, r1	@ 0008e90e 0840
.org 0x8e910
	strb r0, [r5, #10]	@ 0008e910 a872
.org 0x8e912
	movs r1, #1	@ 0008e912 0121
.org 0x8e914
	ands r1, r4	@ 0008e914 2140
.org 0x8e916
	adds r0, r5, #0	@ 0008e916 281c
.org 0x8e918
	adds r0, #76	@ 0008e918 4c30
.org 0x8e91a
	movs r3, #0	@ 0008e91a 0023
.org 0x8e91c
	strb r1, [r0, #0]	@ 0008e91c 0170
.org 0x8e91e
	adds r4, r5, #0	@ 0008e91e 2c1c
.org 0x8e920
	adds r4, #74	@ 0008e920 4a34
.org 0x8e922
	lsls r1, r1, #4	@ 0008e922 0901
.org 0x8e924
	ldrb r2, [r4, #0]	@ 0008e924 2278
.org 0x8e926
	movs r0, #17	@ 0008e926 1120
.org 0x8e928
	negs r0, r0	@ 0008e928 4042
.org 0x8e92a
	ands r0, r2	@ 0008e92a 1040
.org 0x8e92c
	orrs r0, r1	@ 0008e92c 0843
.org 0x8e92e
	strb r0, [r4, #0]	@ 0008e92e 2070
.org 0x8e930
	adds r2, r5, #0	@ 0008e930 2a1c
.org 0x8e932
	adds r2, #73	@ 0008e932 4932
.org 0x8e934
	ldrb r0, [r2, #0]	@ 0008e934 1078
.org 0x8e936
	movs r1, #12	@ 0008e936 0c21
.org 0x8e938
	orrs r0, r1	@ 0008e938 0843
.org 0x8e93a
	strb r0, [r2, #0]	@ 0008e93a 1070
.org 0x8e93c
	adds r1, r5, #0	@ 0008e93c 291c
.org 0x8e93e
	adds r1, #37	@ 0008e93e 2531
.org 0x8e940
	movs r0, #24	@ 0008e940 1820
.org 0x8e942
	strb r0, [r1, #0]	@ 0008e942 0870
.org 0x8e944
	adds r0, r5, #0	@ 0008e944 281c
.org 0x8e946
	adds r0, #36	@ 0008e946 2430
.org 0x8e948
	strb r3, [r0, #0]	@ 0008e948 0370
.org 0x8e94a
	adds r0, #44	@ 0008e94a 2c30
.org 0x8e94c
	movs r1, #128	@ 0008e94c 8021
.org 0x8e94e
	lsls r1, r1, #1	@ 0008e94e 4900
.org 0x8e950
	strh r1, [r0, #0]	@ 0008e950 0180
.org 0x8e952
	adds r0, #2	@ 0008e952 0230
.org 0x8e954
	strh r1, [r0, #0]	@ 0008e954 0180
.org 0x8e956
	pop {r4, r5}	@ 0008e956 30bc
.org 0x8e958
	pop {r0}	@ 0008e958 01bc
.org 0x8e95a
	bx r0	@ 0008e95a 0047
