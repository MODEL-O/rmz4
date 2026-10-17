@ FUN_080cfcf8  entry 0x080cfcf8  size 94
.thumb
.org 0xcfcf8
FUN_080cfcf8:
	push {r4, r5, r6, r7, lr}	@ 000cfcf8 f0b5
.org 0xcfcfa
	adds r4, r0, #0	@ 000cfcfa 041c
.org 0xcfcfc
	adds r7, r1, #0	@ 000cfcfc 0f1c
.org 0xcfcfe
	lsls r2, r2, #24	@ 000cfcfe 1206
.org 0xcfd00
	lsrs r6, r2, #24	@ 000cfd00 160e
.org 0xcfd02
	lsls r3, r3, #24	@ 000cfd02 1b06
.org 0xcfd04
	lsrs r5, r3, #24	@ 000cfd04 1d0e
.org 0xcfd06
	ldr r0, [pc, #80]	@ 000cfd06 1448
.org 0xcfd08
	ldr r0, [r0, #0]	@ 000cfd08 0068
.org 0xcfd0a
	bl 0x5500	@ 000cfd0a 35f7f9fb
.org 0xcfd0e
	adds r3, r0, #0	@ 000cfd0e 031c
.org 0xcfd10
	cmp r3, #0	@ 000cfd10 002b
.org 0xcfd12
	beq.n 0xcfd4e	@ 000cfd12 1cd0
.org 0xcfd14
	adds r1, r3, #0	@ 000cfd14 191c
.org 0xcfd16
	adds r1, #37	@ 000cfd16 2531
.org 0xcfd18
	movs r2, #0	@ 000cfd18 0022
.org 0xcfd1a
	movs r0, #8	@ 000cfd1a 0820
.org 0xcfd1c
	strb r0, [r1, #0]	@ 000cfd1c 0870
.org 0xcfd1e
	ldr r0, [pc, #60]	@ 000cfd1e 0f48
.org 0xcfd20
	movs r1, #61	@ 000cfd20 3d21
.org 0xcfd22
	strb r1, [r3, #9]	@ 000cfd22 5972
.org 0xcfd24
	adds r0, #244	@ 000cfd24 f430
.org 0xcfd26
	ldr r0, [r0, #0]	@ 000cfd26 0068
.org 0xcfd28
	ldr r0, [r0, #0]	@ 000cfd28 0068
.org 0xcfd2a
	str r0, [r3, #20]	@ 000cfd2a 5861
.org 0xcfd2c
	movs r0, #0	@ 000cfd2c 0020
.org 0xcfd2e
	strh r2, [r3, #32]	@ 000cfd2e 1a84
.org 0xcfd30
	adds r1, r3, #0	@ 000cfd30 191c
.org 0xcfd32
	adds r1, #34	@ 000cfd32 2231
.org 0xcfd34
	strb r0, [r1, #0]	@ 000cfd34 0870
.org 0xcfd36
	str r4, [r3, #40]	@ 000cfd36 9c62
.org 0xcfd38
	ldr r0, [r7, #0]	@ 000cfd38 3868
.org 0xcfd3a
	ldr r1, [r7, #4]	@ 000cfd3a 7968
.org 0xcfd3c
	str r0, [r3, #84]	@ 000cfd3c 5865
.org 0xcfd3e
	str r1, [r3, #88]	@ 000cfd3e 9965
.org 0xcfd40
	strb r6, [r3, #16]	@ 000cfd40 1e74
.org 0xcfd42
	strb r5, [r3, #17]	@ 000cfd42 5d74
.org 0xcfd44
	adds r1, r4, #0	@ 000cfd44 211c
.org 0xcfd46
	adds r1, #204	@ 000cfd46 cc31
.org 0xcfd48
	ldrh r0, [r1, #0]	@ 000cfd48 0888
.org 0xcfd4a
	adds r0, #1	@ 000cfd4a 0130
.org 0xcfd4c
	strh r0, [r1, #0]	@ 000cfd4c 0880
.org 0xcfd4e
	adds r0, r3, #0	@ 000cfd4e 181c
.org 0xcfd50
	pop {r4, r5, r6, r7}	@ 000cfd50 f0bc
.org 0xcfd52
	pop {r1}	@ 000cfd52 02bc
.org 0xcfd54
	bx r1	@ 000cfd54 0847
