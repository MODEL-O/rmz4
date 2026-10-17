@ FUN_0808e8a0  entry 0x0808e8a0  size 78
.thumb
.org 0x8e8a0
FUN_0808e8a0:
	push {r4, lr}	@ 0008e8a0 10b5
.org 0x8e8a2
	adds r4, r0, #0	@ 0008e8a2 041c
.org 0x8e8a4
	adds r0, #140	@ 0008e8a4 8c30
.org 0x8e8a6
	movs r1, #0	@ 0008e8a6 0021
.org 0x8e8a8
	str r1, [r0, #0]	@ 0008e8a8 0160
.org 0x8e8aa
	adds r0, #4	@ 0008e8aa 0430
.org 0x8e8ac
	str r1, [r0, #0]	@ 0008e8ac 0160
.org 0x8e8ae
	adds r0, #4	@ 0008e8ae 0430
.org 0x8e8b0
	strb r1, [r0, #0]	@ 0008e8b0 0170
.org 0x8e8b2
	ldrb r1, [r4, #10]	@ 0008e8b2 a17a
.org 0x8e8b4
	movs r0, #251	@ 0008e8b4 fb20
.org 0x8e8b6
	ands r0, r1	@ 0008e8b6 0840
.org 0x8e8b8
	movs r1, #254	@ 0008e8b8 fe21
.org 0x8e8ba
	ands r0, r1	@ 0008e8ba 0840
.org 0x8e8bc
	strb r0, [r4, #10]	@ 0008e8bc a072
.org 0x8e8be
	adds r1, r4, #0	@ 0008e8be 211c
.org 0x8e8c0
	adds r1, #84	@ 0008e8c0 5431
.org 0x8e8c2
	movs r0, #1	@ 0008e8c2 0120
.org 0x8e8c4
	bl 0xd0c88	@ 0008e8c4 42f0e0f9
.org 0x8e8c8
	cmp r0, #0	@ 0008e8c8 0028
.org 0x8e8ca
	beq.n 0x8e8d6	@ 0008e8ca 04d0
.org 0x8e8cc
	adds r0, #73	@ 0008e8cc 4930
.org 0x8e8ce
	ldrb r1, [r0, #0]	@ 0008e8ce 0178
.org 0x8e8d0
	movs r2, #12	@ 0008e8d0 0c22
.org 0x8e8d2
	orrs r1, r2	@ 0008e8d2 1143
.org 0x8e8d4
	strb r1, [r0, #0]	@ 0008e8d4 0170
.org 0x8e8d6
	ldr r1, [pc, #24]	@ 0008e8d6 0649
.org 0x8e8d8
	ldrb r0, [r4, #9]	@ 0008e8d8 607a
.org 0x8e8da
	lsls r0, r0, #2	@ 0008e8da 8000
.org 0x8e8dc
	adds r0, r0, r1	@ 0008e8dc 4018
.org 0x8e8de
	movs r1, #4	@ 0008e8de 0421
.org 0x8e8e0
	str r1, [r4, #12]	@ 0008e8e0 e160
.org 0x8e8e2
	ldr r0, [r0, #0]	@ 0008e8e2 0068
.org 0x8e8e4
	ldr r0, [r0, #16]	@ 0008e8e4 0069
.org 0x8e8e6
	str r0, [r4, #20]	@ 0008e8e6 6061
.org 0x8e8e8
	pop {r4}	@ 0008e8e8 10bc
.org 0x8e8ea
	pop {r0}	@ 0008e8ea 01bc
.org 0x8e8ec
	bx r0	@ 0008e8ec 0047
