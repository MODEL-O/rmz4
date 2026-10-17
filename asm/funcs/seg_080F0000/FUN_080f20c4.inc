@ FUN_080f20c4  entry 0x080f20c4  size 84
.thumb
.org 0xf20c4
FUN_080f20c4:
	push {r4, r5, r6, lr}	@ 000f20c4 70b5
.org 0xf20c6
	adds r6, r0, #0	@ 000f20c6 061c
.org 0xf20c8
	lsls r1, r1, #24	@ 000f20c8 0906
.org 0xf20ca
	lsrs r5, r1, #24	@ 000f20ca 0d0e
.org 0xf20cc
	ldr r0, [pc, #72]	@ 000f20cc 1248
.org 0xf20ce
	ldr r0, [r0, #0]	@ 000f20ce 0068
.org 0xf20d0
	bl 0x5500	@ 000f20d0 13f716fa
.org 0xf20d4
	adds r4, r0, #0	@ 000f20d4 041c
.org 0xf20d6
	cmp r4, #0	@ 000f20d6 002c
.org 0xf20d8
	beq.n 0xf2110	@ 000f20d8 1ad0
.org 0xf20da
	adds r1, r4, #0	@ 000f20da 211c
.org 0xf20dc
	adds r1, #37	@ 000f20dc 2531
.org 0xf20de
	movs r3, #0	@ 000f20de 0023
.org 0xf20e0
	movs r0, #30	@ 000f20e0 1e20
.org 0xf20e2
	strb r0, [r1, #0]	@ 000f20e2 0870
.org 0xf20e4
	ldr r2, [pc, #52]	@ 000f20e4 0d4a
.org 0xf20e6
	movs r1, #16	@ 000f20e6 1021
.org 0xf20e8
	movs r0, #16	@ 000f20e8 1020
.org 0xf20ea
	strb r0, [r4, #9]	@ 000f20ea 6072
.org 0xf20ec
	ldr r0, [r2, #64]	@ 000f20ec 106c
.org 0xf20ee
	ldr r0, [r0, #0]	@ 000f20ee 0068
.org 0xf20f0
	str r0, [r4, #20]	@ 000f20f0 6061
.org 0xf20f2
	movs r0, #0	@ 000f20f2 0020
.org 0xf20f4
	strh r3, [r4, #32]	@ 000f20f4 2384
.org 0xf20f6
	adds r2, r4, #0	@ 000f20f6 221c
.org 0xf20f8
	adds r2, #34	@ 000f20f8 2232
.org 0xf20fa
	strb r0, [r2, #0]	@ 000f20fa 1070
.org 0xf20fc
	ldrb r0, [r4, #11]	@ 000f20fc e07a
.org 0xf20fe
	orrs r1, r0	@ 000f20fe 0143
.org 0xf2100
	strb r1, [r4, #11]	@ 000f2100 e172
.org 0xf2102
	ldrb r0, [r4, #28]	@ 000f2102 207f
.org 0xf2104
	strb r0, [r4, #29]	@ 000f2104 6077
.org 0xf2106
	ldr r0, [r6, #0]	@ 000f2106 3068
.org 0xf2108
	ldr r1, [r6, #4]	@ 000f2108 7168
.org 0xf210a
	str r0, [r4, #84]	@ 000f210a 6065
.org 0xf210c
	str r1, [r4, #88]	@ 000f210c a165
.org 0xf210e
	strb r5, [r4, #16]	@ 000f210e 2574
.org 0xf2110
	adds r0, r4, #0	@ 000f2110 201c
.org 0xf2112
	pop {r4, r5, r6}	@ 000f2112 70bc
.org 0xf2114
	pop {r1}	@ 000f2114 02bc
.org 0xf2116
	bx r1	@ 000f2116 0847
