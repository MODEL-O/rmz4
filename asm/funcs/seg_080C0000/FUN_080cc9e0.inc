@ FUN_080cc9e0  entry 0x080cc9e0  size 86
.thumb
.org 0xcc9e0
FUN_080cc9e0:
	push {r4, r5, r6, r7, lr}	@ 000cc9e0 f0b5
.org 0xcc9e2
	adds r5, r0, #0	@ 000cc9e2 051c
.org 0xcc9e4
	adds r7, r2, #0	@ 000cc9e4 171c
.org 0xcc9e6
	lsls r4, r1, #16	@ 000cc9e6 0c04
.org 0xcc9e8
	lsrs r6, r4, #16	@ 000cc9e8 260c
.org 0xcc9ea
	ldr r0, [pc, #16]	@ 000cc9ea 0448
.org 0xcc9ec
	ldr r0, [r0, #0]	@ 000cc9ec 0068
.org 0xcc9ee
	bl 0x5500	@ 000cc9ee 38f787fd
.org 0xcc9f2
	adds r3, r0, #0	@ 000cc9f2 031c
.org 0xcc9f4
	cmp r3, #0	@ 000cc9f4 002b
.org 0xcc9f6
	bne.n 0xcca00	@ 000cc9f6 03d1
.org 0xcc9f8
	movs r0, #0	@ 000cc9f8 0020
.org 0xcc9fa
	b.n 0xcca34	@ 000cc9fa 1be0
.org 0xcc9fc
	.byte 0x94,0xed,0x02,0x02	@ 000cc9fc data
.org 0xcca00
	adds r1, r3, #0	@ 000cca00 191c
.org 0xcca02
	adds r1, #37	@ 000cca02 2531
.org 0xcca04
	movs r2, #0	@ 000cca04 0022
.org 0xcca06
	movs r0, #8	@ 000cca06 0820
.org 0xcca08
	strb r0, [r1, #0]	@ 000cca08 0870
.org 0xcca0a
	ldr r0, [pc, #48]	@ 000cca0a 0c48
.org 0xcca0c
	movs r1, #43	@ 000cca0c 2b21
.org 0xcca0e
	strb r1, [r3, #9]	@ 000cca0e 5972
.org 0xcca10
	adds r0, #172	@ 000cca10 ac30
.org 0xcca12
	ldr r0, [r0, #0]	@ 000cca12 0068
.org 0xcca14
	ldr r0, [r0, #0]	@ 000cca14 0068
.org 0xcca16
	str r0, [r3, #20]	@ 000cca16 5861
.org 0xcca18
	movs r0, #0	@ 000cca18 0020
.org 0xcca1a
	strh r2, [r3, #32]	@ 000cca1a 1a84
.org 0xcca1c
	adds r1, r3, #0	@ 000cca1c 191c
.org 0xcca1e
	adds r1, #34	@ 000cca1e 2231
.org 0xcca20
	strb r0, [r1, #0]	@ 000cca20 0870
.org 0xcca22
	ldr r0, [r5, #0]	@ 000cca22 2868
.org 0xcca24
	ldr r1, [r5, #4]	@ 000cca24 6968
.org 0xcca26
	str r0, [r3, #84]	@ 000cca26 5865
.org 0xcca28
	str r1, [r3, #88]	@ 000cca28 9965
.org 0xcca2a
	lsrs r0, r4, #24	@ 000cca2a 200e
.org 0xcca2c
	strb r0, [r3, #16]	@ 000cca2c 1874
.org 0xcca2e
	strb r6, [r3, #17]	@ 000cca2e 5e74
.org 0xcca30
	str r7, [r3, #40]	@ 000cca30 9f62
.org 0xcca32
	adds r0, r3, #0	@ 000cca32 181c
.org 0xcca34
	pop {r4, r5, r6, r7}	@ 000cca34 f0bc
