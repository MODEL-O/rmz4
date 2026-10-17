@ FUN_080c81b8  entry 0x080c81b8  size 58
.thumb
.org 0xc81b8
FUN_080c81b8:
	push {lr}	@ 000c81b8 00b5
.org 0xc81ba
	adds r2, r0, #0	@ 000c81ba 021c
.org 0xc81bc
	ldr r0, [r2, #40]	@ 000c81bc 906a
.org 0xc81be
	ldrb r0, [r0, #12]	@ 000c81be 007b
.org 0xc81c0
	cmp r0, #1	@ 000c81c0 0128
.org 0xc81c2
	bls.n 0xc81e4	@ 000c81c2 0fd9
.org 0xc81c4
	ldr r1, [pc, #24]	@ 000c81c4 0649
.org 0xc81c6
	ldrb r0, [r2, #9]	@ 000c81c6 507a
.org 0xc81c8
	lsls r0, r0, #2	@ 000c81c8 8000
.org 0xc81ca
	adds r0, r0, r1	@ 000c81ca 4018
.org 0xc81cc
	movs r1, #2	@ 000c81cc 0221
.org 0xc81ce
	str r1, [r2, #12]	@ 000c81ce d160
.org 0xc81d0
	ldr r0, [r0, #0]	@ 000c81d0 0068
.org 0xc81d2
	ldr r0, [r0, #8]	@ 000c81d2 8068
.org 0xc81d4
	str r0, [r2, #20]	@ 000c81d4 5061
.org 0xc81d6
	adds r0, r2, #0	@ 000c81d6 101c
.org 0xc81d8
	bl 0xc82a8	@ 000c81d8 00f066f8
.org 0xc81dc
	b.n 0xc81f4	@ 000c81dc 0ae0
.org 0xc81de
	.byte 0x00	@ 000c81de data
.org 0xc81df
	.byte 0x00	@ 000c81df data
.org 0xc81e0
	.byte 0xf4,0x49,0x86,0x08	@ 000c81e0 data
.org 0xc81e4
	ldr r0, [pc, #16]	@ 000c81e4 0448
.org 0xc81e6
	ldrb r1, [r2, #13]	@ 000c81e6 517b
.org 0xc81e8
	lsls r1, r1, #2	@ 000c81e8 8900
.org 0xc81ea
	adds r1, r1, r0	@ 000c81ea 0918
.org 0xc81ec
	ldr r1, [r1, #0]	@ 000c81ec 0968
.org 0xc81ee
	adds r0, r2, #0	@ 000c81ee 101c
.org 0xc81f0
	bl 0x128f80	@ 000c81f0 60f0c6fe
