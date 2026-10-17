@ FUN_080a60b8  entry 0x080a60b8  size 156
.thumb
.org 0xa60b8
FUN_080a60b8:
	push {r4, r5, r6, r7, lr}	@ 000a60b8 f0b5
.org 0xa60ba
	adds r6, r0, #0	@ 000a60ba 061c
.org 0xa60bc
	bl 0x1cc9c	@ 000a60bc 76f7eefd
.org 0xa60c0
	ldrb r0, [r6, #10]	@ 000a60c0 b07a
.org 0xa60c2
	movs r1, #1	@ 000a60c2 0121
.org 0xa60c4
	movs r2, #0	@ 000a60c4 0022
.org 0xa60c6
	movs r7, #0	@ 000a60c6 0027
.org 0xa60c8
	orrs r1, r0	@ 000a60c8 0143
.org 0xa60ca
	movs r0, #2	@ 000a60ca 0220
.org 0xa60cc
	orrs r1, r0	@ 000a60cc 0143
.org 0xa60ce
	orrs r1, r2	@ 000a60ce 1143
.org 0xa60d0
	strb r1, [r6, #10]	@ 000a60d0 b172
.org 0xa60d2
	ldr r2, [pc, #128]	@ 000a60d2 204a
.org 0xa60d4
	ldrb r0, [r6, #9]	@ 000a60d4 707a
.org 0xa60d6
	lsls r0, r0, #2	@ 000a60d6 8000
.org 0xa60d8
	adds r0, r0, r2	@ 000a60d8 8018
.org 0xa60da
	movs r5, #1	@ 000a60da 0125
.org 0xa60dc
	str r5, [r6, #12]	@ 000a60dc f560
.org 0xa60de
	ldr r0, [r0, #0]	@ 000a60de 0068
.org 0xa60e0
	ldr r0, [r0, #4]	@ 000a60e0 4068
.org 0xa60e2
	str r0, [r6, #20]	@ 000a60e2 7061
.org 0xa60e4
	movs r0, #4	@ 000a60e4 0420
.org 0xa60e6
	orrs r1, r0	@ 000a60e6 0143
.org 0xa60e8
	strb r1, [r6, #10]	@ 000a60e8 b172
.org 0xa60ea
	adds r4, r6, #0	@ 000a60ea 341c
.org 0xa60ec
	adds r4, #116	@ 000a60ec 7434
.org 0xa60ee
	ldr r1, [pc, #104]	@ 000a60ee 1a49
.org 0xa60f0
	adds r2, r6, #0	@ 000a60f0 321c
.org 0xa60f2
	adds r2, #84	@ 000a60f2 5432
.org 0xa60f4
	adds r0, r4, #0	@ 000a60f4 201c
.org 0xa60f6
	movs r3, #6	@ 000a60f6 0623
.org 0xa60f8
	bl 0x5760	@ 000a60f8 5ff732fb
.org 0xa60fc
	str r6, [r4, #44]	@ 000a60fc e662
.org 0xa60fe
	ldr r0, [pc, #92]	@ 000a60fe 1748
.org 0xa6100
	str r0, [r4, #36]	@ 000a6100 6062
.org 0xa6102
	adds r1, r6, #0	@ 000a6102 311c
.org 0xa6104
	adds r1, #184	@ 000a6104 b831
.org 0xa6106
	ldr r0, [r6, #84]	@ 000a6106 706d
.org 0xa6108
	str r0, [r1, #0]	@ 000a6108 0860
.org 0xa610a
	adds r1, #4	@ 000a610a 0431
.org 0xa610c
	ldr r0, [r6, #88]	@ 000a610c b06d
.org 0xa610e
	str r0, [r1, #0]	@ 000a610e 0860
.org 0xa6110
	adds r0, r6, #0	@ 000a6110 301c
.org 0xa6112
	adds r0, #180	@ 000a6112 b430
.org 0xa6114
	strb r7, [r0, #0]	@ 000a6114 0770
.org 0xa6116
	adds r0, #1	@ 000a6116 0130
.org 0xa6118
	strb r5, [r0, #0]	@ 000a6118 0570
.org 0xa611a
	str r7, [r6, #44]	@ 000a611a f762
.org 0xa611c
	strb r7, [r6, #19]	@ 000a611c f774
.org 0xa611e
	strb r7, [r6, #13]	@ 000a611e 7773
.org 0xa6120
	strb r7, [r6, #14]	@ 000a6120 b773
.org 0xa6122
	adds r0, r6, #0	@ 000a6122 301c
.org 0xa6124
	bl 0xa66b4	@ 000a6124 00f0c6fa
.org 0xa6128
	lsls r0, r0, #24	@ 000a6128 0006
.org 0xa612a
	lsrs r4, r0, #24	@ 000a612a 040e
.org 0xa612c
	cmp r4, #2	@ 000a612c 022c
.org 0xa612e
	bne.n 0xa6142	@ 000a612e 08d1
.org 0xa6130
	movs r1, #138	@ 000a6130 8a21
.org 0xa6132
	lsls r1, r1, #8	@ 000a6132 0902
.org 0xa6134
	adds r0, r6, #0	@ 000a6134 301c
.org 0xa6136
	bl 0x1cf00	@ 000a6136 76f7e3fe
.org 0xa613a
	movs r0, #30	@ 000a613a 1e20
.org 0xa613c
	strb r0, [r6, #18]	@ 000a613c b074
.org 0xa613e
	strb r4, [r6, #13]	@ 000a613e 7473
.org 0xa6140
	strb r7, [r6, #14]	@ 000a6140 b773
.org 0xa6142
	adds r0, r6, #0	@ 000a6142 301c
.org 0xa6144
	bl 0xa67d8	@ 000a6144 00f048fb
.org 0xa6148
	adds r0, r6, #0	@ 000a6148 301c
.org 0xa614a
	bl 0xa6160	@ 000a614a 00f009f8
.org 0xa614e
	pop {r4, r5, r6, r7}	@ 000a614e f0bc
.org 0xa6150
	pop {r0}	@ 000a6150 01bc
.org 0xa6152
	bx r0	@ 000a6152 0047
