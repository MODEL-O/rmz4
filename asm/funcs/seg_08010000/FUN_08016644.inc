@ FUN_08016644  entry 0x08016644  size 52
.thumb
.org 0x16644
FUN_08016644:
	push {r4, r5, lr}	@ 00016644 30b5
.org 0x16646
	ldr r3, [r0, #92]	@ 00016646 c36d
.org 0x16648
	lsls r3, r3, #16	@ 00016648 1b04
.org 0x1664a
	lsrs r3, r3, #20	@ 0001664a 1b0d
.org 0x1664c
	lsls r3, r3, #2	@ 0001664c 9b00
.org 0x1664e
	ldr r4, [pc, #40]	@ 0001664e 0a4c
.org 0x16650
	adds r5, r3, r4	@ 00016650 1d19
.org 0x16652
	ldr r2, [r0, #52]	@ 00016652 426b
.org 0x16654
	ldr r1, [r0, #68]	@ 00016654 416c
.org 0x16656
	muls r2, r1	@ 00016656 4a43
.org 0x16658
	asrs r2, r2, #8	@ 00016658 1212
.org 0x1665a
	ldr r1, [r0, #76]	@ 0001665a c16c
.org 0x1665c
	adds r1, r1, r2	@ 0001665c 8918
.org 0x1665e
	strh r1, [r5, #0]	@ 0001665e 2980
.org 0x16660
	adds r4, #2	@ 00016660 0234
.org 0x16662
	adds r3, r3, r4	@ 00016662 1b19
.org 0x16664
	ldr r2, [r0, #56]	@ 00016664 826b
.org 0x16666
	ldr r1, [r0, #72]	@ 00016666 816c
.org 0x16668
	muls r1, r2	@ 00016668 5143
.org 0x1666a
	asrs r1, r1, #8	@ 0001666a 0912
.org 0x1666c
	ldr r0, [r0, #80]	@ 0001666c 006d
.org 0x1666e
	adds r0, r0, r1	@ 0001666e 4018
.org 0x16670
	strh r0, [r3, #0]	@ 00016670 1880
.org 0x16672
	pop {r4, r5}	@ 00016672 30bc
.org 0x16674
	pop {r0}	@ 00016674 01bc
.org 0x16676
	bx r0	@ 00016676 0047
