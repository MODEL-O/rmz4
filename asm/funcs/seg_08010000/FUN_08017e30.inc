@ FUN_08017e30  entry 0x08017e30  size 42
.thumb
.org 0x17e30
FUN_08017e30:
	push {lr}	@ 00017e30 00b5
.org 0x17e32
	adds r3, r0, #0	@ 00017e32 031c
.org 0x17e34
	ldrb r0, [r3, #14]	@ 00017e34 987b
.org 0x17e36
	cmp r0, #0	@ 00017e36 0028
.org 0x17e38
	bne.n 0x17e56	@ 00017e38 0dd1
.org 0x17e3a
	ldr r1, [r3, #92]	@ 00017e3a d96d
.org 0x17e3c
	lsrs r1, r1, #4	@ 00017e3c 0909
.org 0x17e3e
	lsls r1, r1, #1	@ 00017e3e 4900
.org 0x17e40
	ldr r0, [pc, #24]	@ 00017e40 0648
.org 0x17e42
	adds r1, r1, r0	@ 00017e42 0918
.org 0x17e44
	ldrh r2, [r1, #0]	@ 00017e44 0a88
.org 0x17e46
	ldr r0, [pc, #24]	@ 00017e46 0648
.org 0x17e48
	ands r0, r2	@ 00017e48 1040
.org 0x17e4a
	movs r2, #3	@ 00017e4a 0322
.org 0x17e4c
	orrs r0, r2	@ 00017e4c 1043
.org 0x17e4e
	strh r0, [r1, #0]	@ 00017e4e 0880
.org 0x17e50
	ldrb r0, [r3, #14]	@ 00017e50 987b
.org 0x17e52
	adds r0, #1	@ 00017e52 0130
.org 0x17e54
	strb r0, [r3, #14]	@ 00017e54 9873
.org 0x17e56
	pop {r0}	@ 00017e56 01bc
.org 0x17e58
	bx r0	@ 00017e58 0047
