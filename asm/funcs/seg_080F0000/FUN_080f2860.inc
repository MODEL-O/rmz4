@ FUN_080f2860  entry 0x080f2860  size 28
.thumb
.org 0xf2860
FUN_080f2860:
	push {r4, r5, r6, r7, lr}	@ 000f2860 f0b5
.org 0xf2862
	adds r6, r0, #0	@ 000f2862 061c
.org 0xf2864
	ldrb r0, [r6, #13]	@ 000f2864 707b
.org 0xf2866
	cmp r0, #35	@ 000f2866 2328
.org 0xf2868
	bls.n 0xf286c	@ 000f2868 00d9
.org 0xf286a
	b.n 0xf2ea6	@ 000f286a 1ce3
.org 0xf286c
	lsls r0, r0, #2	@ 000f286c 8000
.org 0xf286e
	ldr r1, [pc, #8]	@ 000f286e 0249
.org 0xf2870
	adds r0, r0, r1	@ 000f2870 4018
.org 0xf2872
	ldr r0, [r0, #0]	@ 000f2872 0068
.org 0xf2874
	mov pc, r0	@ 000f2874 8746
.org 0xf2876
	.byte 0x00	@ 000f2876 data
.org 0xf2877
	.byte 0x00	@ 000f2877 data
.org 0xf2878
	.byte 0x7c,0x28,0x0f,0x08	@ 000f2878 data
