@ FUN_080a8f00  entry 0x080a8f00  size 88
.thumb
.org 0xa8f00
FUN_080a8f00:
	push {r4, r5, r6, lr}	@ 000a8f00 70b5
.org 0xa8f02
	adds r6, r0, #0	@ 000a8f02 061c
.org 0xa8f04
	lsls r1, r1, #24	@ 000a8f04 0906
.org 0xa8f06
	lsrs r5, r1, #24	@ 000a8f06 0d0e
.org 0xa8f08
	lsls r2, r2, #24	@ 000a8f08 1206
.org 0xa8f0a
	lsrs r4, r2, #24	@ 000a8f0a 140e
.org 0xa8f0c
	ldr r0, [pc, #72]	@ 000a8f0c 1248
.org 0xa8f0e
	ldr r0, [r0, #0]	@ 000a8f0e 0068
.org 0xa8f10
	bl 0x5500	@ 000a8f10 5cf7f6fa
.org 0xa8f14
	adds r3, r0, #0	@ 000a8f14 031c
.org 0xa8f16
	cmp r3, #0	@ 000a8f16 002b
.org 0xa8f18
	beq.n 0xa8f50	@ 000a8f18 1ad0
.org 0xa8f1a
	adds r1, r3, #0	@ 000a8f1a 191c
.org 0xa8f1c
	adds r1, #37	@ 000a8f1c 2531
.org 0xa8f1e
	movs r2, #0	@ 000a8f1e 0022
.org 0xa8f20
	movs r0, #24	@ 000a8f20 1820
.org 0xa8f22
	strb r0, [r1, #0]	@ 000a8f22 0870
.org 0xa8f24
	ldr r0, [pc, #52]	@ 000a8f24 0d48
.org 0xa8f26
	movs r1, #68	@ 000a8f26 4421
.org 0xa8f28
	strb r1, [r3, #9]	@ 000a8f28 5972
.org 0xa8f2a
	adds r1, #204	@ 000a8f2a cc31
.org 0xa8f2c
	adds r0, r0, r1	@ 000a8f2c 4018
.org 0xa8f2e
	ldr r0, [r0, #0]	@ 000a8f2e 0068
.org 0xa8f30
	ldr r0, [r0, #0]	@ 000a8f30 0068
.org 0xa8f32
	str r0, [r3, #20]	@ 000a8f32 5861
.org 0xa8f34
	movs r0, #0	@ 000a8f34 0020
.org 0xa8f36
	strh r2, [r3, #32]	@ 000a8f36 1a84
.org 0xa8f38
	adds r1, r3, #0	@ 000a8f38 191c
.org 0xa8f3a
	adds r1, #34	@ 000a8f3a 2231
.org 0xa8f3c
	strb r0, [r1, #0]	@ 000a8f3c 0870
.org 0xa8f3e
	ldrb r1, [r3, #11]	@ 000a8f3e d97a
.org 0xa8f40
	movs r0, #16	@ 000a8f40 1020
.org 0xa8f42
	orrs r0, r1	@ 000a8f42 0843
.org 0xa8f44
	strb r0, [r3, #11]	@ 000a8f44 d872
.org 0xa8f46
	ldrb r0, [r3, #28]	@ 000a8f46 187f
.org 0xa8f48
	strb r0, [r3, #29]	@ 000a8f48 5877
.org 0xa8f4a
	str r6, [r3, #40]	@ 000a8f4a 9e62
.org 0xa8f4c
	strb r5, [r3, #16]	@ 000a8f4c 1d74
.org 0xa8f4e
	strb r4, [r3, #17]	@ 000a8f4e 5c74
.org 0xa8f50
	adds r0, r3, #0	@ 000a8f50 181c
.org 0xa8f52
	pop {r4, r5, r6}	@ 000a8f52 70bc
.org 0xa8f54
	pop {r1}	@ 000a8f54 02bc
.org 0xa8f56
	bx r1	@ 000a8f56 0847
