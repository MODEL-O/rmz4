@ FUN_080f75bc  entry 0x080f75bc  size 80
.thumb
.org 0xf75bc
FUN_080f75bc:
	push {r4, r5, lr}	@ 000f75bc 30b5
.org 0xf75be
	lsls r1, r1, #24	@ 000f75be 0906
.org 0xf75c0
	lsrs r5, r1, #24	@ 000f75c0 0d0e
.org 0xf75c2
	lsls r2, r2, #24	@ 000f75c2 1206
.org 0xf75c4
	lsrs r4, r2, #24	@ 000f75c4 140e
.org 0xf75c6
	ldr r0, [pc, #68]	@ 000f75c6 1148
.org 0xf75c8
	ldr r0, [r0, #0]	@ 000f75c8 0068
.org 0xf75ca
	bl 0x5500	@ 000f75ca 0df799ff
.org 0xf75ce
	adds r3, r0, #0	@ 000f75ce 031c
.org 0xf75d0
	cmp r3, #0	@ 000f75d0 002b
.org 0xf75d2
	beq.n 0xf7604	@ 000f75d2 17d0
.org 0xf75d4
	adds r1, r3, #0	@ 000f75d4 191c
.org 0xf75d6
	adds r1, #37	@ 000f75d6 2531
.org 0xf75d8
	movs r2, #0	@ 000f75d8 0022
.org 0xf75da
	movs r0, #30	@ 000f75da 1e20
.org 0xf75dc
	strb r0, [r1, #0]	@ 000f75dc 0870
.org 0xf75de
	ldr r1, [pc, #48]	@ 000f75de 0c49
.org 0xf75e0
	movs r0, #27	@ 000f75e0 1b20
.org 0xf75e2
	strb r0, [r3, #9]	@ 000f75e2 5872
.org 0xf75e4
	ldr r0, [r1, #108]	@ 000f75e4 c86e
.org 0xf75e6
	ldr r0, [r0, #0]	@ 000f75e6 0068
.org 0xf75e8
	str r0, [r3, #20]	@ 000f75e8 5861
.org 0xf75ea
	movs r0, #0	@ 000f75ea 0020
.org 0xf75ec
	strh r2, [r3, #32]	@ 000f75ec 1a84
.org 0xf75ee
	adds r1, r3, #0	@ 000f75ee 191c
.org 0xf75f0
	adds r1, #34	@ 000f75f0 2231
.org 0xf75f2
	strb r0, [r1, #0]	@ 000f75f2 0870
.org 0xf75f4
	ldrb r1, [r3, #11]	@ 000f75f4 d97a
.org 0xf75f6
	movs r0, #16	@ 000f75f6 1020
.org 0xf75f8
	orrs r0, r1	@ 000f75f8 0843
.org 0xf75fa
	strb r0, [r3, #11]	@ 000f75fa d872
.org 0xf75fc
	ldrb r0, [r3, #28]	@ 000f75fc 187f
.org 0xf75fe
	strb r0, [r3, #29]	@ 000f75fe 5877
.org 0xf7600
	strb r5, [r3, #16]	@ 000f7600 1d74
.org 0xf7602
	strb r4, [r3, #17]	@ 000f7602 5c74
.org 0xf7604
	adds r0, r3, #0	@ 000f7604 181c
.org 0xf7606
	pop {r4, r5}	@ 000f7606 30bc
.org 0xf7608
	pop {r1}	@ 000f7608 02bc
.org 0xf760a
	bx r1	@ 000f760a 0847
