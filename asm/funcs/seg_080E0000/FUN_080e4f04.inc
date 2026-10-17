@ FUN_080e4f04  entry 0x080e4f04  size 80
.thumb
.org 0xe4f04
FUN_080e4f04:
	push {r4, r5, r6, lr}	@ 000e4f04 70b5
.org 0xe4f06
	adds r6, r0, #0	@ 000e4f06 061c
.org 0xe4f08
	lsls r1, r1, #24	@ 000e4f08 0906
.org 0xe4f0a
	lsrs r5, r1, #24	@ 000e4f0a 0d0e
.org 0xe4f0c
	lsls r2, r2, #24	@ 000e4f0c 1206
.org 0xe4f0e
	lsrs r4, r2, #24	@ 000e4f0e 140e
.org 0xe4f10
	ldr r0, [pc, #64]	@ 000e4f10 1048
.org 0xe4f12
	ldr r0, [r0, #0]	@ 000e4f12 0068
.org 0xe4f14
	bl 0x5500	@ 000e4f14 20f7f4fa
.org 0xe4f18
	adds r3, r0, #0	@ 000e4f18 031c
.org 0xe4f1a
	cmp r3, #0	@ 000e4f1a 002b
.org 0xe4f1c
	beq.n 0xe4f4e	@ 000e4f1c 17d0
.org 0xe4f1e
	adds r1, r3, #0	@ 000e4f1e 191c
.org 0xe4f20
	adds r1, #37	@ 000e4f20 2531
.org 0xe4f22
	movs r2, #0	@ 000e4f22 0022
.org 0xe4f24
	movs r0, #1	@ 000e4f24 0120
.org 0xe4f26
	strb r0, [r1, #0]	@ 000e4f26 0870
.org 0xe4f28
	ldr r0, [pc, #44]	@ 000e4f28 0b48
.org 0xe4f2a
	movs r1, #75	@ 000e4f2a 4b21
.org 0xe4f2c
	strb r1, [r3, #9]	@ 000e4f2c 5972
.org 0xe4f2e
	adds r1, #225	@ 000e4f2e e131
.org 0xe4f30
	adds r0, r0, r1	@ 000e4f30 4018
.org 0xe4f32
	ldr r0, [r0, #0]	@ 000e4f32 0068
.org 0xe4f34
	ldr r0, [r0, #0]	@ 000e4f34 0068
.org 0xe4f36
	str r0, [r3, #20]	@ 000e4f36 5861
.org 0xe4f38
	movs r0, #0	@ 000e4f38 0020
.org 0xe4f3a
	strh r2, [r3, #32]	@ 000e4f3a 1a84
.org 0xe4f3c
	adds r1, r3, #0	@ 000e4f3c 191c
.org 0xe4f3e
	adds r1, #34	@ 000e4f3e 2231
.org 0xe4f40
	strb r0, [r1, #0]	@ 000e4f40 0870
.org 0xe4f42
	ldr r0, [r6, #0]	@ 000e4f42 3068
.org 0xe4f44
	ldr r1, [r6, #4]	@ 000e4f44 7168
.org 0xe4f46
	str r0, [r3, #84]	@ 000e4f46 5865
.org 0xe4f48
	str r1, [r3, #88]	@ 000e4f48 9965
.org 0xe4f4a
	strb r5, [r3, #16]	@ 000e4f4a 1d74
.org 0xe4f4c
	strb r4, [r3, #17]	@ 000e4f4c 5c74
.org 0xe4f4e
	pop {r4, r5, r6}	@ 000e4f4e 70bc
.org 0xe4f50
	pop {r0}	@ 000e4f50 01bc
.org 0xe4f52
	bx r0	@ 000e4f52 0047
