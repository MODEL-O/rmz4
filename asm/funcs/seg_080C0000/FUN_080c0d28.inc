@ FUN_080c0d28  entry 0x080c0d28  size 108
.thumb
.org 0xc0d28
FUN_080c0d28:
	push {r4, r5, r6, r7, lr}	@ 000c0d28 f0b5
.org 0xc0d2a
	adds r4, r0, #0	@ 000c0d2a 041c
.org 0xc0d2c
	adds r5, r1, #0	@ 000c0d2c 0d1c
.org 0xc0d2e
	adds r6, r2, #0	@ 000c0d2e 161c
.org 0xc0d30
	lsls r3, r3, #24	@ 000c0d30 1b06
.org 0xc0d32
	lsrs r7, r3, #24	@ 000c0d32 1f0e
.org 0xc0d34
	ldr r0, [pc, #92]	@ 000c0d34 1748
.org 0xc0d36
	ldr r0, [r0, #0]	@ 000c0d36 0068
.org 0xc0d38
	bl 0x5500	@ 000c0d38 44f7e2fb
.org 0xc0d3c
	mov ip, r0	@ 000c0d3c 8446
.org 0xc0d3e
	cmp r0, #0	@ 000c0d3e 0028
.org 0xc0d40
	beq.n 0xc0d8c	@ 000c0d40 24d0
.org 0xc0d42
	mov r1, ip	@ 000c0d42 6146
.org 0xc0d44
	adds r1, #37	@ 000c0d44 2531
.org 0xc0d46
	movs r3, #0	@ 000c0d46 0023
.org 0xc0d48
	movs r0, #8	@ 000c0d48 0820
.org 0xc0d4a
	strb r0, [r1, #0]	@ 000c0d4a 0870
.org 0xc0d4c
	ldr r1, [pc, #72]	@ 000c0d4c 1249
.org 0xc0d4e
	movs r0, #12	@ 000c0d4e 0c20
.org 0xc0d50
	mov r2, ip	@ 000c0d50 6246
.org 0xc0d52
	strb r0, [r2, #9]	@ 000c0d52 5072
.org 0xc0d54
	ldr r0, [r1, #48]	@ 000c0d54 086b
.org 0xc0d56
	ldr r0, [r0, #0]	@ 000c0d56 0068
.org 0xc0d58
	str r0, [r2, #20]	@ 000c0d58 5061
.org 0xc0d5a
	movs r2, #0	@ 000c0d5a 0022
.org 0xc0d5c
	mov r0, ip	@ 000c0d5c 6046
.org 0xc0d5e
	strh r3, [r0, #32]	@ 000c0d5e 0384
.org 0xc0d60
	adds r0, #34	@ 000c0d60 2230
.org 0xc0d62
	strb r2, [r0, #0]	@ 000c0d62 0270
.org 0xc0d64
	mov r1, ip	@ 000c0d64 6146
.org 0xc0d66
	str r4, [r1, #40]	@ 000c0d66 8c62
.org 0xc0d68
	ldr r0, [r5, #0]	@ 000c0d68 2868
.org 0xc0d6a
	ldr r1, [r5, #4]	@ 000c0d6a 6968
.org 0xc0d6c
	mov r3, ip	@ 000c0d6c 6346
.org 0xc0d6e
	str r0, [r3, #84]	@ 000c0d6e 5865
.org 0xc0d70
	str r1, [r3, #88]	@ 000c0d70 9965
.org 0xc0d72
	ldr r0, [r6, #0]	@ 000c0d72 3068
.org 0xc0d74
	ldr r1, [r6, #4]	@ 000c0d74 7168
.org 0xc0d76
	str r0, [r3, #92]	@ 000c0d76 d865
.org 0xc0d78
	str r1, [r3, #96]	@ 000c0d78 1966
.org 0xc0d7a
	strb r2, [r3, #16]	@ 000c0d7a 1a74
.org 0xc0d7c
	strb r7, [r3, #17]	@ 000c0d7c 5f74
.org 0xc0d7e
	mov r0, ip	@ 000c0d7e 6046
.org 0xc0d80
	adds r0, #180	@ 000c0d80 b430
.org 0xc0d82
	strb r2, [r0, #0]	@ 000c0d82 0270
.org 0xc0d84
	adds r0, #1	@ 000c0d84 0130
.org 0xc0d86
	strb r2, [r0, #0]	@ 000c0d86 0270
.org 0xc0d88
	adds r0, #1	@ 000c0d88 0130
.org 0xc0d8a
	strb r2, [r0, #0]	@ 000c0d8a 0270
.org 0xc0d8c
	mov r0, ip	@ 000c0d8c 6046
.org 0xc0d8e
	pop {r4, r5, r6, r7}	@ 000c0d8e f0bc
.org 0xc0d90
	pop {r1}	@ 000c0d90 02bc
.org 0xc0d92
	bx r1	@ 000c0d92 0847
