@ FUN_080c9a1c  entry 0x080c9a1c  size 78
.thumb
.org 0xc9a1c
FUN_080c9a1c:
	push {r4, r5, lr}	@ 000c9a1c 30b5
.org 0xc9a1e
	adds r4, r0, #0	@ 000c9a1e 041c
.org 0xc9a20
	lsls r1, r1, #24	@ 000c9a20 0906
.org 0xc9a22
	lsrs r5, r1, #24	@ 000c9a22 0d0e
.org 0xc9a24
	ldr r0, [pc, #68]	@ 000c9a24 1148
.org 0xc9a26
	ldr r0, [r0, #0]	@ 000c9a26 0068
.org 0xc9a28
	bl 0x5500	@ 000c9a28 3bf76afd
.org 0xc9a2c
	adds r3, r0, #0	@ 000c9a2c 031c
.org 0xc9a2e
	cmp r3, #0	@ 000c9a2e 002b
.org 0xc9a30
	beq.n 0xc9a62	@ 000c9a30 17d0
.org 0xc9a32
	adds r1, r3, #0	@ 000c9a32 191c
.org 0xc9a34
	adds r1, #37	@ 000c9a34 2531
.org 0xc9a36
	movs r2, #0	@ 000c9a36 0022
.org 0xc9a38
	movs r0, #8	@ 000c9a38 0820
.org 0xc9a3a
	strb r0, [r1, #0]	@ 000c9a3a 0870
.org 0xc9a3c
	ldr r0, [pc, #48]	@ 000c9a3c 0c48
.org 0xc9a3e
	movs r1, #33	@ 000c9a3e 2121
.org 0xc9a40
	strb r1, [r3, #9]	@ 000c9a40 5972
.org 0xc9a42
	adds r0, #132	@ 000c9a42 8430
.org 0xc9a44
	ldr r0, [r0, #0]	@ 000c9a44 0068
.org 0xc9a46
	ldr r0, [r0, #0]	@ 000c9a46 0068
.org 0xc9a48
	str r0, [r3, #20]	@ 000c9a48 5861
.org 0xc9a4a
	movs r0, #0	@ 000c9a4a 0020
.org 0xc9a4c
	strh r2, [r3, #32]	@ 000c9a4c 1a84
.org 0xc9a4e
	adds r1, r3, #0	@ 000c9a4e 191c
.org 0xc9a50
	adds r1, #34	@ 000c9a50 2231
.org 0xc9a52
	strb r0, [r1, #0]	@ 000c9a52 0870
.org 0xc9a54
	ldr r0, [r4, #0]	@ 000c9a54 2068
.org 0xc9a56
	ldr r1, [r4, #4]	@ 000c9a56 6168
.org 0xc9a58
	str r0, [r3, #84]	@ 000c9a58 5865
.org 0xc9a5a
	str r1, [r3, #88]	@ 000c9a5a 9965
.org 0xc9a5c
	adds r0, r3, #0	@ 000c9a5c 181c
.org 0xc9a5e
	adds r0, #180	@ 000c9a5e b430
.org 0xc9a60
	strb r5, [r0, #0]	@ 000c9a60 0570
.org 0xc9a62
	adds r0, r3, #0	@ 000c9a62 181c
.org 0xc9a64
	pop {r4, r5}	@ 000c9a64 30bc
.org 0xc9a66
	pop {r1}	@ 000c9a66 02bc
.org 0xc9a68
	bx r1	@ 000c9a68 0847
