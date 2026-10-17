@ FUN_080b8d2c  entry 0x080b8d2c  size 52
.thumb
.org 0xb8d2c
FUN_080b8d2c:
	push {r4, lr}	@ 000b8d2c 10b5
.org 0xb8d2e
	adds r4, r0, #0	@ 000b8d2e 041c
.org 0xb8d30
	ldr r2, [r4, #40]	@ 000b8d30 a26a
.org 0xb8d32
	ldr r1, [pc, #44]	@ 000b8d32 0b49
.org 0xb8d34
	movs r0, #0	@ 000b8d34 0020
.org 0xb8d36
	strh r0, [r1, #0]	@ 000b8d36 0880
.org 0xb8d38
	adds r3, r4, #0	@ 000b8d38 231c
.org 0xb8d3a
	adds r3, #69	@ 000b8d3a 4533
.org 0xb8d3c
	ldrb r1, [r3, #0]	@ 000b8d3c 1978
.org 0xb8d3e
	subs r0, #13	@ 000b8d3e 0d38
.org 0xb8d40
	ands r0, r1	@ 000b8d40 0840
.org 0xb8d42
	strb r0, [r3, #0]	@ 000b8d42 1870
.org 0xb8d44
	adds r2, #204	@ 000b8d44 cc32
.org 0xb8d46
	ldrh r1, [r2, #0]	@ 000b8d46 1188
.org 0xb8d48
	movs r3, #0	@ 000b8d48 0023
.org 0xb8d4a
	ldrsh r0, [r2, r3]	@ 000b8d4a d05e
.org 0xb8d4c
	cmp r0, #0	@ 000b8d4c 0028
.org 0xb8d4e
	beq.n 0xb8d54	@ 000b8d4e 01d0
.org 0xb8d50
	subs r0, r1, #1	@ 000b8d50 481e
.org 0xb8d52
	strh r0, [r2, #0]	@ 000b8d52 1080
.org 0xb8d54
	adds r0, r4, #0	@ 000b8d54 201c
.org 0xb8d56
	bl 0x7f8ec	@ 000b8d56 c6f7c9fd
.org 0xb8d5a
	pop {r4}	@ 000b8d5a 10bc
.org 0xb8d5c
	pop {r0}	@ 000b8d5c 01bc
.org 0xb8d5e
	bx r0	@ 000b8d5e 0047
