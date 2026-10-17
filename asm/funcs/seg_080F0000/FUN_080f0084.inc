@ FUN_080f0084  entry 0x080f0084  size 32
.thumb
.org 0xf0084
FUN_080f0084:
	push {r4, r5, r6, lr}	@ 000f0084 70b5
.org 0xf0086
	sub sp, #8	@ 000f0086 82b0
.org 0xf0088
	adds r6, r0, #0	@ 000f0088 061c
.org 0xf008a
	ldrb r0, [r6, #13]	@ 000f008a 707b
.org 0xf008c
	cmp r0, #5	@ 000f008c 0528
.org 0xf008e
	bls.n 0xf0092	@ 000f008e 00d9
.org 0xf0090
	b.n 0xf029e	@ 000f0090 05e1
.org 0xf0092
	lsls r0, r0, #2	@ 000f0092 8000
.org 0xf0094
	ldr r1, [pc, #4]	@ 000f0094 0149
.org 0xf0096
	adds r0, r0, r1	@ 000f0096 4018
.org 0xf0098
	ldr r0, [r0, #0]	@ 000f0098 0068
.org 0xf009a
	mov pc, r0	@ 000f009a 8746
.org 0xf009c
	.byte 0xa0,0x00,0x0f,0x08	@ 000f009c data
.org 0xf00a0
	.byte 0xb8,0x00,0x0f,0x08	@ 000f00a0 data
