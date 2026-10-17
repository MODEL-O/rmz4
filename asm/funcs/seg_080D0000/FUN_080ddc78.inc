@ FUN_080ddc78  entry 0x080ddc78  size 84
.thumb
.org 0xddc78
FUN_080ddc78:
	push {r4, lr}	@ 000ddc78 10b5
.org 0xddc7a
	adds r4, r0, #0	@ 000ddc7a 041c
.org 0xddc7c
	bl 0x1cff0	@ 000ddc7c 3ff7b8f9
.org 0xddc80
	ldr r1, [r4, #84]	@ 000ddc80 616d
.org 0xddc82
	ldr r0, [r4, #92]	@ 000ddc82 e06d
.org 0xddc84
	adds r2, r1, r0	@ 000ddc84 0a18
.org 0xddc86
	str r2, [r4, #84]	@ 000ddc86 6265
.org 0xddc88
	ldr r1, [r4, #88]	@ 000ddc88 a16d
.org 0xddc8a
	ldr r0, [r4, #96]	@ 000ddc8a 206e
.org 0xddc8c
	adds r1, r1, r0	@ 000ddc8c 0918
.org 0xddc8e
	str r1, [r4, #88]	@ 000ddc8e a165
.org 0xddc90
	adds r0, #64	@ 000ddc90 4030
.org 0xddc92
	str r0, [r4, #96]	@ 000ddc92 2066
.org 0xddc94
	ldrb r0, [r4, #18]	@ 000ddc94 a07c
.org 0xddc96
	subs r0, #1	@ 000ddc96 0138
.org 0xddc98
	strb r0, [r4, #18]	@ 000ddc98 a074
.org 0xddc9a
	lsls r0, r0, #24	@ 000ddc9a 0006
.org 0xddc9c
	lsrs r0, r0, #24	@ 000ddc9c 000e
.org 0xddc9e
	cmp r0, #255	@ 000ddc9e ff28
.org 0xddca0
	beq.n 0xddcae	@ 000ddca0 05d0
.org 0xddca2
	adds r0, r2, #0	@ 000ddca2 101c
.org 0xddca4
	bl 0x7c7c	@ 000ddca4 29f7eaff
.org 0xddca8
	lsls r0, r0, #16	@ 000ddca8 0004
.org 0xddcaa
	cmp r0, #0	@ 000ddcaa 0028
.org 0xddcac
	beq.n 0xddcc6	@ 000ddcac 0bd0
.org 0xddcae
	ldr r1, [pc, #28]	@ 000ddcae 0749
.org 0xddcb0
	ldrb r0, [r4, #9]	@ 000ddcb0 607a
.org 0xddcb2
	lsls r0, r0, #2	@ 000ddcb2 8000
.org 0xddcb4
	adds r0, r0, r1	@ 000ddcb4 4018
.org 0xddcb6
	movs r1, #2	@ 000ddcb6 0221
.org 0xddcb8
	str r1, [r4, #12]	@ 000ddcb8 e160
.org 0xddcba
	ldr r0, [r0, #0]	@ 000ddcba 0068
.org 0xddcbc
	ldr r0, [r0, #8]	@ 000ddcbc 8068
.org 0xddcbe
	str r0, [r4, #20]	@ 000ddcbe 6061
.org 0xddcc0
	adds r0, r4, #0	@ 000ddcc0 201c
.org 0xddcc2
	bl 0xdd6e0	@ 000ddcc2 fff70dfd
.org 0xddcc6
	pop {r4}	@ 000ddcc6 10bc
.org 0xddcc8
	pop {r0}	@ 000ddcc8 01bc
.org 0xddcca
	bx r0	@ 000ddcca 0047
