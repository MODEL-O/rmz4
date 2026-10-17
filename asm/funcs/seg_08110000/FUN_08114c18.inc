@ FUN_08114c18  entry 0x08114c18  size 76
.thumb
.org 0x114c18
FUN_08114c18:
	push {lr}	@ 00114c18 00b5
.org 0x114c1a
	movs r3, #0	@ 00114c1a 0023
.org 0x114c1c
	ldr r2, [pc, #68]	@ 00114c1c 114a
.org 0x114c1e
	ldrb r1, [r2, #18]	@ 00114c1e 917c
.org 0x114c20
	movs r0, #1	@ 00114c20 0120
.org 0x114c22
	ands r0, r1	@ 00114c22 0840
.org 0x114c24
	cmp r0, #0	@ 00114c24 0028
.org 0x114c26
	bne.n 0x114c52	@ 00114c26 14d1
.org 0x114c28
	movs r1, #178	@ 00114c28 b221
.org 0x114c2a
	lsls r1, r1, #1	@ 00114c2a 4900
.org 0x114c2c
	adds r0, r2, r1	@ 00114c2c 5018
.org 0x114c2e
	ldr r0, [r0, #0]	@ 00114c2e 0068
.org 0x114c30
	cmp r0, #0	@ 00114c30 0028
.org 0x114c32
	bne.n 0x114c52	@ 00114c32 0ed1
.org 0x114c34
	ldr r0, [pc, #48]	@ 00114c34 0c48
.org 0x114c36
	ldrb r0, [r0, #2]	@ 00114c36 8078
.org 0x114c38
	cmp r0, #0	@ 00114c38 0028
.org 0x114c3a
	bne.n 0x114c52	@ 00114c3a 0ad1
.org 0x114c3c
	ldr r0, [pc, #44]	@ 00114c3c 0b48
.org 0x114c3e
	ldrb r0, [r0, #20]	@ 00114c3e 007d
.org 0x114c40
	cmp r0, #1	@ 00114c40 0128
.org 0x114c42
	beq.n 0x114c52	@ 00114c42 06d0
.org 0x114c44
	ldr r0, [pc, #40]	@ 00114c44 0a48
.org 0x114c46
	ldr r0, [r0, #8]	@ 00114c46 8068
.org 0x114c48
	cmp r0, #0	@ 00114c48 0028
.org 0x114c4a
	beq.n 0x114c52	@ 00114c4a 02d0
.org 0x114c4c
	bl 0x10de84	@ 00114c4c f9f71af9
.org 0x114c50
	movs r3, #1	@ 00114c50 0123
.org 0x114c52
	adds r1, r3, #0	@ 00114c52 191c
.org 0x114c54
	cmp r1, #0	@ 00114c54 0029
.org 0x114c56
	bne.n 0x114c5c	@ 00114c56 01d1
.org 0x114c58
	ldr r0, [pc, #20]	@ 00114c58 0548
.org 0x114c5a
	strh r1, [r0, #4]	@ 00114c5a 8180
.org 0x114c5c
	bl 0x10df70	@ 00114c5c f9f788f9
.org 0x114c60
	pop {r0}	@ 00114c60 01bc
.org 0x114c62
	bx r0	@ 00114c62 0047
