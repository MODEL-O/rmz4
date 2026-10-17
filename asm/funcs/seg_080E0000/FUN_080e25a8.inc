@ FUN_080e25a8  entry 0x080e25a8  size 52
.thumb
.org 0xe25a8
FUN_080e25a8:
	push {r4, lr}	@ 000e25a8 10b5
.org 0xe25aa
	adds r4, r0, #0	@ 000e25aa 041c
.org 0xe25ac
	ldr r0, [r4, #84]	@ 000e25ac 606d
.org 0xe25ae
	ldr r1, [r4, #88]	@ 000e25ae a16d
.org 0xe25b0
	bl 0x7c7c	@ 000e25b0 25f764fb
.org 0xe25b4
	lsls r0, r0, #16	@ 000e25b4 0004
.org 0xe25b6
	ldr r0, [pc, #24]	@ 000e25b6 0648
.org 0xe25b8
	ldr r1, [pc, #24]	@ 000e25b8 0649
.org 0xe25ba
	adds r0, r0, r1	@ 000e25ba 4018
.org 0xe25bc
	ldr r1, [r4, #88]	@ 000e25bc a16d
.org 0xe25be
	ldr r2, [pc, #24]	@ 000e25be 064a
.org 0xe25c0
	adds r1, r1, r2	@ 000e25c0 8918
.org 0xe25c2
	ldr r0, [r0, #0]	@ 000e25c2 0068
.org 0xe25c4
	cmp r0, r1	@ 000e25c4 8842
.org 0xe25c6
	ble.n 0xe25dc	@ 000e25c6 09dd
.org 0xe25c8
	movs r0, #42	@ 000e25c8 2a20
.org 0xe25ca
	bl 0x2b10	@ 000e25ca 20f7a1fa
.org 0xe25ce
	b.n 0xe25e2	@ 000e25ce 08e0
.org 0xe25d0
	.byte 0xb0,0x0a,0x00,0x02	@ 000e25d0 data
.org 0xe25d4
	.byte 0x0c,0xc0,0x02,0x00	@ 000e25d4 data
.org 0xe25d8
	.byte 0x00,0xf0,0xff,0xff	@ 000e25d8 data
