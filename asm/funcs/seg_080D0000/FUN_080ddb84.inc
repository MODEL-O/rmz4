@ FUN_080ddb84  entry 0x080ddb84  size 56
.thumb
.org 0xddb84
FUN_080ddb84:
	push {r4, lr}	@ 000ddb84 10b5
.org 0xddb86
	adds r4, r0, #0	@ 000ddb86 041c
.org 0xddb88
	bl 0x1cff0	@ 000ddb88 3ff732fa
.org 0xddb8c
	ldr r0, [r4, #84]	@ 000ddb8c 606d
.org 0xddb8e
	ldr r1, [r4, #92]	@ 000ddb8e e16d
.org 0xddb90
	adds r0, r0, r1	@ 000ddb90 4018
.org 0xddb92
	str r0, [r4, #84]	@ 000ddb92 6065
.org 0xddb94
	ldr r0, [r4, #100]	@ 000ddb94 606e
.org 0xddb96
	adds r1, r1, r0	@ 000ddb96 0918
.org 0xddb98
	str r1, [r4, #92]	@ 000ddb98 e165
.org 0xddb9a
	cmp r1, #0	@ 000ddb9a 0029
.org 0xddb9c
	bne.n 0xddbb6	@ 000ddb9c 0bd1
.org 0xddb9e
	ldr r1, [pc, #28]	@ 000ddb9e 0749
.org 0xddba0
	ldrb r0, [r4, #9]	@ 000ddba0 607a
.org 0xddba2
	lsls r0, r0, #2	@ 000ddba2 8000
.org 0xddba4
	adds r0, r0, r1	@ 000ddba4 4018
.org 0xddba6
	movs r1, #2	@ 000ddba6 0221
.org 0xddba8
	str r1, [r4, #12]	@ 000ddba8 e160
.org 0xddbaa
	ldr r0, [r0, #0]	@ 000ddbaa 0068
.org 0xddbac
	ldr r0, [r0, #8]	@ 000ddbac 8068
.org 0xddbae
	str r0, [r4, #20]	@ 000ddbae 6061
.org 0xddbb0
	adds r0, r4, #0	@ 000ddbb0 201c
.org 0xddbb2
	bl 0xdd6e0	@ 000ddbb2 fff795fd
.org 0xddbb6
	pop {r4}	@ 000ddbb6 10bc
.org 0xddbb8
	pop {r0}	@ 000ddbb8 01bc
.org 0xddbba
	bx r0	@ 000ddbba 0047
