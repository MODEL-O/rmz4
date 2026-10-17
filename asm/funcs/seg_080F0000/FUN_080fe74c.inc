@ FUN_080fe74c  entry 0x080fe74c  size 28
.thumb
.org 0xfe74c
FUN_080fe74c:
	push {lr}	@ 000fe74c 00b5
.org 0xfe74e
	adds r1, r0, #0	@ 000fe74e 011c
.org 0xfe750
	ldrb r0, [r1, #16]	@ 000fe750 087c
.org 0xfe752
	cmp r0, #0	@ 000fe752 0028
.org 0xfe754
	bne.n 0xfe75e	@ 000fe754 03d1
.org 0xfe756
	adds r0, r1, #0	@ 000fe756 081c
.org 0xfe758
	bl 0xfe7ec	@ 000fe758 00f048f8
.org 0xfe75c
	b.n 0xfe764	@ 000fe75c 02e0
.org 0xfe75e
	adds r0, r1, #0	@ 000fe75e 081c
.org 0xfe760
	bl 0xfe7f0	@ 000fe760 00f046f8
.org 0xfe764
	pop {r0}	@ 000fe764 01bc
.org 0xfe766
	bx r0	@ 000fe766 0047
