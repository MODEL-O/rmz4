@ FUN_0809dd58  entry 0x0809dd58  size 48
.thumb
.org 0x9dd58
FUN_0809dd58:
	push {r4, lr}	@ 0009dd58 10b5
.org 0x9dd5a
	adds r4, r0, #0	@ 0009dd5a 041c
.org 0x9dd5c
	ldrb r0, [r4, #14]	@ 0009dd5c a07b
.org 0x9dd5e
	cmp r0, #0	@ 0009dd5e 0028
.org 0x9dd60
	bne.n 0x9dd70	@ 0009dd60 06d1
.org 0x9dd62
	ldr r1, [pc, #36]	@ 0009dd62 0949
.org 0x9dd64
	adds r0, r4, #0	@ 0009dd64 201c
.org 0x9dd66
	bl 0x1cf00	@ 0009dd66 7ff7cbf8
.org 0x9dd6a
	ldrb r0, [r4, #14]	@ 0009dd6a a07b
.org 0x9dd6c
	adds r0, #1	@ 0009dd6c 0130
.org 0x9dd6e
	strb r0, [r4, #14]	@ 0009dd6e a073
.org 0x9dd70
	adds r0, r4, #0	@ 0009dd70 201c
.org 0x9dd72
	adds r0, #115	@ 0009dd72 7330
.org 0x9dd74
	ldrb r0, [r0, #0]	@ 0009dd74 0078
.org 0x9dd76
	cmp r0, #3	@ 0009dd76 0328
.org 0x9dd78
	bne.n 0x9dd82	@ 0009dd78 03d1
.org 0x9dd7a
	movs r1, #0	@ 0009dd7a 0021
.org 0x9dd7c
	movs r0, #2	@ 0009dd7c 0220
.org 0x9dd7e
	strb r0, [r4, #13]	@ 0009dd7e 6073
.org 0x9dd80
	strb r1, [r4, #14]	@ 0009dd80 a173
.org 0x9dd82
	pop {r4}	@ 0009dd82 10bc
.org 0x9dd84
	pop {r0}	@ 0009dd84 01bc
.org 0x9dd86
	bx r0	@ 0009dd86 0047
