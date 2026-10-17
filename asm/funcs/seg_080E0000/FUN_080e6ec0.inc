@ FUN_080e6ec0  entry 0x080e6ec0  size 100
.thumb
.org 0xe6ec0
FUN_080e6ec0:
	push {r4, r5, r6, lr}	@ 000e6ec0 70b5
.org 0xe6ec2
	sub sp, #8	@ 000e6ec2 82b0
.org 0xe6ec4
	adds r4, r0, #0	@ 000e6ec4 041c
.org 0xe6ec6
	ldr r0, [r4, #84]	@ 000e6ec6 606d
.org 0xe6ec8
	str r0, [sp, #0]	@ 000e6ec8 0090
.org 0xe6eca
	ldr r0, [r4, #88]	@ 000e6eca a06d
.org 0xe6ecc
	ldr r1, [pc, #84]	@ 000e6ecc 1549
.org 0xe6ece
	adds r0, r0, r1	@ 000e6ece 4018
.org 0xe6ed0
	str r0, [sp, #4]	@ 000e6ed0 0190
.org 0xe6ed2
	movs r0, #1	@ 000e6ed2 0120
.org 0xe6ed4
	mov r1, sp	@ 000e6ed4 6946
.org 0xe6ed6
	bl 0xd0c88	@ 000e6ed6 e9f7d7fe
.org 0xe6eda
	movs r0, #167	@ 000e6eda a720
.org 0xe6edc
	bl 0x2b10	@ 000e6edc 1bf718fe
.org 0xe6ee0
	movs r5, #1	@ 000e6ee0 0125
.org 0xe6ee2
	strb r5, [r4, #17]	@ 000e6ee2 6574
.org 0xe6ee4
	adds r6, r4, #0	@ 000e6ee4 261c
.org 0xe6ee6
	adds r6, #84	@ 000e6ee6 5436
.org 0xe6ee8
	movs r1, #129	@ 000e6ee8 8121
.org 0xe6eea
	lsls r1, r1, #1	@ 000e6eea 4900
.org 0xe6eec
	ldrb r2, [r4, #10]	@ 000e6eec a27a
.org 0xe6eee
	lsrs r2, r2, #4	@ 000e6eee 1209
.org 0xe6ef0
	ands r2, r5	@ 000e6ef0 2a40
.org 0xe6ef2
	adds r0, r6, #0	@ 000e6ef2 301c
.org 0xe6ef4
	bl 0xe6b5c	@ 000e6ef4 fff732fe
.org 0xe6ef8
	ldr r1, [pc, #44]	@ 000e6ef8 0b49
.org 0xe6efa
	ldrb r2, [r4, #10]	@ 000e6efa a27a
.org 0xe6efc
	lsrs r2, r2, #4	@ 000e6efc 1209
.org 0xe6efe
	ands r2, r5	@ 000e6efe 2a40
.org 0xe6f00
	adds r0, r6, #0	@ 000e6f00 301c
.org 0xe6f02
	bl 0xe6b5c	@ 000e6f02 fff72bfe
.org 0xe6f06
	movs r1, #130	@ 000e6f06 8221
.org 0xe6f08
	lsls r1, r1, #1	@ 000e6f08 4900
.org 0xe6f0a
	ldrb r2, [r4, #10]	@ 000e6f0a a27a
.org 0xe6f0c
	lsrs r2, r2, #4	@ 000e6f0c 1209
.org 0xe6f0e
	ands r2, r5	@ 000e6f0e 2a40
.org 0xe6f10
	adds r0, r6, #0	@ 000e6f10 301c
.org 0xe6f12
	bl 0xe6b5c	@ 000e6f12 fff723fe
.org 0xe6f16
	adds r0, r4, #0	@ 000e6f16 201c
.org 0xe6f18
	bl 0xe6d44	@ 000e6f18 fff714ff
.org 0xe6f1c
	add sp, #8	@ 000e6f1c 02b0
.org 0xe6f1e
	pop {r4, r5, r6}	@ 000e6f1e 70bc
.org 0xe6f20
	pop {r0}	@ 000e6f20 01bc
.org 0xe6f22
	bx r0	@ 000e6f22 0047
