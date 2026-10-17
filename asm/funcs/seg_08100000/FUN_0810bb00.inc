@ FUN_0810bb00  entry 0x0810bb00  size 70
.thumb
.org 0x10bb00
FUN_0810bb00:
	push {lr}	@ 0010bb00 00b5
.org 0x10bb02
	adds r2, r0, #0	@ 0010bb02 021c
.org 0x10bb04
	ldr r3, [r2, #40]	@ 0010bb04 936a
.org 0x10bb06
	ldrb r0, [r2, #17]	@ 0010bb06 507c
.org 0x10bb08
	cmp r0, #0	@ 0010bb08 0028
.org 0x10bb0a
	beq.n 0x10bb30	@ 0010bb0a 11d0
.org 0x10bb0c
	ldrb r0, [r3, #2]	@ 0010bb0c 9878
.org 0x10bb0e
	cmp r0, #2	@ 0010bb0e 0228
.org 0x10bb10
	beq.n 0x10bb1c	@ 0010bb10 04d0
.org 0x10bb12
	ldrb r1, [r2, #10]	@ 0010bb12 917a
.org 0x10bb14
	movs r0, #254	@ 0010bb14 fe20
.org 0x10bb16
	ands r0, r1	@ 0010bb16 0840
.org 0x10bb18
	strb r0, [r2, #10]	@ 0010bb18 9072
.org 0x10bb1a
	b.n 0x10bb46	@ 0010bb1a 14e0
.org 0x10bb1c
	ldrb r1, [r2, #10]	@ 0010bb1c 917a
.org 0x10bb1e
	movs r0, #1	@ 0010bb1e 0120
.org 0x10bb20
	orrs r0, r1	@ 0010bb20 0843
.org 0x10bb22
	strb r0, [r2, #10]	@ 0010bb22 9072
.org 0x10bb24
	ldr r1, [pc, #4]	@ 0010bb24 0149
.org 0x10bb26
	adds r0, r3, r1	@ 0010bb26 5818
.org 0x10bb28
	ldrb r0, [r0, #3]	@ 0010bb28 c078
.org 0x10bb2a
	b.n 0x10bb36	@ 0010bb2a 04e0
.org 0x10bb2c
	.byte 0xcc,0x0d,0x00,0x00	@ 0010bb2c data
.org 0x10bb30
	ldr r1, [pc, #24]	@ 0010bb30 0649
.org 0x10bb32
	adds r0, r3, r1	@ 0010bb32 5818
.org 0x10bb34
	ldrb r0, [r0, #0]	@ 0010bb34 0078
.org 0x10bb36
	lsls r0, r0, #13	@ 0010bb36 4003
.org 0x10bb38
	movs r1, #128	@ 0010bb38 8021
.org 0x10bb3a
	lsls r1, r1, #6	@ 0010bb3a 8901
.org 0x10bb3c
	adds r0, r0, r1	@ 0010bb3c 4018
.org 0x10bb3e
	str r0, [r2, #88]	@ 0010bb3e 9065
.org 0x10bb40
	adds r0, r2, #0	@ 0010bb40 101c
.org 0x10bb42
	bl 0x1cff0	@ 0010bb42 11f755fa
