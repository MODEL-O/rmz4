@ FUN_080e3a68  entry 0x080e3a68  size 70
.thumb
.org 0xe3a68
FUN_080e3a68:
	push {r4, lr}	@ 000e3a68 10b5
.org 0xe3a6a
	sub sp, #8	@ 000e3a6a 82b0
.org 0xe3a6c
	adds r4, r0, #0	@ 000e3a6c 041c
.org 0xe3a6e
	bl 0xe38a0	@ 000e3a6e fff717ff
.org 0xe3a72
	ldr r0, [r4, #84]	@ 000e3a72 606d
.org 0xe3a74
	str r0, [sp, #0]	@ 000e3a74 0090
.org 0xe3a76
	ldr r0, [r4, #88]	@ 000e3a76 a06d
.org 0xe3a78
	ldr r1, [pc, #52]	@ 000e3a78 0d49
.org 0xe3a7a
	adds r0, r0, r1	@ 000e3a7a 4018
.org 0xe3a7c
	str r0, [sp, #4]	@ 000e3a7c 0190
.org 0xe3a7e
	movs r0, #1	@ 000e3a7e 0120
.org 0xe3a80
	mov r1, sp	@ 000e3a80 6946
.org 0xe3a82
	bl 0xd0c88	@ 000e3a82 edf701f9
.org 0xe3a86
	movs r0, #42	@ 000e3a86 2a20
.org 0xe3a88
	bl 0x2b10	@ 000e3a88 1ff742f8
.org 0xe3a8c
	movs r3, #1	@ 000e3a8c 0123
.org 0xe3a8e
	strb r3, [r4, #17]	@ 000e3a8e 6374
.org 0xe3a90
	adds r0, r4, #0	@ 000e3a90 201c
.org 0xe3a92
	adds r0, #84	@ 000e3a92 5430
.org 0xe3a94
	ldr r1, [pc, #28]	@ 000e3a94 0749
.org 0xe3a96
	ldrb r2, [r4, #10]	@ 000e3a96 a27a
.org 0xe3a98
	lsrs r2, r2, #4	@ 000e3a98 1209
.org 0xe3a9a
	ands r2, r3	@ 000e3a9a 1a40
.org 0xe3a9c
	bl 0xe37a0	@ 000e3a9c fff780fe
.org 0xe3aa0
	adds r0, r4, #0	@ 000e3aa0 201c
.org 0xe3aa2
	bl 0xe3ab8	@ 000e3aa2 00f009f8
.org 0xe3aa6
	add sp, #8	@ 000e3aa6 02b0
.org 0xe3aa8
	pop {r4}	@ 000e3aa8 10bc
.org 0xe3aaa
	pop {r0}	@ 000e3aaa 01bc
.org 0xe3aac
	bx r0	@ 000e3aac 0047
