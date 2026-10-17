@ FUN_0803a0ec  entry 0x0803a0ec  size 72
.thumb
.org 0x3a0ec
FUN_0803a0ec:
	push {lr}	@ 0003a0ec 00b5
.org 0x3a0ee
	adds r1, r0, #0	@ 0003a0ee 011c
.org 0x3a0f0
	adds r0, #180	@ 0003a0f0 b430
.org 0x3a0f2
	ldrb r0, [r0, #19]	@ 0003a0f2 c07c
.org 0x3a0f4
	cmp r0, #2	@ 0003a0f4 0228
.org 0x3a0f6
	bne.n 0x3a104	@ 0003a0f6 05d1
.org 0x3a0f8
	adds r0, r1, #0	@ 0003a0f8 081c
.org 0x3a0fa
	adds r0, #243	@ 0003a0fa f330
.org 0x3a0fc
	ldrb r0, [r0, #0]	@ 0003a0fc 0078
.org 0x3a0fe
	cmp r0, #0	@ 0003a0fe 0028
.org 0x3a100
	bne.n 0x3a10e	@ 0003a100 05d1
.org 0x3a102
	b.n 0x3a11e	@ 0003a102 0ce0
.org 0x3a104
	adds r0, r1, #0	@ 0003a104 081c
.org 0x3a106
	adds r0, #243	@ 0003a106 f330
.org 0x3a108
	ldrb r0, [r0, #0]	@ 0003a108 0078
.org 0x3a10a
	cmp r0, #1	@ 0003a10a 0128
.org 0x3a10c
	bne.n 0x3a11e	@ 0003a10c 07d1
.org 0x3a10e
	movs r2, #164	@ 0003a10e a422
.org 0x3a110
	lsls r2, r2, #1	@ 0003a110 5200
.org 0x3a112
	adds r0, r1, r2	@ 0003a112 8818
.org 0x3a114
	ldrb r0, [r0, #0]	@ 0003a114 0078
.org 0x3a116
	cmp r0, #3	@ 0003a116 0328
.org 0x3a118
	bls.n 0x3a12e	@ 0003a118 09d9
.org 0x3a11a
	movs r0, #0	@ 0003a11a 0020
.org 0x3a11c
	b.n 0x3a130	@ 0003a11c 08e0
.org 0x3a11e
	movs r2, #164	@ 0003a11e a422
.org 0x3a120
	lsls r2, r2, #1	@ 0003a120 5200
.org 0x3a122
	adds r0, r1, r2	@ 0003a122 8818
.org 0x3a124
	ldrb r0, [r0, #0]	@ 0003a124 0078
.org 0x3a126
	cmp r0, #2	@ 0003a126 0228
.org 0x3a128
	bls.n 0x3a12e	@ 0003a128 01d9
.org 0x3a12a
	movs r0, #0	@ 0003a12a 0020
.org 0x3a12c
	b.n 0x3a130	@ 0003a12c 00e0
.org 0x3a12e
	movs r0, #1	@ 0003a12e 0120
.org 0x3a130
	pop {r1}	@ 0003a130 02bc
.org 0x3a132
	bx r1	@ 0003a132 0847
