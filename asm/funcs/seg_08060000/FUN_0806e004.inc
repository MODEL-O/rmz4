@ FUN_0806e004  entry 0x0806e004  size 28
.thumb
.org 0x6e004
FUN_0806e004:
	push {r4, r5, r6, lr}	@ 0006e004 70b5
.org 0x6e006
	adds r6, r0, #0	@ 0006e006 061c
.org 0x6e008
	ldrb r0, [r6, #15]	@ 0006e008 f07b
.org 0x6e00a
	cmp r0, #5	@ 0006e00a 0528
.org 0x6e00c
	bls.n 0x6e010	@ 0006e00c 00d9
.org 0x6e00e
	b.n 0x6e12e	@ 0006e00e 8ee0
.org 0x6e010
	lsls r0, r0, #2	@ 0006e010 8000
.org 0x6e012
	ldr r1, [pc, #8]	@ 0006e012 0249
.org 0x6e014
	adds r0, r0, r1	@ 0006e014 4018
.org 0x6e016
	ldr r0, [r0, #0]	@ 0006e016 0068
.org 0x6e018
	mov pc, r0	@ 0006e018 8746
.org 0x6e01a
	.byte 0x00	@ 0006e01a data
.org 0x6e01b
	.byte 0x00	@ 0006e01b data
.org 0x6e01c
	.byte 0x20,0xe0,0x06,0x08	@ 0006e01c data
