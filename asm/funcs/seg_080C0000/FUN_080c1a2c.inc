@ FUN_080c1a2c  entry 0x080c1a2c  size 66
.thumb
.org 0xc1a2c
FUN_080c1a2c:
	push {r4, r5, lr}	@ 000c1a2c 30b5
.org 0xc1a2e
	adds r5, r0, #0	@ 000c1a2e 051c
.org 0xc1a30
	lsls r1, r1, #24	@ 000c1a30 0906
.org 0xc1a32
	lsrs r4, r1, #24	@ 000c1a32 0c0e
.org 0xc1a34
	ldr r0, [pc, #56]	@ 000c1a34 0e48
.org 0xc1a36
	ldr r0, [r0, #0]	@ 000c1a36 0068
.org 0xc1a38
	bl 0x5500	@ 000c1a38 43f762fd
.org 0xc1a3c
	adds r3, r0, #0	@ 000c1a3c 031c
.org 0xc1a3e
	cmp r3, #0	@ 000c1a3e 002b
.org 0xc1a40
	beq.n 0xc1a68	@ 000c1a40 12d0
.org 0xc1a42
	adds r1, r3, #0	@ 000c1a42 191c
.org 0xc1a44
	adds r1, #37	@ 000c1a44 2531
.org 0xc1a46
	movs r2, #0	@ 000c1a46 0022
.org 0xc1a48
	movs r0, #8	@ 000c1a48 0820
.org 0xc1a4a
	strb r0, [r1, #0]	@ 000c1a4a 0870
.org 0xc1a4c
	ldr r1, [pc, #36]	@ 000c1a4c 0949
.org 0xc1a4e
	movs r0, #14	@ 000c1a4e 0e20
.org 0xc1a50
	strb r0, [r3, #9]	@ 000c1a50 5872
.org 0xc1a52
	ldr r0, [r1, #56]	@ 000c1a52 886b
.org 0xc1a54
	ldr r0, [r0, #0]	@ 000c1a54 0068
.org 0xc1a56
	str r0, [r3, #20]	@ 000c1a56 5861
.org 0xc1a58
	movs r0, #0	@ 000c1a58 0020
.org 0xc1a5a
	strh r2, [r3, #32]	@ 000c1a5a 1a84
.org 0xc1a5c
	adds r1, r3, #0	@ 000c1a5c 191c
.org 0xc1a5e
	adds r1, #34	@ 000c1a5e 2231
.org 0xc1a60
	strb r0, [r1, #0]	@ 000c1a60 0870
.org 0xc1a62
	str r5, [r3, #40]	@ 000c1a62 9d62
.org 0xc1a64
	strb r0, [r3, #16]	@ 000c1a64 1874
.org 0xc1a66
	strb r4, [r3, #17]	@ 000c1a66 5c74
.org 0xc1a68
	pop {r4, r5}	@ 000c1a68 30bc
.org 0xc1a6a
	pop {r0}	@ 000c1a6a 01bc
.org 0xc1a6c
	bx r0	@ 000c1a6c 0047
