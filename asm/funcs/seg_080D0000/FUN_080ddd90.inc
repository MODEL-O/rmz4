@ FUN_080ddd90  entry 0x080ddd90  size 84
.thumb
.org 0xddd90
FUN_080ddd90:
	push {r4, lr}	@ 000ddd90 10b5
.org 0xddd92
	adds r4, r0, #0	@ 000ddd92 041c
.org 0xddd94
	bl 0x1cff0	@ 000ddd94 3ff72cf9
.org 0xddd98
	ldr r1, [r4, #84]	@ 000ddd98 616d
.org 0xddd9a
	ldr r0, [r4, #92]	@ 000ddd9a e06d
.org 0xddd9c
	adds r2, r1, r0	@ 000ddd9c 0a18
.org 0xddd9e
	str r2, [r4, #84]	@ 000ddd9e 6265
.org 0xddda0
	ldr r1, [r4, #88]	@ 000ddda0 a16d
.org 0xddda2
	ldr r0, [r4, #96]	@ 000ddda2 206e
.org 0xddda4
	adds r1, r1, r0	@ 000ddda4 0918
.org 0xddda6
	str r1, [r4, #88]	@ 000ddda6 a165
.org 0xddda8
	adds r0, #64	@ 000ddda8 4030
.org 0xdddaa
	str r0, [r4, #96]	@ 000dddaa 2066
.org 0xdddac
	ldrb r0, [r4, #18]	@ 000dddac a07c
.org 0xdddae
	subs r0, #1	@ 000dddae 0138
.org 0xdddb0
	strb r0, [r4, #18]	@ 000dddb0 a074
.org 0xdddb2
	lsls r0, r0, #24	@ 000dddb2 0006
.org 0xdddb4
	lsrs r0, r0, #24	@ 000dddb4 000e
.org 0xdddb6
	cmp r0, #255	@ 000dddb6 ff28
.org 0xdddb8
	beq.n 0xdddc6	@ 000dddb8 05d0
.org 0xdddba
	adds r0, r2, #0	@ 000dddba 101c
.org 0xdddbc
	bl 0x7c7c	@ 000dddbc 29f75eff
.org 0xdddc0
	lsls r0, r0, #16	@ 000dddc0 0004
.org 0xdddc2
	cmp r0, #0	@ 000dddc2 0028
.org 0xdddc4
	beq.n 0xdddde	@ 000dddc4 0bd0
.org 0xdddc6
	ldr r1, [pc, #28]	@ 000dddc6 0749
.org 0xdddc8
	ldrb r0, [r4, #9]	@ 000dddc8 607a
.org 0xdddca
	lsls r0, r0, #2	@ 000dddca 8000
.org 0xdddcc
	adds r0, r0, r1	@ 000dddcc 4018
.org 0xdddce
	movs r1, #2	@ 000dddce 0221
.org 0xdddd0
	str r1, [r4, #12]	@ 000dddd0 e160
.org 0xdddd2
	ldr r0, [r0, #0]	@ 000dddd2 0068
.org 0xdddd4
	ldr r0, [r0, #8]	@ 000dddd4 8068
.org 0xdddd6
	str r0, [r4, #20]	@ 000dddd6 6061
.org 0xdddd8
	adds r0, r4, #0	@ 000dddd8 201c
.org 0xdddda
	bl 0xdd6e0	@ 000dddda fff781fc
.org 0xdddde
	pop {r4}	@ 000dddde 10bc
.org 0xddde0
	pop {r0}	@ 000ddde0 01bc
.org 0xddde2
	bx r0	@ 000ddde2 0047
