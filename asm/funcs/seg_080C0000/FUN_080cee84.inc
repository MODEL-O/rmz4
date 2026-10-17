@ FUN_080cee84  entry 0x080cee84  size 80
.thumb
.org 0xcee84
FUN_080cee84:
	push {r4, r5, r6, lr}	@ 000cee84 70b5
.org 0xcee86
	adds r4, r0, #0	@ 000cee86 041c
.org 0xcee88
	lsls r1, r1, #24	@ 000cee88 0906
.org 0xcee8a
	lsrs r6, r1, #24	@ 000cee8a 0e0e
.org 0xcee8c
	lsls r2, r2, #24	@ 000cee8c 1206
.org 0xcee8e
	lsrs r5, r2, #24	@ 000cee8e 150e
.org 0xcee90
	ldr r0, [pc, #64]	@ 000cee90 1048
.org 0xcee92
	ldr r0, [r0, #0]	@ 000cee92 0068
.org 0xcee94
	bl 0x5500	@ 000cee94 36f734fb
.org 0xcee98
	adds r3, r0, #0	@ 000cee98 031c
.org 0xcee9a
	cmp r3, #0	@ 000cee9a 002b
.org 0xcee9c
	beq.n 0xceece	@ 000cee9c 17d0
.org 0xcee9e
	adds r1, r3, #0	@ 000cee9e 191c
.org 0xceea0
	adds r1, #37	@ 000ceea0 2531
.org 0xceea2
	movs r2, #0	@ 000ceea2 0022
.org 0xceea4
	movs r0, #8	@ 000ceea4 0820
.org 0xceea6
	strb r0, [r1, #0]	@ 000ceea6 0870
.org 0xceea8
	ldr r0, [pc, #44]	@ 000ceea8 0b48
.org 0xceeaa
	movs r1, #56	@ 000ceeaa 3821
.org 0xceeac
	strb r1, [r3, #9]	@ 000ceeac 5972
.org 0xceeae
	adds r0, #224	@ 000ceeae e030
.org 0xceeb0
	ldr r0, [r0, #0]	@ 000ceeb0 0068
.org 0xceeb2
	ldr r0, [r0, #0]	@ 000ceeb2 0068
.org 0xceeb4
	str r0, [r3, #20]	@ 000ceeb4 5861
.org 0xceeb6
	movs r0, #0	@ 000ceeb6 0020
.org 0xceeb8
	strh r2, [r3, #32]	@ 000ceeb8 1a84
.org 0xceeba
	adds r1, r3, #0	@ 000ceeba 191c
.org 0xceebc
	adds r1, #34	@ 000ceebc 2231
.org 0xceebe
	strb r0, [r1, #0]	@ 000ceebe 0870
.org 0xceec0
	str r4, [r3, #40]	@ 000ceec0 9c62
.org 0xceec2
	ldr r0, [r4, #84]	@ 000ceec2 606d
.org 0xceec4
	ldr r1, [r4, #88]	@ 000ceec4 a16d
.org 0xceec6
	str r0, [r3, #84]	@ 000ceec6 5865
.org 0xceec8
	str r1, [r3, #88]	@ 000ceec8 9965
.org 0xceeca
	strb r6, [r3, #16]	@ 000ceeca 1e74
.org 0xceecc
	strb r5, [r3, #17]	@ 000ceecc 5d74
.org 0xceece
	pop {r4, r5, r6}	@ 000ceece 70bc
.org 0xceed0
	pop {r0}	@ 000ceed0 01bc
.org 0xceed2
	bx r0	@ 000ceed2 0047
