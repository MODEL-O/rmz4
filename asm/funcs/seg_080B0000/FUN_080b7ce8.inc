@ FUN_080b7ce8  entry 0x080b7ce8  size 90
.thumb
.org 0xb7ce8
FUN_080b7ce8:
	push {r4, r5, r6, lr}	@ 000b7ce8 70b5
.org 0xb7cea
	adds r6, r0, #0	@ 000b7cea 061c
.org 0xb7cec
	lsls r1, r1, #24	@ 000b7cec 0906
.org 0xb7cee
	lsrs r5, r1, #24	@ 000b7cee 0d0e
.org 0xb7cf0
	lsls r2, r2, #24	@ 000b7cf0 1206
.org 0xb7cf2
	lsrs r4, r2, #24	@ 000b7cf2 140e
.org 0xb7cf4
	ldr r0, [pc, #76]	@ 000b7cf4 1348
.org 0xb7cf6
	ldr r0, [r0, #0]	@ 000b7cf6 0068
.org 0xb7cf8
	bl 0x5500	@ 000b7cf8 4df702fc
.org 0xb7cfc
	adds r3, r0, #0	@ 000b7cfc 031c
.org 0xb7cfe
	cmp r3, #0	@ 000b7cfe 002b
.org 0xb7d00
	beq.n 0xb7d3a	@ 000b7d00 1bd0
.org 0xb7d02
	adds r1, r3, #0	@ 000b7d02 191c
.org 0xb7d04
	adds r1, #37	@ 000b7d04 2531
.org 0xb7d06
	movs r2, #0	@ 000b7d06 0022
.org 0xb7d08
	movs r0, #24	@ 000b7d08 1820
.org 0xb7d0a
	strb r0, [r1, #0]	@ 000b7d0a 0870
.org 0xb7d0c
	ldr r0, [pc, #56]	@ 000b7d0c 0e48
.org 0xb7d0e
	movs r1, #103	@ 000b7d0e 6721
.org 0xb7d10
	strb r1, [r3, #9]	@ 000b7d10 5972
.org 0xb7d12
	movs r1, #206	@ 000b7d12 ce21
.org 0xb7d14
	lsls r1, r1, #1	@ 000b7d14 4900
.org 0xb7d16
	adds r0, r0, r1	@ 000b7d16 4018
.org 0xb7d18
	ldr r0, [r0, #0]	@ 000b7d18 0068
.org 0xb7d1a
	ldr r0, [r0, #0]	@ 000b7d1a 0068
.org 0xb7d1c
	str r0, [r3, #20]	@ 000b7d1c 5861
.org 0xb7d1e
	movs r0, #0	@ 000b7d1e 0020
.org 0xb7d20
	strh r2, [r3, #32]	@ 000b7d20 1a84
.org 0xb7d22
	adds r1, r3, #0	@ 000b7d22 191c
.org 0xb7d24
	adds r1, #34	@ 000b7d24 2231
.org 0xb7d26
	strb r0, [r1, #0]	@ 000b7d26 0870
.org 0xb7d28
	ldrb r1, [r3, #11]	@ 000b7d28 d97a
.org 0xb7d2a
	movs r0, #16	@ 000b7d2a 1020
.org 0xb7d2c
	orrs r0, r1	@ 000b7d2c 0843
.org 0xb7d2e
	strb r0, [r3, #11]	@ 000b7d2e d872
.org 0xb7d30
	ldrb r0, [r3, #28]	@ 000b7d30 187f
.org 0xb7d32
	strb r0, [r3, #29]	@ 000b7d32 5877
.org 0xb7d34
	str r6, [r3, #40]	@ 000b7d34 9e62
.org 0xb7d36
	strb r5, [r3, #16]	@ 000b7d36 1d74
.org 0xb7d38
	strb r4, [r3, #17]	@ 000b7d38 5c74
.org 0xb7d3a
	adds r0, r3, #0	@ 000b7d3a 181c
.org 0xb7d3c
	pop {r4, r5, r6}	@ 000b7d3c 70bc
.org 0xb7d3e
	pop {r1}	@ 000b7d3e 02bc
.org 0xb7d40
	bx r1	@ 000b7d40 0847
