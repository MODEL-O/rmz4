@ FUN_08105954  entry 0x08105954  size 38
.thumb
.org 0x105954
FUN_08105954:
	push {r4, r5, r6, lr}	@ 00105954 70b5
.org 0x105956
	adds r4, r0, #0	@ 00105956 041c
.org 0x105958
	lsls r1, r1, #16	@ 00105958 0904
.org 0x10595a
	lsrs r6, r1, #16	@ 0010595a 0e0c
.org 0x10595c
	lsls r2, r2, #24	@ 0010595c 1206
.org 0x10595e
	lsrs r5, r2, #24	@ 0010595e 150e
.org 0x105960
	ldrb r0, [r4, #15]	@ 00105960 e07b
.org 0x105962
	cmp r0, #5	@ 00105962 0528
.org 0x105964
	bls.n 0x105968	@ 00105964 00d9
.org 0x105966
	b.n 0x105aca	@ 00105966 b0e0
.org 0x105968
	lsls r0, r0, #2	@ 00105968 8000
.org 0x10596a
	ldr r1, [pc, #8]	@ 0010596a 0249
.org 0x10596c
	adds r0, r0, r1	@ 0010596c 4018
.org 0x10596e
	ldr r0, [r0, #0]	@ 0010596e 0068
.org 0x105970
	mov pc, r0	@ 00105970 8746
.org 0x105972
	.byte 0x00	@ 00105972 data
.org 0x105973
	.byte 0x00	@ 00105973 data
.org 0x105974
	.byte 0x78,0x59,0x10,0x08	@ 00105974 data
.org 0x105978
	.byte 0x90,0x59,0x10,0x08	@ 00105978 data
