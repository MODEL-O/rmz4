@ FUN_080d216c  entry 0x080d216c  size 58
.thumb
.org 0xd216c
FUN_080d216c:
	push {r4, lr}	@ 000d216c 10b5
.org 0xd216e
	adds r4, r0, #0	@ 000d216e 041c
.org 0xd2170
	bl 0x1cc9c	@ 000d2170 4af794fd
.org 0xd2174
	ldrb r1, [r4, #10]	@ 000d2174 a17a
.org 0xd2176
	movs r0, #1	@ 000d2176 0120
.org 0xd2178
	orrs r0, r1	@ 000d2178 0843
.org 0xd217a
	movs r1, #2	@ 000d217a 0221
.org 0xd217c
	orrs r0, r1	@ 000d217c 0843
.org 0xd217e
	strb r0, [r4, #10]	@ 000d217e a072
.org 0xd2180
	adds r0, r4, #0	@ 000d2180 201c
.org 0xd2182
	movs r1, #9	@ 000d2182 0921
.org 0xd2184
	bl 0x1cf00	@ 000d2184 4af7bcfe
.org 0xd2188
	ldr r1, [pc, #28]	@ 000d2188 0749
.org 0xd218a
	ldrb r0, [r4, #9]	@ 000d218a 607a
.org 0xd218c
	lsls r0, r0, #2	@ 000d218c 8000
.org 0xd218e
	adds r0, r0, r1	@ 000d218e 4018
.org 0xd2190
	movs r1, #1	@ 000d2190 0121
.org 0xd2192
	str r1, [r4, #12]	@ 000d2192 e160
.org 0xd2194
	ldr r0, [r0, #0]	@ 000d2194 0068
.org 0xd2196
	ldr r0, [r0, #4]	@ 000d2196 4068
.org 0xd2198
	str r0, [r4, #20]	@ 000d2198 6061
.org 0xd219a
	adds r0, r4, #0	@ 000d219a 201c
.org 0xd219c
	bl 0xd1dd0	@ 000d219c fff718fe
.org 0xd21a0
	pop {r4}	@ 000d21a0 10bc
.org 0xd21a2
	pop {r0}	@ 000d21a2 01bc
.org 0xd21a4
	bx r0	@ 000d21a4 0047
