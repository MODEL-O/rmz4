@ FUN_080d1c50  entry 0x080d1c50  size 102
.thumb
.org 0xd1c50
FUN_080d1c50:
	push {r4, lr}	@ 000d1c50 10b5
.org 0xd1c52
	sub sp, #8	@ 000d1c52 82b0
.org 0xd1c54
	adds r2, r0, #0	@ 000d1c54 021c
.org 0xd1c56
	lsls r1, r1, #24	@ 000d1c56 0906
.org 0xd1c58
	lsrs r4, r1, #24	@ 000d1c58 0c0e
.org 0xd1c5a
	cmp r4, #0	@ 000d1c5a 002c
.org 0xd1c5c
	beq.n 0xd1c66	@ 000d1c5c 03d0
.org 0xd1c5e
	ldr r0, [r2, #0]	@ 000d1c5e 1068
.org 0xd1c60
	movs r1, #136	@ 000d1c60 8821
.org 0xd1c62
	lsls r1, r1, #6	@ 000d1c62 8901
.org 0xd1c64
	b.n 0xd1c6a	@ 000d1c64 01e0
.org 0xd1c66
	ldr r0, [r2, #0]	@ 000d1c66 1068
.org 0xd1c68
	ldr r1, [pc, #76]	@ 000d1c68 1349
.org 0xd1c6a
	adds r0, r0, r1	@ 000d1c6a 4018
.org 0xd1c6c
	str r0, [sp, #0]	@ 000d1c6c 0090
.org 0xd1c6e
	ldr r0, [r2, #4]	@ 000d1c6e 5068
.org 0xd1c70
	str r0, [sp, #4]	@ 000d1c70 0190
.org 0xd1c72
	mov r0, sp	@ 000d1c72 6846
.org 0xd1c74
	movs r1, #3	@ 000d1c74 0321
.org 0xd1c76
	movs r2, #0	@ 000d1c76 0022
.org 0xd1c78
	bl 0xd1bcc	@ 000d1c78 fff7a8ff
.org 0xd1c7c
	mov r0, sp	@ 000d1c7c 6846
.org 0xd1c7e
	movs r1, #3	@ 000d1c7e 0321
.org 0xd1c80
	movs r2, #1	@ 000d1c80 0122
.org 0xd1c82
	bl 0xd1bcc	@ 000d1c82 fff7a3ff
.org 0xd1c86
	mov r0, sp	@ 000d1c86 6846
.org 0xd1c88
	movs r1, #4	@ 000d1c88 0421
.org 0xd1c8a
	adds r2, r4, #0	@ 000d1c8a 221c
.org 0xd1c8c
	bl 0xd1bcc	@ 000d1c8c fff79eff
.org 0xd1c90
	mov r0, sp	@ 000d1c90 6846
.org 0xd1c92
	movs r1, #4	@ 000d1c92 0421
.org 0xd1c94
	adds r2, r4, #0	@ 000d1c94 221c
.org 0xd1c96
	bl 0xd1bcc	@ 000d1c96 fff799ff
.org 0xd1c9a
	mov r0, sp	@ 000d1c9a 6846
.org 0xd1c9c
	movs r1, #5	@ 000d1c9c 0521
.org 0xd1c9e
	adds r2, r4, #0	@ 000d1c9e 221c
.org 0xd1ca0
	bl 0xd1bcc	@ 000d1ca0 fff794ff
.org 0xd1ca4
	mov r0, sp	@ 000d1ca4 6846
.org 0xd1ca6
	movs r1, #5	@ 000d1ca6 0521
.org 0xd1ca8
	adds r2, r4, #0	@ 000d1ca8 221c
.org 0xd1caa
	bl 0xd1bcc	@ 000d1caa fff78fff
.org 0xd1cae
	add sp, #8	@ 000d1cae 02b0
.org 0xd1cb0
	pop {r4}	@ 000d1cb0 10bc
.org 0xd1cb2
	pop {r0}	@ 000d1cb2 01bc
.org 0xd1cb4
	bx r0	@ 000d1cb4 0047
