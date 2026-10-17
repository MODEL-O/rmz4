@ FUN_080a1074  entry 0x080a1074  size 30
.thumb
.org 0xa1074
FUN_080a1074:
	push {lr}	@ 000a1074 00b5
.org 0xa1076
	adds r2, r0, #0	@ 000a1076 021c
.org 0xa1078
	ldr r0, [pc, #24]	@ 000a1078 0648
.org 0xa107a
	adds r1, r0, #0	@ 000a107a 011c
.org 0xa107c
	adds r1, #38	@ 000a107c 2631
.org 0xa107e
	ldrb r0, [r1, #0]	@ 000a107e 0878
.org 0xa1080
	cmp r0, #0	@ 000a1080 0028
.org 0xa1082
	beq.n 0xa1088	@ 000a1082 01d0
.org 0xa1084
	adds r0, #255	@ 000a1084 ff30
.org 0xa1086
	strb r0, [r1, #0]	@ 000a1086 0870
.org 0xa1088
	adds r0, r2, #0	@ 000a1088 101c
.org 0xa108a
	bl 0x7f8ec	@ 000a108a def72ffc
.org 0xa108e
	pop {r0}	@ 000a108e 01bc
.org 0xa1090
	bx r0	@ 000a1090 0047
