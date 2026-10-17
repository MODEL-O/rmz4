@ FUN_080b6fa4  entry 0x080b6fa4  size 80
.thumb
.org 0xb6fa4
FUN_080b6fa4:
	push {r0, lr}	@ 000b6fa4 01b5
.org 0xb6fa6
	movs r0, r0	@ 000b6fa6 0000
.org 0xb6fa8
	.byte 0x00,0xe8	@ 000b6fa8 (raw)
.org 0xb6faa
	.byte 0xff,0xff	@ 000b6faa (raw)
.org 0xb6fac
	blt.n 0xb7030	@ 000b6fac 40db
.org 0xb6fae
	lsrs r5, r0, #2	@ 000b6fae 8508
.org 0xb6fb0
	push {lr}	@ 000b6fb0 00b5
.org 0xb6fb2
	adds r2, r0, #0	@ 000b6fb2 021c
.org 0xb6fb4
	ldr r0, [r2, #40]	@ 000b6fb4 906a
.org 0xb6fb6
	ldr r0, [r0, #40]	@ 000b6fb6 806a
.org 0xb6fb8
	ldrb r0, [r0, #12]	@ 000b6fb8 007b
.org 0xb6fba
	cmp r0, #1	@ 000b6fba 0128
.org 0xb6fbc
	bls.n 0xb6fdc	@ 000b6fbc 0ed9
.org 0xb6fbe
	ldr r1, [pc, #24]	@ 000b6fbe 0649
.org 0xb6fc0
	ldrb r0, [r2, #9]	@ 000b6fc0 507a
.org 0xb6fc2
	lsls r0, r0, #2	@ 000b6fc2 8000
.org 0xb6fc4
	adds r0, r0, r1	@ 000b6fc4 4018
.org 0xb6fc6
	movs r1, #2	@ 000b6fc6 0221
.org 0xb6fc8
	str r1, [r2, #12]	@ 000b6fc8 d160
.org 0xb6fca
	ldr r0, [r0, #0]	@ 000b6fca 0068
.org 0xb6fcc
	ldr r0, [r0, #8]	@ 000b6fcc 8068
.org 0xb6fce
	str r0, [r2, #20]	@ 000b6fce 5061
.org 0xb6fd0
	adds r0, r2, #0	@ 000b6fd0 101c
.org 0xb6fd2
	bl 0xb7140	@ 000b6fd2 00f0b5f8
.org 0xb6fd6
	b.n 0xb6fec	@ 000b6fd6 09e0
.org 0xb6fd8
	.byte 0x40,0xdb,0x85,0x08	@ 000b6fd8 data
.org 0xb6fdc
	ldr r0, [pc, #16]	@ 000b6fdc 0448
.org 0xb6fde
	ldrb r1, [r2, #13]	@ 000b6fde 517b
.org 0xb6fe0
	lsls r1, r1, #2	@ 000b6fe0 8900
.org 0xb6fe2
	adds r1, r1, r0	@ 000b6fe2 0918
.org 0xb6fe4
	ldr r1, [r1, #0]	@ 000b6fe4 0968
.org 0xb6fe6
	adds r0, r2, #0	@ 000b6fe6 101c
.org 0xb6fe8
	bl 0x128f80	@ 000b6fe8 71f0caff
.org 0xb6fec
	pop {r0}	@ 000b6fec 01bc
.org 0xb6fee
	bx r0	@ 000b6fee 0047
.org 0xb6ff0
	.byte 0x20,0x3e,0x86,0x08	@ 000b6ff0 data
