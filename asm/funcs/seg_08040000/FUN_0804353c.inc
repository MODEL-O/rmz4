@ FUN_0804353c  entry 0x0804353c  size 40
.thumb
.org 0x4353c
FUN_0804353c:
	push {lr}	@ 0004353c 00b5
.org 0x4353e
	bl 0x7c7c	@ 0004353e c4f79dfb
.org 0x43542
	lsls r0, r0, #16	@ 00043542 0004
.org 0x43544
	lsrs r0, r0, #16	@ 00043544 000c
.org 0x43546
	adds r1, r0, #0	@ 00043546 011c
.org 0x43548
	movs r0, #15	@ 00043548 0f20
.org 0x4354a
	ands r0, r1	@ 0004354a 0840
.org 0x4354c
	cmp r0, #15	@ 0004354c 0f28
.org 0x4354e
	beq.n 0x4355e	@ 0004354e 06d0
.org 0x43550
	movs r0, #128	@ 00043550 8020
.org 0x43552
	lsls r0, r0, #8	@ 00043552 0002
.org 0x43554
	ands r0, r1	@ 00043554 0840
.org 0x43556
	cmp r0, #0	@ 00043556 0028
.org 0x43558
	bne.n 0x4355e	@ 00043558 01d1
.org 0x4355a
	adds r0, r1, #0	@ 0004355a 081c
.org 0x4355c
	b.n 0x43560	@ 0004355c 00e0
.org 0x4355e
	movs r0, #0	@ 0004355e 0020
.org 0x43560
	pop {r1}	@ 00043560 02bc
.org 0x43562
	bx r1	@ 00043562 0847
