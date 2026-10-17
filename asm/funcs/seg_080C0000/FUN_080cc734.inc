@ FUN_080cc734  entry 0x080cc734  size 64
.thumb
.org 0xcc734
FUN_080cc734:
	push {r4, lr}	@ 000cc734 10b5
.org 0xcc736
	adds r4, r0, #0	@ 000cc736 041c
.org 0xcc738
	bl 0x1cff0	@ 000cc738 50f75afc
.org 0xcc73c
	ldr r0, [r4, #84]	@ 000cc73c 606d
.org 0xcc73e
	ldr r1, [r4, #92]	@ 000cc73e e16d
.org 0xcc740
	adds r0, r0, r1	@ 000cc740 4018
.org 0xcc742
	str r0, [r4, #84]	@ 000cc742 6065
.org 0xcc744
	ldr r1, [r4, #88]	@ 000cc744 a16d
.org 0xcc746
	ldr r2, [r4, #96]	@ 000cc746 226e
.org 0xcc748
	adds r1, r1, r2	@ 000cc748 8918
.org 0xcc74a
	str r1, [r4, #88]	@ 000cc74a a165
.org 0xcc74c
	bl 0x7c7c	@ 000cc74c 3bf796fa
.org 0xcc750
	lsls r0, r0, #16	@ 000cc750 0004
.org 0xcc752
	cmp r0, #0	@ 000cc752 0028
.org 0xcc754
	beq.n 0xcc76e	@ 000cc754 0bd0
.org 0xcc756
	ldr r1, [pc, #28]	@ 000cc756 0749
.org 0xcc758
	ldrb r0, [r4, #9]	@ 000cc758 607a
.org 0xcc75a
	lsls r0, r0, #2	@ 000cc75a 8000
.org 0xcc75c
	adds r0, r0, r1	@ 000cc75c 4018
.org 0xcc75e
	movs r1, #2	@ 000cc75e 0221
.org 0xcc760
	str r1, [r4, #12]	@ 000cc760 e160
.org 0xcc762
	ldr r0, [r0, #0]	@ 000cc762 0068
.org 0xcc764
	ldr r0, [r0, #8]	@ 000cc764 8068
.org 0xcc766
	str r0, [r4, #20]	@ 000cc766 6061
.org 0xcc768
	adds r0, r4, #0	@ 000cc768 201c
.org 0xcc76a
	bl 0xcc0bc	@ 000cc76a fff7a7fc
.org 0xcc76e
	pop {r4}	@ 000cc76e 10bc
.org 0xcc770
	pop {r0}	@ 000cc770 01bc
.org 0xcc772
	bx r0	@ 000cc772 0047
