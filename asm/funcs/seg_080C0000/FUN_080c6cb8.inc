@ FUN_080c6cb8  entry 0x080c6cb8  size 42
.thumb
.org 0xc6cb8
FUN_080c6cb8:
	push {r4, lr}	@ 000c6cb8 10b5
.org 0xc6cba
	adds r4, r0, #0	@ 000c6cba 041c
.org 0xc6cbc
	bl 0x1cff0	@ 000c6cbc 56f798f9
.org 0xc6cc0
	adds r0, r4, #0	@ 000c6cc0 201c
.org 0xc6cc2
	adds r0, #115	@ 000c6cc2 7330
.org 0xc6cc4
	ldrb r0, [r0, #0]	@ 000c6cc4 0078
.org 0xc6cc6
	cmp r0, #3	@ 000c6cc6 0328
.org 0xc6cc8
	bne.n 0xc6cdc	@ 000c6cc8 08d1
.org 0xc6cca
	ldr r1, [pc, #24]	@ 000c6cca 0649
.org 0xc6ccc
	ldrb r0, [r4, #9]	@ 000c6ccc 607a
.org 0xc6cce
	lsls r0, r0, #2	@ 000c6cce 8000
.org 0xc6cd0
	adds r0, r0, r1	@ 000c6cd0 4018
.org 0xc6cd2
	movs r1, #2	@ 000c6cd2 0221
.org 0xc6cd4
	str r1, [r4, #12]	@ 000c6cd4 e160
.org 0xc6cd6
	ldr r0, [r0, #0]	@ 000c6cd6 0068
.org 0xc6cd8
	ldr r0, [r0, #8]	@ 000c6cd8 8068
.org 0xc6cda
	str r0, [r4, #20]	@ 000c6cda 6061
.org 0xc6cdc
	pop {r4}	@ 000c6cdc 10bc
.org 0xc6cde
	pop {r0}	@ 000c6cde 01bc
.org 0xc6ce0
	bx r0	@ 000c6ce0 0047
