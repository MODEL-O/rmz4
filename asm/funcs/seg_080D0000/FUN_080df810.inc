@ FUN_080df810  entry 0x080df810  size 44
.thumb
.org 0xdf810
FUN_080df810:
	push {r4, lr}	@ 000df810 10b5
.org 0xdf812
	adds r4, r0, #0	@ 000df812 041c
.org 0xdf814
	ldrb r0, [r4, #13]	@ 000df814 607b
.org 0xdf816
	cmp r0, #0	@ 000df816 0028
.org 0xdf818
	bne.n 0xdf830	@ 000df818 0ad1
.org 0xdf81a
	ldr r1, [pc, #32]	@ 000df81a 0849
.org 0xdf81c
	adds r0, r4, #0	@ 000df81c 201c
.org 0xdf81e
	bl 0x1cf00	@ 000df81e 3df76ffb
.org 0xdf822
	ldrb r1, [r4, #17]	@ 000df822 617c
.org 0xdf824
	adds r0, r4, #0	@ 000df824 201c
.org 0xdf826
	bl 0xdf71c	@ 000df826 fff779ff
.org 0xdf82a
	ldrb r0, [r4, #13]	@ 000df82a 607b
.org 0xdf82c
	adds r0, #1	@ 000df82c 0130
.org 0xdf82e
	strb r0, [r4, #13]	@ 000df82e 6073
.org 0xdf830
	adds r0, r4, #0	@ 000df830 201c
.org 0xdf832
	bl 0xdf7ac	@ 000df832 fff7bbff
.org 0xdf836
	pop {r4}	@ 000df836 10bc
.org 0xdf838
	pop {r0}	@ 000df838 01bc
.org 0xdf83a
	bx r0	@ 000df83a 0047
