@ FUN_080d0074  entry 0x080d0074  size 124
.thumb
.org 0xd0074
FUN_080d0074:
	push {r4, lr}	@ 000d0074 10b5
.org 0xd0076
	adds r4, r0, #0	@ 000d0076 041c
.org 0xd0078
	bl 0x1cff0	@ 000d0078 4cf7baff
.org 0xd007c
	adds r0, r4, #0	@ 000d007c 201c
.org 0xd007e
	adds r0, #180	@ 000d007e b430
.org 0xd0080
	ldrb r0, [r0, #0]	@ 000d0080 0078
.org 0xd0082
	lsls r0, r0, #24	@ 000d0082 0006
.org 0xd0084
	asrs r0, r0, #24	@ 000d0084 0016
.org 0xd0086
	ldr r1, [r4, #92]	@ 000d0086 e16d
.org 0xd0088
	adds r2, r1, #0	@ 000d0088 0a1c
.org 0xd008a
	muls r2, r0	@ 000d008a 4243
.org 0xd008c
	ldr r0, [r4, #84]	@ 000d008c 606d
.org 0xd008e
	adds r0, r0, r2	@ 000d008e 8018
.org 0xd0090
	str r0, [r4, #84]	@ 000d0090 6065
.org 0xd0092
	ldr r0, [r4, #100]	@ 000d0092 606e
.org 0xd0094
	adds r1, r1, r0	@ 000d0094 0918
.org 0xd0096
	str r1, [r4, #92]	@ 000d0096 e165
.org 0xd0098
	movs r0, #224	@ 000d0098 e020
.org 0xd009a
	lsls r0, r0, #2	@ 000d009a 8000
.org 0xd009c
	cmp r1, r0	@ 000d009c 8142
.org 0xd009e
	ble.n 0xd00a2	@ 000d009e 00dd
.org 0xd00a0
	str r0, [r4, #92]	@ 000d00a0 e065
.org 0xd00a2
	ldr r0, [pc, #76]	@ 000d00a2 1348
.org 0xd00a4
	adds r1, r4, #0	@ 000d00a4 211c
.org 0xd00a6
	adds r1, #84	@ 000d00a6 5431
.org 0xd00a8
	bl 0x1fb14	@ 000d00a8 4ff734fd
.org 0xd00ac
	movs r1, #128	@ 000d00ac 8021
.org 0xd00ae
	lsls r1, r1, #5	@ 000d00ae 4901
.org 0xd00b0
	cmp r0, r1	@ 000d00b0 8842
.org 0xd00b2
	bls.n 0xd00ea	@ 000d00b2 1ad9
.org 0xd00b4
	ldrb r1, [r4, #10]	@ 000d00b4 a17a
.org 0xd00b6
	movs r0, #254	@ 000d00b6 fe20
.org 0xd00b8
	ands r0, r1	@ 000d00b8 0840
.org 0xd00ba
	movs r2, #0	@ 000d00ba 0022
.org 0xd00bc
	movs r1, #253	@ 000d00bc fd21
.org 0xd00be
	ands r0, r1	@ 000d00be 0840
.org 0xd00c0
	strb r0, [r4, #10]	@ 000d00c0 a072
.org 0xd00c2
	adds r0, r4, #0	@ 000d00c2 201c
.org 0xd00c4
	adds r0, #140	@ 000d00c4 8c30
.org 0xd00c6
	str r2, [r0, #0]	@ 000d00c6 0260
.org 0xd00c8
	adds r0, #4	@ 000d00c8 0430
.org 0xd00ca
	str r2, [r0, #0]	@ 000d00ca 0260
.org 0xd00cc
	adds r0, #4	@ 000d00cc 0430
.org 0xd00ce
	strb r2, [r0, #0]	@ 000d00ce 0270
.org 0xd00d0
	ldrb r1, [r4, #10]	@ 000d00d0 a17a
.org 0xd00d2
	movs r0, #251	@ 000d00d2 fb20
.org 0xd00d4
	ands r0, r1	@ 000d00d4 0840
.org 0xd00d6
	strb r0, [r4, #10]	@ 000d00d6 a072
.org 0xd00d8
	ldr r1, [pc, #24]	@ 000d00d8 0649
.org 0xd00da
	ldrb r0, [r4, #9]	@ 000d00da 607a
.org 0xd00dc
	lsls r0, r0, #2	@ 000d00dc 8000
.org 0xd00de
	adds r0, r0, r1	@ 000d00de 4018
.org 0xd00e0
	movs r1, #3	@ 000d00e0 0321
.org 0xd00e2
	str r1, [r4, #12]	@ 000d00e2 e160
.org 0xd00e4
	ldr r0, [r0, #0]	@ 000d00e4 0068
.org 0xd00e6
	ldr r0, [r0, #12]	@ 000d00e6 c068
.org 0xd00e8
	str r0, [r4, #20]	@ 000d00e8 6061
.org 0xd00ea
	pop {r4}	@ 000d00ea 10bc
.org 0xd00ec
	pop {r0}	@ 000d00ec 01bc
.org 0xd00ee
	bx r0	@ 000d00ee 0047
