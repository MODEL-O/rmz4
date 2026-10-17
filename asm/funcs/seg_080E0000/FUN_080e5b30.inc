@ FUN_080e5b30  entry 0x080e5b30  size 86
.thumb
.org 0xe5b30
FUN_080e5b30:
	push {r4, r5, r6, lr}	@ 000e5b30 70b5
.org 0xe5b32
	adds r6, r0, #0	@ 000e5b32 061c
.org 0xe5b34
	adds r4, r1, #0	@ 000e5b34 0c1c
.org 0xe5b36
	lsls r2, r2, #24	@ 000e5b36 1206
.org 0xe5b38
	lsrs r5, r2, #24	@ 000e5b38 150e
.org 0xe5b3a
	ldr r0, [pc, #76]	@ 000e5b3a 1348
.org 0xe5b3c
	ldr r0, [r0, #0]	@ 000e5b3c 0068
.org 0xe5b3e
	bl 0x5500	@ 000e5b3e 1ff7dffc
.org 0xe5b42
	adds r3, r0, #0	@ 000e5b42 031c
.org 0xe5b44
	cmp r3, #0	@ 000e5b44 002b
.org 0xe5b46
	beq.n 0xe5b7e	@ 000e5b46 1ad0
.org 0xe5b48
	adds r1, r3, #0	@ 000e5b48 191c
.org 0xe5b4a
	adds r1, #37	@ 000e5b4a 2531
.org 0xe5b4c
	movs r2, #0	@ 000e5b4c 0022
.org 0xe5b4e
	movs r0, #1	@ 000e5b4e 0120
.org 0xe5b50
	strb r0, [r1, #0]	@ 000e5b50 0870
.org 0xe5b52
	ldr r0, [pc, #56]	@ 000e5b52 0e48
.org 0xe5b54
	movs r1, #78	@ 000e5b54 4e21
.org 0xe5b56
	strb r1, [r3, #9]	@ 000e5b56 5972
.org 0xe5b58
	adds r1, #234	@ 000e5b58 ea31
.org 0xe5b5a
	adds r0, r0, r1	@ 000e5b5a 4018
.org 0xe5b5c
	ldr r0, [r0, #0]	@ 000e5b5c 0068
.org 0xe5b5e
	ldr r0, [r0, #0]	@ 000e5b5e 0068
.org 0xe5b60
	str r0, [r3, #20]	@ 000e5b60 5861
.org 0xe5b62
	movs r0, #0	@ 000e5b62 0020
.org 0xe5b64
	strh r2, [r3, #32]	@ 000e5b64 1a84
.org 0xe5b66
	adds r1, r3, #0	@ 000e5b66 191c
.org 0xe5b68
	adds r1, #34	@ 000e5b68 2231
.org 0xe5b6a
	strb r0, [r1, #0]	@ 000e5b6a 0870
.org 0xe5b6c
	str r6, [r3, #40]	@ 000e5b6c 9e62
.org 0xe5b6e
	ldr r0, [r4, #0]	@ 000e5b6e 2068
.org 0xe5b70
	str r0, [r3, #116]	@ 000e5b70 5867
.org 0xe5b72
	ldr r0, [r4, #4]	@ 000e5b72 6068
.org 0xe5b74
	str r0, [r3, #120]	@ 000e5b74 9867
.org 0xe5b76
	strb r5, [r3, #18]	@ 000e5b76 9d74
.org 0xe5b78
	adds r0, r3, #0	@ 000e5b78 181c
.org 0xe5b7a
	adds r0, #124	@ 000e5b7a 7c30
.org 0xe5b7c
	strb r5, [r0, #0]	@ 000e5b7c 0570
.org 0xe5b7e
	adds r0, r3, #0	@ 000e5b7e 181c
.org 0xe5b80
	pop {r4, r5, r6}	@ 000e5b80 70bc
.org 0xe5b82
	pop {r1}	@ 000e5b82 02bc
.org 0xe5b84
	bx r1	@ 000e5b84 0847
