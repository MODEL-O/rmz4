@ FUN_080333a8  entry 0x080333a8  size 48
.thumb
.org 0x333a8
FUN_080333a8:
	push {r4, lr}	@ 000333a8 10b5
.org 0x333aa
	adds r4, r0, #0	@ 000333aa 041c
.org 0x333ac
	ldrb r0, [r4, #15]	@ 000333ac e07b
.org 0x333ae
	cmp r0, #0	@ 000333ae 0028
.org 0x333b0
	bne.n 0x333c0	@ 000333b0 06d1
.org 0x333b2
	ldr r1, [pc, #36]	@ 000333b2 0949
.org 0x333b4
	adds r0, r4, #0	@ 000333b4 201c
.org 0x333b6
	bl 0x1cf00	@ 000333b6 e9f7a3fd
.org 0x333ba
	ldrb r0, [r4, #15]	@ 000333ba e07b
.org 0x333bc
	adds r0, #1	@ 000333bc 0130
.org 0x333be
	strb r0, [r4, #15]	@ 000333be e073
.org 0x333c0
	adds r0, r4, #0	@ 000333c0 201c
.org 0x333c2
	adds r0, #115	@ 000333c2 7330
.org 0x333c4
	ldrb r0, [r0, #0]	@ 000333c4 0078
.org 0x333c6
	cmp r0, #3	@ 000333c6 0328
.org 0x333c8
	bne.n 0x333d2	@ 000333c8 03d1
.org 0x333ca
	movs r0, #0	@ 000333ca 0020
.org 0x333cc
	strb r0, [r4, #13]	@ 000333cc 6073
.org 0x333ce
	strb r0, [r4, #14]	@ 000333ce a073
.org 0x333d0
	strb r0, [r4, #15]	@ 000333d0 e073
.org 0x333d2
	pop {r4}	@ 000333d2 10bc
.org 0x333d4
	pop {r0}	@ 000333d4 01bc
.org 0x333d6
	bx r0	@ 000333d6 0047
