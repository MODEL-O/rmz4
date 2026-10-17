@ FUN_0804c728  entry 0x0804c728  size 64
.thumb
.org 0x4c728
FUN_0804c728:
	push {lr}	@ 0004c728 00b5
.org 0x4c72a
	adds r2, r0, #0	@ 0004c72a 021c
.org 0x4c72c
	adds r0, #140	@ 0004c72c 8c30
.org 0x4c72e
	ldr r0, [r0, #0]	@ 0004c72e 0068
.org 0x4c730
	movs r1, #128	@ 0004c730 8021
.org 0x4c732
	lsls r1, r1, #2	@ 0004c732 8900
.org 0x4c734
	ands r0, r1	@ 0004c734 0840
.org 0x4c736
	cmp r0, #0	@ 0004c736 0028
.org 0x4c738
	beq.n 0x4c758	@ 0004c738 0ed0
.org 0x4c73a
	ldr r1, [pc, #24]	@ 0004c73a 0649
.org 0x4c73c
	ldrb r0, [r2, #9]	@ 0004c73c 507a
.org 0x4c73e
	lsls r0, r0, #2	@ 0004c73e 8000
.org 0x4c740
	adds r0, r0, r1	@ 0004c740 4018
.org 0x4c742
	movs r1, #2	@ 0004c742 0221
.org 0x4c744
	str r1, [r2, #12]	@ 0004c744 d160
.org 0x4c746
	ldr r0, [r0, #0]	@ 0004c746 0068
.org 0x4c748
	ldr r0, [r0, #8]	@ 0004c748 8068
.org 0x4c74a
	str r0, [r2, #20]	@ 0004c74a 5061
.org 0x4c74c
	adds r0, r2, #0	@ 0004c74c 101c
.org 0x4c74e
	bl 0x4c770	@ 0004c74e 00f00ff8
.org 0x4c752
	b.n 0x4c768	@ 0004c752 09e0
.org 0x4c754
	.byte 0xf8,0x39,0x85,0x08	@ 0004c754 data
.org 0x4c758
	ldr r0, [pc, #16]	@ 0004c758 0448
.org 0x4c75a
	ldrb r1, [r2, #16]	@ 0004c75a 117c
.org 0x4c75c
	lsls r1, r1, #2	@ 0004c75c 8900
.org 0x4c75e
	adds r1, r1, r0	@ 0004c75e 0918
.org 0x4c760
	ldr r1, [r1, #0]	@ 0004c760 0968
.org 0x4c762
	adds r0, r2, #0	@ 0004c762 101c
.org 0x4c764
	bl 0x128f80	@ 0004c764 dcf00cfc
