@ FUN_08048218  entry 0x08048218  size 42
.thumb
.org 0x48218
FUN_08048218:
	push {lr}	@ 00048218 00b5
.org 0x4821a
	adds r2, r0, #0	@ 0004821a 021c
.org 0x4821c
	ldr r0, [r2, #20]	@ 0004821c 5069
.org 0x4821e
	movs r1, #1	@ 0004821e 0121
.org 0x48220
	ands r0, r1	@ 00048220 0840
.org 0x48222
	cmp r0, #0	@ 00048222 0028
.org 0x48224
	beq.n 0x4823e	@ 00048224 0bd0
.org 0x48226
	ldr r0, [r2, #12]	@ 00048226 d068
.org 0x48228
	ldr r0, [r0, #44]	@ 00048228 c06a
.org 0x4822a
	ldr r2, [r2, #44]	@ 0004822a d26a
.org 0x4822c
	movs r3, #0	@ 0004822c 0023
.org 0x4822e
	ldr r1, [r0, #84]	@ 0004822e 416d
.org 0x48230
	ldr r0, [r2, #84]	@ 00048230 506d
.org 0x48232
	cmp r1, r0	@ 00048232 8142
.org 0x48234
	ble.n 0x48238	@ 00048234 00dd
.org 0x48236
	movs r3, #1	@ 00048236 0123
.org 0x48238
	adds r0, r2, #0	@ 00048238 101c
.org 0x4823a
	adds r0, #188	@ 0004823a bc30
.org 0x4823c
	strb r3, [r0, #0]	@ 0004823c 0370
.org 0x4823e
	pop {r0}	@ 0004823e 01bc
.org 0x48240
	bx r0	@ 00048240 0047
