@ FUN_080655b0  entry 0x080655b0  size 42
.thumb
.org 0x655b0
FUN_080655b0:
	push {r4, r5, r6, lr}	@ 000655b0 70b5
.org 0x655b2
	sub sp, #16	@ 000655b2 84b0
.org 0x655b4
	adds r4, r0, #0	@ 000655b4 041c
.org 0x655b6
	ldr r0, [pc, #28]	@ 000655b6 0748
.org 0x655b8
	ldr r1, [r0, #4]	@ 000655b8 4168
.org 0x655ba
	ldr r0, [r0, #0]	@ 000655ba 0068
.org 0x655bc
	str r0, [sp, #0]	@ 000655bc 0090
.org 0x655be
	str r1, [sp, #4]	@ 000655be 0191
.org 0x655c0
	ldrb r0, [r4, #15]	@ 000655c0 e07b
.org 0x655c2
	cmp r0, #7	@ 000655c2 0728
.org 0x655c4
	bls.n 0x655c8	@ 000655c4 00d9
.org 0x655c6
	b.n 0x657a2	@ 000655c6 ece0
.org 0x655c8
	lsls r0, r0, #2	@ 000655c8 8000
.org 0x655ca
	ldr r1, [pc, #12]	@ 000655ca 0349
.org 0x655cc
	adds r0, r0, r1	@ 000655cc 4018
.org 0x655ce
	ldr r0, [r0, #0]	@ 000655ce 0068
.org 0x655d0
	mov pc, r0	@ 000655d0 8746
.org 0x655d2
	.byte 0x00	@ 000655d2 data
.org 0x655d3
	.byte 0x00	@ 000655d3 data
.org 0x655d4
	.byte 0x7c,0x98,0x12,0x08	@ 000655d4 data
.org 0x655d8
	.byte 0xdc,0x55,0x06,0x08	@ 000655d8 data
