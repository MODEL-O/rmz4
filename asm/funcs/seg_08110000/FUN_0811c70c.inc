@ FUN_0811c70c  entry 0x0811c70c  size 72
.thumb
.org 0x11c70c
FUN_0811c70c:
	push {r4, r5, r6, lr}	@ 0011c70c 70b5
.org 0x11c70e
	adds r5, r0, #0	@ 0011c70e 051c
.org 0x11c710
	ldr r0, [pc, #64]	@ 0011c710 1048
.org 0x11c712
	adds r1, r5, r0	@ 0011c712 2918
.org 0x11c714
	movs r0, #240	@ 0011c714 f020
.org 0x11c716
	lsls r0, r0, #7	@ 0011c716 c001
.org 0x11c718
	str r0, [r1, #0]	@ 0011c718 0860
.org 0x11c71a
	movs r0, #160	@ 0011c71a a020
.org 0x11c71c
	lsls r0, r0, #7	@ 0011c71c c001
.org 0x11c71e
	str r0, [r1, #4]	@ 0011c71e 4860
.org 0x11c720
	ldr r0, [pc, #52]	@ 0011c720 0d48
.org 0x11c722
	adds r6, r5, r0	@ 0011c722 2e18
.org 0x11c724
	adds r0, r6, #0	@ 0011c724 301c
.org 0x11c726
	movs r2, #0	@ 0011c726 0022
.org 0x11c728
	movs r3, #0	@ 0011c728 0023
.org 0x11c72a
	bl 0x2c0c	@ 0011c72a e6f66ffa
.org 0x11c72e
	ldr r0, [pc, #44]	@ 0011c72e 0b48
.org 0x11c730
	adds r4, r5, r0	@ 0011c730 2c18
.org 0x11c732
	adds r0, r4, #0	@ 0011c732 201c
.org 0x11c734
	bl 0x3384	@ 0011c734 e6f626fe
.org 0x11c738
	adds r0, r4, #0	@ 0011c738 201c
.org 0x11c73a
	adds r1, r6, #0	@ 0011c73a 311c
.org 0x11c73c
	bl 0x33bc	@ 0011c73c e6f63efe
.org 0x11c740
	ldr r0, [pc, #28]	@ 0011c740 0748
.org 0x11c742
	adds r5, r5, r0	@ 0011c742 2d18
.org 0x11c744
	ldr r1, [pc, #28]	@ 0011c744 0749
.org 0x11c746
	adds r0, r5, #0	@ 0011c746 281c
.org 0x11c748
	movs r2, #64	@ 0011c748 4022
.org 0x11c74a
	bl 0x10a1b4	@ 0011c74a edf733fd
.org 0x11c74e
	pop {r4, r5, r6}	@ 0011c74e 70bc
.org 0x11c750
	pop {r0}	@ 0011c750 01bc
.org 0x11c752
	bx r0	@ 0011c752 0047
