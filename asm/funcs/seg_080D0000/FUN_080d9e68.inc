@ FUN_080d9e68  entry 0x080d9e68  size 62
.thumb
.org 0xd9e68
FUN_080d9e68:
	push {r4, lr}	@ 000d9e68 10b5
.org 0xd9e6a
	sub sp, #8	@ 000d9e6a 82b0
.org 0xd9e6c
	adds r4, r0, #0	@ 000d9e6c 041c
.org 0xd9e6e
	ldrb r1, [r4, #10]	@ 000d9e6e a17a
.org 0xd9e70
	movs r0, #254	@ 000d9e70 fe20
.org 0xd9e72
	ands r0, r1	@ 000d9e72 0840
.org 0xd9e74
	strb r0, [r4, #10]	@ 000d9e74 a072
.org 0xd9e76
	ldr r0, [r4, #84]	@ 000d9e76 606d
.org 0xd9e78
	str r0, [sp, #0]	@ 000d9e78 0090
.org 0xd9e7a
	ldr r0, [r4, #88]	@ 000d9e7a a06d
.org 0xd9e7c
	str r0, [sp, #4]	@ 000d9e7c 0190
.org 0xd9e7e
	movs r0, #2	@ 000d9e7e 0220
.org 0xd9e80
	mov r1, sp	@ 000d9e80 6946
.org 0xd9e82
	bl 0xd0c88	@ 000d9e82 f6f701ff
.org 0xd9e86
	adds r0, r4, #0	@ 000d9e86 201c
.org 0xd9e88
	bl 0xd9eac	@ 000d9e88 00f010f8
.org 0xd9e8c
	ldr r1, [pc, #24]	@ 000d9e8c 0649
.org 0xd9e8e
	ldrb r0, [r4, #9]	@ 000d9e8e 607a
.org 0xd9e90
	lsls r0, r0, #2	@ 000d9e90 8000
.org 0xd9e92
	adds r0, r0, r1	@ 000d9e92 4018
.org 0xd9e94
	movs r1, #4	@ 000d9e94 0421
.org 0xd9e96
	str r1, [r4, #12]	@ 000d9e96 e160
.org 0xd9e98
	ldr r0, [r0, #0]	@ 000d9e98 0068
.org 0xd9e9a
	ldr r0, [r0, #16]	@ 000d9e9a 0069
.org 0xd9e9c
	str r0, [r4, #20]	@ 000d9e9c 6061
.org 0xd9e9e
	add sp, #8	@ 000d9e9e 02b0
.org 0xd9ea0
	pop {r4}	@ 000d9ea0 10bc
.org 0xd9ea2
	pop {r0}	@ 000d9ea2 01bc
.org 0xd9ea4
	bx r0	@ 000d9ea4 0047
