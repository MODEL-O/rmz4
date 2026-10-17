@ FUN_080e85b0  entry 0x080e85b0  size 56
.thumb
.org 0xe85b0
FUN_080e85b0:
	push {r4, lr}	@ 000e85b0 10b5
.org 0xe85b2
	adds r2, r0, #0	@ 000e85b2 021c
.org 0xe85b4
	ldr r0, [r2, #40]	@ 000e85b4 906a
.org 0xe85b6
	adds r1, r0, #0	@ 000e85b6 011c
.org 0xe85b8
	adds r1, #204	@ 000e85b8 cc31
.org 0xe85ba
	ldrh r3, [r1, #0]	@ 000e85ba 0b88
.org 0xe85bc
	movs r4, #0	@ 000e85bc 0024
.org 0xe85be
	ldrsh r0, [r1, r4]	@ 000e85be 085f
.org 0xe85c0
	cmp r0, #0	@ 000e85c0 0028
.org 0xe85c2
	beq.n 0xe85c8	@ 000e85c2 01d0
.org 0xe85c4
	subs r0, r3, #1	@ 000e85c4 581e
.org 0xe85c6
	strh r0, [r1, #0]	@ 000e85c6 0880
.org 0xe85c8
	ldrb r1, [r2, #10]	@ 000e85c8 917a
.org 0xe85ca
	movs r0, #254	@ 000e85ca fe20
.org 0xe85cc
	ands r0, r1	@ 000e85cc 0840
.org 0xe85ce
	strb r0, [r2, #10]	@ 000e85ce 9072
.org 0xe85d0
	ldr r1, [pc, #20]	@ 000e85d0 0549
.org 0xe85d2
	ldrb r0, [r2, #9]	@ 000e85d2 507a
.org 0xe85d4
	lsls r0, r0, #2	@ 000e85d4 8000
.org 0xe85d6
	adds r0, r0, r1	@ 000e85d6 4018
.org 0xe85d8
	movs r1, #4	@ 000e85d8 0421
.org 0xe85da
	str r1, [r2, #12]	@ 000e85da d160
.org 0xe85dc
	ldr r0, [r0, #0]	@ 000e85dc 0068
.org 0xe85de
	ldr r0, [r0, #16]	@ 000e85de 0069
.org 0xe85e0
	str r0, [r2, #20]	@ 000e85e0 5061
.org 0xe85e2
	pop {r4}	@ 000e85e2 10bc
.org 0xe85e4
	pop {r0}	@ 000e85e4 01bc
.org 0xe85e6
	bx r0	@ 000e85e6 0047
