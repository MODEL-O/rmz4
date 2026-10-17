@ FUN_080b9d3c  entry 0x080b9d3c  size 48
.thumb
.org 0xb9d3c
FUN_080b9d3c:
	push {lr}	@ 000b9d3c 00b5
.org 0xb9d3e
	adds r2, r0, #0	@ 000b9d3e 021c
.org 0xb9d40
	ldrb r0, [r2, #18]	@ 000b9d40 907c
.org 0xb9d42
	cmp r0, #60	@ 000b9d42 3c28
.org 0xb9d44
	bne.n 0xb9d4a	@ 000b9d44 01d1
.org 0xb9d46
	movs r0, #0	@ 000b9d46 0020
.org 0xb9d48
	strb r0, [r2, #18]	@ 000b9d48 9074
.org 0xb9d4a
	ldrb r1, [r2, #18]	@ 000b9d4a 917c
.org 0xb9d4c
	adds r0, r1, #0	@ 000b9d4c 081c
.org 0xb9d4e
	subs r0, #15	@ 000b9d4e 0f38
.org 0xb9d50
	lsls r0, r0, #24	@ 000b9d50 0006
.org 0xb9d52
	lsrs r0, r0, #24	@ 000b9d52 000e
.org 0xb9d54
	cmp r0, #30	@ 000b9d54 1e28
.org 0xb9d56
	bls.n 0xb9d5e	@ 000b9d56 02d9
.org 0xb9d58
	ldr r0, [r2, #88]	@ 000b9d58 906d
.org 0xb9d5a
	adds r0, #64	@ 000b9d5a 4030
.org 0xb9d5c
	b.n 0xb9d62	@ 000b9d5c 01e0
.org 0xb9d5e
	ldr r0, [r2, #88]	@ 000b9d5e 906d
.org 0xb9d60
	subs r0, #64	@ 000b9d60 4038
.org 0xb9d62
	str r0, [r2, #88]	@ 000b9d62 9065
.org 0xb9d64
	adds r0, r1, #1	@ 000b9d64 481c
.org 0xb9d66
	strb r0, [r2, #18]	@ 000b9d66 9074
.org 0xb9d68
	pop {r0}	@ 000b9d68 01bc
.org 0xb9d6a
	bx r0	@ 000b9d6a 0047
