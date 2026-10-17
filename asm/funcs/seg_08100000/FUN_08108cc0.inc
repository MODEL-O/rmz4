@ FUN_08108cc0  entry 0x08108cc0  size 52
.thumb
.org 0x108cc0
FUN_08108cc0:
	push {r4, lr}	@ 00108cc0 10b5
.org 0x108cc2
	adds r4, r0, #0	@ 00108cc2 041c
.org 0x108cc4
	ldrb r0, [r4, #16]	@ 00108cc4 207c
.org 0x108cc6
	bl 0x108ed4	@ 00108cc6 00f005f9
.org 0x108cca
	ldrb r1, [r4, #16]	@ 00108cca 217c
.org 0x108ccc
	movs r0, #0	@ 00108ccc 0020
.org 0x108cce
	bl 0xd57ac	@ 00108cce ccf76dfd
.org 0x108cd2
	cmp r0, #0	@ 00108cd2 0028
.org 0x108cd4
	beq.n 0x108cdc	@ 00108cd4 02d0
.org 0x108cd6
	movs r0, #36	@ 00108cd6 2420
.org 0x108cd8
	bl 0x2b10	@ 00108cd8 f9f61aff
.org 0x108cdc
	ldr r1, [pc, #20]	@ 00108cdc 0549
.org 0x108cde
	ldrb r0, [r4, #9]	@ 00108cde 607a
.org 0x108ce0
	lsls r0, r0, #2	@ 00108ce0 8000
.org 0x108ce2
	adds r0, r0, r1	@ 00108ce2 4018
.org 0x108ce4
	movs r1, #4	@ 00108ce4 0421
.org 0x108ce6
	str r1, [r4, #12]	@ 00108ce6 e160
.org 0x108ce8
	ldr r0, [r0, #0]	@ 00108ce8 0068
.org 0x108cea
	ldr r0, [r0, #16]	@ 00108cea 0069
.org 0x108cec
	str r0, [r4, #20]	@ 00108cec 6061
.org 0x108cee
	pop {r4}	@ 00108cee 10bc
.org 0x108cf0
	pop {r0}	@ 00108cf0 01bc
.org 0x108cf2
	bx r0	@ 00108cf2 0047
