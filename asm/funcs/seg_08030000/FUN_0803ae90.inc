@ FUN_0803ae90  entry 0x0803ae90  size 28
.thumb
.org 0x3ae90
FUN_0803ae90:
	push {lr}	@ 0003ae90 00b5
.org 0x3ae92
	adds r2, r0, #0	@ 0003ae92 021c
.org 0x3ae94
	ldrb r0, [r2, #17]	@ 0003ae94 507c
.org 0x3ae96
	cmp r0, #0	@ 0003ae96 0028
.org 0x3ae98
	beq.n 0x3ae9e	@ 0003ae98 01d0
.org 0x3ae9a
	movs r0, #0	@ 0003ae9a 0020
.org 0x3ae9c
	b.n 0x3aea8	@ 0003ae9c 04e0
.org 0x3ae9e
	ldr r0, [r2, #84]	@ 0003ae9e 506d
.org 0x3aea0
	str r0, [r1, #0]	@ 0003aea0 0860
.org 0x3aea2
	ldr r0, [r2, #88]	@ 0003aea2 906d
.org 0x3aea4
	str r0, [r1, #4]	@ 0003aea4 4860
.org 0x3aea6
	movs r0, #1	@ 0003aea6 0120
.org 0x3aea8
	pop {r1}	@ 0003aea8 02bc
.org 0x3aeaa
	bx r1	@ 0003aeaa 0847
