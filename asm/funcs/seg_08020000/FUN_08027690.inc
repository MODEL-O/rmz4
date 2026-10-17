@ FUN_08027690  entry 0x08027690  size 20
.thumb
.org 0x27690
FUN_08027690:
	push {r4, lr}	@ 00027690 10b5
.org 0x27692
	adds r4, r0, #0	@ 00027692 041c
.org 0x27694
	bl 0x27a70	@ 00027694 00f0ecf9
.org 0x27698
	adds r0, r4, #0	@ 00027698 201c
.org 0x2769a
	bl 0x27ba8	@ 0002769a 00f085fa
.org 0x2769e
	pop {r4}	@ 0002769e 10bc
.org 0x276a0
	pop {r0}	@ 000276a0 01bc
.org 0x276a2
	bx r0	@ 000276a2 0047
