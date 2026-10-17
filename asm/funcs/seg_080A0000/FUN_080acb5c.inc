@ FUN_080acb5c  entry 0x080acb5c  size 50
.thumb
.org 0xacb5c
FUN_080acb5c:
	push {lr}	@ 000acb5c 00b5
.org 0xacb5e
	adds r2, r0, #0	@ 000acb5e 021c
.org 0xacb60
	adds r0, #184	@ 000acb60 b830
.org 0xacb62
	ldrb r0, [r0, #0]	@ 000acb62 0078
.org 0xacb64
	cmp r0, #0	@ 000acb64 0028
.org 0xacb66
	beq.n 0xacb8a	@ 000acb66 10d0
.org 0xacb68
	adds r1, r2, #0	@ 000acb68 111c
.org 0xacb6a
	adds r1, #183	@ 000acb6a b731
.org 0xacb6c
	ldrb r0, [r1, #0]	@ 000acb6c 0878
.org 0xacb6e
	adds r0, #1	@ 000acb6e 0130
.org 0xacb70
	strb r0, [r1, #0]	@ 000acb70 0870
.org 0xacb72
	movs r1, #3	@ 000acb72 0321
.org 0xacb74
	ands r0, r1	@ 000acb74 0840
.org 0xacb76
	cmp r0, #0	@ 000acb76 0028
.org 0xacb78
	beq.n 0xacb82	@ 000acb78 03d0
.org 0xacb7a
	ldrb r0, [r2, #10]	@ 000acb7a 907a
.org 0xacb7c
	movs r1, #1	@ 000acb7c 0121
.org 0xacb7e
	orrs r0, r1	@ 000acb7e 0843
.org 0xacb80
	b.n 0xacb88	@ 000acb80 02e0
.org 0xacb82
	ldrb r1, [r2, #10]	@ 000acb82 917a
.org 0xacb84
	movs r0, #254	@ 000acb84 fe20
.org 0xacb86
	ands r0, r1	@ 000acb86 0840
.org 0xacb88
	strb r0, [r2, #10]	@ 000acb88 9072
.org 0xacb8a
	pop {r0}	@ 000acb8a 01bc
.org 0xacb8c
	bx r0	@ 000acb8c 0047
