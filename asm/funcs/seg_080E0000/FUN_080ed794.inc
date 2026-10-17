@ FUN_080ed794  entry 0x080ed794  size 26
.thumb
.org 0xed794
FUN_080ed794:
	push {lr}	@ 000ed794 00b5
.org 0xed796
	lsls r1, r1, #16	@ 000ed796 0904
.org 0xed798
	lsrs r1, r1, #16	@ 000ed798 090c
.org 0xed79a
	ldrb r2, [r0, #11]	@ 000ed79a c27a
.org 0xed79c
	lsrs r2, r2, #2	@ 000ed79c 9208
.org 0xed79e
	movs r3, #1	@ 000ed79e 0123
.org 0xed7a0
	ands r2, r3	@ 000ed7a0 1a40
.org 0xed7a2
	bl 0xed7f8	@ 000ed7a2 00f029f8
.org 0xed7a6
	lsls r0, r0, #16	@ 000ed7a6 0004
.org 0xed7a8
	lsrs r0, r0, #16	@ 000ed7a8 000c
.org 0xed7aa
	pop {r1}	@ 000ed7aa 02bc
.org 0xed7ac
	bx r1	@ 000ed7ac 0847
