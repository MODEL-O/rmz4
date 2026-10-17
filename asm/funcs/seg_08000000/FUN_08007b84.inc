@ FUN_08007b84  entry 0x08007b84  size 176
.thumb
.org 0x7b84
FUN_08007b84:
	push {r4, lr}	@ 00007b84 10b5
.org 0x7b86
	adds r4, r0, #0	@ 00007b86 041c
.org 0x7b88
	movs r3, #160	@ 00007b88 a023
.org 0x7b8a
	lsls r3, r3, #14	@ 00007b8a 9b03
.org 0x7b8c
	ldr r2, [r4, #0]	@ 00007b8c 2268
.org 0x7b8e
	ldr r0, [pc, #20]	@ 00007b8e 0548
.org 0x7b90
	adds r1, r2, r0	@ 00007b90 1118
.org 0x7b92
	ldr r0, [pc, #20]	@ 00007b92 0548
.org 0x7b94
	cmp r1, r0	@ 00007b94 8142
.org 0x7b96
	bhi.n 0x7c66	@ 00007b96 66d8
.org 0x7b98
	ldr r0, [pc, #16]	@ 00007b98 0448
.org 0x7b9a
	cmp r2, r0	@ 00007b9a 8242
.org 0x7b9c
	bgt.n 0x7bb0	@ 00007b9c 08dc
.org 0x7b9e
	movs r3, #208	@ 00007b9e d023
.org 0x7ba0
	lsls r3, r3, #9	@ 00007ba0 5b02
.org 0x7ba2
	b.n 0x7c66	@ 00007ba2 60e0
.org 0x7ba4
	.byte 0xff,0xaf,0xf5,0xff	@ 00007ba4 data
.org 0x7ba8
	.byte 0xfe,0xef,0x05,0x00	@ 00007ba8 data
.org 0x7bac
	.byte 0xff,0x3f,0x0e,0x00	@ 00007bac data
.org 0x7bb0
	ldr r1, [r4, #4]	@ 00007bb0 6168
.org 0x7bb2
	ldr r0, [pc, #32]	@ 00007bb2 0848
.org 0x7bb4
	cmp r1, r0	@ 00007bb4 8142
.org 0x7bb6
	bgt.n 0x7c06	@ 00007bb6 26dc
.org 0x7bb8
	ldr r0, [pc, #28]	@ 00007bb8 0748
.org 0x7bba
	cmp r2, r0	@ 00007bba 8242
.org 0x7bbc
	bgt.n 0x7be0	@ 00007bbc 10dc
.org 0x7bbe
	ldr r1, [pc, #28]	@ 00007bbe 0749
.org 0x7bc0
	adds r0, r2, r1	@ 00007bc0 5018
.org 0x7bc2
	cmp r0, #0	@ 00007bc2 0028
.org 0x7bc4
	ble.n 0x7b9e	@ 00007bc4 ebdd
.org 0x7bc6
	movs r1, #6	@ 00007bc6 0621
.org 0x7bc8
	bl 0x128fb8	@ 00007bc8 21f1f6f9
.org 0x7bcc
	movs r1, #208	@ 00007bcc d021
.org 0x7bce
	lsls r1, r1, #9	@ 00007bce 4902
.org 0x7bd0
	adds r3, r0, r1	@ 00007bd0 4318
.org 0x7bd2
	b.n 0x7c66	@ 00007bd2 48e0
.org 0x7bd4
	.byte 0xff,0xdf,0x01,0x00	@ 00007bd4 data
.org 0x7bd8
	.byte 0xff,0x4f,0x0f,0x00	@ 00007bd8 data
.org 0x7bdc
	.byte 0x00,0x00,0xf1,0xff	@ 00007bdc data
.org 0x7be0
	ldr r0, [pc, #20]	@ 00007be0 0548
.org 0x7be2
	cmp r2, r0	@ 00007be2 8242
.org 0x7be4
	bgt.n 0x7c66	@ 00007be4 3fdc
.org 0x7be6
	ldr r1, [pc, #20]	@ 00007be6 0549
.org 0x7be8
	adds r0, r2, r1	@ 00007be8 5018
.org 0x7bea
	cmp r0, #0	@ 00007bea 0028
.org 0x7bec
	ble.n 0x7c00	@ 00007bec 08dd
.org 0x7bee
	asrs r0, r0, #1	@ 00007bee 4010
.org 0x7bf0
	movs r1, #214	@ 00007bf0 d621
.org 0x7bf2
	lsls r1, r1, #9	@ 00007bf2 4902
.org 0x7bf4
	adds r3, r0, r1	@ 00007bf4 4318
.org 0x7bf6
	b.n 0x7c66	@ 00007bf6 36e0
.org 0x7bf8
	.byte 0xff,0x8f,0x0f,0x00	@ 00007bf8 data
.org 0x7bfc
	.byte 0x00,0xb0,0xf0,0xff	@ 00007bfc data
.org 0x7c00
	movs r3, #214	@ 00007c00 d623
.org 0x7c02
	lsls r3, r3, #9	@ 00007c02 5b02
.org 0x7c04
	b.n 0x7c66	@ 00007c04 2fe0
.org 0x7c06
	ldr r0, [pc, #12]	@ 00007c06 0348
.org 0x7c08
	cmp r1, r0	@ 00007c08 8142
.org 0x7c0a
	bgt.n 0x7c20	@ 00007c0a 09dc
.org 0x7c0c
	ldr r0, [pc, #8]	@ 00007c0c 0248
.org 0x7c0e
	adds r1, r2, r0	@ 00007c0e 1118
.org 0x7c10
	ldr r0, [pc, #8]	@ 00007c10 0248
.org 0x7c12
	b.n 0x7c5e	@ 00007c12 24e0
.org 0x7c14
	.byte 0xff,0x6f,0x02,0x00	@ 00007c14 data
.org 0x7c18
	.byte 0xff,0x7f,0xf0,0xff	@ 00007c18 data
.org 0x7c1c
	.byte 0xfe,0x0f,0x00,0x00	@ 00007c1c data
.org 0x7c20
	ldr r0, [pc, #28]	@ 00007c20 0748
.org 0x7c22
	cmp r1, r0	@ 00007c22 8142
.org 0x7c24
	bgt.n 0x7c52	@ 00007c24 15dc
.org 0x7c26
	ldr r0, [pc, #28]	@ 00007c26 0748
.org 0x7c28
	cmp r2, r0	@ 00007c28 8242
.org 0x7c2a
	bgt.n 0x7c66	@ 00007c2a 1cdc
.org 0x7c2c
	ldr r1, [pc, #24]	@ 00007c2c 0649
.org 0x7c2e
	adds r0, r2, r1	@ 00007c2e 5018
.org 0x7c30
	cmp r0, #0	@ 00007c30 0028
.org 0x7c32
	ble.n 0x7c4c	@ 00007c32 0bdd
