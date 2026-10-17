@ FUN_0810c8bc  entry 0x0810c8bc  size 124
.thumb
.org 0x10c8bc
FUN_0810c8bc:
	push {r4, lr}	@ 0010c8bc 10b5
.org 0x10c8be
	adds r4, r0, #0	@ 0010c8be 041c
.org 0x10c8c0
	bl 0x1cc9c	@ 0010c8c0 10f7ecf9
.org 0x10c8c4
	ldrb r1, [r4, #10]	@ 0010c8c4 a17a
.org 0x10c8c6
	movs r0, #1	@ 0010c8c6 0120
.org 0x10c8c8
	orrs r0, r1	@ 0010c8c8 0843
.org 0x10c8ca
	movs r1, #2	@ 0010c8ca 0221
.org 0x10c8cc
	orrs r0, r1	@ 0010c8cc 0843
.org 0x10c8ce
	strb r0, [r4, #10]	@ 0010c8ce a072
.org 0x10c8d0
	ldrb r0, [r4, #17]	@ 0010c8d0 607c
.org 0x10c8d2
	cmp r0, #0	@ 0010c8d2 0028
.org 0x10c8d4
	bne.n 0x10c8e8	@ 0010c8d4 08d1
.org 0x10c8d6
	ldr r1, [pc, #12]	@ 0010c8d6 0349
.org 0x10c8d8
	adds r0, r4, #0	@ 0010c8d8 201c
.org 0x10c8da
	bl 0x1cf00	@ 0010c8da 10f711fb
.org 0x10c8de
	movs r0, #128	@ 0010c8de 8020
.org 0x10c8e0
	lsls r0, r0, #4	@ 0010c8e0 0001
.org 0x10c8e2
	b.n 0x10c8f4	@ 0010c8e2 07e0
.org 0x10c8e4
	.byte 0x05,0x43,0x00,0x00	@ 0010c8e4 data
.org 0x10c8e8
	ldr r1, [pc, #80]	@ 0010c8e8 1449
.org 0x10c8ea
	adds r0, r4, #0	@ 0010c8ea 201c
.org 0x10c8ec
	bl 0x1cf00	@ 0010c8ec 10f708fb
.org 0x10c8f0
	movs r0, #136	@ 0010c8f0 8820
.org 0x10c8f2
	lsls r0, r0, #8	@ 0010c8f2 0002
.org 0x10c8f4
	str r0, [r4, #88]	@ 0010c8f4 a065
.org 0x10c8f6
	adds r0, r4, #0	@ 0010c8f6 201c
.org 0x10c8f8
	bl 0x1cff0	@ 0010c8f8 10f77afb
.org 0x10c8fc
	adds r1, r4, #0	@ 0010c8fc 211c
.org 0x10c8fe
	adds r1, #76	@ 0010c8fe 4c31
.org 0x10c900
	movs r0, #0	@ 0010c900 0020
.org 0x10c902
	strb r0, [r1, #0]	@ 0010c902 0870
.org 0x10c904
	adds r2, r4, #0	@ 0010c904 221c
.org 0x10c906
	adds r2, #74	@ 0010c906 4a32
.org 0x10c908
	ldrb r1, [r2, #0]	@ 0010c908 1178
.org 0x10c90a
	subs r0, #17	@ 0010c90a 1138
.org 0x10c90c
	ands r0, r1	@ 0010c90c 0840
.org 0x10c90e
	strb r0, [r2, #0]	@ 0010c90e 1070
.org 0x10c910
	ldrb r1, [r4, #10]	@ 0010c910 a17a
.org 0x10c912
	movs r0, #239	@ 0010c912 ef20
.org 0x10c914
	ands r0, r1	@ 0010c914 0840
.org 0x10c916
	strb r0, [r4, #10]	@ 0010c916 a072
.org 0x10c918
	movs r0, #176	@ 0010c918 b020
.org 0x10c91a
	lsls r0, r0, #7	@ 0010c91a c001
.org 0x10c91c
	str r0, [r4, #84]	@ 0010c91c 6065
.org 0x10c91e
	ldr r1, [pc, #32]	@ 0010c91e 0849
.org 0x10c920
	ldrb r0, [r4, #9]	@ 0010c920 607a
.org 0x10c922
	lsls r0, r0, #2	@ 0010c922 8000
.org 0x10c924
	adds r0, r0, r1	@ 0010c924 4018
.org 0x10c926
	movs r1, #1	@ 0010c926 0121
.org 0x10c928
	str r1, [r4, #12]	@ 0010c928 e160
.org 0x10c92a
	ldr r0, [r0, #0]	@ 0010c92a 0068
.org 0x10c92c
	ldr r0, [r0, #4]	@ 0010c92c 4068
.org 0x10c92e
	str r0, [r4, #20]	@ 0010c92e 6061
.org 0x10c930
	adds r0, r4, #0	@ 0010c930 201c
.org 0x10c932
	bl 0x10c7e0	@ 0010c932 fff755ff
.org 0x10c936
	pop {r4}	@ 0010c936 10bc
