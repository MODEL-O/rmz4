@ FUN_0800b750  entry 0x0800b750  size 18
.thumb
.org 0xb750
FUN_0800b750:
	push {lr}	@ 0000b750 00b5
.org 0xb752
	adds r1, r0, #0	@ 0000b752 011c
.org 0xb754
	ldrb r0, [r1, #14]	@ 0000b754 887b
.org 0xb756
	cmp r0, #0	@ 0000b756 0028
.org 0xb758
	bne.n 0xb75e	@ 0000b758 01d1
.org 0xb75a
	adds r0, #1	@ 0000b75a 0130
.org 0xb75c
	strb r0, [r1, #14]	@ 0000b75c 8873
.org 0xb75e
	pop {r0}	@ 0000b75e 01bc
.org 0xb760
	bx r0	@ 0000b760 0047
