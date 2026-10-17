@ FUN_080c4cec  entry 0x080c4cec  size 60
.thumb
.org 0xc4cec
FUN_080c4cec:
	push {r4, lr}	@ 000c4cec 10b5
.org 0xc4cee
	adds r4, r0, #0	@ 000c4cee 041c
.org 0xc4cf0
	ldr r1, [pc, #52]	@ 000c4cf0 0d49
.org 0xc4cf2
	ldrb r0, [r4, #9]	@ 000c4cf2 607a
.org 0xc4cf4
	lsls r0, r0, #2	@ 000c4cf4 8000
.org 0xc4cf6
	adds r0, r0, r1	@ 000c4cf6 4018
.org 0xc4cf8
	movs r1, #1	@ 000c4cf8 0121
.org 0xc4cfa
	str r1, [r4, #12]	@ 000c4cfa e160
.org 0xc4cfc
	ldr r0, [r0, #0]	@ 000c4cfc 0068
.org 0xc4cfe
	ldr r0, [r0, #4]	@ 000c4cfe 4068
.org 0xc4d00
	str r0, [r4, #20]	@ 000c4d00 6061
.org 0xc4d02
	ldrb r1, [r4, #10]	@ 000c4d02 a17a
.org 0xc4d04
	movs r0, #254	@ 000c4d04 fe20
.org 0xc4d06
	ands r0, r1	@ 000c4d06 0840
.org 0xc4d08
	movs r2, #0	@ 000c4d08 0022
.org 0xc4d0a
	movs r1, #2	@ 000c4d0a 0221
.org 0xc4d0c
	orrs r0, r1	@ 000c4d0c 0843
.org 0xc4d0e
	strb r0, [r4, #10]	@ 000c4d0e a072
.org 0xc4d10
	adds r0, r4, #0	@ 000c4d10 201c
.org 0xc4d12
	adds r0, #180	@ 000c4d12 b430
.org 0xc4d14
	strb r2, [r0, #0]	@ 000c4d14 0270
.org 0xc4d16
	adds r0, r4, #0	@ 000c4d16 201c
.org 0xc4d18
	bl 0x1cc9c	@ 000c4d18 57f7c0ff
.org 0xc4d1c
	adds r0, r4, #0	@ 000c4d1c 201c
.org 0xc4d1e
	bl 0xc4eac	@ 000c4d1e 00f0c5f8
.org 0xc4d22
	pop {r4}	@ 000c4d22 10bc
.org 0xc4d24
	pop {r0}	@ 000c4d24 01bc
.org 0xc4d26
	bx r0	@ 000c4d26 0047
