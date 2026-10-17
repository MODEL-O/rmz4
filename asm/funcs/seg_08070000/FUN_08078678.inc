@ FUN_08078678  entry 0x08078678  size 30
.thumb
.org 0x78678
FUN_08078678:
	push {r4, lr}	@ 00078678 10b5
.org 0x7867a
	adds r4, r0, #0	@ 0007867a 041c
.org 0x7867c
	bl 0x79270	@ 0007867c 00f0f8fd
.org 0x78680
	ldr r1, [pc, #20]	@ 00078680 0549
.org 0x78682
	ldrb r0, [r4, #13]	@ 00078682 607b
.org 0x78684
	lsls r0, r0, #2	@ 00078684 8000
.org 0x78686
	adds r0, r0, r1	@ 00078686 4018
.org 0x78688
	ldr r1, [r0, #0]	@ 00078688 0168
.org 0x7868a
	adds r0, r4, #0	@ 0007868a 201c
.org 0x7868c
	bl 0x128f80	@ 0007868c b0f078fc
.org 0x78690
	pop {r4}	@ 00078690 10bc
.org 0x78692
	pop {r0}	@ 00078692 01bc
.org 0x78694
	bx r0	@ 00078694 0047
