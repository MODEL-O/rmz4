@ FUN_08093758  entry 0x08093758  size 70
.thumb
.org 0x93758
FUN_08093758:
	push {r4, lr}	@ 00093758 10b5
.org 0x9375a
	adds r4, r0, #0	@ 0009375a 041c
.org 0x9375c
	ldrb r0, [r4, #15]	@ 0009375c e07b
.org 0x9375e
	cmp r0, #0	@ 0009375e 0028
.org 0x93760
	bne.n 0x9377a	@ 00093760 0bd1
.org 0x93762
	adds r0, r4, #0	@ 00093762 201c
.org 0x93764
	adds r0, #116	@ 00093764 7430
.org 0x93766
	ldr r1, [pc, #56]	@ 00093766 0e49
.org 0x93768
	bl 0x5784	@ 00093768 72f70cf8
.org 0x9376c
	ldr r1, [pc, #52]	@ 0009376c 0d49
.org 0x9376e
	adds r0, r4, #0	@ 0009376e 201c
.org 0x93770
	bl 0x1cf00	@ 00093770 89f7c6fb
.org 0x93774
	ldrb r0, [r4, #15]	@ 00093774 e07b
.org 0x93776
	adds r0, #1	@ 00093776 0130
.org 0x93778
	strb r0, [r4, #15]	@ 00093778 e073
.org 0x9377a
	adds r0, r4, #0	@ 0009377a 201c
.org 0x9377c
	bl 0x1cff0	@ 0009377c 89f738fc
.org 0x93780
	adds r0, r4, #0	@ 00093780 201c
.org 0x93782
	bl 0x94a38	@ 00093782 01f059f9
.org 0x93786
	adds r0, r4, #0	@ 00093786 201c
.org 0x93788
	adds r0, #115	@ 00093788 7330
.org 0x9378a
	ldrb r0, [r0, #0]	@ 0009378a 0078
.org 0x9378c
	cmp r0, #3	@ 0009378c 0328
.org 0x9378e
	bne.n 0x93798	@ 0009378e 03d1
.org 0x93790
	movs r0, #0	@ 00093790 0020
.org 0x93792
	strb r0, [r4, #13]	@ 00093792 6073
.org 0x93794
	strb r0, [r4, #14]	@ 00093794 a073
.org 0x93796
	strb r0, [r4, #15]	@ 00093796 e073
.org 0x93798
	pop {r4}	@ 00093798 10bc
.org 0x9379a
	pop {r0}	@ 0009379a 01bc
.org 0x9379c
	bx r0	@ 0009379c 0047
