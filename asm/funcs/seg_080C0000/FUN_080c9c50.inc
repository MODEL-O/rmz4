@ FUN_080c9c50  entry 0x080c9c50  size 62
.thumb
.org 0xc9c50
FUN_080c9c50:
	push {r4, lr}	@ 000c9c50 10b5
.org 0xc9c52
	adds r4, r0, #0	@ 000c9c52 041c
.org 0xc9c54
	bl 0x1cc9c	@ 000c9c54 53f722f8
.org 0xc9c58
	ldrb r1, [r4, #10]	@ 000c9c58 a17a
.org 0xc9c5a
	movs r0, #2	@ 000c9c5a 0220
.org 0xc9c5c
	orrs r0, r1	@ 000c9c5c 0843
.org 0xc9c5e
	strb r0, [r4, #10]	@ 000c9c5e a072
.org 0xc9c60
	ldr r1, [pc, #44]	@ 000c9c60 0b49
.org 0xc9c62
	ldrb r0, [r4, #9]	@ 000c9c62 607a
.org 0xc9c64
	lsls r0, r0, #2	@ 000c9c64 8000
.org 0xc9c66
	adds r0, r0, r1	@ 000c9c66 4018
.org 0xc9c68
	movs r1, #1	@ 000c9c68 0121
.org 0xc9c6a
	str r1, [r4, #12]	@ 000c9c6a e160
.org 0xc9c6c
	ldr r0, [r0, #0]	@ 000c9c6c 0068
.org 0xc9c6e
	ldr r0, [r0, #4]	@ 000c9c6e 4068
.org 0xc9c70
	str r0, [r4, #20]	@ 000c9c70 6061
.org 0xc9c72
	ldr r1, [pc, #32]	@ 000c9c72 0849
.org 0xc9c74
	ldrb r0, [r4, #16]	@ 000c9c74 207c
.org 0xc9c76
	lsls r0, r0, #2	@ 000c9c76 8000
.org 0xc9c78
	adds r0, r0, r1	@ 000c9c78 4018
.org 0xc9c7a
	ldr r1, [r0, #0]	@ 000c9c7a 0168
.org 0xc9c7c
	adds r0, r4, #0	@ 000c9c7c 201c
.org 0xc9c7e
	bl 0x128f80	@ 000c9c7e 5ff07ff9
.org 0xc9c82
	adds r0, r4, #0	@ 000c9c82 201c
.org 0xc9c84
	bl 0xc9c98	@ 000c9c84 00f008f8
.org 0xc9c88
	pop {r4}	@ 000c9c88 10bc
.org 0xc9c8a
	pop {r0}	@ 000c9c8a 01bc
.org 0xc9c8c
	bx r0	@ 000c9c8c 0047
