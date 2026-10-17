@ FUN_080ddcd0  entry 0x080ddcd0  size 56
.thumb
.org 0xddcd0
FUN_080ddcd0:
	push {r4, lr}	@ 000ddcd0 10b5
.org 0xddcd2
	adds r4, r0, #0	@ 000ddcd2 041c
.org 0xddcd4
	bl 0x1cff0	@ 000ddcd4 3ff78cf9
.org 0xddcd8
	ldr r0, [r4, #84]	@ 000ddcd8 606d
.org 0xddcda
	ldr r1, [r4, #92]	@ 000ddcda e16d
.org 0xddcdc
	adds r0, r0, r1	@ 000ddcdc 4018
.org 0xddcde
	str r0, [r4, #84]	@ 000ddcde 6065
.org 0xddce0
	ldr r0, [r4, #100]	@ 000ddce0 606e
.org 0xddce2
	adds r1, r1, r0	@ 000ddce2 0918
.org 0xddce4
	str r1, [r4, #92]	@ 000ddce4 e165
.org 0xddce6
	cmp r1, #0	@ 000ddce6 0029
.org 0xddce8
	bne.n 0xddd02	@ 000ddce8 0bd1
.org 0xddcea
	ldr r1, [pc, #28]	@ 000ddcea 0749
.org 0xddcec
	ldrb r0, [r4, #9]	@ 000ddcec 607a
.org 0xddcee
	lsls r0, r0, #2	@ 000ddcee 8000
.org 0xddcf0
	adds r0, r0, r1	@ 000ddcf0 4018
.org 0xddcf2
	movs r1, #2	@ 000ddcf2 0221
.org 0xddcf4
	str r1, [r4, #12]	@ 000ddcf4 e160
.org 0xddcf6
	ldr r0, [r0, #0]	@ 000ddcf6 0068
.org 0xddcf8
	ldr r0, [r0, #8]	@ 000ddcf8 8068
.org 0xddcfa
	str r0, [r4, #20]	@ 000ddcfa 6061
.org 0xddcfc
	adds r0, r4, #0	@ 000ddcfc 201c
.org 0xddcfe
	bl 0xdd6e0	@ 000ddcfe fff7effc
.org 0xddd02
	pop {r4}	@ 000ddd02 10bc
.org 0xddd04
	pop {r0}	@ 000ddd04 01bc
.org 0xddd06
	bx r0	@ 000ddd06 0047
