@ FUN_0804dc2c  entry 0x0804dc2c  size 42
.thumb
.org 0x4dc2c
FUN_0804dc2c:
	push {lr}	@ 0004dc2c 00b5
.org 0x4dc2e
	adds r2, r0, #0	@ 0004dc2e 021c
.org 0x4dc30
	ldr r0, [r2, #20]	@ 0004dc30 5069
.org 0x4dc32
	movs r1, #1	@ 0004dc32 0121
.org 0x4dc34
	ands r0, r1	@ 0004dc34 0840
.org 0x4dc36
	cmp r0, #0	@ 0004dc36 0028
.org 0x4dc38
	beq.n 0x4dc52	@ 0004dc38 0bd0
.org 0x4dc3a
	ldr r0, [r2, #12]	@ 0004dc3a d068
.org 0x4dc3c
	ldr r0, [r0, #44]	@ 0004dc3c c06a
.org 0x4dc3e
	ldr r2, [r2, #44]	@ 0004dc3e d26a
.org 0x4dc40
	movs r3, #0	@ 0004dc40 0023
.org 0x4dc42
	ldr r1, [r0, #84]	@ 0004dc42 416d
.org 0x4dc44
	ldr r0, [r2, #84]	@ 0004dc44 506d
.org 0x4dc46
	cmp r1, r0	@ 0004dc46 8142
.org 0x4dc48
	ble.n 0x4dc4c	@ 0004dc48 00dd
.org 0x4dc4a
	movs r3, #1	@ 0004dc4a 0123
.org 0x4dc4c
	adds r0, r2, #0	@ 0004dc4c 101c
.org 0x4dc4e
	adds r0, #188	@ 0004dc4e bc30
.org 0x4dc50
	strb r3, [r0, #0]	@ 0004dc50 0370
.org 0x4dc52
	pop {r0}	@ 0004dc52 01bc
.org 0x4dc54
	bx r0	@ 0004dc54 0047
