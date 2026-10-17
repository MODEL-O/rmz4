@ FUN_0811c768  entry 0x0811c768  size 64
.thumb
.org 0x11c768
FUN_0811c768:
	push {r4, r5, lr}	@ 0011c768 30b5
.org 0x11c76a
	adds r5, r0, #0	@ 0011c76a 051c
.org 0x11c76c
	ldr r0, [pc, #56]	@ 0011c76c 0e48
.org 0x11c76e
	adds r2, r5, r0	@ 0011c76e 2a18
.org 0x11c770
	ldr r0, [pc, #56]	@ 0011c770 0e48
.org 0x11c772
	ldrh r1, [r0, #0]	@ 0011c772 0188
.org 0x11c774
	ldr r0, [pc, #56]	@ 0011c774 0e48
.org 0x11c776
	ands r0, r1	@ 0011c776 0840
.org 0x11c778
	lsls r0, r0, #8	@ 0011c778 0002
.org 0x11c77a
	movs r1, #240	@ 0011c77a f021
.org 0x11c77c
	lsls r1, r1, #7	@ 0011c77c c901
.org 0x11c77e
	adds r0, r0, r1	@ 0011c77e 4018
.org 0x11c780
	str r0, [r2, #0]	@ 0011c780 1060
.org 0x11c782
	ldr r0, [pc, #48]	@ 0011c782 0c48
.org 0x11c784
	adds r5, r5, r0	@ 0011c784 2d18
.org 0x11c786
	adds r0, r5, #0	@ 0011c786 281c
.org 0x11c788
	bl 0x3470	@ 0011c788 e6f672fe
.org 0x11c78c
	ldr r4, [pc, #40]	@ 0011c78c 0a4c
.org 0x11c78e
	ldr r0, [r4, #0]	@ 0011c78e 2068
.org 0x11c790
	bl 0x1c79c	@ 0011c790 00f704f8
.org 0x11c794
	ldr r0, [r4, #0]	@ 0011c794 2068
.org 0x11c796
	adds r1, r5, #0	@ 0011c796 291c
.org 0x11c798
	bl 0x1c924	@ 0011c798 00f7c4f8
.org 0x11c79c
	adds r0, r5, #0	@ 0011c79c 281c
.org 0x11c79e
	bl 0x3420	@ 0011c79e e6f63ffe
.org 0x11c7a2
	pop {r4, r5}	@ 0011c7a2 30bc
.org 0x11c7a4
	pop {r0}	@ 0011c7a4 01bc
.org 0x11c7a6
	bx r0	@ 0011c7a6 0047
