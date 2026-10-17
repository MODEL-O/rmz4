@ FUN_080d4be8  entry 0x080d4be8  size 54
.thumb
.org 0xd4be8
FUN_080d4be8:
	push {lr}	@ 000d4be8 00b5
.org 0xd4bea
	ldrb r2, [r0, #10]	@ 000d4bea 827a
.org 0xd4bec
	movs r1, #1	@ 000d4bec 0121
.org 0xd4bee
	orrs r1, r2	@ 000d4bee 1143
.org 0xd4bf0
	strb r1, [r0, #10]	@ 000d4bf0 8172
.org 0xd4bf2
	adds r3, r0, #0	@ 000d4bf2 031c
.org 0xd4bf4
	adds r3, #73	@ 000d4bf4 4933
.org 0xd4bf6
	ldrb r2, [r3, #0]	@ 000d4bf6 1a78
.org 0xd4bf8
	movs r1, #13	@ 000d4bf8 0d21
.org 0xd4bfa
	negs r1, r1	@ 000d4bfa 4942
.org 0xd4bfc
	ands r1, r2	@ 000d4bfc 1140
.org 0xd4bfe
	strb r1, [r3, #0]	@ 000d4bfe 1970
.org 0xd4c00
	movs r1, #60	@ 000d4c00 3c21
.org 0xd4c02
	strb r1, [r0, #18]	@ 000d4c02 8174
.org 0xd4c04
	ldr r2, [pc, #24]	@ 000d4c04 064a
.org 0xd4c06
	ldrb r1, [r0, #9]	@ 000d4c06 417a
.org 0xd4c08
	lsls r1, r1, #2	@ 000d4c08 8900
.org 0xd4c0a
	adds r1, r1, r2	@ 000d4c0a 8918
.org 0xd4c0c
	movs r2, #1	@ 000d4c0c 0122
.org 0xd4c0e
	str r2, [r0, #12]	@ 000d4c0e c260
.org 0xd4c10
	ldr r1, [r1, #0]	@ 000d4c10 0968
.org 0xd4c12
	ldr r1, [r1, #4]	@ 000d4c12 4968
.org 0xd4c14
	str r1, [r0, #20]	@ 000d4c14 4161
.org 0xd4c16
	bl 0xd4c24	@ 000d4c16 00f005f8
.org 0xd4c1a
	pop {r0}	@ 000d4c1a 01bc
.org 0xd4c1c
	bx r0	@ 000d4c1c 0047
