@ FUN_0811c698  entry 0x0811c698  size 90
.thumb
.org 0x11c698
FUN_0811c698:
	push {r4, lr}	@ 0011c698 10b5
.org 0x11c69a
	adds r4, r0, #0	@ 0011c69a 041c
.org 0x11c69c
	movs r0, #47	@ 0011c69c 2f20
.org 0x11c69e
	bl 0x2624	@ 0011c69e e5f6c1ff
.org 0x11c6a2
	ldr r1, [pc, #24]	@ 0011c6a2 0649
.org 0x11c6a4
	adds r0, r4, r1	@ 0011c6a4 6018
.org 0x11c6a6
	ldrb r0, [r0, #26]	@ 0011c6a6 807e
.org 0x11c6a8
	cmp r0, #49	@ 0011c6a8 3128
.org 0x11c6aa
	bne.n 0x11c6c0	@ 0011c6aa 09d1
.org 0x11c6ac
	movs r0, #49	@ 0011c6ac 3120
.org 0x11c6ae
	bl 0x2624	@ 0011c6ae e5f6b9ff
.org 0x11c6b2
	movs r0, #58	@ 0011c6b2 3a20
.org 0x11c6b4
	bl 0x2624	@ 0011c6b4 e5f6b6ff
.org 0x11c6b8
	b.n 0x11c6cc	@ 0011c6b8 08e0
.org 0x11c6ba
	.byte 0x00	@ 0011c6ba data
.org 0x11c6bb
	.byte 0x00	@ 0011c6bb data
.org 0x11c6bc
	.byte 0xcc,0x0d,0x00,0x00	@ 0011c6bc data
.org 0x11c6c0
	movs r0, #48	@ 0011c6c0 3020
.org 0x11c6c2
	bl 0x2624	@ 0011c6c2 e5f6afff
.org 0x11c6c6
	movs r0, #50	@ 0011c6c6 3220
.org 0x11c6c8
	bl 0x2624	@ 0011c6c8 e5f6acff
.org 0x11c6cc
	ldr r2, [pc, #40]	@ 0011c6cc 0a4a
.org 0x11c6ce
	ldrh r1, [r2, #0]	@ 0011c6ce 1188
.org 0x11c6d0
	ldr r0, [pc, #40]	@ 0011c6d0 0a48
.org 0x11c6d2
	ands r0, r1	@ 0011c6d2 0840
.org 0x11c6d4
	movs r1, #0	@ 0011c6d4 0021
.org 0x11c6d6
	strh r0, [r2, #0]	@ 0011c6d6 1080
.org 0x11c6d8
	ldr r0, [pc, #36]	@ 0011c6d8 0948
.org 0x11c6da
	strh r1, [r0, #0]	@ 0011c6da 0180
.org 0x11c6dc
	adds r0, r4, #0	@ 0011c6dc 201c
.org 0x11c6de
	bl 0x11d6c0	@ 0011c6de 00f0efff
.org 0x11c6e2
	ldr r0, [pc, #32]	@ 0011c6e2 0848
.org 0x11c6e4
	adds r1, r4, r0	@ 0011c6e4 2118
.org 0x11c6e6
	movs r0, #1	@ 0011c6e6 0120
.org 0x11c6e8
	strb r0, [r1, #5]	@ 0011c6e8 4871
.org 0x11c6ea
	ldr r1, [pc, #28]	@ 0011c6ea 0749
.org 0x11c6ec
	adds r0, r4, #0	@ 0011c6ec 201c
.org 0x11c6ee
	bl 0x1126ac	@ 0011c6ee f5f7ddff
