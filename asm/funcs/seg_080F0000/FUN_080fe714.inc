@ FUN_080fe714  entry 0x080fe714  size 28
.thumb
.org 0xfe714
FUN_080fe714:
	push {lr}	@ 000fe714 00b5
.org 0xfe716
	adds r1, r0, #0	@ 000fe716 011c
.org 0xfe718
	ldrb r0, [r1, #16]	@ 000fe718 087c
.org 0xfe71a
	cmp r0, #0	@ 000fe71a 0028
.org 0xfe71c
	bne.n 0xfe726	@ 000fe71c 03d1
.org 0xfe71e
	adds r0, r1, #0	@ 000fe71e 081c
.org 0xfe720
	bl 0xfe768	@ 000fe720 00f022f8
.org 0xfe724
	b.n 0xfe72c	@ 000fe724 02e0
.org 0xfe726
	adds r0, r1, #0	@ 000fe726 081c
.org 0xfe728
	bl 0xfe7c0	@ 000fe728 00f04af8
.org 0xfe72c
	pop {r0}	@ 000fe72c 01bc
.org 0xfe72e
	bx r0	@ 000fe72e 0047
