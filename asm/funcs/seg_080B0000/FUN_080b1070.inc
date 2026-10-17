@ FUN_080b1070  entry 0x080b1070  size 28
.thumb
.org 0xb1070
FUN_080b1070:
	push {lr}	@ 000b1070 00b5
.org 0xb1072
	adds r1, r0, #0	@ 000b1072 011c
.org 0xb1074
	ldrb r0, [r1, #17]	@ 000b1074 487c
.org 0xb1076
	cmp r0, #0	@ 000b1076 0028
.org 0xb1078
	bne.n 0xb1082	@ 000b1078 03d1
.org 0xb107a
	adds r0, r1, #0	@ 000b107a 081c
.org 0xb107c
	bl 0xb11ec	@ 000b107c 00f0b6f8
.org 0xb1080
	b.n 0xb1088	@ 000b1080 02e0
.org 0xb1082
	adds r0, r1, #0	@ 000b1082 081c
.org 0xb1084
	bl 0xb1218	@ 000b1084 00f0c8f8
.org 0xb1088
	pop {r0}	@ 000b1088 01bc
.org 0xb108a
	bx r0	@ 000b108a 0047
