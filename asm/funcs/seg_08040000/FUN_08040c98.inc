@ FUN_08040c98  entry 0x08040c98  size 128
.thumb
.org 0x40c98
FUN_08040c98:
	push {r4, lr}	@ 00040c98 10b5
.org 0x40c9a
	adds r4, r0, #0	@ 00040c9a 041c
.org 0x40c9c
	ldr r0, [pc, #60]	@ 00040c9c 0f48
.org 0x40c9e
	ldr r0, [r0, #0]	@ 00040c9e 0068
.org 0x40ca0
	bl 0x5500	@ 00040ca0 c4f72efc
.org 0x40ca4
	adds r2, r0, #0	@ 00040ca4 021c
.org 0x40ca6
	cmp r2, #0	@ 00040ca6 002a
.org 0x40ca8
	beq.n 0x40d20	@ 00040ca8 3ad0
.org 0x40caa
	adds r0, r4, #0	@ 00040caa 201c
.org 0x40cac
	adds r0, #248	@ 00040cac f830
.org 0x40cae
	ldrb r0, [r0, #0]	@ 00040cae 0078
.org 0x40cb0
	cmp r0, #2	@ 00040cb0 0228
.org 0x40cb2
	bne.n 0x40cec	@ 00040cb2 1bd1
.org 0x40cb4
	ldr r1, [pc, #40]	@ 00040cb4 0a49
.org 0x40cb6
	movs r0, #10	@ 00040cb6 0a20
.org 0x40cb8
	strb r0, [r2, #9]	@ 00040cb8 5072
.org 0x40cba
	ldr r0, [r1, #40]	@ 00040cba 886a
.org 0x40cbc
	ldr r0, [r0, #0]	@ 00040cbc 0068
.org 0x40cbe
	str r0, [r2, #20]	@ 00040cbe 5061
.org 0x40cc0
	ldrb r1, [r2, #11]	@ 00040cc0 d17a
.org 0x40cc2
	movs r0, #191	@ 00040cc2 bf20
.org 0x40cc4
	ands r0, r1	@ 00040cc4 0840
.org 0x40cc6
	strb r0, [r2, #11]	@ 00040cc6 d072
.org 0x40cc8
	adds r1, r2, #0	@ 00040cc8 111c
.org 0x40cca
	adds r1, #37	@ 00040cca 2531
.org 0x40ccc
	movs r0, #16	@ 00040ccc 1020
.org 0x40cce
	strb r0, [r1, #0]	@ 00040cce 0870
.org 0x40cd0
	ldr r0, [pc, #16]	@ 00040cd0 0448
.org 0x40cd2
	ldrh r0, [r0, #0]	@ 00040cd2 0088
.org 0x40cd4
	strh r0, [r2, #32]	@ 00040cd4 1084
.org 0x40cd6
	ldr r0, [pc, #16]	@ 00040cd6 0448
.org 0x40cd8
	ldrb r0, [r0, #0]	@ 00040cd8 0078
.org 0x40cda
	b.n 0x40d12	@ 00040cda 1ae0
.org 0x40cdc
	.byte 0x88,0xed,0x02,0x02	@ 00040cdc data
.org 0x40ce0
	.byte 0xf8,0x39,0x85,0x08	@ 00040ce0 data
.org 0x40ce4
	.byte 0xfc,0x36,0x85,0x08	@ 00040ce4 data
.org 0x40ce8
	.byte 0x04,0x37,0x85,0x08	@ 00040ce8 data
.org 0x40cec
	ldr r1, [pc, #56]	@ 00040cec 0e49
.org 0x40cee
	movs r0, #10	@ 00040cee 0a20
.org 0x40cf0
	strb r0, [r2, #9]	@ 00040cf0 5072
.org 0x40cf2
	ldr r0, [r1, #40]	@ 00040cf2 886a
.org 0x40cf4
	ldr r0, [r0, #0]	@ 00040cf4 0068
.org 0x40cf6
	str r0, [r2, #20]	@ 00040cf6 5061
.org 0x40cf8
	ldrb r1, [r2, #11]	@ 00040cf8 d17a
.org 0x40cfa
	movs r0, #191	@ 00040cfa bf20
.org 0x40cfc
	ands r0, r1	@ 00040cfc 0840
.org 0x40cfe
	strb r0, [r2, #11]	@ 00040cfe d072
.org 0x40d00
	adds r1, r2, #0	@ 00040d00 111c
.org 0x40d02
	adds r1, #37	@ 00040d02 2531
.org 0x40d04
	movs r0, #16	@ 00040d04 1020
.org 0x40d06
	strb r0, [r1, #0]	@ 00040d06 0870
.org 0x40d08
	ldr r0, [pc, #32]	@ 00040d08 0848
.org 0x40d0a
	ldrh r0, [r0, #2]	@ 00040d0a 4088
.org 0x40d0c
	strh r0, [r2, #32]	@ 00040d0c 1084
.org 0x40d0e
	ldr r0, [pc, #32]	@ 00040d0e 0848
.org 0x40d10
	ldrb r0, [r0, #1]	@ 00040d10 4078
.org 0x40d12
	subs r1, #3	@ 00040d12 0339
.org 0x40d14
	strb r0, [r1, #0]	@ 00040d14 0870
.org 0x40d16
	str r4, [r2, #40]	@ 00040d16 9462
