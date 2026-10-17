@ FUN_080f1728  entry 0x080f1728  size 66
.thumb
.org 0xf1728
FUN_080f1728:
	push {r4, lr}	@ 000f1728 10b5
.org 0xf172a
	adds r4, r0, #0	@ 000f172a 041c
.org 0xf172c
	ldrb r0, [r4, #17]	@ 000f172c 607c
.org 0xf172e
	cmp r0, #0	@ 000f172e 0028
.org 0xf1730
	bne.n 0xf175e	@ 000f1730 15d1
.org 0xf1732
	ldr r0, [pc, #56]	@ 000f1732 0e48
.org 0xf1734
	movs r2, #165	@ 000f1734 a522
.org 0xf1736
	lsls r2, r2, #1	@ 000f1736 5200
.org 0xf1738
	adds r0, r0, r2	@ 000f1738 8018
.org 0xf173a
	ldr r1, [pc, #52]	@ 000f173a 0d49
.org 0xf173c
	strh r1, [r0, #0]	@ 000f173c 0180
.org 0xf173e
	ldr r0, [pc, #52]	@ 000f173e 0d48
.org 0xf1740
	adds r0, r0, r2	@ 000f1740 8018
.org 0xf1742
	movs r1, #9	@ 000f1742 0921
.org 0xf1744
	strh r1, [r0, #0]	@ 000f1744 0180
.org 0xf1746
	ldr r1, [pc, #48]	@ 000f1746 0c49
.org 0xf1748
	adds r0, r4, #0	@ 000f1748 201c
.org 0xf174a
	bl 0x1cf00	@ 000f174a 2bf7d9fb
.org 0xf174e
	ldr r0, [r4, #84]	@ 000f174e 606d
.org 0xf1750
	ldr r1, [r4, #88]	@ 000f1750 a16d
.org 0xf1752
	bl 0x8534	@ 000f1752 16f7effe
.org 0xf1756
	str r0, [r4, #88]	@ 000f1756 a065
.org 0xf1758
	ldrb r0, [r4, #17]	@ 000f1758 607c
.org 0xf175a
	adds r0, #1	@ 000f175a 0130
.org 0xf175c
	strb r0, [r4, #17]	@ 000f175c 6074
.org 0xf175e
	adds r0, r4, #0	@ 000f175e 201c
.org 0xf1760
	bl 0x1cff0	@ 000f1760 2bf746fc
.org 0xf1764
	pop {r4}	@ 000f1764 10bc
.org 0xf1766
	pop {r0}	@ 000f1766 01bc
.org 0xf1768
	bx r0	@ 000f1768 0047
