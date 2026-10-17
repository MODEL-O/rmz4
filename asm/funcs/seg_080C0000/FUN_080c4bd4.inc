@ FUN_080c4bd4  entry 0x080c4bd4  size 68
.thumb
.org 0xc4bd4
FUN_080c4bd4:
	push {r4, r5, lr}	@ 000c4bd4 30b5
.org 0xc4bd6
	adds r5, r0, #0	@ 000c4bd6 051c
.org 0xc4bd8
	lsls r1, r1, #24	@ 000c4bd8 0906
.org 0xc4bda
	lsrs r4, r1, #24	@ 000c4bda 0c0e
.org 0xc4bdc
	ldr r0, [pc, #56]	@ 000c4bdc 0e48
.org 0xc4bde
	ldr r0, [r0, #0]	@ 000c4bde 0068
.org 0xc4be0
	bl 0x5500	@ 000c4be0 40f78efc
.org 0xc4be4
	adds r3, r0, #0	@ 000c4be4 031c
.org 0xc4be6
	cmp r3, #0	@ 000c4be6 002b
.org 0xc4be8
	beq.n 0xc4c10	@ 000c4be8 12d0
.org 0xc4bea
	adds r1, r3, #0	@ 000c4bea 191c
.org 0xc4bec
	adds r1, #37	@ 000c4bec 2531
.org 0xc4bee
	movs r2, #0	@ 000c4bee 0022
.org 0xc4bf0
	movs r0, #8	@ 000c4bf0 0820
.org 0xc4bf2
	strb r0, [r1, #0]	@ 000c4bf2 0870
.org 0xc4bf4
	ldr r1, [pc, #36]	@ 000c4bf4 0949
.org 0xc4bf6
	movs r0, #23	@ 000c4bf6 1720
.org 0xc4bf8
	strb r0, [r3, #9]	@ 000c4bf8 5872
.org 0xc4bfa
	ldr r0, [r1, #92]	@ 000c4bfa c86d
.org 0xc4bfc
	ldr r0, [r0, #0]	@ 000c4bfc 0068
.org 0xc4bfe
	str r0, [r3, #20]	@ 000c4bfe 5861
.org 0xc4c00
	movs r0, #0	@ 000c4c00 0020
.org 0xc4c02
	strh r2, [r3, #32]	@ 000c4c02 1a84
.org 0xc4c04
	adds r1, r3, #0	@ 000c4c04 191c
.org 0xc4c06
	adds r1, #34	@ 000c4c06 2231
.org 0xc4c08
	strb r0, [r1, #0]	@ 000c4c08 0870
.org 0xc4c0a
	str r5, [r3, #40]	@ 000c4c0a 9d62
.org 0xc4c0c
	strb r0, [r3, #16]	@ 000c4c0c 1874
.org 0xc4c0e
	strb r4, [r3, #17]	@ 000c4c0e 5c74
.org 0xc4c10
	adds r0, r3, #0	@ 000c4c10 181c
.org 0xc4c12
	pop {r4, r5}	@ 000c4c12 30bc
.org 0xc4c14
	pop {r1}	@ 000c4c14 02bc
.org 0xc4c16
	bx r1	@ 000c4c16 0847
