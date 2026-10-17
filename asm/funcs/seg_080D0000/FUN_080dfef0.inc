@ FUN_080dfef0  entry 0x080dfef0  size 86
.thumb
.org 0xdfef0
FUN_080dfef0:
	push {r4, r5, r6, lr}	@ 000dfef0 70b5
.org 0xdfef2
	adds r5, r0, #0	@ 000dfef2 051c
.org 0xdfef4
	lsls r1, r1, #16	@ 000dfef4 0904
.org 0xdfef6
	lsrs r6, r1, #16	@ 000dfef6 0e0c
.org 0xdfef8
	lsls r2, r2, #24	@ 000dfef8 1206
.org 0xdfefa
	lsrs r4, r2, #24	@ 000dfefa 140e
.org 0xdfefc
	ldr r0, [pc, #72]	@ 000dfefc 1248
.org 0xdfefe
	ldr r0, [r0, #0]	@ 000dfefe 0068
.org 0xdff00
	bl 0x5500	@ 000dff00 25f7fefa
.org 0xdff04
	adds r3, r0, #0	@ 000dff04 031c
.org 0xdff06
	cmp r3, #0	@ 000dff06 002b
.org 0xdff08
	beq.n 0xdff40	@ 000dff08 1ad0
.org 0xdff0a
	adds r1, r3, #0	@ 000dff0a 191c
.org 0xdff0c
	adds r1, #37	@ 000dff0c 2531
.org 0xdff0e
	movs r2, #0	@ 000dff0e 0022
.org 0xdff10
	movs r0, #1	@ 000dff10 0120
.org 0xdff12
	strb r0, [r1, #0]	@ 000dff12 0870
.org 0xdff14
	ldr r0, [pc, #52]	@ 000dff14 0d48
.org 0xdff16
	movs r1, #54	@ 000dff16 3621
.org 0xdff18
	strb r1, [r3, #9]	@ 000dff18 5972
.org 0xdff1a
	adds r0, #216	@ 000dff1a d830
.org 0xdff1c
	ldr r0, [r0, #0]	@ 000dff1c 0068
.org 0xdff1e
	ldr r0, [r0, #0]	@ 000dff1e 0068
.org 0xdff20
	str r0, [r3, #20]	@ 000dff20 5861
.org 0xdff22
	movs r0, #0	@ 000dff22 0020
.org 0xdff24
	strh r2, [r3, #32]	@ 000dff24 1a84
.org 0xdff26
	adds r1, r3, #0	@ 000dff26 191c
.org 0xdff28
	adds r1, #34	@ 000dff28 2231
.org 0xdff2a
	strb r0, [r1, #0]	@ 000dff2a 0870
.org 0xdff2c
	ldr r0, [r5, #0]	@ 000dff2c 2868
.org 0xdff2e
	ldr r1, [r5, #4]	@ 000dff2e 6968
.org 0xdff30
	str r0, [r3, #84]	@ 000dff30 5865
.org 0xdff32
	str r1, [r3, #88]	@ 000dff32 9965
.org 0xdff34
	movs r0, #2	@ 000dff34 0220
.org 0xdff36
	strb r0, [r3, #16]	@ 000dff36 1874
.org 0xdff38
	strb r4, [r3, #17]	@ 000dff38 5c74
.org 0xdff3a
	adds r0, r3, #0	@ 000dff3a 181c
.org 0xdff3c
	adds r0, #128	@ 000dff3c 8030
.org 0xdff3e
	strh r6, [r0, #0]	@ 000dff3e 0680
.org 0xdff40
	pop {r4, r5, r6}	@ 000dff40 70bc
.org 0xdff42
	pop {r0}	@ 000dff42 01bc
.org 0xdff44
	bx r0	@ 000dff44 0047
