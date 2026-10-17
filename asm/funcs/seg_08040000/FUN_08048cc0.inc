@ FUN_08048cc0  entry 0x08048cc0  size 42
.thumb
.org 0x48cc0
FUN_08048cc0:
	push {lr}	@ 00048cc0 00b5
.org 0x48cc2
	adds r2, r0, #0	@ 00048cc2 021c
.org 0x48cc4
	ldr r0, [r2, #20]	@ 00048cc4 5069
.org 0x48cc6
	movs r1, #1	@ 00048cc6 0121
.org 0x48cc8
	ands r0, r1	@ 00048cc8 0840
.org 0x48cca
	cmp r0, #0	@ 00048cca 0028
.org 0x48ccc
	beq.n 0x48ce6	@ 00048ccc 0bd0
.org 0x48cce
	ldr r0, [r2, #12]	@ 00048cce d068
.org 0x48cd0
	ldr r0, [r0, #44]	@ 00048cd0 c06a
.org 0x48cd2
	ldr r2, [r2, #44]	@ 00048cd2 d26a
.org 0x48cd4
	movs r3, #0	@ 00048cd4 0023
.org 0x48cd6
	ldr r1, [r0, #84]	@ 00048cd6 416d
.org 0x48cd8
	ldr r0, [r2, #84]	@ 00048cd8 506d
.org 0x48cda
	cmp r1, r0	@ 00048cda 8142
.org 0x48cdc
	ble.n 0x48ce0	@ 00048cdc 00dd
.org 0x48cde
	movs r3, #1	@ 00048cde 0123
.org 0x48ce0
	adds r0, r2, #0	@ 00048ce0 101c
.org 0x48ce2
	adds r0, #188	@ 00048ce2 bc30
.org 0x48ce4
	strb r3, [r0, #0]	@ 00048ce4 0370
.org 0x48ce6
	pop {r0}	@ 00048ce6 01bc
.org 0x48ce8
	bx r0	@ 00048ce8 0047
