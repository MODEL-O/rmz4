@ FUN_080f6cbc  entry 0x080f6cbc  size 74
.thumb
.org 0xf6cbc
FUN_080f6cbc:
	push {r4, lr}	@ 000f6cbc 10b5
.org 0xf6cbe
	adds r4, r0, #0	@ 000f6cbe 041c
.org 0xf6cc0
	ldrb r0, [r4, #16]	@ 000f6cc0 207c
.org 0xf6cc2
	cmp r0, #0	@ 000f6cc2 0028
.org 0xf6cc4
	bne.n 0xf6cce	@ 000f6cc4 03d1
.org 0xf6cc6
	ldr r0, [r4, #84]	@ 000f6cc6 606d
.org 0xf6cc8
	movs r1, #128	@ 000f6cc8 8021
.org 0xf6cca
	lsls r1, r1, #4	@ 000f6cca 0901
.org 0xf6ccc
	b.n 0xf6cd2	@ 000f6ccc 01e0
.org 0xf6cce
	ldr r0, [r4, #84]	@ 000f6cce 606d
.org 0xf6cd0
	ldr r1, [pc, #52]	@ 000f6cd0 0d49
.org 0xf6cd2
	adds r0, r0, r1	@ 000f6cd2 4018
.org 0xf6cd4
	str r0, [r4, #84]	@ 000f6cd4 6065
.org 0xf6cd6
	ldr r0, [pc, #52]	@ 000f6cd6 0d48
.org 0xf6cd8
	adds r1, r4, #0	@ 000f6cd8 211c
.org 0xf6cda
	adds r1, #84	@ 000f6cda 5431
.org 0xf6cdc
	bl 0x1fb14	@ 000f6cdc 28f71aff
.org 0xf6ce0
	movs r1, #128	@ 000f6ce0 8021
.org 0xf6ce2
	lsls r1, r1, #6	@ 000f6ce2 8901
.org 0xf6ce4
	cmp r0, r1	@ 000f6ce4 8842
.org 0xf6ce6
	bls.n 0xf6cfa	@ 000f6ce6 08d9
.org 0xf6ce8
	ldr r1, [pc, #36]	@ 000f6ce8 0949
.org 0xf6cea
	ldrb r0, [r4, #9]	@ 000f6cea 607a
.org 0xf6cec
	lsls r0, r0, #2	@ 000f6cec 8000
.org 0xf6cee
	adds r0, r0, r1	@ 000f6cee 4018
.org 0xf6cf0
	movs r1, #4	@ 000f6cf0 0421
.org 0xf6cf2
	str r1, [r4, #12]	@ 000f6cf2 e160
.org 0xf6cf4
	ldr r0, [r0, #0]	@ 000f6cf4 0068
.org 0xf6cf6
	ldr r0, [r0, #16]	@ 000f6cf6 0069
.org 0xf6cf8
	str r0, [r4, #20]	@ 000f6cf8 6061
.org 0xf6cfa
	adds r0, r4, #0	@ 000f6cfa 201c
.org 0xf6cfc
	bl 0x1cff0	@ 000f6cfc 26f778f9
.org 0xf6d00
	pop {r4}	@ 000f6d00 10bc
.org 0xf6d02
	pop {r0}	@ 000f6d02 01bc
.org 0xf6d04
	bx r0	@ 000f6d04 0047
