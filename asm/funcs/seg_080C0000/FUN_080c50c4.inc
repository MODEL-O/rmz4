@ FUN_080c50c4  entry 0x080c50c4  size 84
.thumb
.org 0xc50c4
FUN_080c50c4:
	push {r4, r5, lr}	@ 000c50c4 30b5
.org 0xc50c6
	adds r4, r0, #0	@ 000c50c6 041c
.org 0xc50c8
	ldr r5, [r4, #40]	@ 000c50c8 a56a
.org 0xc50ca
	ldrb r0, [r4, #15]	@ 000c50ca e07b
.org 0xc50cc
	cmp r0, #0	@ 000c50cc 0028
.org 0xc50ce
	bne.n 0xc50ee	@ 000c50ce 0ed1
.org 0xc50d0
	adds r0, r4, #0	@ 000c50d0 201c
.org 0xc50d2
	adds r0, #116	@ 000c50d2 7430
.org 0xc50d4
	ldr r1, [pc, #64]	@ 000c50d4 1049
.org 0xc50d6
	bl 0x5784	@ 000c50d6 40f755fb
.org 0xc50da
	movs r1, #168	@ 000c50da a821
.org 0xc50dc
	lsls r1, r1, #7	@ 000c50dc c901
.org 0xc50de
	adds r0, r4, #0	@ 000c50de 201c
.org 0xc50e0
	bl 0x1cf00	@ 000c50e0 57f70eff
.org 0xc50e4
	movs r0, #8	@ 000c50e4 0820
.org 0xc50e6
	strb r0, [r4, #18]	@ 000c50e6 a074
.org 0xc50e8
	ldrb r0, [r4, #15]	@ 000c50e8 e07b
.org 0xc50ea
	adds r0, #1	@ 000c50ea 0130
.org 0xc50ec
	strb r0, [r4, #15]	@ 000c50ec e073
.org 0xc50ee
	adds r0, r4, #0	@ 000c50ee 201c
.org 0xc50f0
	bl 0x1cff0	@ 000c50f0 57f77eff
.org 0xc50f4
	ldr r0, [r5, #84]	@ 000c50f4 686d
.org 0xc50f6
	ldr r1, [r5, #88]	@ 000c50f6 a96d
.org 0xc50f8
	str r0, [r4, #84]	@ 000c50f8 6065
.org 0xc50fa
	str r1, [r4, #88]	@ 000c50fa a165
.org 0xc50fc
	ldrb r0, [r4, #18]	@ 000c50fc a07c
.org 0xc50fe
	subs r0, #1	@ 000c50fe 0138
.org 0xc5100
	strb r0, [r4, #18]	@ 000c5100 a074
.org 0xc5102
	lsls r0, r0, #24	@ 000c5102 0006
.org 0xc5104
	lsrs r1, r0, #24	@ 000c5104 010e
.org 0xc5106
	cmp r1, #0	@ 000c5106 0029
.org 0xc5108
	bne.n 0xc5112	@ 000c5108 03d1
.org 0xc510a
	movs r0, #1	@ 000c510a 0120
.org 0xc510c
	strb r0, [r4, #13]	@ 000c510c 6073
.org 0xc510e
	strb r1, [r4, #14]	@ 000c510e a173
.org 0xc5110
	strb r1, [r4, #15]	@ 000c5110 e173
.org 0xc5112
	pop {r4, r5}	@ 000c5112 30bc
.org 0xc5114
	pop {r0}	@ 000c5114 01bc
.org 0xc5116
	bx r0	@ 000c5116 0047
