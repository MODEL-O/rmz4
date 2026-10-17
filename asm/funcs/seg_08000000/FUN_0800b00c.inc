@ FUN_0800b00c  entry 0x0800b00c  size 36
.thumb
.org 0xb00c
FUN_0800b00c:
	push {lr}	@ 0000b00c 00b5
.org 0xb00e
	adds r1, r0, #0	@ 0000b00e 011c
.org 0xb010
	ldrb r0, [r1, #14]	@ 0000b010 887b
.org 0xb012
	cmp r0, #0	@ 0000b012 0028
.org 0xb014
	bne.n 0xb02c	@ 0000b014 0ad1
.org 0xb016
	ldr r1, [r1, #92]	@ 0000b016 c96d
.org 0xb018
	lsrs r1, r1, #4	@ 0000b018 0909
.org 0xb01a
	lsls r1, r1, #1	@ 0000b01a 4900
.org 0xb01c
	ldr r0, [pc, #16]	@ 0000b01c 0448
.org 0xb01e
	adds r1, r1, r0	@ 0000b01e 0918
.org 0xb020
	ldrh r2, [r1, #0]	@ 0000b020 0a88
.org 0xb022
	ldr r0, [pc, #16]	@ 0000b022 0448
.org 0xb024
	ands r0, r2	@ 0000b024 1040
.org 0xb026
	movs r2, #3	@ 0000b026 0322
.org 0xb028
	orrs r0, r2	@ 0000b028 1043
.org 0xb02a
	strh r0, [r1, #0]	@ 0000b02a 0880
.org 0xb02c
	pop {r0}	@ 0000b02c 01bc
.org 0xb02e
	bx r0	@ 0000b02e 0047
