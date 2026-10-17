@ FUN_08095c08  entry 0x08095c08  size 52
.thumb
.org 0x95c08
FUN_08095c08:
	push {r4, lr}	@ 00095c08 10b5
.org 0x95c0a
	adds r4, r0, #0	@ 00095c0a 041c
.org 0x95c0c
	ldrb r0, [r4, #17]	@ 00095c0c 607c
.org 0x95c0e
	ldr r1, [pc, #44]	@ 00095c0e 0b49
.org 0x95c10
	lsls r0, r0, #2	@ 00095c10 8000
.org 0x95c12
	adds r0, r0, r1	@ 00095c12 4018
.org 0x95c14
	movs r1, #0	@ 00095c14 0021
.org 0x95c16
	ldrsh r0, [r0, r1]	@ 00095c16 405e
.org 0x95c18
	bl 0x2b5c	@ 00095c18 6cf7a0ff
.org 0x95c1c
	ldrb r1, [r4, #10]	@ 00095c1c a17a
.org 0x95c1e
	movs r0, #254	@ 00095c1e fe20
.org 0x95c20
	ands r0, r1	@ 00095c20 0840
.org 0x95c22
	strb r0, [r4, #10]	@ 00095c22 a072
.org 0x95c24
	ldr r1, [pc, #24]	@ 00095c24 0649
.org 0x95c26
	ldrb r0, [r4, #9]	@ 00095c26 607a
.org 0x95c28
	lsls r0, r0, #2	@ 00095c28 8000
.org 0x95c2a
	adds r0, r0, r1	@ 00095c2a 4018
.org 0x95c2c
	movs r1, #4	@ 00095c2c 0421
.org 0x95c2e
	str r1, [r4, #12]	@ 00095c2e e160
.org 0x95c30
	ldr r0, [r0, #0]	@ 00095c30 0068
.org 0x95c32
	ldr r0, [r0, #16]	@ 00095c32 0069
.org 0x95c34
	str r0, [r4, #20]	@ 00095c34 6061
.org 0x95c36
	pop {r4}	@ 00095c36 10bc
.org 0x95c38
	pop {r0}	@ 00095c38 01bc
.org 0x95c3a
	bx r0	@ 00095c3a 0047
