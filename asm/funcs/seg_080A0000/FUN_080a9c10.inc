@ FUN_080a9c10  entry 0x080a9c10  size 84
.thumb
.org 0xa9c10
FUN_080a9c10:
	push {r4, r5, lr}	@ 000a9c10 30b5
.org 0xa9c12
	adds r4, r0, #0	@ 000a9c12 041c
.org 0xa9c14
	ldr r1, [pc, #24]	@ 000a9c14 0649
.org 0xa9c16
	ldr r0, [r1, #0]	@ 000a9c16 0868
.org 0xa9c18
	ldr r3, [r0, #84]	@ 000a9c18 436d
.org 0xa9c1a
	ldr r0, [r4, #84]	@ 000a9c1a 606d
.org 0xa9c1c
	subs r2, r3, r0	@ 000a9c1c 1a1a
.org 0xa9c1e
	adds r5, r1, #0	@ 000a9c1e 0d1c
.org 0xa9c20
	cmp r2, #0	@ 000a9c20 002a
.org 0xa9c22
	blt.n 0xa9c34	@ 000a9c22 07db
.org 0xa9c24
	movs r0, #240	@ 000a9c24 f020
.org 0xa9c26
	lsls r0, r0, #7	@ 000a9c26 c001
.org 0xa9c28
	cmp r2, r0	@ 000a9c28 8242
.org 0xa9c2a
	bgt.n 0xa9c5e	@ 000a9c2a 18dc
.org 0xa9c2c
	b.n 0xa9c3e	@ 000a9c2c 07e0
.org 0xa9c2e
	.byte 0x00	@ 000a9c2e data
.org 0xa9c2f
	.byte 0x00	@ 000a9c2f data
.org 0xa9c30
	.byte 0xf0,0xdb,0x02,0x02	@ 000a9c30 data
.org 0xa9c34
	subs r1, r0, r3	@ 000a9c34 c11a
.org 0xa9c36
	movs r0, #240	@ 000a9c36 f020
.org 0xa9c38
	lsls r0, r0, #7	@ 000a9c38 c001
.org 0xa9c3a
	cmp r1, r0	@ 000a9c3a 8142
.org 0xa9c3c
	bgt.n 0xa9c5e	@ 000a9c3c 0fdc
.org 0xa9c3e
	ldr r0, [r5, #0]	@ 000a9c3e 2868
.org 0xa9c40
	ldr r1, [r0, #88]	@ 000a9c40 816d
.org 0xa9c42
	ldr r0, [r4, #88]	@ 000a9c42 a06d
.org 0xa9c44
	subs r2, r1, r0	@ 000a9c44 0a1a
.org 0xa9c46
	cmp r2, #0	@ 000a9c46 002a
.org 0xa9c48
	blt.n 0xa9c54	@ 000a9c48 04db
.org 0xa9c4a
	movs r0, #160	@ 000a9c4a a020
.org 0xa9c4c
	lsls r0, r0, #7	@ 000a9c4c c001
.org 0xa9c4e
	cmp r2, r0	@ 000a9c4e 8242
.org 0xa9c50
	bgt.n 0xa9c5e	@ 000a9c50 05dc
.org 0xa9c52
	b.n 0xa9c62	@ 000a9c52 06e0
.org 0xa9c54
	subs r1, r0, r1	@ 000a9c54 411a
.org 0xa9c56
	movs r0, #160	@ 000a9c56 a020
.org 0xa9c58
	lsls r0, r0, #7	@ 000a9c58 c001
.org 0xa9c5a
	cmp r1, r0	@ 000a9c5a 8142
.org 0xa9c5c
	ble.n 0xa9c62	@ 000a9c5c 01dd
.org 0xa9c5e
	movs r0, #0	@ 000a9c5e 0020
.org 0xa9c60
	b.n 0xa9c64	@ 000a9c60 00e0
.org 0xa9c62
	movs r0, #1	@ 000a9c62 0120
