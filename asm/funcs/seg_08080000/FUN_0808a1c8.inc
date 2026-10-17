@ FUN_0808a1c8  entry 0x0808a1c8  size 102
.thumb
.org 0x8a1c8
FUN_0808a1c8:
	push {r4, lr}	@ 0008a1c8 10b5
.org 0x8a1ca
	adds r4, r0, #0	@ 0008a1ca 041c
.org 0x8a1cc
	adds r0, #193	@ 0008a1cc c130
.org 0x8a1ce
	ldrb r0, [r0, #0]	@ 0008a1ce 0078
.org 0x8a1d0
	cmp r0, #0	@ 0008a1d0 0028
.org 0x8a1d2
	bne.n 0x8a1fc	@ 0008a1d2 13d1
.org 0x8a1d4
	ldrb r1, [r4, #10]	@ 0008a1d4 a17a
.org 0x8a1d6
	movs r0, #16	@ 0008a1d6 1020
.org 0x8a1d8
	ands r0, r1	@ 0008a1d8 0840
.org 0x8a1da
	ldr r2, [pc, #76]	@ 0008a1da 134a
.org 0x8a1dc
	cmp r0, #0	@ 0008a1dc 0028
.org 0x8a1de
	beq.n 0x8a1e4	@ 0008a1de 01d0
.org 0x8a1e0
	movs r2, #128	@ 0008a1e0 8022
.org 0x8a1e2
	lsls r2, r2, #4	@ 0008a1e2 1201
.org 0x8a1e4
	ldr r0, [r4, #84]	@ 0008a1e4 606d
.org 0x8a1e6
	adds r2, r2, r0	@ 0008a1e6 1218
.org 0x8a1e8
	ldr r1, [r4, #88]	@ 0008a1e8 a16d
.org 0x8a1ea
	ldr r0, [pc, #60]	@ 0008a1ea 0f48
.org 0x8a1ec
	adds r1, r1, r0	@ 0008a1ec 0918
.org 0x8a1ee
	adds r0, r2, #0	@ 0008a1ee 101c
.org 0x8a1f0
	bl 0x7c7c	@ 0008a1f0 7df744fd
.org 0x8a1f4
	lsls r0, r0, #16	@ 0008a1f4 0004
.org 0x8a1f6
	lsrs r1, r0, #16	@ 0008a1f6 010c
.org 0x8a1f8
	cmp r1, #0	@ 0008a1f8 0029
.org 0x8a1fa
	beq.n 0x8a21c	@ 0008a1fa 0fd0
.org 0x8a1fc
	ldr r0, [pc, #44]	@ 0008a1fc 0b48
.org 0x8a1fe
	ldr r2, [r0, #0]	@ 0008a1fe 0268
.org 0x8a200
	ldr r1, [r2, #84]	@ 0008a200 516d
.org 0x8a202
	ldr r0, [r4, #84]	@ 0008a202 606d
.org 0x8a204
	subs r1, r1, r0	@ 0008a204 091a
.org 0x8a206
	cmp r1, #0	@ 0008a206 0029
.org 0x8a208
	bge.n 0x8a20c	@ 0008a208 00da
.org 0x8a20a
	negs r1, r1	@ 0008a20a 4942
.org 0x8a20c
	ldr r0, [pc, #32]	@ 0008a20c 0848
.org 0x8a20e
	cmp r1, r0	@ 0008a20e 8142
.org 0x8a210
	bgt.n 0x8a234	@ 0008a210 10dc
.org 0x8a212
	ldr r1, [r4, #88]	@ 0008a212 a16d
.org 0x8a214
	ldr r0, [r2, #88]	@ 0008a214 906d
.org 0x8a216
	cmp r1, r0	@ 0008a216 8142
.org 0x8a218
	bge.n 0x8a234	@ 0008a218 0cda
.org 0x8a21a
	movs r1, #0	@ 0008a21a 0021
.org 0x8a21c
	movs r0, #7	@ 0008a21c 0720
.org 0x8a21e
	strb r0, [r4, #13]	@ 0008a21e 6073
.org 0x8a220
	strb r1, [r4, #14]	@ 0008a220 a173
.org 0x8a222
	movs r0, #1	@ 0008a222 0120
.org 0x8a224
	b.n 0x8a236	@ 0008a224 07e0
.org 0x8a226
	.byte 0x00	@ 0008a226 data
.org 0x8a227
	.byte 0x00	@ 0008a227 data
.org 0x8a228
	.byte 0x00,0xf8,0xff,0xff	@ 0008a228 data
.org 0x8a22c
	.byte 0xf0,0xdb,0x02,0x02	@ 0008a22c data
