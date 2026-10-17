@ FUN_080a0c58  entry 0x080a0c58  size 42
.thumb
.org 0xa0c58
FUN_080a0c58:
	push {lr}	@ 000a0c58 00b5
.org 0xa0c5a
	sub sp, #8	@ 000a0c5a 82b0
.org 0xa0c5c
	ldrb r3, [r0, #10]	@ 000a0c5c 837a
.org 0xa0c5e
	lsrs r3, r3, #4	@ 000a0c5e 1b09
.org 0xa0c60
	movs r1, #1	@ 000a0c60 0121
.org 0xa0c62
	ands r3, r1	@ 000a0c62 0b40
.org 0xa0c64
	ldr r1, [r0, #84]	@ 000a0c64 416d
.org 0xa0c66
	str r1, [sp, #0]	@ 000a0c66 0091
.org 0xa0c68
	ldr r0, [r0, #88]	@ 000a0c68 806d
.org 0xa0c6a
	str r0, [sp, #4]	@ 000a0c6a 0190
.org 0xa0c6c
	ldr r1, [pc, #20]	@ 000a0c6c 0549
.org 0xa0c6e
	adds r1, #28	@ 000a0c6e 1c31
.org 0xa0c70
	lsls r0, r3, #4	@ 000a0c70 1801
.org 0xa0c72
	orrs r3, r0	@ 000a0c72 0343
.org 0xa0c74
	mov r0, sp	@ 000a0c74 6846
.org 0xa0c76
	movs r2, #0	@ 000a0c76 0022
.org 0xa0c78
	bl 0xd4c8c	@ 000a0c78 34f008f8
.org 0xa0c7c
	add sp, #8	@ 000a0c7c 02b0
.org 0xa0c7e
	pop {r0}	@ 000a0c7e 01bc
.org 0xa0c80
	bx r0	@ 000a0c80 0047
