@ FUN_0804c890  entry 0x0804c890  size 72
.thumb
.org 0x4c890
FUN_0804c890:
	push {r4, lr}	@ 0004c890 10b5
.org 0x4c892
	adds r4, r0, #0	@ 0004c892 041c
.org 0x4c894
	ldr r1, [pc, #64]	@ 0004c894 1049
.org 0x4c896
	ldrb r0, [r4, #9]	@ 0004c896 607a
.org 0x4c898
	lsls r0, r0, #2	@ 0004c898 8000
.org 0x4c89a
	adds r0, r0, r1	@ 0004c89a 4018
.org 0x4c89c
	movs r1, #1	@ 0004c89c 0121
.org 0x4c89e
	str r1, [r4, #12]	@ 0004c89e e160
.org 0x4c8a0
	ldr r0, [r0, #0]	@ 0004c8a0 0068
.org 0x4c8a2
	ldr r0, [r0, #4]	@ 0004c8a2 4068
.org 0x4c8a4
	str r0, [r4, #20]	@ 0004c8a4 6061
.org 0x4c8a6
	adds r0, r4, #0	@ 0004c8a6 201c
.org 0x4c8a8
	bl 0x1cc9c	@ 0004c8a8 d0f7f8f9
.org 0x4c8ac
	adds r0, r4, #0	@ 0004c8ac 201c
.org 0x4c8ae
	bl 0x1ceec	@ 0004c8ae d0f71dfb
.org 0x4c8b2
	ldrb r1, [r4, #10]	@ 0004c8b2 a17a
.org 0x4c8b4
	movs r0, #1	@ 0004c8b4 0120
.org 0x4c8b6
	orrs r0, r1	@ 0004c8b6 0843
.org 0x4c8b8
	movs r1, #2	@ 0004c8b8 0221
.org 0x4c8ba
	orrs r0, r1	@ 0004c8ba 0843
.org 0x4c8bc
	strb r0, [r4, #10]	@ 0004c8bc a072
.org 0x4c8be
	ldr r1, [pc, #28]	@ 0004c8be 0749
.org 0x4c8c0
	adds r0, r4, #0	@ 0004c8c0 201c
.org 0x4c8c2
	bl 0x1cf00	@ 0004c8c2 d0f71dfb
.org 0x4c8c6
	adds r0, r4, #0	@ 0004c8c6 201c
.org 0x4c8c8
	bl 0x1cff0	@ 0004c8c8 d0f792fb
.org 0x4c8cc
	adds r0, r4, #0	@ 0004c8cc 201c
.org 0x4c8ce
	bl 0x4c728	@ 0004c8ce fff72bff
.org 0x4c8d2
	pop {r4}	@ 0004c8d2 10bc
.org 0x4c8d4
	pop {r0}	@ 0004c8d4 01bc
.org 0x4c8d6
	bx r0	@ 0004c8d6 0047
