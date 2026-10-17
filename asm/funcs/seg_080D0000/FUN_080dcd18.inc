@ FUN_080dcd18  entry 0x080dcd18  size 72
.thumb
.org 0xdcd18
FUN_080dcd18:
	push {r4, r5, r6, lr}	@ 000dcd18 70b5
.org 0xdcd1a
	adds r6, r0, #0	@ 000dcd1a 061c
.org 0xdcd1c
	lsls r1, r1, #24	@ 000dcd1c 0906
.org 0xdcd1e
	lsrs r5, r1, #24	@ 000dcd1e 0d0e
.org 0xdcd20
	lsls r2, r2, #24	@ 000dcd20 1206
.org 0xdcd22
	lsrs r4, r2, #24	@ 000dcd22 140e
.org 0xdcd24
	ldr r0, [pc, #56]	@ 000dcd24 0e48
.org 0xdcd26
	ldr r0, [r0, #0]	@ 000dcd26 0068
.org 0xdcd28
	bl 0x5500	@ 000dcd28 28f7eafb
.org 0xdcd2c
	adds r3, r0, #0	@ 000dcd2c 031c
.org 0xdcd2e
	cmp r3, #0	@ 000dcd2e 002b
.org 0xdcd30
	beq.n 0xdcd5a	@ 000dcd30 13d0
.org 0xdcd32
	adds r1, r3, #0	@ 000dcd32 191c
.org 0xdcd34
	adds r1, #37	@ 000dcd34 2531
.org 0xdcd36
	movs r2, #0	@ 000dcd36 0022
.org 0xdcd38
	movs r0, #1	@ 000dcd38 0120
.org 0xdcd3a
	strb r0, [r1, #0]	@ 000dcd3a 0870
.org 0xdcd3c
	ldr r0, [pc, #36]	@ 000dcd3c 0948
.org 0xdcd3e
	movs r1, #44	@ 000dcd3e 2c21
.org 0xdcd40
	strb r1, [r3, #9]	@ 000dcd40 5972
.org 0xdcd42
	adds r0, #176	@ 000dcd42 b030
.org 0xdcd44
	ldr r0, [r0, #0]	@ 000dcd44 0068
.org 0xdcd46
	ldr r0, [r0, #0]	@ 000dcd46 0068
.org 0xdcd48
	str r0, [r3, #20]	@ 000dcd48 5861
.org 0xdcd4a
	movs r0, #0	@ 000dcd4a 0020
.org 0xdcd4c
	strh r2, [r3, #32]	@ 000dcd4c 1a84
.org 0xdcd4e
	adds r1, r3, #0	@ 000dcd4e 191c
.org 0xdcd50
	adds r1, #34	@ 000dcd50 2231
.org 0xdcd52
	strb r0, [r1, #0]	@ 000dcd52 0870
.org 0xdcd54
	str r6, [r3, #40]	@ 000dcd54 9e62
.org 0xdcd56
	strb r5, [r3, #16]	@ 000dcd56 1d74
.org 0xdcd58
	strb r4, [r3, #17]	@ 000dcd58 5c74
.org 0xdcd5a
	pop {r4, r5, r6}	@ 000dcd5a 70bc
.org 0xdcd5c
	pop {r0}	@ 000dcd5c 01bc
.org 0xdcd5e
	bx r0	@ 000dcd5e 0047
