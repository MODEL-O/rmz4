@ FUN_080cff54  entry 0x080cff54  size 94
.thumb
.org 0xcff54
FUN_080cff54:
	push {r4, r5, r6, r7, lr}	@ 000cff54 f0b5
.org 0xcff56
	adds r4, r0, #0	@ 000cff56 041c
.org 0xcff58
	adds r7, r1, #0	@ 000cff58 0f1c
.org 0xcff5a
	lsls r2, r2, #24	@ 000cff5a 1206
.org 0xcff5c
	lsrs r6, r2, #24	@ 000cff5c 160e
.org 0xcff5e
	lsls r3, r3, #24	@ 000cff5e 1b06
.org 0xcff60
	lsrs r5, r3, #24	@ 000cff60 1d0e
.org 0xcff62
	ldr r0, [pc, #80]	@ 000cff62 1448
.org 0xcff64
	ldr r0, [r0, #0]	@ 000cff64 0068
.org 0xcff66
	bl 0x5500	@ 000cff66 35f7cbfa
.org 0xcff6a
	adds r3, r0, #0	@ 000cff6a 031c
.org 0xcff6c
	cmp r3, #0	@ 000cff6c 002b
.org 0xcff6e
	beq.n 0xcffaa	@ 000cff6e 1cd0
.org 0xcff70
	adds r1, r3, #0	@ 000cff70 191c
.org 0xcff72
	adds r1, #37	@ 000cff72 2531
.org 0xcff74
	movs r2, #0	@ 000cff74 0022
.org 0xcff76
	movs r0, #8	@ 000cff76 0820
.org 0xcff78
	strb r0, [r1, #0]	@ 000cff78 0870
.org 0xcff7a
	ldr r0, [pc, #60]	@ 000cff7a 0f48
.org 0xcff7c
	movs r1, #62	@ 000cff7c 3e21
.org 0xcff7e
	strb r1, [r3, #9]	@ 000cff7e 5972
.org 0xcff80
	adds r0, #248	@ 000cff80 f830
.org 0xcff82
	ldr r0, [r0, #0]	@ 000cff82 0068
.org 0xcff84
	ldr r0, [r0, #0]	@ 000cff84 0068
.org 0xcff86
	str r0, [r3, #20]	@ 000cff86 5861
.org 0xcff88
	movs r0, #0	@ 000cff88 0020
.org 0xcff8a
	strh r2, [r3, #32]	@ 000cff8a 1a84
.org 0xcff8c
	adds r1, r3, #0	@ 000cff8c 191c
.org 0xcff8e
	adds r1, #34	@ 000cff8e 2231
.org 0xcff90
	strb r0, [r1, #0]	@ 000cff90 0870
.org 0xcff92
	str r4, [r3, #40]	@ 000cff92 9c62
.org 0xcff94
	ldr r0, [r7, #0]	@ 000cff94 3868
.org 0xcff96
	ldr r1, [r7, #4]	@ 000cff96 7968
.org 0xcff98
	str r0, [r3, #84]	@ 000cff98 5865
.org 0xcff9a
	str r1, [r3, #88]	@ 000cff9a 9965
.org 0xcff9c
	strb r6, [r3, #16]	@ 000cff9c 1e74
.org 0xcff9e
	strb r5, [r3, #17]	@ 000cff9e 5d74
.org 0xcffa0
	adds r1, r4, #0	@ 000cffa0 211c
.org 0xcffa2
	adds r1, #204	@ 000cffa2 cc31
.org 0xcffa4
	ldrh r0, [r1, #0]	@ 000cffa4 0888
.org 0xcffa6
	adds r0, #1	@ 000cffa6 0130
.org 0xcffa8
	strh r0, [r1, #0]	@ 000cffa8 0880
.org 0xcffaa
	adds r0, r3, #0	@ 000cffaa 181c
.org 0xcffac
	pop {r4, r5, r6, r7}	@ 000cffac f0bc
.org 0xcffae
	pop {r1}	@ 000cffae 02bc
.org 0xcffb0
	bx r1	@ 000cffb0 0847
