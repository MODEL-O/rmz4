@ FUN_08099f0c  entry 0x08099f0c  size 84
.thumb
.org 0x99f0c
FUN_08099f0c:
	push {r4, r5, r6, lr}	@ 00099f0c 70b5
.org 0x99f0e
	adds r6, r0, #0	@ 00099f0e 061c
.org 0x99f10
	lsls r1, r1, #24	@ 00099f10 0906
.org 0x99f12
	lsrs r5, r1, #24	@ 00099f12 0d0e
.org 0x99f14
	lsls r2, r2, #24	@ 00099f14 1206
.org 0x99f16
	lsrs r4, r2, #24	@ 00099f16 140e
.org 0x99f18
	ldr r0, [pc, #68]	@ 00099f18 1148
.org 0x99f1a
	ldr r0, [r0, #0]	@ 00099f1a 0068
.org 0x99f1c
	bl 0x5500	@ 00099f1c 6bf7f0fa
.org 0x99f20
	adds r3, r0, #0	@ 00099f20 031c
.org 0x99f22
	cmp r3, #0	@ 00099f22 002b
.org 0x99f24
	beq.n 0x99f5a	@ 00099f24 19d0
.org 0x99f26
	adds r1, r3, #0	@ 00099f26 191c
.org 0x99f28
	adds r1, #37	@ 00099f28 2531
.org 0x99f2a
	movs r2, #0	@ 00099f2a 0022
.org 0x99f2c
	movs r0, #24	@ 00099f2c 1820
.org 0x99f2e
	strb r0, [r1, #0]	@ 00099f2e 0870
.org 0x99f30
	ldr r0, [pc, #48]	@ 00099f30 0c48
.org 0x99f32
	movs r1, #36	@ 00099f32 2421
.org 0x99f34
	strb r1, [r3, #9]	@ 00099f34 5972
.org 0x99f36
	adds r0, #144	@ 00099f36 9030
.org 0x99f38
	ldr r0, [r0, #0]	@ 00099f38 0068
.org 0x99f3a
	ldr r0, [r0, #0]	@ 00099f3a 0068
.org 0x99f3c
	str r0, [r3, #20]	@ 00099f3c 5861
.org 0x99f3e
	movs r0, #0	@ 00099f3e 0020
.org 0x99f40
	strh r2, [r3, #32]	@ 00099f40 1a84
.org 0x99f42
	adds r1, r3, #0	@ 00099f42 191c
.org 0x99f44
	adds r1, #34	@ 00099f44 2231
.org 0x99f46
	strb r0, [r1, #0]	@ 00099f46 0870
.org 0x99f48
	ldrb r1, [r3, #11]	@ 00099f48 d97a
.org 0x99f4a
	movs r0, #16	@ 00099f4a 1020
.org 0x99f4c
	orrs r0, r1	@ 00099f4c 0843
.org 0x99f4e
	strb r0, [r3, #11]	@ 00099f4e d872
.org 0x99f50
	ldrb r0, [r3, #28]	@ 00099f50 187f
.org 0x99f52
	strb r0, [r3, #29]	@ 00099f52 5877
.org 0x99f54
	str r6, [r3, #40]	@ 00099f54 9e62
.org 0x99f56
	strb r5, [r3, #16]	@ 00099f56 1d74
.org 0x99f58
	strb r4, [r3, #17]	@ 00099f58 5c74
.org 0x99f5a
	pop {r4, r5, r6}	@ 00099f5a 70bc
.org 0x99f5c
	pop {r0}	@ 00099f5c 01bc
.org 0x99f5e
	bx r0	@ 00099f5e 0047
