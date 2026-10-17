@ FUN_08046b24  entry 0x08046b24  size 42
.thumb
.org 0x46b24
FUN_08046b24:
	push {lr}	@ 00046b24 00b5
.org 0x46b26
	adds r2, r0, #0	@ 00046b26 021c
.org 0x46b28
	ldr r0, [r2, #20]	@ 00046b28 5069
.org 0x46b2a
	movs r1, #1	@ 00046b2a 0121
.org 0x46b2c
	ands r0, r1	@ 00046b2c 0840
.org 0x46b2e
	cmp r0, #0	@ 00046b2e 0028
.org 0x46b30
	beq.n 0x46b4a	@ 00046b30 0bd0
.org 0x46b32
	ldr r0, [r2, #12]	@ 00046b32 d068
.org 0x46b34
	ldr r0, [r0, #44]	@ 00046b34 c06a
.org 0x46b36
	ldr r2, [r2, #44]	@ 00046b36 d26a
.org 0x46b38
	movs r3, #0	@ 00046b38 0023
.org 0x46b3a
	ldr r1, [r0, #84]	@ 00046b3a 416d
.org 0x46b3c
	ldr r0, [r2, #84]	@ 00046b3c 506d
.org 0x46b3e
	cmp r1, r0	@ 00046b3e 8142
.org 0x46b40
	ble.n 0x46b44	@ 00046b40 00dd
.org 0x46b42
	movs r3, #1	@ 00046b42 0123
.org 0x46b44
	adds r0, r2, #0	@ 00046b44 101c
.org 0x46b46
	adds r0, #188	@ 00046b46 bc30
.org 0x46b48
	strb r3, [r0, #0]	@ 00046b48 0370
.org 0x46b4a
	pop {r0}	@ 00046b4a 01bc
.org 0x46b4c
	bx r0	@ 00046b4c 0047
