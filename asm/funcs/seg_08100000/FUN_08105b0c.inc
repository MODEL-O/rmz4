@ FUN_08105b0c  entry 0x08105b0c  size 58
.thumb
.org 0x105b0c
FUN_08105b0c:
	push {r4, lr}	@ 00105b0c 10b5
.org 0x105b0e
	adds r4, r0, #0	@ 00105b0e 041c
.org 0x105b10
	ldrb r1, [r4, #10]	@ 00105b10 a17a
.org 0x105b12
	movs r0, #1	@ 00105b12 0120
.org 0x105b14
	orrs r0, r1	@ 00105b14 0843
.org 0x105b16
	movs r1, #2	@ 00105b16 0221
.org 0x105b18
	orrs r0, r1	@ 00105b18 0843
.org 0x105b1a
	strb r0, [r4, #10]	@ 00105b1a a072
.org 0x105b1c
	adds r0, r4, #0	@ 00105b1c 201c
.org 0x105b1e
	bl 0x1cc9c	@ 00105b1e 17f7bdf8
.org 0x105b22
	adds r0, r4, #0	@ 00105b22 201c
.org 0x105b24
	bl 0x1ceec	@ 00105b24 17f7e2f9
.org 0x105b28
	ldr r1, [pc, #28]	@ 00105b28 0749
.org 0x105b2a
	ldrb r0, [r4, #9]	@ 00105b2a 607a
.org 0x105b2c
	lsls r0, r0, #2	@ 00105b2c 8000
.org 0x105b2e
	adds r0, r0, r1	@ 00105b2e 4018
.org 0x105b30
	movs r1, #1	@ 00105b30 0121
.org 0x105b32
	str r1, [r4, #12]	@ 00105b32 e160
.org 0x105b34
	ldr r0, [r0, #0]	@ 00105b34 0068
.org 0x105b36
	ldr r0, [r0, #4]	@ 00105b36 4068
.org 0x105b38
	str r0, [r4, #20]	@ 00105b38 6061
.org 0x105b3a
	adds r0, r4, #0	@ 00105b3a 201c
.org 0x105b3c
	bl 0x1057b8	@ 00105b3c fff73cfe
.org 0x105b40
	pop {r4}	@ 00105b40 10bc
.org 0x105b42
	pop {r0}	@ 00105b42 01bc
.org 0x105b44
	bx r0	@ 00105b44 0047
