@ FUN_08027c00  entry 0x08027c00  size 26
.thumb
.org 0x27c00
FUN_08027c00:
	push {lr}	@ 00027c00 00b5
.org 0x27c02
	ldr r1, [r0, #16]	@ 00027c02 0169
.org 0x27c04
	cmp r1, #0	@ 00027c04 0029
.org 0x27c06
	beq.n 0x27c16	@ 00027c06 06d0
.org 0x27c08
	movs r2, #176	@ 00027c08 b022
.org 0x27c0a
	lsls r2, r2, #1	@ 00027c0a 5200
.org 0x27c0c
	adds r0, r0, r2	@ 00027c0c 8018
.org 0x27c0e
	ldr r0, [r0, #0]	@ 00027c0e 0068
.org 0x27c10
	cmp r0, #0	@ 00027c10 0028
.org 0x27c12
	ble.n 0x27c16	@ 00027c12 00dd
.org 0x27c14
	str r0, [r1, #84]	@ 00027c14 4865
.org 0x27c16
	pop {r0}	@ 00027c16 01bc
.org 0x27c18
	bx r0	@ 00027c18 0047
