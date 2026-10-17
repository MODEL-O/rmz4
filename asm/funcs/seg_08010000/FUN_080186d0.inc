@ FUN_080186d0  entry 0x080186d0  size 36
.thumb
.org 0x186d0
FUN_080186d0:
	push {lr}	@ 000186d0 00b5
.org 0x186d2
	adds r1, r0, #0	@ 000186d2 011c
.org 0x186d4
	ldrb r3, [r1, #14]	@ 000186d4 8b7b
.org 0x186d6
	adds r2, r3, #0	@ 000186d6 1a1c
.org 0x186d8
	cmp r2, #0	@ 000186d8 002a
.org 0x186da
	bne.n 0x186f0	@ 000186da 09d1
.org 0x186dc
	movs r0, #240	@ 000186dc f020
.org 0x186de
	lsls r0, r0, #1	@ 000186de 4000
.org 0x186e0
	str r0, [r1, #76]	@ 000186e0 c864
.org 0x186e2
	movs r0, #224	@ 000186e2 e020
.org 0x186e4
	str r0, [r1, #80]	@ 000186e4 0865
.org 0x186e6
	str r2, [r1, #68]	@ 000186e6 4a64
.org 0x186e8
	movs r0, #64	@ 000186e8 4020
.org 0x186ea
	str r0, [r1, #72]	@ 000186ea 8864
.org 0x186ec
	adds r0, r3, #1	@ 000186ec 581c
.org 0x186ee
	strb r0, [r1, #14]	@ 000186ee 8873
.org 0x186f0
	pop {r0}	@ 000186f0 01bc
.org 0x186f2
	bx r0	@ 000186f2 0047
