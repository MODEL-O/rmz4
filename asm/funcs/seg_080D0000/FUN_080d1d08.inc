@ FUN_080d1d08  entry 0x080d1d08  size 78
.thumb
.org 0xd1d08
FUN_080d1d08:
	push {r4, r5, r6, lr}	@ 000d1d08 70b5
.org 0xd1d0a
	adds r4, r0, #0	@ 000d1d0a 041c
.org 0xd1d0c
	lsls r1, r1, #24	@ 000d1d0c 0906
.org 0xd1d0e
	lsrs r6, r1, #24	@ 000d1d0e 0e0e
.org 0xd1d10
	ldr r5, [r4, #4]	@ 000d1d10 6568
.org 0xd1d12
	ldr r2, [pc, #28]	@ 000d1d12 074a
.org 0xd1d14
	movs r1, #232	@ 000d1d14 e821
.org 0xd1d16
	lsls r1, r1, #1	@ 000d1d16 4900
.org 0xd1d18
	adds r0, r2, r1	@ 000d1d18 5018
.org 0xd1d1a
	ldrh r1, [r0, #0]	@ 000d1d1a 0188
.org 0xd1d1c
	movs r0, #127	@ 000d1d1c 7f20
.org 0xd1d1e
	ands r0, r1	@ 000d1d1e 0840
.org 0xd1d20
	cmp r0, #2	@ 000d1d20 0228
.org 0xd1d22
	bne.n 0xd1d34	@ 000d1d22 07d1
.org 0xd1d24
	adds r0, r4, #0	@ 000d1d24 201c
.org 0xd1d26
	bl 0x7b84	@ 000d1d26 35f72dff
.org 0xd1d2a
	cmp r5, r0	@ 000d1d2a 8542
.org 0xd1d2c
	bgt.n 0xd1d3e	@ 000d1d2c 07dc
.org 0xd1d2e
	b.n 0xd1d50	@ 000d1d2e 0fe0
.org 0xd1d30
	.byte 0xb0,0x0a,0x00,0x02	@ 000d1d30 data
.org 0xd1d34
	ldr r1, [pc, #20]	@ 000d1d34 0549
.org 0xd1d36
	adds r0, r2, r1	@ 000d1d36 5018
.org 0xd1d38
	ldr r0, [r0, #0]	@ 000d1d38 0068
.org 0xd1d3a
	cmp r5, r0	@ 000d1d3a 8542
.org 0xd1d3c
	ble.n 0xd1d50	@ 000d1d3c 08dd
.org 0xd1d3e
	adds r0, r4, #0	@ 000d1d3e 201c
.org 0xd1d40
	movs r1, #9	@ 000d1d40 0921
.org 0xd1d42
	adds r2, r6, #0	@ 000d1d42 321c
.org 0xd1d44
	bl 0xd1bcc	@ 000d1d44 fff742ff
.org 0xd1d48
	b.n 0xd1d5a	@ 000d1d48 07e0
.org 0xd1d4a
	.byte 0x00	@ 000d1d4a data
.org 0xd1d4b
	.byte 0x00	@ 000d1d4b data
.org 0xd1d4c
	.byte 0x0c,0xc0,0x02,0x00	@ 000d1d4c data
.org 0xd1d50
	adds r0, r4, #0	@ 000d1d50 201c
.org 0xd1d52
	movs r1, #1	@ 000d1d52 0121
.org 0xd1d54
	adds r2, r6, #0	@ 000d1d54 321c
