@ FUN_0804889c  entry 0x0804889c  size 66
.thumb
.org 0x4889c
FUN_0804889c:
	push {r4, lr}	@ 0004889c 10b5
.org 0x4889e
	adds r4, r0, #0	@ 0004889e 041c
.org 0x488a0
	adds r1, r4, #0	@ 000488a0 211c
.org 0x488a2
	adds r1, #84	@ 000488a2 5431
.org 0x488a4
	movs r0, #3	@ 000488a4 0320
.org 0x488a6
	bl 0xd0c88	@ 000488a6 88f0eff9
.org 0x488aa
	adds r0, r4, #0	@ 000488aa 201c
.org 0x488ac
	adds r0, #140	@ 000488ac 8c30
.org 0x488ae
	movs r1, #0	@ 000488ae 0021
.org 0x488b0
	str r1, [r0, #0]	@ 000488b0 0160
.org 0x488b2
	adds r0, #4	@ 000488b2 0430
.org 0x488b4
	str r1, [r0, #0]	@ 000488b4 0160
.org 0x488b6
	adds r0, #4	@ 000488b6 0430
.org 0x488b8
	strb r1, [r0, #0]	@ 000488b8 0170
.org 0x488ba
	ldrb r1, [r4, #10]	@ 000488ba a17a
.org 0x488bc
	movs r0, #251	@ 000488bc fb20
.org 0x488be
	ands r0, r1	@ 000488be 0840
.org 0x488c0
	movs r1, #254	@ 000488c0 fe21
.org 0x488c2
	ands r0, r1	@ 000488c2 0840
.org 0x488c4
	strb r0, [r4, #10]	@ 000488c4 a072
.org 0x488c6
	ldr r1, [pc, #24]	@ 000488c6 0649
.org 0x488c8
	ldrb r0, [r4, #9]	@ 000488c8 607a
.org 0x488ca
	lsls r0, r0, #2	@ 000488ca 8000
.org 0x488cc
	adds r0, r0, r1	@ 000488cc 4018
.org 0x488ce
	movs r1, #4	@ 000488ce 0421
.org 0x488d0
	str r1, [r4, #12]	@ 000488d0 e160
.org 0x488d2
	ldr r0, [r0, #0]	@ 000488d2 0068
.org 0x488d4
	ldr r0, [r0, #16]	@ 000488d4 0069
.org 0x488d6
	str r0, [r4, #20]	@ 000488d6 6061
.org 0x488d8
	pop {r4}	@ 000488d8 10bc
.org 0x488da
	pop {r0}	@ 000488da 01bc
.org 0x488dc
	bx r0	@ 000488dc 0047
