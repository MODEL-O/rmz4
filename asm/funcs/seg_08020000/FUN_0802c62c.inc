@ FUN_0802c62c  entry 0x0802c62c  size 68
.thumb
.org 0x2c62c
FUN_0802c62c:
	push {lr}	@ 0002c62c 00b5
.org 0x2c62e
	adds r2, r0, #0	@ 0002c62e 021c
.org 0x2c630
	ldrb r1, [r2, #10]	@ 0002c630 917a
.org 0x2c632
	movs r3, #16	@ 0002c632 1023
.org 0x2c634
	adds r0, r3, #0	@ 0002c634 181c
.org 0x2c636
	ands r0, r1	@ 0002c636 0840
.org 0x2c638
	cmp r0, #0	@ 0002c638 0028
.org 0x2c63a
	beq.n 0x2c64c	@ 0002c63a 07d0
.org 0x2c63c
	movs r1, #150	@ 0002c63c 9621
.org 0x2c63e
	lsls r1, r1, #2	@ 0002c63e 8900
.org 0x2c640
	adds r0, r2, r1	@ 0002c640 5018
.org 0x2c642
	ldr r0, [r0, #0]	@ 0002c642 0068
.org 0x2c644
	ands r0, r3	@ 0002c644 1840
.org 0x2c646
	cmp r0, #0	@ 0002c646 0028
.org 0x2c648
	bne.n 0x2c65a	@ 0002c648 07d1
.org 0x2c64a
	b.n 0x2c66a	@ 0002c64a 0ee0
.org 0x2c64c
	movs r1, #150	@ 0002c64c 9621
.org 0x2c64e
	lsls r1, r1, #2	@ 0002c64e 8900
.org 0x2c650
	adds r0, r2, r1	@ 0002c650 5018
.org 0x2c652
	ldr r0, [r0, #0]	@ 0002c652 0068
.org 0x2c654
	movs r1, #32	@ 0002c654 2021
.org 0x2c656
	ands r0, r1	@ 0002c656 0840
.org 0x2c658
	b.n 0x2c646	@ 0002c658 f5e7
.org 0x2c65a
	movs r1, #158	@ 0002c65a 9e21
.org 0x2c65c
	lsls r1, r1, #2	@ 0002c65c 8900
.org 0x2c65e
	adds r0, r2, r1	@ 0002c65e 5018
.org 0x2c660
	ldrb r0, [r0, #0]	@ 0002c660 0078
.org 0x2c662
	cmp r0, #0	@ 0002c662 0028
.org 0x2c664
	bne.n 0x2c66a	@ 0002c664 01d1
.org 0x2c666
	movs r0, #1	@ 0002c666 0120
.org 0x2c668
	b.n 0x2c66c	@ 0002c668 00e0
.org 0x2c66a
	movs r0, #0	@ 0002c66a 0020
.org 0x2c66c
	pop {r1}	@ 0002c66c 02bc
.org 0x2c66e
	bx r1	@ 0002c66e 0847
