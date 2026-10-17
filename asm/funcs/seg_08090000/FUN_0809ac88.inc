@ FUN_0809ac88  entry 0x0809ac88  size 78
.thumb
.org 0x9ac88
FUN_0809ac88:
	push {r4, lr}	@ 0009ac88 10b5
.org 0x9ac8a
	adds r4, r0, #0	@ 0009ac8a 041c
.org 0x9ac8c
	ldrb r2, [r4, #18]	@ 0009ac8c a27c
.org 0x9ac8e
	cmp r2, #1	@ 0009ac8e 012a
.org 0x9ac90
	bhi.n 0x9aca2	@ 0009ac90 07d8
.org 0x9ac92
	adds r0, #84	@ 0009ac92 5430
.org 0x9ac94
	adds r2, #5	@ 0009ac94 0532
.org 0x9ac96
	lsls r2, r2, #24	@ 0009ac96 1206
.org 0x9ac98
	lsrs r2, r2, #24	@ 0009ac98 120e
.org 0x9ac9a
	movs r1, #0	@ 0009ac9a 0021
.org 0x9ac9c
	movs r3, #32	@ 0009ac9c 2023
.org 0x9ac9e
	bl 0xc62a0	@ 0009ac9e 2bf0fffa
.org 0x9aca2
	adds r0, r4, #0	@ 0009aca2 201c
.org 0x9aca4
	adds r0, #140	@ 0009aca4 8c30
.org 0x9aca6
	movs r1, #0	@ 0009aca6 0021
.org 0x9aca8
	str r1, [r0, #0]	@ 0009aca8 0160
.org 0x9acaa
	adds r0, #4	@ 0009acaa 0430
.org 0x9acac
	str r1, [r0, #0]	@ 0009acac 0160
.org 0x9acae
	adds r0, #4	@ 0009acae 0430
.org 0x9acb0
	strb r1, [r0, #0]	@ 0009acb0 0170
.org 0x9acb2
	ldrb r1, [r4, #10]	@ 0009acb2 a17a
.org 0x9acb4
	movs r0, #251	@ 0009acb4 fb20
.org 0x9acb6
	ands r0, r1	@ 0009acb6 0840
.org 0x9acb8
	movs r1, #254	@ 0009acb8 fe21
.org 0x9acba
	ands r0, r1	@ 0009acba 0840
.org 0x9acbc
	strb r0, [r4, #10]	@ 0009acbc a072
.org 0x9acbe
	ldr r1, [pc, #24]	@ 0009acbe 0649
.org 0x9acc0
	ldrb r0, [r4, #9]	@ 0009acc0 607a
.org 0x9acc2
	lsls r0, r0, #2	@ 0009acc2 8000
.org 0x9acc4
	adds r0, r0, r1	@ 0009acc4 4018
.org 0x9acc6
	movs r1, #4	@ 0009acc6 0421
.org 0x9acc8
	str r1, [r4, #12]	@ 0009acc8 e160
.org 0x9acca
	ldr r0, [r0, #0]	@ 0009acca 0068
.org 0x9accc
	ldr r0, [r0, #16]	@ 0009accc 0069
.org 0x9acce
	str r0, [r4, #20]	@ 0009acce 6061
.org 0x9acd0
	pop {r4}	@ 0009acd0 10bc
.org 0x9acd2
	pop {r0}	@ 0009acd2 01bc
.org 0x9acd4
	bx r0	@ 0009acd4 0047
