@ FUN_0808637c  entry 0x0808637c  size 62
.thumb
.org 0x8637c
FUN_0808637c:
	push {lr}	@ 0008637c 00b5
.org 0x8637e
	adds r2, r0, #0	@ 0008637e 021c
.org 0x86380
	ldr r0, [pc, #56]	@ 00086380 0e48
.org 0x86382
	ldr r3, [r0, #0]	@ 00086382 0368
.org 0x86384
	ldr r0, [r2, #100]	@ 00086384 506e
.org 0x86386
	ldr r1, [r3, #84]	@ 00086386 596d
.org 0x86388
	subs r0, r0, r1	@ 00086388 401a
.org 0x8638a
	movs r1, #240	@ 0008638a f021
.org 0x8638c
	lsls r1, r1, #8	@ 0008638c 0902
.org 0x8638e
	adds r0, r0, r1	@ 0008638e 4018
.org 0x86390
	movs r1, #240	@ 00086390 f021
.org 0x86392
	lsls r1, r1, #9	@ 00086392 4902
.org 0x86394
	cmp r0, r1	@ 00086394 8842
.org 0x86396
	bhi.n 0x863ac	@ 00086396 09d8
.org 0x86398
	ldr r0, [r2, #104]	@ 00086398 906e
.org 0x8639a
	ldr r1, [r3, #88]	@ 0008639a 996d
.org 0x8639c
	subs r0, r0, r1	@ 0008639c 401a
.org 0x8639e
	movs r1, #196	@ 0008639e c421
.org 0x863a0
	lsls r1, r1, #8	@ 000863a0 0902
.org 0x863a2
	adds r0, r0, r1	@ 000863a2 4018
.org 0x863a4
	movs r1, #160	@ 000863a4 a021
.org 0x863a6
	lsls r1, r1, #9	@ 000863a6 4902
.org 0x863a8
	cmp r0, r1	@ 000863a8 8842
.org 0x863aa
	bls.n 0x863b6	@ 000863aa 04d9
.org 0x863ac
	movs r1, #0	@ 000863ac 0021
.org 0x863ae
	movs r0, #3	@ 000863ae 0320
.org 0x863b0
	strb r0, [r2, #13]	@ 000863b0 5073
.org 0x863b2
	strb r1, [r2, #14]	@ 000863b2 9173
.org 0x863b4
	strb r1, [r2, #15]	@ 000863b4 d173
.org 0x863b6
	pop {r0}	@ 000863b6 01bc
.org 0x863b8
	bx r0	@ 000863b8 0047
