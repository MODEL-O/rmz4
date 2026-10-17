@ FUN_080b3fb8  entry 0x080b3fb8  size 164
.thumb
.org 0xb3fb8
FUN_080b3fb8:
	push {r4, r5, r6, r7, lr}	@ 000b3fb8 f0b5
.org 0xb3fba
	adds r7, r0, #0	@ 000b3fba 071c
.org 0xb3fbc
	bl 0x1cc9c	@ 000b3fbc 68f76efe
.org 0xb3fc0
	ldrb r1, [r7, #10]	@ 000b3fc0 b97a
.org 0xb3fc2
	movs r0, #1	@ 000b3fc2 0120
.org 0xb3fc4
	orrs r0, r1	@ 000b3fc4 0843
.org 0xb3fc6
	movs r1, #2	@ 000b3fc6 0221
.org 0xb3fc8
	orrs r0, r1	@ 000b3fc8 0843
.org 0xb3fca
	strb r0, [r7, #10]	@ 000b3fca b872
.org 0xb3fcc
	ldrb r0, [r7, #16]	@ 000b3fcc 387c
.org 0xb3fce
	lsls r1, r0, #3	@ 000b3fce c100
.org 0xb3fd0
	adds r1, r1, r0	@ 000b3fd0 0918
.org 0xb3fd2
	ldr r0, [pc, #136]	@ 000b3fd2 2248
.org 0xb3fd4
	adds r1, r1, r0	@ 000b3fd4 0918
.org 0xb3fd6
	lsls r1, r1, #16	@ 000b3fd6 0904
.org 0xb3fd8
	lsrs r1, r1, #16	@ 000b3fd8 090c
.org 0xb3fda
	adds r0, r7, #0	@ 000b3fda 381c
.org 0xb3fdc
	bl 0x1cf00	@ 000b3fdc 68f790ff
.org 0xb3fe0
	adds r0, r7, #0	@ 000b3fe0 381c
.org 0xb3fe2
	bl 0x1cff0	@ 000b3fe2 69f705f8
.org 0xb3fe6
	movs r5, #0	@ 000b3fe6 0025
.org 0xb3fe8
	ldrb r1, [r7, #10]	@ 000b3fe8 b97a
.org 0xb3fea
	movs r0, #239	@ 000b3fea ef20
.org 0xb3fec
	ands r0, r1	@ 000b3fec 0840
.org 0xb3fee
	strb r0, [r7, #10]	@ 000b3fee b872
.org 0xb3ff0
	movs r6, #1	@ 000b3ff0 0126
.org 0xb3ff2
	adds r0, r7, #0	@ 000b3ff2 381c
.org 0xb3ff4
	adds r0, #76	@ 000b3ff4 4c30
.org 0xb3ff6
	strb r5, [r0, #0]	@ 000b3ff6 0570
.org 0xb3ff8
	adds r2, r7, #0	@ 000b3ff8 3a1c
.org 0xb3ffa
	adds r2, #74	@ 000b3ffa 4a32
.org 0xb3ffc
	ldrb r1, [r2, #0]	@ 000b3ffc 1178
.org 0xb3ffe
	movs r0, #17	@ 000b3ffe 1120
.org 0xb4000
	negs r0, r0	@ 000b4000 4042
.org 0xb4002
	ands r0, r1	@ 000b4002 0840
.org 0xb4004
	strb r0, [r2, #0]	@ 000b4004 1070
.org 0xb4006
	ldrb r1, [r7, #10]	@ 000b4006 b97a
.org 0xb4008
	movs r0, #4	@ 000b4008 0420
.org 0xb400a
	orrs r0, r1	@ 000b400a 0843
.org 0xb400c
	strb r0, [r7, #10]	@ 000b400c b872
.org 0xb400e
	adds r4, r7, #0	@ 000b400e 3c1c
.org 0xb4010
	adds r4, #116	@ 000b4010 7434
.org 0xb4012
	ldr r1, [pc, #76]	@ 000b4012 1349
.org 0xb4014
	adds r2, #10	@ 000b4014 0a32
.org 0xb4016
	adds r0, r4, #0	@ 000b4016 201c
.org 0xb4018
	movs r3, #6	@ 000b4018 0623
.org 0xb401a
	bl 0x5760	@ 000b401a 51f7a1fb
.org 0xb401e
	str r7, [r4, #44]	@ 000b401e e762
.org 0xb4020
	ldr r0, [pc, #64]	@ 000b4020 1048
.org 0xb4022
	str r0, [r4, #36]	@ 000b4022 6062
.org 0xb4024
	adds r0, r7, #0	@ 000b4024 381c
.org 0xb4026
	adds r0, #184	@ 000b4026 b830
.org 0xb4028
	strb r5, [r0, #0]	@ 000b4028 0570
.org 0xb402a
	adds r0, #5	@ 000b402a 0530
.org 0xb402c
	strb r5, [r0, #0]	@ 000b402c 0570
.org 0xb402e
	adds r0, #3	@ 000b402e 0330
.org 0xb4030
	str r5, [r0, #0]	@ 000b4030 0560
.org 0xb4032
	adds r2, r7, #0	@ 000b4032 3a1c
.org 0xb4034
	adds r2, #190	@ 000b4034 be32
.org 0xb4036
	movs r1, #0	@ 000b4036 0021
.org 0xb4038
	movs r0, #150	@ 000b4038 9620
.org 0xb403a
	lsls r0, r0, #1	@ 000b403a 4000
.org 0xb403c
	strh r0, [r2, #0]	@ 000b403c 1080
.org 0xb403e
	strb r1, [r7, #18]	@ 000b403e b974
.org 0xb4040
	ldr r1, [pc, #36]	@ 000b4040 0949
.org 0xb4042
	ldrb r0, [r7, #9]	@ 000b4042 787a
.org 0xb4044
	lsls r0, r0, #2	@ 000b4044 8000
.org 0xb4046
	adds r0, r0, r1	@ 000b4046 4018
.org 0xb4048
	str r6, [r7, #12]	@ 000b4048 fe60
.org 0xb404a
	ldr r0, [r0, #0]	@ 000b404a 0068
.org 0xb404c
	ldr r0, [r0, #4]	@ 000b404c 4068
.org 0xb404e
	str r0, [r7, #20]	@ 000b404e 7861
.org 0xb4050
	adds r0, r7, #0	@ 000b4050 381c
.org 0xb4052
	bl 0xb406c	@ 000b4052 00f00bf8
.org 0xb4056
	pop {r4, r5, r6, r7}	@ 000b4056 f0bc
.org 0xb4058
	pop {r0}	@ 000b4058 01bc
.org 0xb405a
	bx r0	@ 000b405a 0047
