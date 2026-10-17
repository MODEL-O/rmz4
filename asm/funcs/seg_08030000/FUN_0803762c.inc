@ FUN_0803762c  entry 0x0803762c  size 68
.thumb
.org 0x3762c
FUN_0803762c:
	push {r4, r5, lr}	@ 0003762c 30b5
.org 0x3762e
	adds r4, r0, #0	@ 0003762e 041c
.org 0x37630
	ldr r1, [pc, #32]	@ 00037630 0849
.org 0x37632
	adds r0, r4, r1	@ 00037632 6018
.org 0x37634
	ldrb r5, [r0, #0]	@ 00037634 0578
.org 0x37636
	cmp r5, #0	@ 00037636 002d
.org 0x37638
	beq.n 0x3765c	@ 00037638 10d0
.org 0x3763a
	ldr r0, [pc, #28]	@ 0003763a 0748
.org 0x3763c
	adds r2, r4, r0	@ 0003763c 2218
.org 0x3763e
	movs r1, #0	@ 0003763e 0021
.org 0x37640
	movs r0, #1	@ 00037640 0120
.org 0x37642
	strb r0, [r2, #0]	@ 00037642 1070
.org 0x37644
	movs r2, #129	@ 00037644 8122
.org 0x37646
	lsls r2, r2, #1	@ 00037646 5200
.org 0x37648
	adds r0, r4, r2	@ 00037648 a018
.org 0x3764a
	strb r1, [r0, #0]	@ 0003764a 0170
.org 0x3764c
	adds r0, r4, #0	@ 0003764c 201c
.org 0x3764e
	bl 0x37678	@ 0003764e 00f013f8
.org 0x37652
	b.n 0x37672	@ 00037652 0ee0
.org 0x37654
	.byte 0x67,0x01,0x00,0x00	@ 00037654 data
.org 0x37658
	.byte 0x01,0x01,0x00,0x00	@ 00037658 data
.org 0x3765c
	movs r1, #160	@ 0003765c a021
.org 0x3765e
	lsls r1, r1, #3	@ 0003765e c900
.org 0x37660
	adds r0, r4, #0	@ 00037660 201c
.org 0x37662
	movs r2, #4	@ 00037662 0422
.org 0x37664
	movs r3, #1	@ 00037664 0123
.org 0x37666
	bl 0x1cfc8	@ 00037666 e5f7affc
.org 0x3766a
	movs r1, #128	@ 0003766a 8021
.org 0x3766c
	lsls r1, r1, #1	@ 0003766c 4900
.org 0x3766e
	adds r0, r4, r1	@ 0003766e 6018
