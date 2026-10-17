@ FUN_080a75f0  entry 0x080a75f0  size 58
.thumb
.org 0xa75f0
FUN_080a75f0:
	push {r4, r5, lr}	@ 000a75f0 30b5
.org 0xa75f2
	adds r4, r0, #0	@ 000a75f2 041c
.org 0xa75f4
	ldrb r5, [r4, #14]	@ 000a75f4 a57b
.org 0xa75f6
	cmp r5, #0	@ 000a75f6 002d
.org 0xa75f8
	bne.n 0xa760c	@ 000a75f8 08d1
.org 0xa75fa
	movs r1, #139	@ 000a75fa 8b21
.org 0xa75fc
	lsls r1, r1, #8	@ 000a75fc 0902
.org 0xa75fe
	bl 0x1cf00	@ 000a75fe 75f77ffc
.org 0xa7602
	strb r5, [r4, #18]	@ 000a7602 a574
.org 0xa7604
	strb r5, [r4, #15]	@ 000a7604 e573
.org 0xa7606
	ldrb r0, [r4, #14]	@ 000a7606 a07b
.org 0xa7608
	adds r0, #1	@ 000a7608 0130
.org 0xa760a
	strb r0, [r4, #14]	@ 000a760a a073
.org 0xa760c
	ldrb r0, [r4, #15]	@ 000a760c e07b
.org 0xa760e
	cmp r0, #4	@ 000a760e 0428
.org 0xa7610
	bls.n 0xa7614	@ 000a7610 00d9
.org 0xa7612
	b.n 0xa771a	@ 000a7612 82e0
.org 0xa7614
	lsls r0, r0, #2	@ 000a7614 8000
.org 0xa7616
	ldr r1, [pc, #8]	@ 000a7616 0249
.org 0xa7618
	adds r0, r0, r1	@ 000a7618 4018
.org 0xa761a
	ldr r0, [r0, #0]	@ 000a761a 0068
.org 0xa761c
	mov pc, r0	@ 000a761c 8746
.org 0xa761e
	.byte 0x00	@ 000a761e data
.org 0xa761f
	.byte 0x00	@ 000a761f data
.org 0xa7620
	.byte 0x24,0x76,0x0a,0x08	@ 000a7620 data
.org 0xa7624
	.byte 0x38,0x76,0x0a,0x08	@ 000a7624 data
.org 0xa7628
	.byte 0x7c,0x76,0x0a,0x08	@ 000a7628 data
