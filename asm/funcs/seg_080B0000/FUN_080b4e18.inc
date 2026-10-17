@ FUN_080b4e18  entry 0x080b4e18  size 56
.thumb
.org 0xb4e18
FUN_080b4e18:
	push {lr}	@ 000b4e18 00b5
.org 0xb4e1a
	adds r3, r0, #0	@ 000b4e1a 031c
.org 0xb4e1c
	ldr r2, [r3, #44]	@ 000b4e1c da6a
.org 0xb4e1e
	cmp r2, #0	@ 000b4e1e 002a
.org 0xb4e20
	beq.n 0xb4e46	@ 000b4e20 11d0
.org 0xb4e22
	ldrb r0, [r2, #12]	@ 000b4e22 107b
.org 0xb4e24
	cmp r0, #1	@ 000b4e24 0128
.org 0xb4e26
	bhi.n 0xb4e46	@ 000b4e26 0ed8
.org 0xb4e28
	ldrb r1, [r2, #10]	@ 000b4e28 917a
.org 0xb4e2a
	movs r0, #254	@ 000b4e2a fe20
.org 0xb4e2c
	ands r0, r1	@ 000b4e2c 0840
.org 0xb4e2e
	movs r1, #253	@ 000b4e2e fd21
.org 0xb4e30
	ands r0, r1	@ 000b4e30 0840
.org 0xb4e32
	strb r0, [r2, #10]	@ 000b4e32 9072
.org 0xb4e34
	ldr r1, [pc, #24]	@ 000b4e34 0649
.org 0xb4e36
	ldrb r0, [r2, #9]	@ 000b4e36 507a
.org 0xb4e38
	lsls r0, r0, #2	@ 000b4e38 8000
.org 0xb4e3a
	adds r0, r0, r1	@ 000b4e3a 4018
.org 0xb4e3c
	movs r1, #3	@ 000b4e3c 0321
.org 0xb4e3e
	str r1, [r2, #12]	@ 000b4e3e d160
.org 0xb4e40
	ldr r0, [r0, #0]	@ 000b4e40 0068
.org 0xb4e42
	ldr r0, [r0, #12]	@ 000b4e42 c068
.org 0xb4e44
	str r0, [r2, #20]	@ 000b4e44 5061
.org 0xb4e46
	adds r0, r3, #0	@ 000b4e46 181c
.org 0xb4e48
	bl 0x7f8ec	@ 000b4e48 caf750fd
.org 0xb4e4c
	pop {r0}	@ 000b4e4c 01bc
.org 0xb4e4e
	bx r0	@ 000b4e4e 0047
