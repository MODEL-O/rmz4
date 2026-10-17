@ FUN_08084c24  entry 0x08084c24  size 58
.thumb
.org 0x84c24
FUN_08084c24:
	push {r4, lr}	@ 00084c24 10b5
.org 0x84c26
	adds r4, r0, #0	@ 00084c26 041c
.org 0x84c28
	bl 0x84ac0	@ 00084c28 fff74aff
.org 0x84c2c
	lsls r0, r0, #24	@ 00084c2c 0006
.org 0x84c2e
	cmp r0, #0	@ 00084c2e 0028
.org 0x84c30
	bne.n 0x84c58	@ 00084c30 12d1
.org 0x84c32
	adds r0, r4, #0	@ 00084c32 201c
.org 0x84c34
	bl 0x84b10	@ 00084c34 fff76cff
.org 0x84c38
	ldr r1, [pc, #36]	@ 00084c38 0949
.org 0x84c3a
	ldrb r0, [r4, #13]	@ 00084c3a 607b
.org 0x84c3c
	lsls r0, r0, #2	@ 00084c3c 8000
.org 0x84c3e
	adds r0, r0, r1	@ 00084c3e 4018
.org 0x84c40
	ldr r1, [r0, #0]	@ 00084c40 0168
.org 0x84c42
	adds r0, r4, #0	@ 00084c42 201c
.org 0x84c44
	bl 0x128f80	@ 00084c44 a4f09cf9
.org 0x84c48
	ldr r1, [pc, #24]	@ 00084c48 0649
.org 0x84c4a
	ldrb r0, [r4, #13]	@ 00084c4a 607b
.org 0x84c4c
	lsls r0, r0, #2	@ 00084c4c 8000
.org 0x84c4e
	adds r0, r0, r1	@ 00084c4e 4018
.org 0x84c50
	ldr r1, [r0, #0]	@ 00084c50 0168
.org 0x84c52
	adds r0, r4, #0	@ 00084c52 201c
.org 0x84c54
	bl 0x128f80	@ 00084c54 a4f094f9
.org 0x84c58
	pop {r4}	@ 00084c58 10bc
.org 0x84c5a
	pop {r0}	@ 00084c5a 01bc
.org 0x84c5c
	bx r0	@ 00084c5c 0047
