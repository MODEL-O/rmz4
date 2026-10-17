@ FUN_080490e0  entry 0x080490e0  size 94
.thumb
.org 0x490e0
FUN_080490e0:
	push {r4, lr}	@ 000490e0 10b5
.org 0x490e2
	adds r4, r0, #0	@ 000490e2 041c
.org 0x490e4
	ldr r1, [r4, #40]	@ 000490e4 a16a
.org 0x490e6
	adds r0, #189	@ 000490e6 bd30
.org 0x490e8
	ldrb r0, [r0, #0]	@ 000490e8 0078
.org 0x490ea
	cmp r0, #0	@ 000490ea 0028
.org 0x490ec
	beq.n 0x4910a	@ 000490ec 0dd0
.org 0x490ee
	adds r0, r1, #0	@ 000490ee 081c
.org 0x490f0
	bl 0x3aabc	@ 000490f0 f1f7e4fc
.org 0x490f4
	lsls r0, r0, #24	@ 000490f4 0006
.org 0x490f6
	cmp r0, #0	@ 000490f6 0028
.org 0x490f8
	beq.n 0x4910a	@ 000490f8 07d0
.org 0x490fa
	adds r1, r4, #0	@ 000490fa 211c
.org 0x490fc
	adds r1, #84	@ 000490fc 5431
.org 0x490fe
	movs r0, #1	@ 000490fe 0120
.org 0x49100
	bl 0xd0c88	@ 00049100 87f0c2fd
.org 0x49104
	movs r0, #42	@ 00049104 2a20
.org 0x49106
	bl 0x2b10	@ 00049106 b9f703fd
.org 0x4910a
	adds r0, r4, #0	@ 0004910a 201c
.org 0x4910c
	adds r0, #140	@ 0004910c 8c30
.org 0x4910e
	movs r1, #0	@ 0004910e 0021
.org 0x49110
	str r1, [r0, #0]	@ 00049110 0160
.org 0x49112
	adds r0, #4	@ 00049112 0430
.org 0x49114
	str r1, [r0, #0]	@ 00049114 0160
.org 0x49116
	adds r0, #4	@ 00049116 0430
.org 0x49118
	strb r1, [r0, #0]	@ 00049118 0170
.org 0x4911a
	ldrb r1, [r4, #10]	@ 0004911a a17a
.org 0x4911c
	movs r0, #251	@ 0004911c fb20
.org 0x4911e
	ands r0, r1	@ 0004911e 0840
.org 0x49120
	movs r1, #254	@ 00049120 fe21
.org 0x49122
	ands r0, r1	@ 00049122 0840
.org 0x49124
	strb r0, [r4, #10]	@ 00049124 a072
.org 0x49126
	ldr r1, [pc, #24]	@ 00049126 0649
.org 0x49128
	ldrb r0, [r4, #9]	@ 00049128 607a
.org 0x4912a
	lsls r0, r0, #2	@ 0004912a 8000
.org 0x4912c
	adds r0, r0, r1	@ 0004912c 4018
.org 0x4912e
	movs r1, #4	@ 0004912e 0421
.org 0x49130
	str r1, [r4, #12]	@ 00049130 e160
.org 0x49132
	ldr r0, [r0, #0]	@ 00049132 0068
.org 0x49134
	ldr r0, [r0, #16]	@ 00049134 0069
.org 0x49136
	str r0, [r4, #20]	@ 00049136 6061
.org 0x49138
	pop {r4}	@ 00049138 10bc
.org 0x4913a
	pop {r0}	@ 0004913a 01bc
.org 0x4913c
	bx r0	@ 0004913c 0047
