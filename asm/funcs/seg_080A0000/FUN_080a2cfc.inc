@ FUN_080a2cfc  entry 0x080a2cfc  size 64
.thumb
.org 0xa2cfc
FUN_080a2cfc:
	push {r4, lr}	@ 000a2cfc 10b5
.org 0xa2cfe
	ldr r4, [r0, #44]	@ 000a2cfe c46a
.org 0xa2d00
	ldr r1, [r0, #20]	@ 000a2d00 4169
.org 0xa2d02
	movs r0, #1	@ 000a2d02 0120
.org 0xa2d04
	ands r0, r1	@ 000a2d04 0840
.org 0xa2d06
	cmp r0, #0	@ 000a2d06 0028
.org 0xa2d08
	beq.n 0xa2d36	@ 000a2d08 15d0
.org 0xa2d0a
	ldr r0, [pc, #48]	@ 000a2d0a 0c48
.org 0xa2d0c
	ldr r2, [r0, #0]	@ 000a2d0c 0268
.org 0xa2d0e
	movs r0, #128	@ 000a2d0e 8020
.org 0xa2d10
	lsls r0, r0, #2	@ 000a2d10 8000
.org 0xa2d12
	ands r0, r1	@ 000a2d12 0840
.org 0xa2d14
	cmp r0, #0	@ 000a2d14 0028
.org 0xa2d16
	beq.n 0xa2d36	@ 000a2d16 0ed0
.org 0xa2d18
	movs r0, #128	@ 000a2d18 8020
.org 0xa2d1a
	lsls r0, r0, #10	@ 000a2d1a 8002
.org 0xa2d1c
	ands r1, r0	@ 000a2d1c 0140
.org 0xa2d1e
	cmp r1, #0	@ 000a2d1e 0029
.org 0xa2d20
	beq.n 0xa2d36	@ 000a2d20 09d0
.org 0xa2d22
	cmp r2, #0	@ 000a2d22 002a
.org 0xa2d24
	beq.n 0xa2d36	@ 000a2d24 07d0
.org 0xa2d26
	adds r0, r2, #0	@ 000a2d26 101c
.org 0xa2d28
	movs r1, #4	@ 000a2d28 0421
.org 0xa2d2a
	movs r2, #2	@ 000a2d2a 0222
.org 0xa2d2c
	bl 0x3a578	@ 000a2d2c 97f724fc
.org 0xa2d30
	adds r1, r4, #0	@ 000a2d30 211c
.org 0xa2d32
	adds r1, #184	@ 000a2d32 b831
.org 0xa2d34
	strb r0, [r1, #0]	@ 000a2d34 0870
.org 0xa2d36
	pop {r4}	@ 000a2d36 10bc
.org 0xa2d38
	pop {r0}	@ 000a2d38 01bc
.org 0xa2d3a
	bx r0	@ 000a2d3a 0047
