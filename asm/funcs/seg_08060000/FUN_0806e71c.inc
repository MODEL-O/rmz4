@ FUN_0806e71c  entry 0x0806e71c  size 74
.thumb
.org 0x6e71c
FUN_0806e71c:
	push {r4, lr}	@ 0006e71c 10b5
.org 0x6e71e
	adds r4, r0, #0	@ 0006e71e 041c
.org 0x6e720
	ldrb r0, [r4, #15]	@ 0006e720 e07b
.org 0x6e722
	cmp r0, #0	@ 0006e722 0028
.org 0x6e724
	bne.n 0x6e744	@ 0006e724 0ed1
.org 0x6e726
	adds r0, r4, #0	@ 0006e726 201c
.org 0x6e728
	adds r0, #116	@ 0006e728 7430
.org 0x6e72a
	ldr r1, [pc, #60]	@ 0006e72a 0f49
.org 0x6e72c
	bl 0x5784	@ 0006e72c 97f72af8
.org 0x6e730
	movs r1, #173	@ 0006e730 ad21
.org 0x6e732
	lsls r1, r1, #8	@ 0006e732 0902
.org 0x6e734
	adds r0, r4, #0	@ 0006e734 201c
.org 0x6e736
	bl 0x1cf00	@ 0006e736 aef7e3fb
.org 0x6e73a
	movs r0, #8	@ 0006e73a 0820
.org 0x6e73c
	strb r0, [r4, #18]	@ 0006e73c a074
.org 0x6e73e
	ldrb r0, [r4, #15]	@ 0006e73e e07b
.org 0x6e740
	adds r0, #1	@ 0006e740 0130
.org 0x6e742
	strb r0, [r4, #15]	@ 0006e742 e073
.org 0x6e744
	adds r0, r4, #0	@ 0006e744 201c
.org 0x6e746
	bl 0x1cff0	@ 0006e746 aef753fc
.org 0x6e74a
	ldrb r0, [r4, #18]	@ 0006e74a a07c
.org 0x6e74c
	subs r0, #1	@ 0006e74c 0138
.org 0x6e74e
	strb r0, [r4, #18]	@ 0006e74e a074
.org 0x6e750
	lsls r0, r0, #24	@ 0006e750 0006
.org 0x6e752
	lsrs r1, r0, #24	@ 0006e752 010e
.org 0x6e754
	cmp r1, #0	@ 0006e754 0029
.org 0x6e756
	bne.n 0x6e760	@ 0006e756 03d1
.org 0x6e758
	movs r0, #8	@ 0006e758 0820
.org 0x6e75a
	strb r0, [r4, #13]	@ 0006e75a 6073
.org 0x6e75c
	strb r1, [r4, #14]	@ 0006e75c a173
.org 0x6e75e
	strb r1, [r4, #15]	@ 0006e75e e173
.org 0x6e760
	pop {r4}	@ 0006e760 10bc
.org 0x6e762
	pop {r0}	@ 0006e762 01bc
.org 0x6e764
	bx r0	@ 0006e764 0047
