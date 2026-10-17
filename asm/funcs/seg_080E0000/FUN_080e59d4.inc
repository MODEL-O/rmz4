@ FUN_080e59d4  entry 0x080e59d4  size 66
.thumb
.org 0xe59d4
FUN_080e59d4:
	push {r4, lr}	@ 000e59d4 10b5
.org 0xe59d6
	sub sp, #8	@ 000e59d6 82b0
.org 0xe59d8
	adds r4, r0, #0	@ 000e59d8 041c
.org 0xe59da
	ldr r0, [r4, #84]	@ 000e59da 606d
.org 0xe59dc
	str r0, [sp, #0]	@ 000e59dc 0090
.org 0xe59de
	ldr r0, [r4, #88]	@ 000e59de a06d
.org 0xe59e0
	ldr r1, [pc, #52]	@ 000e59e0 0d49
.org 0xe59e2
	adds r0, r0, r1	@ 000e59e2 4018
.org 0xe59e4
	str r0, [sp, #4]	@ 000e59e4 0190
.org 0xe59e6
	movs r0, #1	@ 000e59e6 0120
.org 0xe59e8
	mov r1, sp	@ 000e59e8 6946
.org 0xe59ea
	bl 0xd0c88	@ 000e59ea ebf74df9
.org 0xe59ee
	movs r0, #42	@ 000e59ee 2a20
.org 0xe59f0
	bl 0x2b10	@ 000e59f0 1df78ef8
.org 0xe59f4
	movs r3, #1	@ 000e59f4 0123
.org 0xe59f6
	strb r3, [r4, #17]	@ 000e59f6 6374
.org 0xe59f8
	adds r0, r4, #0	@ 000e59f8 201c
.org 0xe59fa
	adds r0, #84	@ 000e59fa 5430
.org 0xe59fc
	ldr r1, [pc, #28]	@ 000e59fc 0749
.org 0xe59fe
	ldrb r2, [r4, #10]	@ 000e59fe a27a
.org 0xe5a00
	lsrs r2, r2, #4	@ 000e5a00 1209
.org 0xe5a02
	ands r2, r3	@ 000e5a02 1a40
.org 0xe5a04
	bl 0xe56d0	@ 000e5a04 fff764fe
.org 0xe5a08
	adds r0, r4, #0	@ 000e5a08 201c
.org 0xe5a0a
	bl 0xe5880	@ 000e5a0a fff739ff
.org 0xe5a0e
	add sp, #8	@ 000e5a0e 02b0
.org 0xe5a10
	pop {r4}	@ 000e5a10 10bc
.org 0xe5a12
	pop {r0}	@ 000e5a12 01bc
.org 0xe5a14
	bx r0	@ 000e5a14 0047
