@ FUN_08047cac  entry 0x08047cac  size 130
.thumb
.org 0x47cac
FUN_08047cac:
	push {r4, r5, lr}	@ 00047cac 30b5
.org 0x47cae
	adds r4, r0, #0	@ 00047cae 041c
.org 0x47cb0
	lsls r1, r1, #24	@ 00047cb0 0906
.org 0x47cb2
	lsrs r5, r1, #24	@ 00047cb2 0d0e
.org 0x47cb4
	ldr r0, [pc, #60]	@ 00047cb4 0f48
.org 0x47cb6
	ldr r0, [r0, #0]	@ 00047cb6 0068
.org 0x47cb8
	bl 0x5500	@ 00047cb8 bdf722fc
.org 0x47cbc
	adds r2, r0, #0	@ 00047cbc 021c
.org 0x47cbe
	cmp r2, #0	@ 00047cbe 002a
.org 0x47cc0
	beq.n 0x47d36	@ 00047cc0 39d0
.org 0x47cc2
	adds r0, r4, #0	@ 00047cc2 201c
.org 0x47cc4
	adds r0, #248	@ 00047cc4 f830
.org 0x47cc6
	ldrb r0, [r0, #0]	@ 00047cc6 0078
.org 0x47cc8
	cmp r0, #2	@ 00047cc8 0228
.org 0x47cca
	bne.n 0x47d04	@ 00047cca 1bd1
.org 0x47ccc
	ldr r1, [pc, #40]	@ 00047ccc 0a49
.org 0x47cce
	movs r0, #29	@ 00047cce 1d20
.org 0x47cd0
	strb r0, [r2, #9]	@ 00047cd0 5072
.org 0x47cd2
	ldr r0, [r1, #116]	@ 00047cd2 486f
.org 0x47cd4
	ldr r0, [r0, #0]	@ 00047cd4 0068
.org 0x47cd6
	str r0, [r2, #20]	@ 00047cd6 5061
.org 0x47cd8
	ldrb r1, [r2, #11]	@ 00047cd8 d17a
.org 0x47cda
	movs r0, #191	@ 00047cda bf20
.org 0x47cdc
	ands r0, r1	@ 00047cdc 0840
.org 0x47cde
	strb r0, [r2, #11]	@ 00047cde d072
.org 0x47ce0
	adds r1, r2, #0	@ 00047ce0 111c
.org 0x47ce2
	adds r1, #37	@ 00047ce2 2531
.org 0x47ce4
	movs r0, #16	@ 00047ce4 1020
.org 0x47ce6
	strb r0, [r1, #0]	@ 00047ce6 0870
.org 0x47ce8
	ldr r0, [pc, #16]	@ 00047ce8 0448
.org 0x47cea
	ldrh r0, [r0, #0]	@ 00047cea 0088
.org 0x47cec
	strh r0, [r2, #32]	@ 00047cec 1084
.org 0x47cee
	ldr r0, [pc, #16]	@ 00047cee 0448
.org 0x47cf0
	ldrb r0, [r0, #0]	@ 00047cf0 0078
.org 0x47cf2
	b.n 0x47d2a	@ 00047cf2 1ae0
.org 0x47cf4
	.byte 0x88,0xed,0x02,0x02	@ 00047cf4 data
.org 0x47cf8
	.byte 0xf8,0x39,0x85,0x08	@ 00047cf8 data
.org 0x47cfc
	.byte 0xfc,0x36,0x85,0x08	@ 00047cfc data
.org 0x47d00
	.byte 0x04,0x37,0x85,0x08	@ 00047d00 data
.org 0x47d04
	ldr r1, [pc, #56]	@ 00047d04 0e49
.org 0x47d06
	movs r0, #29	@ 00047d06 1d20
.org 0x47d08
	strb r0, [r2, #9]	@ 00047d08 5072
.org 0x47d0a
	ldr r0, [r1, #116]	@ 00047d0a 486f
.org 0x47d0c
	ldr r0, [r0, #0]	@ 00047d0c 0068
.org 0x47d0e
	str r0, [r2, #20]	@ 00047d0e 5061
.org 0x47d10
	ldrb r1, [r2, #11]	@ 00047d10 d17a
.org 0x47d12
	movs r0, #191	@ 00047d12 bf20
.org 0x47d14
	ands r0, r1	@ 00047d14 0840
.org 0x47d16
	strb r0, [r2, #11]	@ 00047d16 d072
.org 0x47d18
	adds r1, r2, #0	@ 00047d18 111c
.org 0x47d1a
	adds r1, #37	@ 00047d1a 2531
.org 0x47d1c
	movs r0, #16	@ 00047d1c 1020
.org 0x47d1e
	strb r0, [r1, #0]	@ 00047d1e 0870
.org 0x47d20
	ldr r0, [pc, #32]	@ 00047d20 0848
.org 0x47d22
	ldrh r0, [r0, #2]	@ 00047d22 4088
.org 0x47d24
	strh r0, [r2, #32]	@ 00047d24 1084
.org 0x47d26
	ldr r0, [pc, #32]	@ 00047d26 0848
.org 0x47d28
	ldrb r0, [r0, #1]	@ 00047d28 4078
.org 0x47d2a
	subs r1, #3	@ 00047d2a 0339
.org 0x47d2c
	strb r0, [r1, #0]	@ 00047d2c 0870
