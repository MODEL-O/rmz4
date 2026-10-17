@ FUN_080ddde8  entry 0x080ddde8  size 58
.thumb
.org 0xddde8
FUN_080ddde8:
	push {r4, r5, lr}	@ 000ddde8 30b5
.org 0xdddea
	adds r4, r0, #0	@ 000dddea 041c
.org 0xdddec
	ldr r5, [r4, #40]	@ 000dddec a56a
.org 0xdddee
	bl 0x1cff0	@ 000dddee 3ff7fff8
.org 0xdddf2
	ldr r0, [r4, #100]	@ 000dddf2 606e
.org 0xdddf4
	adds r1, r0, #0	@ 000dddf4 011c
.org 0xdddf6
	subs r0, #1	@ 000dddf6 0138
.org 0xdddf8
	str r0, [r4, #100]	@ 000dddf8 6066
.org 0xdddfa
	cmp r1, #0	@ 000dddfa 0029
.org 0xdddfc
	beq.n 0xdde04	@ 000dddfc 02d0
.org 0xdddfe
	ldrb r0, [r5, #12]	@ 000dddfe 287b
.org 0xdde00
	cmp r0, #1	@ 000dde00 0128
.org 0xdde02
	bls.n 0xdde1c	@ 000dde02 0bd9
.org 0xdde04
	ldr r1, [pc, #28]	@ 000dde04 0749
.org 0xdde06
	ldrb r0, [r4, #9]	@ 000dde06 607a
.org 0xdde08
	lsls r0, r0, #2	@ 000dde08 8000
.org 0xdde0a
	adds r0, r0, r1	@ 000dde0a 4018
.org 0xdde0c
	movs r1, #2	@ 000dde0c 0221
.org 0xdde0e
	str r1, [r4, #12]	@ 000dde0e e160
.org 0xdde10
	ldr r0, [r0, #0]	@ 000dde10 0068
.org 0xdde12
	ldr r0, [r0, #8]	@ 000dde12 8068
.org 0xdde14
	str r0, [r4, #20]	@ 000dde14 6061
.org 0xdde16
	adds r0, r4, #0	@ 000dde16 201c
.org 0xdde18
	bl 0xdd6e0	@ 000dde18 fff762fc
.org 0xdde1c
	pop {r4, r5}	@ 000dde1c 30bc
.org 0xdde1e
	pop {r0}	@ 000dde1e 01bc
.org 0xdde20
	bx r0	@ 000dde20 0047
