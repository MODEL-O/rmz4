@ FUN_080d1d60  entry 0x080d1d60  size 78
.thumb
.org 0xd1d60
FUN_080d1d60:
	push {r4, r5, r6, lr}	@ 000d1d60 70b5
.org 0xd1d62
	adds r4, r0, #0	@ 000d1d62 041c
.org 0xd1d64
	lsls r1, r1, #24	@ 000d1d64 0906
.org 0xd1d66
	lsrs r6, r1, #24	@ 000d1d66 0e0e
.org 0xd1d68
	ldr r5, [r4, #4]	@ 000d1d68 6568
.org 0xd1d6a
	ldr r2, [pc, #28]	@ 000d1d6a 074a
.org 0xd1d6c
	movs r1, #232	@ 000d1d6c e821
.org 0xd1d6e
	lsls r1, r1, #1	@ 000d1d6e 4900
.org 0xd1d70
	adds r0, r2, r1	@ 000d1d70 5018
.org 0xd1d72
	ldrh r1, [r0, #0]	@ 000d1d72 0188
.org 0xd1d74
	movs r0, #127	@ 000d1d74 7f20
.org 0xd1d76
	ands r0, r1	@ 000d1d76 0840
.org 0xd1d78
	cmp r0, #2	@ 000d1d78 0228
.org 0xd1d7a
	bne.n 0xd1d8c	@ 000d1d7a 07d1
.org 0xd1d7c
	adds r0, r4, #0	@ 000d1d7c 201c
.org 0xd1d7e
	bl 0x7b84	@ 000d1d7e 35f701ff
.org 0xd1d82
	cmp r5, r0	@ 000d1d82 8542
.org 0xd1d84
	bgt.n 0xd1d96	@ 000d1d84 07dc
.org 0xd1d86
	b.n 0xd1da8	@ 000d1d86 0fe0
.org 0xd1d88
	.byte 0xb0,0x0a,0x00,0x02	@ 000d1d88 data
.org 0xd1d8c
	ldr r1, [pc, #20]	@ 000d1d8c 0549
.org 0xd1d8e
	adds r0, r2, r1	@ 000d1d8e 5018
.org 0xd1d90
	ldr r0, [r0, #0]	@ 000d1d90 0068
.org 0xd1d92
	cmp r5, r0	@ 000d1d92 8542
.org 0xd1d94
	ble.n 0xd1da8	@ 000d1d94 08dd
.org 0xd1d96
	adds r0, r4, #0	@ 000d1d96 201c
.org 0xd1d98
	movs r1, #10	@ 000d1d98 0a21
.org 0xd1d9a
	adds r2, r6, #0	@ 000d1d9a 321c
.org 0xd1d9c
	bl 0xd1bcc	@ 000d1d9c fff716ff
.org 0xd1da0
	b.n 0xd1db2	@ 000d1da0 07e0
.org 0xd1da2
	.byte 0x00	@ 000d1da2 data
.org 0xd1da3
	.byte 0x00	@ 000d1da3 data
.org 0xd1da4
	.byte 0x0c,0xc0,0x02,0x00	@ 000d1da4 data
.org 0xd1da8
	adds r0, r4, #0	@ 000d1da8 201c
.org 0xd1daa
	movs r1, #2	@ 000d1daa 0221
.org 0xd1dac
	adds r2, r6, #0	@ 000d1dac 321c
