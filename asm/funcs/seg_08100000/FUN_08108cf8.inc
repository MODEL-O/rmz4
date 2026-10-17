@ FUN_08108cf8  entry 0x08108cf8  size 26
.thumb
.org 0x108cf8
FUN_08108cf8:
	push {lr}	@ 00108cf8 00b5
.org 0x108cfa
	ldr r2, [r0, #44]	@ 00108cfa c26a
.org 0x108cfc
	ldr r0, [r0, #12]	@ 00108cfc c068
.org 0x108cfe
	ldr r1, [r0, #44]	@ 00108cfe c16a
.org 0x108d00
	movs r0, #8	@ 00108d00 0820
.org 0x108d02
	ldrsb r0, [r1, r0]	@ 00108d02 0856
.org 0x108d04
	cmp r0, #0	@ 00108d04 0028
.org 0x108d06
	bne.n 0x108d0e	@ 00108d06 02d1
.org 0x108d08
	adds r0, r2, #0	@ 00108d08 101c
.org 0x108d0a
	adds r0, #184	@ 00108d0a b830
.org 0x108d0c
	str r1, [r0, #0]	@ 00108d0c 0160
.org 0x108d0e
	pop {r0}	@ 00108d0e 01bc
.org 0x108d10
	bx r0	@ 00108d10 0047
