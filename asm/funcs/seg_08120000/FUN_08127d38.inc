@ FUN_08127d38  entry 0x08127d38  size 76
.thumb
.org 0x127d38
FUN_08127d38:
	push {r4, r5, r6, r7, lr}	@ 00127d38 f0b5
.org 0x127d3a
	ldr r0, [pc, #72]	@ 00127d3a 1248
.org 0x127d3c
	ldr r6, [r0, #0]	@ 00127d3c 0668
.org 0x127d3e
	ldr r1, [r6, #0]	@ 00127d3e 3168
.org 0x127d40
	ldr r0, [pc, #68]	@ 00127d40 1148
.org 0x127d42
	cmp r1, r0	@ 00127d42 8142
.org 0x127d44
	bne.n 0x127d7e	@ 00127d44 1bd1
.org 0x127d46
	adds r0, r1, #1	@ 00127d46 481c
.org 0x127d48
	str r0, [r6, #0]	@ 00127d48 3060
.org 0x127d4a
	movs r5, #12	@ 00127d4a 0c25
.org 0x127d4c
	adds r4, r6, #0	@ 00127d4c 341c
.org 0x127d4e
	adds r4, #80	@ 00127d4e 5034
.org 0x127d50
	movs r0, #0	@ 00127d50 0020
.org 0x127d52
	strb r0, [r4, #0]	@ 00127d52 2070
.org 0x127d54
	subs r5, #1	@ 00127d54 013d
.org 0x127d56
	adds r4, #64	@ 00127d56 4034
.org 0x127d58
	cmp r5, #0	@ 00127d58 002d
.org 0x127d5a
	bgt.n 0x127d52	@ 00127d5a fadc
.org 0x127d5c
	ldr r4, [r6, #28]	@ 00127d5c f469
.org 0x127d5e
	cmp r4, #0	@ 00127d5e 002c
.org 0x127d60
	beq.n 0x127d7a	@ 00127d60 0bd0
.org 0x127d62
	movs r5, #1	@ 00127d62 0125
.org 0x127d64
	movs r7, #0	@ 00127d64 0027
.org 0x127d66
	lsls r0, r5, #24	@ 00127d66 2806
.org 0x127d68
	lsrs r0, r0, #24	@ 00127d68 000e
.org 0x127d6a
	ldr r1, [r6, #44]	@ 00127d6a f16a
.org 0x127d6c
	bl 0x128f80	@ 00127d6c 01f008f9
.org 0x127d70
	strb r7, [r4, #0]	@ 00127d70 2770
.org 0x127d72
	adds r5, #1	@ 00127d72 0135
.org 0x127d74
	adds r4, #64	@ 00127d74 4034
.org 0x127d76
	cmp r5, #4	@ 00127d76 042d
.org 0x127d78
	ble.n 0x127d66	@ 00127d78 f5dd
.org 0x127d7a
	ldr r0, [pc, #12]	@ 00127d7a 0348
.org 0x127d7c
	str r0, [r6, #0]	@ 00127d7c 3060
.org 0x127d7e
	pop {r4, r5, r6, r7}	@ 00127d7e f0bc
.org 0x127d80
	pop {r0}	@ 00127d80 01bc
.org 0x127d82
	bx r0	@ 00127d82 0047
