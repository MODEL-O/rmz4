@ FUN_0800cea0  entry 0x0800cea0  size 100
.thumb
.org 0xcea0
FUN_0800cea0:
	push {r4, r5, r6, r7, lr}	@ 0000cea0 f0b5
.org 0xcea2
	adds r5, r0, #0	@ 0000cea2 051c
.org 0xcea4
	movs r4, #0	@ 0000cea4 0024
.org 0xcea6
	movs r0, #160	@ 0000cea6 a020
.org 0xcea8
	lsls r0, r0, #2	@ 0000cea8 8000
.org 0xceaa
	bl 0xa70	@ 0000ceaa f3f7e1fd
.org 0xceae
	adds r3, r0, #0	@ 0000ceae 031c
.org 0xceb0
	cmp r3, #0	@ 0000ceb0 002b
.org 0xceb2
	beq.n 0xcefe	@ 0000ceb2 24d0
.org 0xceb4
	ldr r2, [pc, #76]	@ 0000ceb4 134a
.org 0xceb6
	movs r1, #186	@ 0000ceb6 ba21
.org 0xceb8
	lsls r1, r1, #1	@ 0000ceb8 4900
.org 0xceba
	adds r0, r2, r1	@ 0000ceba 5018
.org 0xcebc
	str r3, [r0, #0]	@ 0000cebc 0360
.org 0xcebe
	movs r0, #188	@ 0000cebe bc20
.org 0xcec0
	lsls r0, r0, #1	@ 0000cec0 4000
.org 0xcec2
	adds r1, r2, r0	@ 0000cec2 1118
.org 0xcec4
	ldr r0, [pc, #64]	@ 0000cec4 1048
.org 0xcec6
	str r0, [r1, #0]	@ 0000cec6 0860
.org 0xcec8
	movs r0, #190	@ 0000cec8 be20
.org 0xceca
	lsls r0, r0, #1	@ 0000ceca 4000
.org 0xcecc
	adds r1, r2, r0	@ 0000cecc 1118
.org 0xcece
	ldr r0, [pc, #60]	@ 0000cece 0f48
.org 0xced0
	str r0, [r1, #0]	@ 0000ced0 0860
.org 0xced2
	ldr r0, [r5, #52]	@ 0000ced2 686b
.org 0xced4
	lsls r0, r0, #15	@ 0000ced4 c003
.org 0xced6
	movs r1, #56	@ 0000ced6 3821
.org 0xced8
	ldrsh r2, [r5, r1]	@ 0000ced8 6a5e
.org 0xceda
	asrs r6, r0, #16	@ 0000ceda 0614
.org 0xcedc
	lsls r5, r2, #16	@ 0000cedc 1504
.org 0xcede
	ldr r7, [pc, #48]	@ 0000cede 0c4f
.org 0xcee0
	adds r0, r4, r2	@ 0000cee0 a018
.org 0xcee2
	asrs r0, r0, #2	@ 0000cee2 8010
.org 0xcee4
	adds r0, r6, r0	@ 0000cee4 3018
.org 0xcee6
	lsls r1, r4, #2	@ 0000cee6 a100
.org 0xcee8
	adds r1, r1, r3	@ 0000cee8 c918
.org 0xceea
	lsls r0, r0, #16	@ 0000ceea 0004
.org 0xceec
	asrs r0, r0, #16	@ 0000ceec 0014
.org 0xceee
	ands r0, r7	@ 0000ceee 3840
.org 0xcef0
	orrs r0, r5	@ 0000cef0 2843
.org 0xcef2
	str r0, [r1, #0]	@ 0000cef2 0860
.org 0xcef4
	adds r0, r4, #1	@ 0000cef4 601c
.org 0xcef6
	lsls r0, r0, #24	@ 0000cef6 0006
.org 0xcef8
	lsrs r4, r0, #24	@ 0000cef8 040e
.org 0xcefa
	cmp r4, #159	@ 0000cefa 9f2c
.org 0xcefc
	bls.n 0xcee0	@ 0000cefc f0d9
.org 0xcefe
	pop {r4, r5, r6, r7}	@ 0000cefe f0bc
.org 0xcf00
	pop {r0}	@ 0000cf00 01bc
.org 0xcf02
	bx r0	@ 0000cf02 0047
