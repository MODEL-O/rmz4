@ FUN_0806dea4  entry 0x0806dea4  size 28
.thumb
.org 0x6dea4
FUN_0806dea4:
	push {r4, r5, r6, lr}	@ 0006dea4 70b5
.org 0x6dea6
	adds r6, r0, #0	@ 0006dea6 061c
.org 0x6dea8
	ldrb r0, [r6, #15]	@ 0006dea8 f07b
.org 0x6deaa
	cmp r0, #5	@ 0006deaa 0528
.org 0x6deac
	bls.n 0x6deb0	@ 0006deac 00d9
.org 0x6deae
	b.n 0x6dff8	@ 0006deae a3e0
.org 0x6deb0
	lsls r0, r0, #2	@ 0006deb0 8000
.org 0x6deb2
	ldr r1, [pc, #8]	@ 0006deb2 0249
.org 0x6deb4
	adds r0, r0, r1	@ 0006deb4 4018
.org 0x6deb6
	ldr r0, [r0, #0]	@ 0006deb6 0068
.org 0x6deb8
	mov pc, r0	@ 0006deb8 8746
.org 0x6deba
	.byte 0x00	@ 0006deba data
.org 0x6debb
	.byte 0x00	@ 0006debb data
.org 0x6debc
	.byte 0xc0,0xde,0x06,0x08	@ 0006debc data
