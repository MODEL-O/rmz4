@ FUN_08066c40  entry 0x08066c40  size 90
.thumb
.org 0x66c40
FUN_08066c40:
	push {r4, lr}	@ 00066c40 10b5
.org 0x66c42
	adds r4, r0, #0	@ 00066c42 041c
.org 0x66c44
	ldrb r0, [r4, #14]	@ 00066c44 a07b
.org 0x66c46
	cmp r0, #0	@ 00066c46 0028
.org 0x66c48
	bne.n 0x66c6c	@ 00066c48 10d1
.org 0x66c4a
	ldrb r0, [r4, #30]	@ 00066c4a a07f
.org 0x66c4c
	lsls r0, r0, #8	@ 00066c4c 0002
.org 0x66c4e
	adds r1, r4, #0	@ 00066c4e 211c
.org 0x66c50
	adds r1, #112	@ 00066c50 7031
.org 0x66c52
	ldrb r1, [r1, #0]	@ 00066c52 0978
.org 0x66c54
	orrs r0, r1	@ 00066c54 0843
.org 0x66c56
	ldr r1, [pc, #68]	@ 00066c56 1149
.org 0x66c58
	cmp r0, r1	@ 00066c58 8842
.org 0x66c5a
	beq.n 0x66c62	@ 00066c5a 02d0
.org 0x66c5c
	adds r0, r4, #0	@ 00066c5c 201c
.org 0x66c5e
	bl 0x1cf00	@ 00066c5e b6f74ff9
.org 0x66c62
	ldrb r0, [r4, #14]	@ 00066c62 a07b
.org 0x66c64
	adds r0, #1	@ 00066c64 0130
.org 0x66c66
	strb r0, [r4, #14]	@ 00066c66 a073
.org 0x66c68
	movs r0, #2	@ 00066c68 0220
.org 0x66c6a
	strb r0, [r4, #15]	@ 00066c6a e073
.org 0x66c6c
	ldrb r0, [r4, #15]	@ 00066c6c e07b
.org 0x66c6e
	cmp r0, #0	@ 00066c6e 0028
.org 0x66c70
	blt.n 0x66c8e	@ 00066c70 0ddb
.org 0x66c72
	cmp r0, #1	@ 00066c72 0128
.org 0x66c74
	ble.n 0x66c8e	@ 00066c74 0bdd
.org 0x66c76
	cmp r0, #2	@ 00066c76 0228
.org 0x66c78
	bne.n 0x66c8e	@ 00066c78 09d1
.org 0x66c7a
	ldr r0, [r4, #24]	@ 00066c7a a069
.org 0x66c7c
	ldrb r1, [r0, #9]	@ 00066c7c 417a
.org 0x66c7e
	movs r2, #1	@ 00066c7e 0122
.org 0x66c80
	adds r0, r2, #0	@ 00066c80 101c
.org 0x66c82
	ands r0, r1	@ 00066c82 0840
.org 0x66c84
	cmp r0, #0	@ 00066c84 0028
.org 0x66c86
	beq.n 0x66c8e	@ 00066c86 02d0
.org 0x66c88
	movs r0, #0	@ 00066c88 0020
.org 0x66c8a
	strb r2, [r4, #13]	@ 00066c8a 6273
.org 0x66c8c
	strb r0, [r4, #14]	@ 00066c8c a073
.org 0x66c8e
	adds r0, r4, #0	@ 00066c8e 201c
.org 0x66c90
	bl 0x1cff0	@ 00066c90 b6f7aef9
.org 0x66c94
	pop {r4}	@ 00066c94 10bc
.org 0x66c96
	pop {r0}	@ 00066c96 01bc
.org 0x66c98
	bx r0	@ 00066c98 0047
