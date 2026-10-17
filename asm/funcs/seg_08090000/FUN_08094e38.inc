@ FUN_08094e38  entry 0x08094e38  size 44
.thumb
.org 0x94e38
FUN_08094e38:
	push {lr}	@ 00094e38 00b5
.org 0x94e3a
	sub sp, #8	@ 00094e3a 82b0
.org 0x94e3c
	ldrb r3, [r0, #10]	@ 00094e3c 837a
.org 0x94e3e
	lsrs r3, r3, #4	@ 00094e3e 1b09
.org 0x94e40
	movs r1, #1	@ 00094e40 0121
.org 0x94e42
	ands r3, r1	@ 00094e42 0b40
.org 0x94e44
	ldr r1, [r0, #84]	@ 00094e44 416d
.org 0x94e46
	str r1, [sp, #0]	@ 00094e46 0091
.org 0x94e48
	ldr r0, [r0, #88]	@ 00094e48 806d
.org 0x94e4a
	ldr r1, [pc, #24]	@ 00094e4a 0649
.org 0x94e4c
	adds r0, r0, r1	@ 00094e4c 4018
.org 0x94e4e
	str r0, [sp, #4]	@ 00094e4e 0190
.org 0x94e50
	ldr r1, [pc, #20]	@ 00094e50 0549
.org 0x94e52
	lsls r0, r3, #4	@ 00094e52 1801
.org 0x94e54
	orrs r3, r0	@ 00094e54 0343
.org 0x94e56
	mov r0, sp	@ 00094e56 6846
.org 0x94e58
	movs r2, #0	@ 00094e58 0022
.org 0x94e5a
	bl 0xd4c8c	@ 00094e5a 3ff017ff
.org 0x94e5e
	add sp, #8	@ 00094e5e 02b0
.org 0x94e60
	pop {r0}	@ 00094e60 01bc
.org 0x94e62
	bx r0	@ 00094e62 0047
