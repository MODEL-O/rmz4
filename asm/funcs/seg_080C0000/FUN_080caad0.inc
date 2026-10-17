@ FUN_080caad0  entry 0x080caad0  size 20
.thumb
.org 0xcaad0
FUN_080caad0:
	push {r4, lr}	@ 000caad0 10b5
.org 0xcaad2
	adds r4, r0, #0	@ 000caad2 041c
.org 0xcaad4
	bl 0xcaafc	@ 000caad4 00f012f8
.org 0xcaad8
	adds r0, r4, #0	@ 000caad8 201c
.org 0xcaada
	bl 0x1cff0	@ 000caada 52f789fa
.org 0xcaade
	pop {r4}	@ 000caade 10bc
.org 0xcaae0
	pop {r0}	@ 000caae0 01bc
.org 0xcaae2
	bx r0	@ 000caae2 0047
