@ FUN_0800a8a0  entry 0x0800a8a0  size 84
.thumb
.org 0xa8a0
FUN_0800a8a0:
	push {lr}	@ 0000a8a0 00b5
.org 0xa8a2
	ldr r0, [pc, #80]	@ 0000a8a2 1448
.org 0xa8a4
	ldr r1, [pc, #80]	@ 0000a8a4 1449
.org 0xa8a6
	adds r0, r0, r1	@ 0000a8a6 4018
.org 0xa8a8
	ldr r3, [r0, #0]	@ 0000a8a8 0368
.org 0xa8aa
	cmp r3, #0	@ 0000a8aa 002b
.org 0xa8ac
	beq.n 0xa8e4	@ 0000a8ac 1ad0
.org 0xa8ae
	ldrb r1, [r3, #10]	@ 0000a8ae 997a
.org 0xa8b0
	movs r0, #254	@ 0000a8b0 fe20
.org 0xa8b2
	ands r0, r1	@ 0000a8b2 0840
.org 0xa8b4
	movs r2, #0	@ 0000a8b4 0022
.org 0xa8b6
	movs r1, #253	@ 0000a8b6 fd21
.org 0xa8b8
	ands r0, r1	@ 0000a8b8 0840
.org 0xa8ba
	strb r0, [r3, #10]	@ 0000a8ba 9872
.org 0xa8bc
	adds r0, r3, #0	@ 0000a8bc 181c
.org 0xa8be
	adds r0, #140	@ 0000a8be 8c30
.org 0xa8c0
	str r2, [r0, #0]	@ 0000a8c0 0260
.org 0xa8c2
	adds r0, #4	@ 0000a8c2 0430
.org 0xa8c4
	str r2, [r0, #0]	@ 0000a8c4 0260
.org 0xa8c6
	adds r0, #4	@ 0000a8c6 0430
.org 0xa8c8
	strb r2, [r0, #0]	@ 0000a8c8 0270
.org 0xa8ca
	ldrb r1, [r3, #10]	@ 0000a8ca 997a
.org 0xa8cc
	movs r0, #251	@ 0000a8cc fb20
.org 0xa8ce
	ands r0, r1	@ 0000a8ce 0840
.org 0xa8d0
	strb r0, [r3, #10]	@ 0000a8d0 9872
.org 0xa8d2
	ldr r1, [pc, #40]	@ 0000a8d2 0a49
.org 0xa8d4
	ldrb r0, [r3, #9]	@ 0000a8d4 587a
.org 0xa8d6
	lsls r0, r0, #2	@ 0000a8d6 8000
.org 0xa8d8
	adds r0, r0, r1	@ 0000a8d8 4018
.org 0xa8da
	movs r1, #3	@ 0000a8da 0321
.org 0xa8dc
	str r1, [r3, #12]	@ 0000a8dc d960
.org 0xa8de
	ldr r0, [r0, #0]	@ 0000a8de 0068
.org 0xa8e0
	ldr r0, [r0, #12]	@ 0000a8e0 c068
.org 0xa8e2
	str r0, [r3, #20]	@ 0000a8e2 5861
.org 0xa8e4
	movs r0, #12	@ 0000a8e4 0c20
.org 0xa8e6
	bl 0x2624	@ 0000a8e6 f7f79dfe
.org 0xa8ea
	movs r0, #13	@ 0000a8ea 0d20
.org 0xa8ec
	bl 0x2624	@ 0000a8ec f7f79afe
.org 0xa8f0
	pop {r0}	@ 0000a8f0 01bc
.org 0xa8f2
	bx r0	@ 0000a8f2 0047
