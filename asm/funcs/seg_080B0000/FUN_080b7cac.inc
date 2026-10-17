@ FUN_080b7cac  entry 0x080b7cac  size 54
.thumb
.org 0xb7cac
FUN_080b7cac:
	push {r4, lr}	@ 000b7cac 10b5
.org 0xb7cae
	adds r4, r0, #0	@ 000b7cae 041c
.org 0xb7cb0
	adds r0, #180	@ 000b7cb0 b430
.org 0xb7cb2
	ldrb r0, [r0, #0]	@ 000b7cb2 0078
.org 0xb7cb4
	cmp r0, #0	@ 000b7cb4 0028
.org 0xb7cb6
	bne.n 0xb7cca	@ 000b7cb6 08d1
.org 0xb7cb8
	adds r0, r4, #0	@ 000b7cb8 201c
.org 0xb7cba
	adds r0, #84	@ 000b7cba 5430
.org 0xb7cbc
	ldrb r2, [r4, #10]	@ 000b7cbc a27a
.org 0xb7cbe
	lsrs r2, r2, #4	@ 000b7cbe 1209
.org 0xb7cc0
	movs r1, #1	@ 000b7cc0 0121
.org 0xb7cc2
	ands r2, r1	@ 000b7cc2 0a40
.org 0xb7cc4
	movs r1, #0	@ 000b7cc4 0021
.org 0xb7cc6
	bl 0xe7a4c	@ 000b7cc6 2ff0c1fe
.org 0xb7cca
	ldr r1, [pc, #24]	@ 000b7cca 0649
.org 0xb7ccc
	ldrb r0, [r4, #9]	@ 000b7ccc 607a
.org 0xb7cce
	lsls r0, r0, #2	@ 000b7cce 8000
.org 0xb7cd0
	adds r0, r0, r1	@ 000b7cd0 4018
.org 0xb7cd2
	movs r1, #4	@ 000b7cd2 0421
.org 0xb7cd4
	str r1, [r4, #12]	@ 000b7cd4 e160
.org 0xb7cd6
	ldr r0, [r0, #0]	@ 000b7cd6 0068
.org 0xb7cd8
	ldr r0, [r0, #16]	@ 000b7cd8 0069
.org 0xb7cda
	str r0, [r4, #20]	@ 000b7cda 6061
.org 0xb7cdc
	pop {r4}	@ 000b7cdc 10bc
.org 0xb7cde
	pop {r0}	@ 000b7cde 01bc
.org 0xb7ce0
	bx r0	@ 000b7ce0 0047
