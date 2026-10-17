@ FUN_08072a6c  entry 0x08072a6c  size 30
.thumb
.org 0x72a6c
FUN_08072a6c:
	push {r4, lr}	@ 00072a6c 10b5
.org 0x72a6e
	adds r4, r0, #0	@ 00072a6e 041c
.org 0x72a70
	bl 0x73bcc	@ 00072a70 01f0acf8
.org 0x72a74
	ldr r1, [pc, #20]	@ 00072a74 0549
.org 0x72a76
	ldrb r0, [r4, #13]	@ 00072a76 607b
.org 0x72a78
	lsls r0, r0, #2	@ 00072a78 8000
.org 0x72a7a
	adds r0, r0, r1	@ 00072a7a 4018
.org 0x72a7c
	ldr r1, [r0, #0]	@ 00072a7c 0168
.org 0x72a7e
	adds r0, r4, #0	@ 00072a7e 201c
.org 0x72a80
	bl 0x128f80	@ 00072a80 b6f07efa
.org 0x72a84
	pop {r4}	@ 00072a84 10bc
.org 0x72a86
	pop {r0}	@ 00072a86 01bc
.org 0x72a88
	bx r0	@ 00072a88 0047
