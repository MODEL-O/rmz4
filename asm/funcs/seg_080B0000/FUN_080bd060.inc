@ FUN_080bd060  entry 0x080bd060  size 88
.thumb
.org 0xbd060
FUN_080bd060:
	push {r4, lr}	@ 000bd060 10b5
.org 0xbd062
	adds r2, r0, #0	@ 000bd062 021c
.org 0xbd064
	ldr r0, [r2, #20]	@ 000bd064 5069
.org 0xbd066
	movs r1, #1	@ 000bd066 0121
.org 0xbd068
	ands r0, r1	@ 000bd068 0840
.org 0xbd06a
	cmp r0, #0	@ 000bd06a 0028
.org 0xbd06c
	beq.n 0xbd0b2	@ 000bd06c 21d0
.org 0xbd06e
	ldr r0, [r2, #12]	@ 000bd06e d068
.org 0xbd070
	ldr r0, [r0, #44]	@ 000bd070 c06a
.org 0xbd072
	ldr r4, [r2, #44]	@ 000bd072 d46a
.org 0xbd074
	movs r3, #0	@ 000bd074 0023
.org 0xbd076
	ldr r1, [r0, #84]	@ 000bd076 416d
.org 0xbd078
	ldr r0, [r4, #84]	@ 000bd078 606d
.org 0xbd07a
	cmp r1, r0	@ 000bd07a 8142
.org 0xbd07c
	ble.n 0xbd080	@ 000bd07c 00dd
.org 0xbd07e
	movs r3, #1	@ 000bd07e 0123
.org 0xbd080
	adds r0, r4, #0	@ 000bd080 201c
.org 0xbd082
	adds r0, #188	@ 000bd082 bc30
.org 0xbd084
	strb r3, [r0, #0]	@ 000bd084 0370
.org 0xbd086
	ldr r1, [r2, #20]	@ 000bd086 5169
.org 0xbd088
	movs r0, #128	@ 000bd088 8020
.org 0xbd08a
	lsls r0, r0, #2	@ 000bd08a 8000
.org 0xbd08c
	ands r0, r1	@ 000bd08c 0840
.org 0xbd08e
	cmp r0, #0	@ 000bd08e 0028
.org 0xbd090
	beq.n 0xbd0b2	@ 000bd090 0fd0
.org 0xbd092
	movs r0, #128	@ 000bd092 8020
.org 0xbd094
	lsls r0, r0, #10	@ 000bd094 8002
.org 0xbd096
	ands r1, r0	@ 000bd096 0140
.org 0xbd098
	cmp r1, #0	@ 000bd098 0029
.org 0xbd09a
	beq.n 0xbd0b2	@ 000bd09a 0ad0
.org 0xbd09c
	ldr r0, [pc, #24]	@ 000bd09c 0648
.org 0xbd09e
	ldr r0, [r0, #0]	@ 000bd09e 0068
.org 0xbd0a0
	cmp r0, #0	@ 000bd0a0 0028
.org 0xbd0a2
	beq.n 0xbd0b2	@ 000bd0a2 06d0
.org 0xbd0a4
	movs r1, #5	@ 000bd0a4 0521
.org 0xbd0a6
	movs r2, #14	@ 000bd0a6 0e22
.org 0xbd0a8
	bl 0x3a578	@ 000bd0a8 7df766fa
.org 0xbd0ac
	adds r1, r4, #0	@ 000bd0ac 211c
.org 0xbd0ae
	adds r1, #189	@ 000bd0ae bd31
.org 0xbd0b0
	strb r0, [r1, #0]	@ 000bd0b0 0870
.org 0xbd0b2
	pop {r4}	@ 000bd0b2 10bc
.org 0xbd0b4
	pop {r0}	@ 000bd0b4 01bc
.org 0xbd0b6
	bx r0	@ 000bd0b6 0047
