@ FUN_0804a238  entry 0x0804a238  size 42
.thumb
.org 0x4a238
FUN_0804a238:
	push {lr}	@ 0004a238 00b5
.org 0x4a23a
	adds r2, r0, #0	@ 0004a23a 021c
.org 0x4a23c
	ldr r0, [r2, #20]	@ 0004a23c 5069
.org 0x4a23e
	movs r1, #1	@ 0004a23e 0121
.org 0x4a240
	ands r0, r1	@ 0004a240 0840
.org 0x4a242
	cmp r0, #0	@ 0004a242 0028
.org 0x4a244
	beq.n 0x4a25e	@ 0004a244 0bd0
.org 0x4a246
	ldr r0, [r2, #12]	@ 0004a246 d068
.org 0x4a248
	ldr r0, [r0, #44]	@ 0004a248 c06a
.org 0x4a24a
	ldr r2, [r2, #44]	@ 0004a24a d26a
.org 0x4a24c
	movs r3, #0	@ 0004a24c 0023
.org 0x4a24e
	ldr r1, [r0, #84]	@ 0004a24e 416d
.org 0x4a250
	ldr r0, [r2, #84]	@ 0004a250 506d
.org 0x4a252
	cmp r1, r0	@ 0004a252 8142
.org 0x4a254
	ble.n 0x4a258	@ 0004a254 00dd
.org 0x4a256
	movs r3, #1	@ 0004a256 0123
.org 0x4a258
	adds r0, r2, #0	@ 0004a258 101c
.org 0x4a25a
	adds r0, #188	@ 0004a25a bc30
.org 0x4a25c
	strb r3, [r0, #0]	@ 0004a25c 0370
.org 0x4a25e
	pop {r0}	@ 0004a25e 01bc
.org 0x4a260
	bx r0	@ 0004a260 0047
