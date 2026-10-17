@ FUN_080979c0  entry 0x080979c0  size 58
.thumb
.org 0x979c0
FUN_080979c0:
	push {r4, r5, lr}	@ 000979c0 30b5
.org 0x979c2
	adds r4, r0, #0	@ 000979c2 041c
.org 0x979c4
	ldrb r5, [r4, #14]	@ 000979c4 a57b
.org 0x979c6
	cmp r5, #0	@ 000979c6 002d
.org 0x979c8
	bne.n 0x979dc	@ 000979c8 08d1
.org 0x979ca
	movs r1, #160	@ 000979ca a021
.org 0x979cc
	lsls r1, r1, #7	@ 000979cc c901
.org 0x979ce
	bl 0x1cf00	@ 000979ce 85f797fa
.org 0x979d2
	strb r5, [r4, #18]	@ 000979d2 a574
.org 0x979d4
	strb r5, [r4, #15]	@ 000979d4 e573
.org 0x979d6
	ldrb r0, [r4, #14]	@ 000979d6 a07b
.org 0x979d8
	adds r0, #1	@ 000979d8 0130
.org 0x979da
	strb r0, [r4, #14]	@ 000979da a073
.org 0x979dc
	ldrb r0, [r4, #15]	@ 000979dc e07b
.org 0x979de
	cmp r0, #4	@ 000979de 0428
.org 0x979e0
	bls.n 0x979e4	@ 000979e0 00d9
.org 0x979e2
	b.n 0x97aea	@ 000979e2 82e0
.org 0x979e4
	lsls r0, r0, #2	@ 000979e4 8000
.org 0x979e6
	ldr r1, [pc, #8]	@ 000979e6 0249
.org 0x979e8
	adds r0, r0, r1	@ 000979e8 4018
.org 0x979ea
	ldr r0, [r0, #0]	@ 000979ea 0068
.org 0x979ec
	mov pc, r0	@ 000979ec 8746
.org 0x979ee
	.byte 0x00	@ 000979ee data
.org 0x979ef
	.byte 0x00	@ 000979ef data
.org 0x979f0
	.byte 0xf4,0x79,0x09,0x08	@ 000979f0 data
.org 0x979f4
	.byte 0x08,0x7a,0x09,0x08	@ 000979f4 data
.org 0x979f8
	.byte 0x4c,0x7a,0x09,0x08	@ 000979f8 data
