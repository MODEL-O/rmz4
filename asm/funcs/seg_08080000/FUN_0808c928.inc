@ FUN_0808c928  entry 0x0808c928  size 84
.thumb
.org 0x8c928
FUN_0808c928:
	push {r4, lr}	@ 0008c928 10b5
.org 0x8c92a
	adds r4, r0, #0	@ 0008c92a 041c
.org 0x8c92c
	ldrb r1, [r4, #10]	@ 0008c92c a17a
.org 0x8c92e
	movs r0, #254	@ 0008c92e fe20
.org 0x8c930
	ands r0, r1	@ 0008c930 0840
.org 0x8c932
	movs r1, #0	@ 0008c932 0021
.org 0x8c934
	strb r0, [r4, #10]	@ 0008c934 a072
.org 0x8c936
	adds r0, r4, #0	@ 0008c936 201c
.org 0x8c938
	adds r0, #140	@ 0008c938 8c30
.org 0x8c93a
	str r1, [r0, #0]	@ 0008c93a 0160
.org 0x8c93c
	adds r0, #4	@ 0008c93c 0430
.org 0x8c93e
	str r1, [r0, #0]	@ 0008c93e 0160
.org 0x8c940
	adds r0, #4	@ 0008c940 0430
.org 0x8c942
	strb r1, [r0, #0]	@ 0008c942 0170
.org 0x8c944
	ldrb r1, [r4, #10]	@ 0008c944 a17a
.org 0x8c946
	movs r0, #251	@ 0008c946 fb20
.org 0x8c948
	ands r0, r1	@ 0008c948 0840
.org 0x8c94a
	strb r0, [r4, #10]	@ 0008c94a a072
.org 0x8c94c
	ldr r2, [pc, #44]	@ 0008c94c 0b4a
.org 0x8c94e
	ldrh r1, [r2, #12]	@ 0008c94e 9189
.org 0x8c950
	ldr r0, [pc, #44]	@ 0008c950 0b48
.org 0x8c952
	cmp r1, r0	@ 0008c952 8142
.org 0x8c954
	bhi.n 0x8c95a	@ 0008c954 01d8
.org 0x8c956
	adds r0, r1, #1	@ 0008c956 481c
.org 0x8c958
	strh r0, [r2, #12]	@ 0008c958 9081
.org 0x8c95a
	adds r1, r4, #0	@ 0008c95a 211c
.org 0x8c95c
	adds r1, #84	@ 0008c95c 5431
.org 0x8c95e
	adds r0, r4, #0	@ 0008c95e 201c
.org 0x8c960
	bl 0x2abe0	@ 0008c960 9ef73ef9
.org 0x8c964
	ldr r1, [pc, #28]	@ 0008c964 0749
.org 0x8c966
	ldrb r0, [r4, #9]	@ 0008c966 607a
.org 0x8c968
	lsls r0, r0, #2	@ 0008c968 8000
.org 0x8c96a
	adds r0, r0, r1	@ 0008c96a 4018
.org 0x8c96c
	movs r1, #4	@ 0008c96c 0421
.org 0x8c96e
	str r1, [r4, #12]	@ 0008c96e e160
.org 0x8c970
	ldr r0, [r0, #0]	@ 0008c970 0068
.org 0x8c972
	ldr r0, [r0, #16]	@ 0008c972 0069
.org 0x8c974
	str r0, [r4, #20]	@ 0008c974 6061
.org 0x8c976
	pop {r4}	@ 0008c976 10bc
.org 0x8c978
	pop {r0}	@ 0008c978 01bc
.org 0x8c97a
	bx r0	@ 0008c97a 0047
