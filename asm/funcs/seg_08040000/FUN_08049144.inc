@ FUN_08049144  entry 0x08049144  size 42
.thumb
.org 0x49144
FUN_08049144:
	push {lr}	@ 00049144 00b5
.org 0x49146
	adds r2, r0, #0	@ 00049146 021c
.org 0x49148
	ldr r0, [r2, #20]	@ 00049148 5069
.org 0x4914a
	movs r1, #1	@ 0004914a 0121
.org 0x4914c
	ands r0, r1	@ 0004914c 0840
.org 0x4914e
	cmp r0, #0	@ 0004914e 0028
.org 0x49150
	beq.n 0x4916a	@ 00049150 0bd0
.org 0x49152
	ldr r0, [r2, #12]	@ 00049152 d068
.org 0x49154
	ldr r0, [r0, #44]	@ 00049154 c06a
.org 0x49156
	ldr r2, [r2, #44]	@ 00049156 d26a
.org 0x49158
	movs r3, #0	@ 00049158 0023
.org 0x4915a
	ldr r1, [r0, #84]	@ 0004915a 416d
.org 0x4915c
	ldr r0, [r2, #84]	@ 0004915c 506d
.org 0x4915e
	cmp r1, r0	@ 0004915e 8142
.org 0x49160
	ble.n 0x49164	@ 00049160 00dd
.org 0x49162
	movs r3, #1	@ 00049162 0123
.org 0x49164
	adds r0, r2, #0	@ 00049164 101c
.org 0x49166
	adds r0, #188	@ 00049166 bc30
.org 0x49168
	strb r3, [r0, #0]	@ 00049168 0370
.org 0x4916a
	pop {r0}	@ 0004916a 01bc
.org 0x4916c
	bx r0	@ 0004916c 0047
