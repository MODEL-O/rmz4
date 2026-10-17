@ FUN_080c3f64  entry 0x080c3f64  size 60
.thumb
.org 0xc3f64
FUN_080c3f64:
	push {r4, lr}	@ 000c3f64 10b5
.org 0xc3f66
	adds r4, r0, #0	@ 000c3f66 041c
.org 0xc3f68
	ldr r1, [pc, #52]	@ 000c3f68 0d49
.org 0xc3f6a
	ldrb r0, [r4, #9]	@ 000c3f6a 607a
.org 0xc3f6c
	lsls r0, r0, #2	@ 000c3f6c 8000
.org 0xc3f6e
	adds r0, r0, r1	@ 000c3f6e 4018
.org 0xc3f70
	movs r1, #1	@ 000c3f70 0121
.org 0xc3f72
	str r1, [r4, #12]	@ 000c3f72 e160
.org 0xc3f74
	ldr r0, [r0, #0]	@ 000c3f74 0068
.org 0xc3f76
	ldr r0, [r0, #4]	@ 000c3f76 4068
.org 0xc3f78
	str r0, [r4, #20]	@ 000c3f78 6061
.org 0xc3f7a
	ldrb r1, [r4, #10]	@ 000c3f7a a17a
.org 0xc3f7c
	movs r0, #1	@ 000c3f7c 0120
.org 0xc3f7e
	movs r2, #0	@ 000c3f7e 0022
.org 0xc3f80
	orrs r0, r1	@ 000c3f80 0843
.org 0xc3f82
	movs r1, #2	@ 000c3f82 0221
.org 0xc3f84
	orrs r0, r1	@ 000c3f84 0843
.org 0xc3f86
	strb r0, [r4, #10]	@ 000c3f86 a072
.org 0xc3f88
	adds r0, r4, #0	@ 000c3f88 201c
.org 0xc3f8a
	adds r0, #184	@ 000c3f8a b830
.org 0xc3f8c
	str r2, [r0, #0]	@ 000c3f8c 0260
.org 0xc3f8e
	adds r0, r4, #0	@ 000c3f8e 201c
.org 0xc3f90
	bl 0x1cc9c	@ 000c3f90 58f784fe
.org 0xc3f94
	adds r0, r4, #0	@ 000c3f94 201c
.org 0xc3f96
	bl 0xc4000	@ 000c3f96 00f033f8
.org 0xc3f9a
	pop {r4}	@ 000c3f9a 10bc
.org 0xc3f9c
	pop {r0}	@ 000c3f9c 01bc
.org 0xc3f9e
	bx r0	@ 000c3f9e 0047
