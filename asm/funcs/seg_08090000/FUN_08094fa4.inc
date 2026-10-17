@ FUN_08094fa4  entry 0x08094fa4  size 94
.thumb
.org 0x94fa4
FUN_08094fa4:
	push {r4, r5, r6, r7, lr}	@ 00094fa4 f0b5
.org 0x94fa6
	adds r6, r0, #0	@ 00094fa6 061c
.org 0x94fa8
	adds r7, r1, #0	@ 00094fa8 0f1c
.org 0x94faa
	lsls r2, r2, #24	@ 00094faa 1206
.org 0x94fac
	lsrs r5, r2, #24	@ 00094fac 150e
.org 0x94fae
	lsls r3, r3, #24	@ 00094fae 1b06
.org 0x94fb0
	lsrs r4, r3, #24	@ 00094fb0 1c0e
.org 0x94fb2
	ldr r0, [pc, #80]	@ 00094fb2 1448
.org 0x94fb4
	ldr r0, [r0, #0]	@ 00094fb4 0068
.org 0x94fb6
	bl 0x5500	@ 00094fb6 70f7a3fa
.org 0x94fba
	adds r3, r0, #0	@ 00094fba 031c
.org 0x94fbc
	cmp r3, #0	@ 00094fbc 002b
.org 0x94fbe
	beq.n 0x94ffa	@ 00094fbe 1cd0
.org 0x94fc0
	adds r1, r3, #0	@ 00094fc0 191c
.org 0x94fc2
	adds r1, #37	@ 00094fc2 2531
.org 0x94fc4
	movs r2, #0	@ 00094fc4 0022
.org 0x94fc6
	movs r0, #24	@ 00094fc6 1820
.org 0x94fc8
	strb r0, [r1, #0]	@ 00094fc8 0870
.org 0x94fca
	ldr r1, [pc, #60]	@ 00094fca 0f49
.org 0x94fcc
	movs r0, #25	@ 00094fcc 1920
.org 0x94fce
	strb r0, [r3, #9]	@ 00094fce 5872
.org 0x94fd0
	ldr r0, [r1, #100]	@ 00094fd0 486e
.org 0x94fd2
	ldr r0, [r0, #0]	@ 00094fd2 0068
.org 0x94fd4
	str r0, [r3, #20]	@ 00094fd4 5861
.org 0x94fd6
	movs r0, #0	@ 00094fd6 0020
.org 0x94fd8
	strh r2, [r3, #32]	@ 00094fd8 1a84
.org 0x94fda
	adds r1, r3, #0	@ 00094fda 191c
.org 0x94fdc
	adds r1, #34	@ 00094fdc 2231
.org 0x94fde
	strb r0, [r1, #0]	@ 00094fde 0870
.org 0x94fe0
	ldrb r1, [r3, #11]	@ 00094fe0 d97a
.org 0x94fe2
	movs r0, #16	@ 00094fe2 1020
.org 0x94fe4
	orrs r0, r1	@ 00094fe4 0843
.org 0x94fe6
	strb r0, [r3, #11]	@ 00094fe6 d872
.org 0x94fe8
	ldrb r0, [r3, #28]	@ 00094fe8 187f
.org 0x94fea
	strb r0, [r3, #29]	@ 00094fea 5877
.org 0x94fec
	str r6, [r3, #40]	@ 00094fec 9e62
.org 0x94fee
	ldr r0, [r7, #0]	@ 00094fee 3868
.org 0x94ff0
	ldr r1, [r7, #4]	@ 00094ff0 7968
.org 0x94ff2
	str r0, [r3, #84]	@ 00094ff2 5865
.org 0x94ff4
	str r1, [r3, #88]	@ 00094ff4 9965
.org 0x94ff6
	strb r5, [r3, #16]	@ 00094ff6 1d74
.org 0x94ff8
	strb r4, [r3, #17]	@ 00094ff8 5c74
.org 0x94ffa
	adds r0, r3, #0	@ 00094ffa 181c
.org 0x94ffc
	pop {r4, r5, r6, r7}	@ 00094ffc f0bc
.org 0x94ffe
	pop {r1}	@ 00094ffe 02bc
.org 0x95000
	bx r1	@ 00095000 0847
