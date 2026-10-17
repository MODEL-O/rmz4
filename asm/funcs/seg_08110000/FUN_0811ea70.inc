@ FUN_0811ea70  entry 0x0811ea70  size 72
.thumb
.org 0x11ea70
FUN_0811ea70:
	push {r4, r5, r6, lr}	@ 0011ea70 70b5
.org 0x11ea72
	adds r5, r0, #0	@ 0011ea72 051c
.org 0x11ea74
	ldr r0, [pc, #64]	@ 0011ea74 1048
.org 0x11ea76
	adds r1, r5, r0	@ 0011ea76 2918
.org 0x11ea78
	movs r0, #240	@ 0011ea78 f020
.org 0x11ea7a
	lsls r0, r0, #7	@ 0011ea7a c001
.org 0x11ea7c
	str r0, [r1, #0]	@ 0011ea7c 0860
.org 0x11ea7e
	movs r0, #160	@ 0011ea7e a020
.org 0x11ea80
	lsls r0, r0, #7	@ 0011ea80 c001
.org 0x11ea82
	str r0, [r1, #4]	@ 0011ea82 4860
.org 0x11ea84
	ldr r0, [pc, #52]	@ 0011ea84 0d48
.org 0x11ea86
	adds r6, r5, r0	@ 0011ea86 2e18
.org 0x11ea88
	adds r0, r6, #0	@ 0011ea88 301c
.org 0x11ea8a
	movs r2, #0	@ 0011ea8a 0022
.org 0x11ea8c
	movs r3, #0	@ 0011ea8c 0023
.org 0x11ea8e
	bl 0x2c0c	@ 0011ea8e e4f6bdf8
.org 0x11ea92
	ldr r0, [pc, #44]	@ 0011ea92 0b48
.org 0x11ea94
	adds r4, r5, r0	@ 0011ea94 2c18
.org 0x11ea96
	adds r0, r4, #0	@ 0011ea96 201c
.org 0x11ea98
	bl 0x3384	@ 0011ea98 e4f674fc
.org 0x11ea9c
	adds r0, r4, #0	@ 0011ea9c 201c
.org 0x11ea9e
	adds r1, r6, #0	@ 0011ea9e 311c
.org 0x11eaa0
	bl 0x33bc	@ 0011eaa0 e4f68cfc
.org 0x11eaa4
	ldr r0, [pc, #28]	@ 0011eaa4 0748
.org 0x11eaa6
	adds r5, r5, r0	@ 0011eaa6 2d18
.org 0x11eaa8
	ldr r1, [pc, #28]	@ 0011eaa8 0749
.org 0x11eaaa
	adds r0, r5, #0	@ 0011eaaa 281c
.org 0x11eaac
	movs r2, #64	@ 0011eaac 4022
.org 0x11eaae
	bl 0x10a1b4	@ 0011eaae ebf781fb
.org 0x11eab2
	pop {r4, r5, r6}	@ 0011eab2 70bc
.org 0x11eab4
	pop {r0}	@ 0011eab4 01bc
.org 0x11eab6
	bx r0	@ 0011eab6 0047
