@ FUN_08051b90  entry 0x08051b90  size 54
.thumb
.org 0x51b90
FUN_08051b90:
	push {r4, lr}	@ 00051b90 10b5
.org 0x51b92
	adds r4, r0, #0	@ 00051b92 041c
.org 0x51b94
	ldrb r0, [r4, #14]	@ 00051b94 a07b
.org 0x51b96
	cmp r0, #0	@ 00051b96 0028
.org 0x51b98
	bne.n 0x51ba8	@ 00051b98 06d1
.org 0x51b9a
	ldr r1, [pc, #44]	@ 00051b9a 0b49
.org 0x51b9c
	adds r0, r4, #0	@ 00051b9c 201c
.org 0x51b9e
	bl 0x1cf00	@ 00051b9e cbf7aff9
.org 0x51ba2
	ldrb r0, [r4, #14]	@ 00051ba2 a07b
.org 0x51ba4
	adds r0, #1	@ 00051ba4 0130
.org 0x51ba6
	strb r0, [r4, #14]	@ 00051ba6 a073
.org 0x51ba8
	adds r0, r4, #0	@ 00051ba8 201c
.org 0x51baa
	bl 0x1cff0	@ 00051baa cbf721fa
.org 0x51bae
	adds r0, r4, #0	@ 00051bae 201c
.org 0x51bb0
	adds r0, #115	@ 00051bb0 7330
.org 0x51bb2
	ldrb r0, [r0, #0]	@ 00051bb2 0078
.org 0x51bb4
	cmp r0, #3	@ 00051bb4 0328
.org 0x51bb6
	bne.n 0x51bc0	@ 00051bb6 03d1
.org 0x51bb8
	movs r1, #0	@ 00051bb8 0021
.org 0x51bba
	movs r0, #4	@ 00051bba 0420
.org 0x51bbc
	strb r0, [r4, #13]	@ 00051bbc 6073
.org 0x51bbe
	strb r1, [r4, #14]	@ 00051bbe a173
.org 0x51bc0
	pop {r4}	@ 00051bc0 10bc
.org 0x51bc2
	pop {r0}	@ 00051bc2 01bc
.org 0x51bc4
	bx r0	@ 00051bc4 0047
