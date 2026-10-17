@ FUN_080cb7b8  entry 0x080cb7b8  size 152
.thumb
.org 0xcb7b8
FUN_080cb7b8:
	push {r4, r5, lr}	@ 000cb7b8 30b5
.org 0xcb7ba
	adds r4, r0, #0	@ 000cb7ba 041c
.org 0xcb7bc
	ldr r5, [r4, #40]	@ 000cb7bc a56a
.org 0xcb7be
	bl 0x1cff0	@ 000cb7be 51f717fc
.org 0xcb7c2
	ldrb r3, [r4, #13]	@ 000cb7c2 637b
.org 0xcb7c4
	cmp r3, #0	@ 000cb7c4 002b
.org 0xcb7c6
	bne.n 0xcb80c	@ 000cb7c6 21d1
.org 0xcb7c8
	ldr r0, [r5, #84]	@ 000cb7c8 686d
.org 0xcb7ca
	ldr r1, [r5, #88]	@ 000cb7ca a96d
.org 0xcb7cc
	str r0, [r4, #84]	@ 000cb7cc 6065
.org 0xcb7ce
	str r1, [r4, #88]	@ 000cb7ce a165
.org 0xcb7d0
	adds r0, r4, #0	@ 000cb7d0 201c
.org 0xcb7d2
	adds r0, #113	@ 000cb7d2 7130
.org 0xcb7d4
	ldrb r0, [r0, #0]	@ 000cb7d4 0078
.org 0xcb7d6
	lsls r0, r0, #24	@ 000cb7d6 0006
.org 0xcb7d8
	asrs r0, r0, #24	@ 000cb7d8 0016
.org 0xcb7da
	cmp r0, #3	@ 000cb7da 0328
.org 0xcb7dc
	ble.n 0xcb850	@ 000cb7dc 38dd
.org 0xcb7de
	ldrb r1, [r4, #17]	@ 000cb7de 617c
.org 0xcb7e0
	ldr r2, [pc, #36]	@ 000cb7e0 094a
.org 0xcb7e2
	adds r0, r1, #0	@ 000cb7e2 081c
.org 0xcb7e4
	adds r0, #64	@ 000cb7e4 4030
.org 0xcb7e6
	lsls r0, r0, #24	@ 000cb7e6 0006
.org 0xcb7e8
	lsrs r0, r0, #23	@ 000cb7e8 c00d
.org 0xcb7ea
	adds r0, r0, r2	@ 000cb7ea 8018
.org 0xcb7ec
	movs r5, #0	@ 000cb7ec 0025
.org 0xcb7ee
	ldrsh r0, [r0, r5]	@ 000cb7ee 405f
.org 0xcb7f0
	lsls r0, r0, #2	@ 000cb7f0 8000
.org 0xcb7f2
	str r0, [r4, #92]	@ 000cb7f2 e065
.org 0xcb7f4
	lsls r1, r1, #1	@ 000cb7f4 4900
.org 0xcb7f6
	adds r1, r1, r2	@ 000cb7f6 8918
.org 0xcb7f8
	movs r2, #0	@ 000cb7f8 0022
.org 0xcb7fa
	ldrsh r0, [r1, r2]	@ 000cb7fa 885e
.org 0xcb7fc
	lsls r0, r0, #2	@ 000cb7fc 8000
.org 0xcb7fe
	str r0, [r4, #96]	@ 000cb7fe 2066
.org 0xcb800
	adds r0, r3, #1	@ 000cb800 581c
.org 0xcb802
	strb r0, [r4, #13]	@ 000cb802 6073
.org 0xcb804
	b.n 0xcb850	@ 000cb804 24e0
.org 0xcb806
	.byte 0x00	@ 000cb806 data
.org 0xcb807
	.byte 0x00	@ 000cb807 data
.org 0xcb808
	.byte 0x0c,0x93,0x12,0x08	@ 000cb808 data
.org 0xcb80c
	ldr r1, [r4, #84]	@ 000cb80c 616d
.org 0xcb80e
	ldr r0, [r4, #92]	@ 000cb80e e06d
.org 0xcb810
	adds r3, r1, r0	@ 000cb810 0b18
.org 0xcb812
	str r3, [r4, #84]	@ 000cb812 6365
.org 0xcb814
	ldr r1, [r4, #88]	@ 000cb814 a16d
.org 0xcb816
	ldr r0, [r4, #96]	@ 000cb816 206e
.org 0xcb818
	adds r2, r1, r0	@ 000cb818 0a18
.org 0xcb81a
	str r2, [r4, #88]	@ 000cb81a a265
.org 0xcb81c
	adds r0, r4, #0	@ 000cb81c 201c
.org 0xcb81e
	adds r0, #140	@ 000cb81e 8c30
.org 0xcb820
	ldr r0, [r0, #0]	@ 000cb820 0068
.org 0xcb822
	movs r1, #4	@ 000cb822 0421
.org 0xcb824
	ands r0, r1	@ 000cb824 0840
.org 0xcb826
	cmp r0, #0	@ 000cb826 0028
.org 0xcb828
	bne.n 0xcb838	@ 000cb828 06d1
.org 0xcb82a
	adds r0, r3, #0	@ 000cb82a 181c
.org 0xcb82c
	adds r1, r2, #0	@ 000cb82c 111c
.org 0xcb82e
	bl 0x7c7c	@ 000cb82e 3cf725fa
.org 0xcb832
	lsls r0, r0, #16	@ 000cb832 0004
.org 0xcb834
	cmp r0, #0	@ 000cb834 0028
.org 0xcb836
	beq.n 0xcb850	@ 000cb836 0bd0
.org 0xcb838
	ldr r1, [pc, #28]	@ 000cb838 0749
.org 0xcb83a
	ldrb r0, [r4, #9]	@ 000cb83a 607a
.org 0xcb83c
	lsls r0, r0, #2	@ 000cb83c 8000
.org 0xcb83e
	adds r0, r0, r1	@ 000cb83e 4018
.org 0xcb840
	movs r1, #2	@ 000cb840 0221
.org 0xcb842
	str r1, [r4, #12]	@ 000cb842 e160
.org 0xcb844
	ldr r0, [r0, #0]	@ 000cb844 0068
.org 0xcb846
	ldr r0, [r0, #8]	@ 000cb846 8068
.org 0xcb848
	str r0, [r4, #20]	@ 000cb848 6061
.org 0xcb84a
	adds r0, r4, #0	@ 000cb84a 201c
.org 0xcb84c
	bl 0xcb5a4	@ 000cb84c fff7aafe
