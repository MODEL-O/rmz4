@ FUN_080e8ee0  entry 0x080e8ee0  size 56
.thumb
.org 0xe8ee0
FUN_080e8ee0:
	push {r4, lr}	@ 000e8ee0 10b5
.org 0xe8ee2
	adds r3, r0, #0	@ 000e8ee2 031c
.org 0xe8ee4
	ldr r2, [r3, #44]	@ 000e8ee4 da6a
.org 0xe8ee6
	ldr r4, [pc, #48]	@ 000e8ee6 0c4c
.org 0xe8ee8
	cmp r2, #0	@ 000e8ee8 002a
.org 0xe8eea
	beq.n 0xe8f02	@ 000e8eea 0ad0
.org 0xe8eec
	ldrb r0, [r2, #12]	@ 000e8eec 107b
.org 0xe8eee
	cmp r0, #1	@ 000e8eee 0128
.org 0xe8ef0
	bhi.n 0xe8f02	@ 000e8ef0 07d8
.org 0xe8ef2
	ldrb r0, [r2, #9]	@ 000e8ef2 507a
.org 0xe8ef4
	lsls r0, r0, #2	@ 000e8ef4 8000
.org 0xe8ef6
	adds r0, r0, r4	@ 000e8ef6 0019
.org 0xe8ef8
	movs r1, #2	@ 000e8ef8 0221
.org 0xe8efa
	str r1, [r2, #12]	@ 000e8efa d160
.org 0xe8efc
	ldr r0, [r0, #0]	@ 000e8efc 0068
.org 0xe8efe
	ldr r0, [r0, #8]	@ 000e8efe 8068
.org 0xe8f00
	str r0, [r2, #20]	@ 000e8f00 5061
.org 0xe8f02
	ldrb r0, [r3, #9]	@ 000e8f02 587a
.org 0xe8f04
	lsls r0, r0, #2	@ 000e8f04 8000
.org 0xe8f06
	adds r0, r0, r4	@ 000e8f06 0019
.org 0xe8f08
	movs r1, #4	@ 000e8f08 0421
.org 0xe8f0a
	str r1, [r3, #12]	@ 000e8f0a d960
.org 0xe8f0c
	ldr r0, [r0, #0]	@ 000e8f0c 0068
.org 0xe8f0e
	ldr r0, [r0, #16]	@ 000e8f0e 0069
.org 0xe8f10
	str r0, [r3, #20]	@ 000e8f10 5861
.org 0xe8f12
	pop {r4}	@ 000e8f12 10bc
.org 0xe8f14
	pop {r0}	@ 000e8f14 01bc
.org 0xe8f16
	bx r0	@ 000e8f16 0047
