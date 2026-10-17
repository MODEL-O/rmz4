@ FUN_080d0a04  entry 0x080d0a04  size 80
.thumb
.org 0xd0a04
FUN_080d0a04:
	push {r4, r5, r6, lr}	@ 000d0a04 70b5
.org 0xd0a06
	adds r6, r0, #0	@ 000d0a06 061c
.org 0xd0a08
	lsls r1, r1, #24	@ 000d0a08 0906
.org 0xd0a0a
	lsrs r5, r1, #24	@ 000d0a0a 0d0e
.org 0xd0a0c
	lsls r2, r2, #24	@ 000d0a0c 1206
.org 0xd0a0e
	lsrs r4, r2, #24	@ 000d0a0e 140e
.org 0xd0a10
	ldr r0, [pc, #64]	@ 000d0a10 1048
.org 0xd0a12
	ldr r0, [r0, #0]	@ 000d0a12 0068
.org 0xd0a14
	bl 0x5500	@ 000d0a14 34f774fd
.org 0xd0a18
	adds r3, r0, #0	@ 000d0a18 031c
.org 0xd0a1a
	cmp r3, #0	@ 000d0a1a 002b
.org 0xd0a1c
	beq.n 0xd0a4e	@ 000d0a1c 17d0
.org 0xd0a1e
	adds r1, r3, #0	@ 000d0a1e 191c
.org 0xd0a20
	adds r1, #37	@ 000d0a20 2531
.org 0xd0a22
	movs r2, #0	@ 000d0a22 0022
.org 0xd0a24
	movs r0, #8	@ 000d0a24 0820
.org 0xd0a26
	strb r0, [r1, #0]	@ 000d0a26 0870
.org 0xd0a28
	ldr r0, [pc, #44]	@ 000d0a28 0b48
.org 0xd0a2a
	movs r1, #67	@ 000d0a2a 4321
.org 0xd0a2c
	strb r1, [r3, #9]	@ 000d0a2c 5972
.org 0xd0a2e
	adds r1, #201	@ 000d0a2e c931
.org 0xd0a30
	adds r0, r0, r1	@ 000d0a30 4018
.org 0xd0a32
	ldr r0, [r0, #0]	@ 000d0a32 0068
.org 0xd0a34
	ldr r0, [r0, #0]	@ 000d0a34 0068
.org 0xd0a36
	str r0, [r3, #20]	@ 000d0a36 5861
.org 0xd0a38
	movs r0, #0	@ 000d0a38 0020
.org 0xd0a3a
	strh r2, [r3, #32]	@ 000d0a3a 1a84
.org 0xd0a3c
	adds r1, r3, #0	@ 000d0a3c 191c
.org 0xd0a3e
	adds r1, #34	@ 000d0a3e 2231
.org 0xd0a40
	strb r0, [r1, #0]	@ 000d0a40 0870
.org 0xd0a42
	ldr r0, [r6, #0]	@ 000d0a42 3068
.org 0xd0a44
	ldr r1, [r6, #4]	@ 000d0a44 7168
.org 0xd0a46
	str r0, [r3, #84]	@ 000d0a46 5865
.org 0xd0a48
	str r1, [r3, #88]	@ 000d0a48 9965
.org 0xd0a4a
	strb r5, [r3, #16]	@ 000d0a4a 1d74
.org 0xd0a4c
	strb r4, [r3, #17]	@ 000d0a4c 5c74
.org 0xd0a4e
	pop {r4, r5, r6}	@ 000d0a4e 70bc
.org 0xd0a50
	pop {r0}	@ 000d0a50 01bc
.org 0xd0a52
	bx r0	@ 000d0a52 0047
