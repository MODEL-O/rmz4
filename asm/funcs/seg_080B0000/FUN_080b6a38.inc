@ FUN_080b6a38  entry 0x080b6a38  size 78
.thumb
.org 0xb6a38
FUN_080b6a38:
	push {r4, r5, r6, r7, lr}	@ 000b6a38 f0b5
.org 0xb6a3a
	sub sp, #16	@ 000b6a3a 84b0
.org 0xb6a3c
	ldr r1, [pc, #72]	@ 000b6a3c 1249
.org 0xb6a3e
	ldr r2, [r1, #4]	@ 000b6a3e 4a68
.org 0xb6a40
	ldr r1, [r1, #0]	@ 000b6a40 0968
.org 0xb6a42
	str r1, [sp, #8]	@ 000b6a42 0291
.org 0xb6a44
	str r2, [sp, #12]	@ 000b6a44 0392
.org 0xb6a46
	ldrb r3, [r0, #16]	@ 000b6a46 037c
.org 0xb6a48
	ldrb r2, [r0, #10]	@ 000b6a48 827a
.org 0xb6a4a
	lsrs r2, r2, #4	@ 000b6a4a 1209
.org 0xb6a4c
	movs r1, #1	@ 000b6a4c 0121
.org 0xb6a4e
	ands r2, r1	@ 000b6a4e 0a40
.org 0xb6a50
	ldr r1, [r0, #84]	@ 000b6a50 416d
.org 0xb6a52
	str r1, [sp, #0]	@ 000b6a52 0091
.org 0xb6a54
	ldr r0, [r0, #88]	@ 000b6a54 806d
.org 0xb6a56
	str r0, [sp, #4]	@ 000b6a56 0190
.org 0xb6a58
	add r0, sp, #8	@ 000b6a58 02a8
.org 0xb6a5a
	lsls r3, r3, #2	@ 000b6a5a 9b00
.org 0xb6a5c
	adds r7, r3, r0	@ 000b6a5c 1f18
.org 0xb6a5e
	movs r5, #0	@ 000b6a5e 0025
.org 0xb6a60
	lsls r0, r2, #4	@ 000b6a60 1001
.org 0xb6a62
	orrs r2, r0	@ 000b6a62 0243
.org 0xb6a64
	lsls r6, r2, #24	@ 000b6a64 1606
.org 0xb6a66
	movs r4, #3	@ 000b6a66 0324
.org 0xb6a68
	ldr r1, [r7, #0]	@ 000b6a68 3968
.org 0xb6a6a
	adds r1, r1, r5	@ 000b6a6a 4919
.org 0xb6a6c
	mov r0, sp	@ 000b6a6c 6846
.org 0xb6a6e
	movs r2, #0	@ 000b6a6e 0022
.org 0xb6a70
	lsrs r3, r6, #24	@ 000b6a70 330e
.org 0xb6a72
	bl 0xd4c8c	@ 000b6a72 1ef00bf9
.org 0xb6a76
	adds r5, #28	@ 000b6a76 1c35
.org 0xb6a78
	subs r4, #1	@ 000b6a78 013c
.org 0xb6a7a
	cmp r4, #0	@ 000b6a7a 002c
.org 0xb6a7c
	bge.n 0xb6a68	@ 000b6a7c f4da
.org 0xb6a7e
	add sp, #16	@ 000b6a7e 04b0
.org 0xb6a80
	pop {r4, r5, r6, r7}	@ 000b6a80 f0bc
.org 0xb6a82
	pop {r0}	@ 000b6a82 01bc
.org 0xb6a84
	bx r0	@ 000b6a84 0047
