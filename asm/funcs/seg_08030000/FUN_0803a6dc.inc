@ FUN_0803a6dc  entry 0x0803a6dc  size 80
.thumb
.org 0x3a6dc
FUN_0803a6dc:
	push {lr}	@ 0003a6dc 00b5
.org 0x3a6de
	adds r2, r0, #0	@ 0003a6de 021c
.org 0x3a6e0
	adds r0, #180	@ 0003a6e0 b430
.org 0x3a6e2
	adds r3, r2, #0	@ 0003a6e2 131c
.org 0x3a6e4
	adds r3, #245	@ 0003a6e4 f533
.org 0x3a6e6
	strb r1, [r3, #0]	@ 0003a6e6 1970
.org 0x3a6e8
	ldrb r0, [r0, #19]	@ 0003a6e8 c07c
.org 0x3a6ea
	cmp r0, #3	@ 0003a6ea 0328
.org 0x3a6ec
	bne.n 0x3a710	@ 0003a6ec 10d1
.org 0x3a6ee
	adds r1, r2, #0	@ 0003a6ee 111c
.org 0x3a6f0
	adds r1, #240	@ 0003a6f0 f031
.org 0x3a6f2
	movs r0, #5	@ 0003a6f2 0520
.org 0x3a6f4
	strb r0, [r1, #0]	@ 0003a6f4 0870
.org 0x3a6f6
	adds r1, #1	@ 0003a6f6 0131
.org 0x3a6f8
	strb r0, [r1, #0]	@ 0003a6f8 0870
.org 0x3a6fa
	adds r1, #1	@ 0003a6fa 0131
.org 0x3a6fc
	strb r0, [r1, #0]	@ 0003a6fc 0870
.org 0x3a6fe
	adds r1, #1	@ 0003a6fe 0131
.org 0x3a700
	strb r0, [r1, #0]	@ 0003a700 0870
.org 0x3a702
	adds r1, #1	@ 0003a702 0131
.org 0x3a704
	movs r0, #15	@ 0003a704 0f20
.org 0x3a706
	strb r0, [r1, #0]	@ 0003a706 0870
.org 0x3a708
	adds r0, r2, #0	@ 0003a708 101c
.org 0x3a70a
	bl 0x109320	@ 0003a70a cef009fe
.org 0x3a70e
	b.n 0x3a728	@ 0003a70e 0be0
.org 0x3a710
	cmp r0, #2	@ 0003a710 0228
.org 0x3a712
	bne.n 0x3a728	@ 0003a712 09d1
.org 0x3a714
	adds r1, r2, #0	@ 0003a714 111c
.org 0x3a716
	adds r1, #240	@ 0003a716 f031
.org 0x3a718
	movs r0, #7	@ 0003a718 0720
.org 0x3a71a
	strb r0, [r1, #0]	@ 0003a71a 0870
.org 0x3a71c
	adds r1, #4	@ 0003a71c 0431
.org 0x3a71e
	movs r0, #21	@ 0003a71e 1520
.org 0x3a720
	strb r0, [r1, #0]	@ 0003a720 0870
.org 0x3a722
	adds r0, r2, #0	@ 0003a722 101c
.org 0x3a724
	bl 0x109320	@ 0003a724 cef0fcfd
.org 0x3a728
	pop {r0}	@ 0003a728 01bc
.org 0x3a72a
	bx r0	@ 0003a72a 0047
