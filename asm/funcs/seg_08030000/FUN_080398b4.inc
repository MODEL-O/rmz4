@ FUN_080398b4  entry 0x080398b4  size 38
.thumb
.org 0x398b4
FUN_080398b4:
	push {r4, lr}	@ 000398b4 10b5
.org 0x398b6
	adds r2, r0, #0	@ 000398b6 021c
.org 0x398b8
	ldr r0, [pc, #20]	@ 000398b8 0548
.org 0x398ba
	adds r1, r2, r0	@ 000398ba 1118
.org 0x398bc
	ldrb r0, [r1, #0]	@ 000398bc 0878
.org 0x398be
	cmp r0, #6	@ 000398be 0628
.org 0x398c0
	bls.n 0x398c4	@ 000398c0 00d9
.org 0x398c2
	b.n 0x39a68	@ 000398c2 d1e0
.org 0x398c4
	lsls r0, r0, #2	@ 000398c4 8000
.org 0x398c6
	ldr r1, [pc, #12]	@ 000398c6 0349
.org 0x398c8
	adds r0, r0, r1	@ 000398c8 4018
.org 0x398ca
	ldr r0, [r0, #0]	@ 000398ca 0068
.org 0x398cc
	mov pc, r0	@ 000398cc 8746
.org 0x398ce
	.byte 0x00	@ 000398ce data
.org 0x398cf
	.byte 0x00	@ 000398cf data
.org 0x398d0
	.byte 0x6a,0x02,0x00,0x00	@ 000398d0 data
.org 0x398d4
	.byte 0xd8,0x98,0x03,0x08	@ 000398d4 data
.org 0x398d8
	.byte 0xf4,0x98,0x03,0x08	@ 000398d8 data
