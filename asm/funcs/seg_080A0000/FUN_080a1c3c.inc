@ FUN_080a1c3c  entry 0x080a1c3c  size 60
.thumb
.org 0xa1c3c
FUN_080a1c3c:
	push {r4, r5, r6, r7, lr}	@ 000a1c3c f0b5
.org 0xa1c3e
	sub sp, #8	@ 000a1c3e 82b0
.org 0xa1c40
	ldrb r1, [r0, #10]	@ 000a1c40 817a
.org 0xa1c42
	lsrs r1, r1, #4	@ 000a1c42 0909
.org 0xa1c44
	movs r2, #1	@ 000a1c44 0122
.org 0xa1c46
	ands r1, r2	@ 000a1c46 1140
.org 0xa1c48
	ldr r2, [r0, #84]	@ 000a1c48 426d
.org 0xa1c4a
	str r2, [sp, #0]	@ 000a1c4a 0092
.org 0xa1c4c
	ldr r0, [r0, #88]	@ 000a1c4c 806d
.org 0xa1c4e
	str r0, [sp, #4]	@ 000a1c4e 0190
.org 0xa1c50
	lsls r0, r1, #4	@ 000a1c50 0801
.org 0xa1c52
	orrs r1, r0	@ 000a1c52 0143
.org 0xa1c54
	lsls r6, r1, #24	@ 000a1c54 0e06
.org 0xa1c56
	movs r5, #0	@ 000a1c56 0025
.org 0xa1c58
	ldr r7, [pc, #28]	@ 000a1c58 074f
.org 0xa1c5a
	movs r4, #1	@ 000a1c5a 0124
.org 0xa1c5c
	adds r1, r5, r7	@ 000a1c5c e919
.org 0xa1c5e
	mov r0, sp	@ 000a1c5e 6846
.org 0xa1c60
	movs r2, #0	@ 000a1c60 0022
.org 0xa1c62
	lsrs r3, r6, #24	@ 000a1c62 330e
.org 0xa1c64
	bl 0xd4c8c	@ 000a1c64 33f012f8
.org 0xa1c68
	adds r5, #28	@ 000a1c68 1c35
.org 0xa1c6a
	subs r4, #1	@ 000a1c6a 013c
.org 0xa1c6c
	cmp r4, #0	@ 000a1c6c 002c
.org 0xa1c6e
	bge.n 0xa1c5c	@ 000a1c6e f5da
.org 0xa1c70
	add sp, #8	@ 000a1c70 02b0
.org 0xa1c72
	pop {r4, r5, r6, r7}	@ 000a1c72 f0bc
.org 0xa1c74
	pop {r0}	@ 000a1c74 01bc
.org 0xa1c76
	bx r0	@ 000a1c76 0047
