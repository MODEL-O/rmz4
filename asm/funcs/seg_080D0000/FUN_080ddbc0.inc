@ FUN_080ddbc0  entry 0x080ddbc0  size 84
.thumb
.org 0xddbc0
FUN_080ddbc0:
	push {r4, lr}	@ 000ddbc0 10b5
.org 0xddbc2
	adds r4, r0, #0	@ 000ddbc2 041c
.org 0xddbc4
	bl 0x1cff0	@ 000ddbc4 3ff714fa
.org 0xddbc8
	ldr r1, [r4, #84]	@ 000ddbc8 616d
.org 0xddbca
	ldr r0, [r4, #92]	@ 000ddbca e06d
.org 0xddbcc
	adds r2, r1, r0	@ 000ddbcc 0a18
.org 0xddbce
	str r2, [r4, #84]	@ 000ddbce 6265
.org 0xddbd0
	ldr r1, [r4, #88]	@ 000ddbd0 a16d
.org 0xddbd2
	ldr r0, [r4, #96]	@ 000ddbd2 206e
.org 0xddbd4
	adds r1, r1, r0	@ 000ddbd4 0918
.org 0xddbd6
	str r1, [r4, #88]	@ 000ddbd6 a165
.org 0xddbd8
	adds r0, #64	@ 000ddbd8 4030
.org 0xddbda
	str r0, [r4, #96]	@ 000ddbda 2066
.org 0xddbdc
	ldrb r0, [r4, #18]	@ 000ddbdc a07c
.org 0xddbde
	subs r0, #1	@ 000ddbde 0138
.org 0xddbe0
	strb r0, [r4, #18]	@ 000ddbe0 a074
.org 0xddbe2
	lsls r0, r0, #24	@ 000ddbe2 0006
.org 0xddbe4
	lsrs r0, r0, #24	@ 000ddbe4 000e
.org 0xddbe6
	cmp r0, #255	@ 000ddbe6 ff28
.org 0xddbe8
	beq.n 0xddbf6	@ 000ddbe8 05d0
.org 0xddbea
	adds r0, r2, #0	@ 000ddbea 101c
.org 0xddbec
	bl 0x7c7c	@ 000ddbec 2af746f8
.org 0xddbf0
	lsls r0, r0, #16	@ 000ddbf0 0004
.org 0xddbf2
	cmp r0, #0	@ 000ddbf2 0028
.org 0xddbf4
	beq.n 0xddc0e	@ 000ddbf4 0bd0
.org 0xddbf6
	ldr r1, [pc, #28]	@ 000ddbf6 0749
.org 0xddbf8
	ldrb r0, [r4, #9]	@ 000ddbf8 607a
.org 0xddbfa
	lsls r0, r0, #2	@ 000ddbfa 8000
.org 0xddbfc
	adds r0, r0, r1	@ 000ddbfc 4018
.org 0xddbfe
	movs r1, #2	@ 000ddbfe 0221
.org 0xddc00
	str r1, [r4, #12]	@ 000ddc00 e160
.org 0xddc02
	ldr r0, [r0, #0]	@ 000ddc02 0068
.org 0xddc04
	ldr r0, [r0, #8]	@ 000ddc04 8068
.org 0xddc06
	str r0, [r4, #20]	@ 000ddc06 6061
.org 0xddc08
	adds r0, r4, #0	@ 000ddc08 201c
.org 0xddc0a
	bl 0xdd6e0	@ 000ddc0a fff769fd
.org 0xddc0e
	pop {r4}	@ 000ddc0e 10bc
.org 0xddc10
	pop {r0}	@ 000ddc10 01bc
.org 0xddc12
	bx r0	@ 000ddc12 0047
