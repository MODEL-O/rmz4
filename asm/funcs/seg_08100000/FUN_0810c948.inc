@ FUN_0810c948  entry 0x0810c948  size 98
.thumb
.org 0x10c948
FUN_0810c948:
	push {r4, lr}	@ 0010c948 10b5
.org 0x10c94a
	adds r4, r0, #0	@ 0010c94a 041c
.org 0x10c94c
	ldr r2, [r4, #40]	@ 0010c94c a26a
.org 0x10c94e
	ldrb r0, [r2, #1]	@ 0010c94e 5078
.org 0x10c950
	cmp r0, #1	@ 0010c950 0128
.org 0x10c952
	bhi.n 0x10c968	@ 0010c952 09d8
.org 0x10c954
	adds r0, r4, #0	@ 0010c954 201c
.org 0x10c956
	bl 0x1cff0	@ 0010c956 10f74bfb
.org 0x10c95a
	movs r0, #128	@ 0010c95a 8020
.org 0x10c95c
	lsls r0, r0, #5	@ 0010c95c 4001
.org 0x10c95e
	str r0, [r4, #84]	@ 0010c95e 6065
.org 0x10c960
	movs r0, #160	@ 0010c960 a020
.org 0x10c962
	lsls r0, r0, #4	@ 0010c962 0001
.org 0x10c964
	str r0, [r4, #88]	@ 0010c964 a065
.org 0x10c966
	b.n 0x10c9a8	@ 0010c966 1fe0
.org 0x10c968
	ldrb r0, [r4, #10]	@ 0010c968 a07a
.org 0x10c96a
	movs r1, #1	@ 0010c96a 0121
.org 0x10c96c
	orrs r1, r0	@ 0010c96c 0143
.org 0x10c96e
	strb r1, [r4, #10]	@ 0010c96e a172
.org 0x10c970
	ldrb r0, [r2, #3]	@ 0010c970 d078
.org 0x10c972
	cmp r0, #1	@ 0010c972 0128
.org 0x10c974
	bhi.n 0x10c98c	@ 0010c974 0ad8
.org 0x10c976
	ldr r1, [pc, #16]	@ 0010c976 0449
.org 0x10c978
	ldrb r0, [r2, #2]	@ 0010c978 9078
.org 0x10c97a
	lsls r0, r0, #2	@ 0010c97a 8000
.org 0x10c97c
	adds r0, r0, r1	@ 0010c97c 4018
.org 0x10c97e
	ldr r0, [r0, #0]	@ 0010c97e 0068
.org 0x10c980
	str r0, [r4, #84]	@ 0010c980 6065
.org 0x10c982
	movs r0, #160	@ 0010c982 a020
.org 0x10c984
	lsls r0, r0, #4	@ 0010c984 0001
.org 0x10c986
	b.n 0x10c9a0	@ 0010c986 0be0
.org 0x10c988
	.byte 0xbc,0xcf,0x86,0x08	@ 0010c988 data
.org 0x10c98c
	movs r0, #128	@ 0010c98c 8020
.org 0x10c98e
	lsls r0, r0, #4	@ 0010c98e 0001
.org 0x10c990
	str r0, [r4, #84]	@ 0010c990 6065
.org 0x10c992
	ldr r1, [pc, #28]	@ 0010c992 0749
.org 0x10c994
	adds r0, r2, r1	@ 0010c994 5018
.org 0x10c996
	ldrb r0, [r0, #2]	@ 0010c996 8078
.org 0x10c998
	lsls r0, r0, #12	@ 0010c998 0003
.org 0x10c99a
	movs r1, #192	@ 0010c99a c021
.org 0x10c99c
	lsls r1, r1, #5	@ 0010c99c 4901
.org 0x10c99e
	adds r0, r0, r1	@ 0010c99e 4018
.org 0x10c9a0
	str r0, [r4, #88]	@ 0010c9a0 a065
.org 0x10c9a2
	adds r0, r4, #0	@ 0010c9a2 201c
.org 0x10c9a4
	bl 0x1cff0	@ 0010c9a4 10f724fb
.org 0x10c9a8
	pop {r4}	@ 0010c9a8 10bc
