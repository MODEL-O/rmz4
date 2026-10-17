@ FUN_080b9e58  entry 0x080b9e58  size 52
.thumb
.org 0xb9e58
FUN_080b9e58:
	push {lr}	@ 000b9e58 00b5
.org 0xb9e5a
	adds r1, r0, #0	@ 000b9e5a 011c
.org 0xb9e5c
	ldr r3, [r1, #88]	@ 000b9e5c 8b6d
.org 0xb9e5e
	ldr r0, [pc, #40]	@ 000b9e5e 0a48
.org 0xb9e60
	cmp r3, r0	@ 000b9e60 8342
.org 0xb9e62
	bgt.n 0xb9e98	@ 000b9e62 19dc
.org 0xb9e64
	ldr r0, [pc, #36]	@ 000b9e64 0948
.org 0xb9e66
	ldr r2, [r1, #84]	@ 000b9e66 4a6d
.org 0xb9e68
	cmp r2, r0	@ 000b9e68 8242
.org 0xb9e6a
	ble.n 0xb9e72	@ 000b9e6a 02dd
.org 0xb9e6c
	ldr r0, [pc, #32]	@ 000b9e6c 0848
.org 0xb9e6e
	cmp r3, r0	@ 000b9e6e 8342
.org 0xb9e70
	ble.n 0xb9e82	@ 000b9e70 07dd
.org 0xb9e72
	ldr r0, [pc, #32]	@ 000b9e72 0848
.org 0xb9e74
	cmp r2, r0	@ 000b9e74 8242
.org 0xb9e76
	ble.n 0xb9e98	@ 000b9e76 0fdd
.org 0xb9e78
	ldr r1, [r1, #88]	@ 000b9e78 896d
.org 0xb9e7a
	movs r0, #240	@ 000b9e7a f020
.org 0xb9e7c
	lsls r0, r0, #8	@ 000b9e7c 0002
.org 0xb9e7e
	cmp r1, r0	@ 000b9e7e 8142
.org 0xb9e80
	ble.n 0xb9e98	@ 000b9e80 0add
.org 0xb9e82
	movs r0, #1	@ 000b9e82 0120
.org 0xb9e84
	b.n 0xb9e9a	@ 000b9e84 09e0
.org 0xb9e86
	.byte 0x00	@ 000b9e86 data
.org 0xb9e87
	.byte 0x00	@ 000b9e87 data
.org 0xb9e88
	.byte 0xff,0x2e,0x01,0x00	@ 000b9e88 data
