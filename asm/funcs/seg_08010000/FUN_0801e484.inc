@ FUN_0801e484  entry 0x0801e484  size 60
.thumb
.org 0x1e484
FUN_0801e484:
	push {lr}	@ 0001e484 00b5
.org 0x1e486
	adds r3, r0, #0	@ 0001e486 031c
.org 0x1e488
	ldr r2, [r3, #0]	@ 0001e488 1a68
.org 0x1e48a
	ldr r0, [pc, #36]	@ 0001e48a 0948
.org 0x1e48c
	cmp r2, r0	@ 0001e48c 8242
.org 0x1e48e
	ble.n 0x1e4aa	@ 0001e48e 0cdd
.org 0x1e490
	ldr r0, [pc, #32]	@ 0001e490 0848
.org 0x1e492
	adds r1, r2, r0	@ 0001e492 1118
.org 0x1e494
	ldr r0, [pc, #32]	@ 0001e494 0848
.org 0x1e496
	cmp r1, r0	@ 0001e496 8142
.org 0x1e498
	bls.n 0x1e4aa	@ 0001e498 07d9
.org 0x1e49a
	ldr r1, [r3, #4]	@ 0001e49a 5968
.org 0x1e49c
	ldr r0, [pc, #28]	@ 0001e49c 0748
.org 0x1e49e
	cmp r1, r0	@ 0001e49e 8142
.org 0x1e4a0
	bgt.n 0x1e4c0	@ 0001e4a0 0edc
.org 0x1e4a2
	movs r0, #225	@ 0001e4a2 e120
.org 0x1e4a4
	lsls r0, r0, #12	@ 0001e4a4 0003
.org 0x1e4a6
	cmp r2, r0	@ 0001e4a6 8242
.org 0x1e4a8
	ble.n 0x1e4c0	@ 0001e4a8 0add
.org 0x1e4aa
	movs r0, #7	@ 0001e4aa 0720
.org 0x1e4ac
	b.n 0x1e4d2	@ 0001e4ac 11e0
.org 0x1e4ae
	.byte 0x00	@ 0001e4ae data
.org 0x1e4af
	.byte 0x00	@ 0001e4af data
.org 0x1e4b0
	.byte 0xff,0xaf,0x04,0x00	@ 0001e4b0 data
.org 0x1e4b4
	.byte 0xff,0xcf,0xf3,0xff	@ 0001e4b4 data
.org 0x1e4b8
	.byte 0xfe,0xef,0x00,0x00	@ 0001e4b8 data
.org 0x1e4bc
	.byte 0xff,0x3f,0x01,0x00	@ 0001e4bc data
