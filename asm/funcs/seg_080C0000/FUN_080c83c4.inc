@ FUN_080c83c4  entry 0x080c83c4  size 86
.thumb
.org 0xc83c4
FUN_080c83c4:
	push {r4, r5, r6, lr}	@ 000c83c4 70b5
.org 0xc83c6
	adds r6, r0, #0	@ 000c83c6 061c
.org 0xc83c8
	lsls r1, r1, #24	@ 000c83c8 0906
.org 0xc83ca
	lsrs r4, r1, #24	@ 000c83ca 0c0e
.org 0xc83cc
	lsls r2, r2, #24	@ 000c83cc 1206
.org 0xc83ce
	lsrs r5, r2, #24	@ 000c83ce 150e
.org 0xc83d0
	ldr r0, [pc, #72]	@ 000c83d0 1248
.org 0xc83d2
	ldr r0, [r0, #0]	@ 000c83d2 0068
.org 0xc83d4
	bl 0x5500	@ 000c83d4 3df794f8
.org 0xc83d8
	adds r3, r0, #0	@ 000c83d8 031c
.org 0xc83da
	cmp r3, #0	@ 000c83da 002b
.org 0xc83dc
	beq.n 0xc8412	@ 000c83dc 19d0
.org 0xc83de
	adds r1, r3, #0	@ 000c83de 191c
.org 0xc83e0
	adds r1, #37	@ 000c83e0 2531
.org 0xc83e2
	movs r2, #0	@ 000c83e2 0022
.org 0xc83e4
	movs r0, #8	@ 000c83e4 0820
.org 0xc83e6
	strb r0, [r1, #0]	@ 000c83e6 0870
.org 0xc83e8
	ldr r1, [pc, #52]	@ 000c83e8 0d49
.org 0xc83ea
	movs r0, #30	@ 000c83ea 1e20
.org 0xc83ec
	strb r0, [r3, #9]	@ 000c83ec 5872
.org 0xc83ee
	ldr r0, [r1, #120]	@ 000c83ee 886f
.org 0xc83f0
	ldr r0, [r0, #0]	@ 000c83f0 0068
.org 0xc83f2
	str r0, [r3, #20]	@ 000c83f2 5861
.org 0xc83f4
	movs r0, #0	@ 000c83f4 0020
.org 0xc83f6
	strh r2, [r3, #32]	@ 000c83f6 1a84
.org 0xc83f8
	adds r1, r3, #0	@ 000c83f8 191c
.org 0xc83fa
	adds r1, #34	@ 000c83fa 2231
.org 0xc83fc
	strb r0, [r1, #0]	@ 000c83fc 0870
.org 0xc83fe
	str r6, [r3, #40]	@ 000c83fe 9e62
.org 0xc8400
	strb r4, [r3, #16]	@ 000c8400 1c74
.org 0xc8402
	strb r5, [r3, #17]	@ 000c8402 5d74
.org 0xc8404
	cmp r4, #1	@ 000c8404 012c
.org 0xc8406
	bne.n 0xc8412	@ 000c8406 04d1
.org 0xc8408
	ldr r1, [pc, #24]	@ 000c8408 0649
.org 0xc840a
	adds r1, #38	@ 000c840a 2631
.org 0xc840c
	ldrb r0, [r1, #0]	@ 000c840c 0878
.org 0xc840e
	adds r0, #1	@ 000c840e 0130
.org 0xc8410
	strb r0, [r1, #0]	@ 000c8410 0870
.org 0xc8412
	adds r0, r3, #0	@ 000c8412 181c
.org 0xc8414
	pop {r4, r5, r6}	@ 000c8414 70bc
.org 0xc8416
	pop {r1}	@ 000c8416 02bc
.org 0xc8418
	bx r1	@ 000c8418 0847
