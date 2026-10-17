@ FUN_0801676c  entry 0x0801676c  size 52
.thumb
.org 0x1676c
FUN_0801676c:
	push {r4, r5, lr}	@ 0001676c 30b5
.org 0x1676e
	ldr r3, [r0, #92]	@ 0001676e c36d
.org 0x16770
	lsls r3, r3, #16	@ 00016770 1b04
.org 0x16772
	lsrs r3, r3, #20	@ 00016772 1b0d
.org 0x16774
	lsls r3, r3, #2	@ 00016774 9b00
.org 0x16776
	ldr r4, [pc, #40]	@ 00016776 0a4c
.org 0x16778
	adds r5, r3, r4	@ 00016778 1d19
.org 0x1677a
	ldr r2, [r0, #52]	@ 0001677a 426b
.org 0x1677c
	ldr r1, [r0, #68]	@ 0001677c 416c
.org 0x1677e
	muls r2, r1	@ 0001677e 4a43
.org 0x16780
	asrs r2, r2, #8	@ 00016780 1212
.org 0x16782
	ldr r1, [r0, #76]	@ 00016782 c16c
.org 0x16784
	adds r1, r1, r2	@ 00016784 8918
.org 0x16786
	strh r1, [r5, #0]	@ 00016786 2980
.org 0x16788
	adds r4, #2	@ 00016788 0234
.org 0x1678a
	adds r3, r3, r4	@ 0001678a 1b19
.org 0x1678c
	ldr r2, [r0, #56]	@ 0001678c 826b
.org 0x1678e
	ldr r1, [r0, #72]	@ 0001678e 816c
.org 0x16790
	muls r1, r2	@ 00016790 5143
.org 0x16792
	asrs r1, r1, #8	@ 00016792 0912
.org 0x16794
	ldr r0, [r0, #80]	@ 00016794 006d
.org 0x16796
	adds r0, r0, r1	@ 00016796 4018
.org 0x16798
	strh r0, [r3, #0]	@ 00016798 1880
.org 0x1679a
	pop {r4, r5}	@ 0001679a 30bc
.org 0x1679c
	pop {r0}	@ 0001679c 01bc
.org 0x1679e
	bx r0	@ 0001679e 0047
