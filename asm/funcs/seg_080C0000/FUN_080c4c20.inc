@ FUN_080c4c20  entry 0x080c4c20  size 82
.thumb
.org 0xc4c20
FUN_080c4c20:
	push {r4, r5, r6, lr}	@ 000c4c20 70b5
.org 0xc4c22
	adds r4, r0, #0	@ 000c4c22 041c
.org 0xc4c24
	adds r5, r1, #0	@ 000c4c24 0d1c
.org 0xc4c26
	adds r6, r2, #0	@ 000c4c26 161c
.org 0xc4c28
	ldr r0, [pc, #72]	@ 000c4c28 1248
.org 0xc4c2a
	ldr r0, [r0, #0]	@ 000c4c2a 0068
.org 0xc4c2c
	bl 0x5500	@ 000c4c2c 40f768fc
.org 0xc4c30
	adds r3, r0, #0	@ 000c4c30 031c
.org 0xc4c32
	cmp r3, #0	@ 000c4c32 002b
.org 0xc4c34
	beq.n 0xc4c6a	@ 000c4c34 19d0
.org 0xc4c36
	adds r1, r3, #0	@ 000c4c36 191c
.org 0xc4c38
	adds r1, #37	@ 000c4c38 2531
.org 0xc4c3a
	movs r2, #0	@ 000c4c3a 0022
.org 0xc4c3c
	movs r0, #8	@ 000c4c3c 0820
.org 0xc4c3e
	strb r0, [r1, #0]	@ 000c4c3e 0870
.org 0xc4c40
	ldr r1, [pc, #52]	@ 000c4c40 0d49
.org 0xc4c42
	movs r0, #23	@ 000c4c42 1720
.org 0xc4c44
	strb r0, [r3, #9]	@ 000c4c44 5872
.org 0xc4c46
	ldr r0, [r1, #92]	@ 000c4c46 c86d
.org 0xc4c48
	ldr r0, [r0, #0]	@ 000c4c48 0068
.org 0xc4c4a
	str r0, [r3, #20]	@ 000c4c4a 5861
.org 0xc4c4c
	movs r0, #0	@ 000c4c4c 0020
.org 0xc4c4e
	strh r2, [r3, #32]	@ 000c4c4e 1a84
.org 0xc4c50
	adds r1, r3, #0	@ 000c4c50 191c
.org 0xc4c52
	adds r1, #34	@ 000c4c52 2231
.org 0xc4c54
	strb r0, [r1, #0]	@ 000c4c54 0870
.org 0xc4c56
	str r4, [r3, #40]	@ 000c4c56 9c62
.org 0xc4c58
	ldr r0, [r5, #0]	@ 000c4c58 2868
.org 0xc4c5a
	ldr r1, [r5, #4]	@ 000c4c5a 6968
.org 0xc4c5c
	str r0, [r3, #84]	@ 000c4c5c 5865
.org 0xc4c5e
	str r1, [r3, #88]	@ 000c4c5e 9965
.org 0xc4c60
	movs r0, #1	@ 000c4c60 0120
.org 0xc4c62
	strb r0, [r3, #16]	@ 000c4c62 1874
.org 0xc4c64
	adds r0, r3, #0	@ 000c4c64 181c
.org 0xc4c66
	adds r0, #180	@ 000c4c66 b430
.org 0xc4c68
	str r6, [r0, #0]	@ 000c4c68 0660
.org 0xc4c6a
	adds r0, r3, #0	@ 000c4c6a 181c
.org 0xc4c6c
	pop {r4, r5, r6}	@ 000c4c6c 70bc
.org 0xc4c6e
	pop {r1}	@ 000c4c6e 02bc
.org 0xc4c70
	bx r1	@ 000c4c70 0847
