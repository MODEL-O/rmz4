@ FUN_080ab09c  entry 0x080ab09c  size 46
.thumb
.org 0xab09c
FUN_080ab09c:
	push {lr}	@ 000ab09c 00b5
.org 0xab09e
	adds r3, r0, #0	@ 000ab09e 031c
.org 0xab0a0
	adds r0, #184	@ 000ab0a0 b830
.org 0xab0a2
	movs r1, #1	@ 000ab0a2 0121
.org 0xab0a4
	strb r1, [r0, #0]	@ 000ab0a4 0170
.org 0xab0a6
	adds r0, #1	@ 000ab0a6 0130
.org 0xab0a8
	strb r1, [r0, #0]	@ 000ab0a8 0170
.org 0xab0aa
	adds r1, r3, #0	@ 000ab0aa 191c
.org 0xab0ac
	adds r1, #164	@ 000ab0ac a431
.org 0xab0ae
	movs r2, #0	@ 000ab0ae 0022
.org 0xab0b0
	movs r0, #8	@ 000ab0b0 0820
.org 0xab0b2
	strh r0, [r1, #0]	@ 000ab0b2 0880
.org 0xab0b4
	movs r0, #4	@ 000ab0b4 0420
.org 0xab0b6
	strb r0, [r3, #13]	@ 000ab0b6 5873
.org 0xab0b8
	strb r2, [r3, #14]	@ 000ab0b8 9a73
.org 0xab0ba
	strb r2, [r3, #15]	@ 000ab0ba da73
.org 0xab0bc
	ldr r0, [pc, #12]	@ 000ab0bc 0348
.org 0xab0be
	ldr r1, [r0, #16]	@ 000ab0be 0169
.org 0xab0c0
	adds r0, r3, #0	@ 000ab0c0 181c
.org 0xab0c2
	bl 0x128f80	@ 000ab0c2 7df05dff
.org 0xab0c6
	pop {r0}	@ 000ab0c6 01bc
.org 0xab0c8
	bx r0	@ 000ab0c8 0047
