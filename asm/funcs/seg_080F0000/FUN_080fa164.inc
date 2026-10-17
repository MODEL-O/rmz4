@ FUN_080fa164  entry 0x080fa164  size 52
.thumb
.org 0xfa164
FUN_080fa164:
	push {r4, lr}	@ 000fa164 10b5
.org 0xfa166
	adds r4, r0, #0	@ 000fa166 041c
.org 0xfa168
	bl 0x1cff0	@ 000fa168 22f742ff
.org 0xfa16c
	adds r2, r4, #0	@ 000fa16c 221c
.org 0xfa16e
	adds r2, #180	@ 000fa16e b432
.org 0xfa170
	ldr r1, [r4, #88]	@ 000fa170 a16d
.org 0xfa172
	ldr r0, [r2, #0]	@ 000fa172 1068
.org 0xfa174
	cmp r1, r0	@ 000fa174 8142
.org 0xfa176
	beq.n 0xfa192	@ 000fa176 0cd0
.org 0xfa178
	ldr r0, [pc, #28]	@ 000fa178 0748
.org 0xfa17a
	ldr r3, [pc, #32]	@ 000fa17a 084b
.org 0xfa17c
	adds r0, r0, r3	@ 000fa17c c018
.org 0xfa17e
	ldrb r0, [r0, #0]	@ 000fa17e 0078
.org 0xfa180
	cmp r0, #0	@ 000fa180 0028
.org 0xfa182
	beq.n 0xfa192	@ 000fa182 06d0
.org 0xfa184
	ldr r0, [r4, #96]	@ 000fa184 206e
.org 0xfa186
	adds r0, r1, r0	@ 000fa186 0818
.org 0xfa188
	str r0, [r4, #88]	@ 000fa188 a065
.org 0xfa18a
	ldr r1, [r2, #0]	@ 000fa18a 1168
.org 0xfa18c
	cmp r0, r1	@ 000fa18c 8842
.org 0xfa18e
	bge.n 0xfa192	@ 000fa18e 00da
.org 0xfa190
	str r1, [r4, #88]	@ 000fa190 a165
.org 0xfa192
	pop {r4}	@ 000fa192 10bc
.org 0xfa194
	pop {r0}	@ 000fa194 01bc
.org 0xfa196
	bx r0	@ 000fa196 0047
