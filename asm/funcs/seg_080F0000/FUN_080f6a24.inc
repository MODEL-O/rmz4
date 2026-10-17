@ FUN_080f6a24  entry 0x080f6a24  size 94
.thumb
.org 0xf6a24
FUN_080f6a24:
	push {r4, r5, r6, r7, lr}	@ 000f6a24 f0b5
.org 0xf6a26
	adds r6, r0, #0	@ 000f6a26 061c
.org 0xf6a28
	lsls r1, r1, #24	@ 000f6a28 0906
.org 0xf6a2a
	lsrs r1, r1, #24	@ 000f6a2a 090e
.org 0xf6a2c
	adds r0, #84	@ 000f6a2c 5430
.org 0xf6a2e
	bl 0xf6ab8	@ 000f6a2e 00f043f8
.org 0xf6a32
	bl 0xf6a90	@ 000f6a32 00f02df8
.org 0xf6a36
	adds r2, r0, #0	@ 000f6a36 021c
.org 0xf6a38
	adds r2, #60	@ 000f6a38 3c32
.org 0xf6a3a
	lsls r2, r2, #1	@ 000f6a3a 5200
.org 0xf6a3c
	ldr r3, [pc, #32]	@ 000f6a3c 084b
.org 0xf6a3e
	movs r1, #232	@ 000f6a3e e821
.org 0xf6a40
	lsls r1, r1, #1	@ 000f6a40 4900
.org 0xf6a42
	adds r0, r3, r1	@ 000f6a42 5818
.org 0xf6a44
	ldrh r1, [r0, #0]	@ 000f6a44 0188
.org 0xf6a46
	movs r0, #127	@ 000f6a46 7f20
.org 0xf6a48
	ands r0, r1	@ 000f6a48 0840
.org 0xf6a4a
	cmp r0, #10	@ 000f6a4a 0a28
.org 0xf6a4c
	bne.n 0xf6a68	@ 000f6a4c 0cd1
.org 0xf6a4e
	ldr r1, [pc, #20]	@ 000f6a4e 0549
.org 0xf6a50
	adds r0, r3, r1	@ 000f6a50 5818
.org 0xf6a52
	ldr r0, [r0, #0]	@ 000f6a52 0068
.org 0xf6a54
	adds r1, r2, #0	@ 000f6a54 111c
.org 0xf6a56
	bl 0x129198	@ 000f6a56 32f09ffb
.org 0xf6a5a
	adds r5, r0, #0	@ 000f6a5a 051c
.org 0xf6a5c
	b.n 0xf6a6a	@ 000f6a5c 05e0
.org 0xf6a5e
	.byte 0x00	@ 000f6a5e data
.org 0xf6a5f
	.byte 0x00	@ 000f6a5f data
.org 0xf6a60
	.byte 0xb0,0x0a,0x00,0x02	@ 000f6a60 data
.org 0xf6a64
	.byte 0x30,0xd0,0x02,0x00	@ 000f6a64 data
.org 0xf6a68
	movs r5, #0	@ 000f6a68 0025
.org 0xf6a6a
	movs r4, #0	@ 000f6a6a 0024
.org 0xf6a6c
	cmp r4, r5	@ 000f6a6c ac42
.org 0xf6a6e
	bcs.n 0xf6a86	@ 000f6a6e 0ad2
.org 0xf6a70
	ldr r7, [pc, #24]	@ 000f6a70 064f
.org 0xf6a72
	ldrb r0, [r6, #13]	@ 000f6a72 707b
.org 0xf6a74
	lsls r0, r0, #2	@ 000f6a74 8000
.org 0xf6a76
	adds r0, r0, r7	@ 000f6a76 c019
.org 0xf6a78
	ldr r1, [r0, #0]	@ 000f6a78 0168
.org 0xf6a7a
	adds r0, r6, #0	@ 000f6a7a 301c
.org 0xf6a7c
	bl 0x128f80	@ 000f6a7c 32f080fa
.org 0xf6a80
	adds r4, #1	@ 000f6a80 0134
