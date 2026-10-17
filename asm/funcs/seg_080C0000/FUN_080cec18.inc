@ FUN_080cec18  entry 0x080cec18  size 86
.thumb
.org 0xcec18
FUN_080cec18:
	push {r4, r5, r6, r7, lr}	@ 000cec18 f0b5
.org 0xcec1a
	adds r5, r0, #0	@ 000cec1a 051c
.org 0xcec1c
	lsls r4, r1, #16	@ 000cec1c 0c04
.org 0xcec1e
	lsrs r6, r4, #16	@ 000cec1e 260c
.org 0xcec20
	lsls r2, r2, #24	@ 000cec20 1206
.org 0xcec22
	lsrs r7, r2, #24	@ 000cec22 170e
.org 0xcec24
	ldr r0, [pc, #72]	@ 000cec24 1248
.org 0xcec26
	ldr r0, [r0, #0]	@ 000cec26 0068
.org 0xcec28
	bl 0x5500	@ 000cec28 36f76afc
.org 0xcec2c
	adds r3, r0, #0	@ 000cec2c 031c
.org 0xcec2e
	cmp r3, #0	@ 000cec2e 002b
.org 0xcec30
	beq.n 0xcec68	@ 000cec30 1ad0
.org 0xcec32
	adds r1, r3, #0	@ 000cec32 191c
.org 0xcec34
	adds r1, #37	@ 000cec34 2531
.org 0xcec36
	movs r2, #0	@ 000cec36 0022
.org 0xcec38
	movs r0, #8	@ 000cec38 0820
.org 0xcec3a
	strb r0, [r1, #0]	@ 000cec3a 0870
.org 0xcec3c
	ldr r0, [pc, #52]	@ 000cec3c 0d48
.org 0xcec3e
	movs r1, #55	@ 000cec3e 3721
.org 0xcec40
	strb r1, [r3, #9]	@ 000cec40 5972
.org 0xcec42
	adds r0, #220	@ 000cec42 dc30
.org 0xcec44
	ldr r0, [r0, #0]	@ 000cec44 0068
.org 0xcec46
	ldr r0, [r0, #0]	@ 000cec46 0068
.org 0xcec48
	str r0, [r3, #20]	@ 000cec48 5861
.org 0xcec4a
	movs r0, #0	@ 000cec4a 0020
.org 0xcec4c
	strh r2, [r3, #32]	@ 000cec4c 1a84
.org 0xcec4e
	adds r1, r3, #0	@ 000cec4e 191c
.org 0xcec50
	adds r1, #34	@ 000cec50 2231
.org 0xcec52
	strb r0, [r1, #0]	@ 000cec52 0870
.org 0xcec54
	ldr r0, [r5, #0]	@ 000cec54 2868
.org 0xcec56
	ldr r1, [r5, #4]	@ 000cec56 6968
.org 0xcec58
	str r0, [r3, #84]	@ 000cec58 5865
.org 0xcec5a
	str r1, [r3, #88]	@ 000cec5a 9965
.org 0xcec5c
	lsrs r0, r4, #24	@ 000cec5c 200e
.org 0xcec5e
	strb r0, [r3, #16]	@ 000cec5e 1874
.org 0xcec60
	strb r6, [r3, #17]	@ 000cec60 5e74
.org 0xcec62
	adds r0, r3, #0	@ 000cec62 181c
.org 0xcec64
	adds r0, #180	@ 000cec64 b430
.org 0xcec66
	strb r7, [r0, #0]	@ 000cec66 0770
.org 0xcec68
	pop {r4, r5, r6, r7}	@ 000cec68 f0bc
.org 0xcec6a
	pop {r0}	@ 000cec6a 01bc
.org 0xcec6c
	bx r0	@ 000cec6c 0047
