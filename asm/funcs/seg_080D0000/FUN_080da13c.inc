@ FUN_080da13c  entry 0x080da13c  size 56
.thumb
.org 0xda13c
FUN_080da13c:
	push {r4, lr}	@ 000da13c 10b5
.org 0xda13e
	adds r4, r0, #0	@ 000da13e 041c
.org 0xda140
	adds r0, #124	@ 000da140 7c30
.org 0xda142
	ldrb r2, [r0, #0]	@ 000da142 0278
.org 0xda144
	movs r3, #0	@ 000da144 0023
.org 0xda146
	movs r0, #16	@ 000da146 1020
.org 0xda148
	strb r0, [r4, #18]	@ 000da148 a074
.org 0xda14a
	strb r3, [r4, #19]	@ 000da14a e374
.org 0xda14c
	movs r1, #128	@ 000da14c 8021
.org 0xda14e
	lsls r1, r1, #1	@ 000da14e 4900
.org 0xda150
	lsls r2, r2, #9	@ 000da150 5202
.org 0xda152
	subs r1, r1, r2	@ 000da152 891a
.org 0xda154
	str r1, [r4, #92]	@ 000da154 e165
.org 0xda156
	str r3, [r4, #96]	@ 000da156 2366
.org 0xda158
	movs r0, #180	@ 000da158 b420
.org 0xda15a
	muls r0, r1	@ 000da15a 4843
.org 0xda15c
	cmp r0, #0	@ 000da15c 0028
.org 0xda15e
	bge.n 0xda162	@ 000da15e 00da
.org 0xda160
	adds r0, #255	@ 000da160 ff30
.org 0xda162
	asrs r0, r0, #8	@ 000da162 0012
.org 0xda164
	str r0, [r4, #92]	@ 000da164 e065
.org 0xda166
	ldr r1, [pc, #12]	@ 000da166 0349
.org 0xda168
	adds r0, r4, #0	@ 000da168 201c
.org 0xda16a
	bl 0x1cf00	@ 000da16a 42f7c9fe
.org 0xda16e
	pop {r4}	@ 000da16e 10bc
.org 0xda170
	pop {r0}	@ 000da170 01bc
.org 0xda172
	bx r0	@ 000da172 0047
