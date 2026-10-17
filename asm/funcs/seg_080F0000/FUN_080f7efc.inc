@ FUN_080f7efc  entry 0x080f7efc  size 30
.thumb
.org 0xf7efc
FUN_080f7efc:
	push {lr}	@ 000f7efc 00b5
.org 0xf7efe
	adds r1, r0, #0	@ 000f7efe 011c
.org 0xf7f00
	ldr r0, [r1, #88]	@ 000f7f00 886d
.org 0xf7f02
	movs r2, #144	@ 000f7f02 9022
.org 0xf7f04
	lsls r2, r2, #1	@ 000f7f04 5200
.org 0xf7f06
	adds r0, r0, r2	@ 000f7f06 8018
.org 0xf7f08
	str r0, [r1, #88]	@ 000f7f08 8865
.org 0xf7f0a
	ldr r2, [r1, #104]	@ 000f7f0a 8a6e
.org 0xf7f0c
	cmp r2, r0	@ 000f7f0c 8242
.org 0xf7f0e
	bge.n 0xf7f16	@ 000f7f0e 02da
.org 0xf7f10
	str r2, [r1, #88]	@ 000f7f10 8a65
.org 0xf7f12
	movs r0, #0	@ 000f7f12 0020
.org 0xf7f14
	strb r0, [r1, #13]	@ 000f7f14 4873
.org 0xf7f16
	pop {r0}	@ 000f7f16 01bc
.org 0xf7f18
	bx r0	@ 000f7f18 0047
