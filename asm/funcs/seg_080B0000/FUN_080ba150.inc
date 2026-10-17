@ FUN_080ba150  entry 0x080ba150  size 76
.thumb
.org 0xba150
FUN_080ba150:
	push {r4, lr}	@ 000ba150 10b5
.org 0xba152
	adds r4, r0, #0	@ 000ba152 041c
.org 0xba154
	ldrb r0, [r4, #15]	@ 000ba154 e07b
.org 0xba156
	cmp r0, #0	@ 000ba156 0028
.org 0xba158
	bne.n 0xba176	@ 000ba158 0dd1
.org 0xba15a
	adds r0, r4, #0	@ 000ba15a 201c
.org 0xba15c
	adds r0, #116	@ 000ba15c 7430
.org 0xba15e
	ldr r1, [pc, #60]	@ 000ba15e 0f49
.org 0xba160
	bl 0x5784	@ 000ba160 4bf710fb
.org 0xba164
	ldr r1, [pc, #56]	@ 000ba164 0e49
.org 0xba166
	adds r0, r4, #0	@ 000ba166 201c
.org 0xba168
	bl 0x1cf00	@ 000ba168 62f7cafe
.org 0xba16c
	movs r0, #16	@ 000ba16c 1020
.org 0xba16e
	strb r0, [r4, #18]	@ 000ba16e a074
.org 0xba170
	ldrb r0, [r4, #15]	@ 000ba170 e07b
.org 0xba172
	adds r0, #1	@ 000ba172 0130
.org 0xba174
	strb r0, [r4, #15]	@ 000ba174 e073
.org 0xba176
	adds r0, r4, #0	@ 000ba176 201c
.org 0xba178
	bl 0x1cff0	@ 000ba178 62f73aff
.org 0xba17c
	ldrb r0, [r4, #18]	@ 000ba17c a07c
.org 0xba17e
	cmp r0, #0	@ 000ba17e 0028
.org 0xba180
	beq.n 0xba18c	@ 000ba180 04d0
.org 0xba182
	subs r0, #1	@ 000ba182 0138
.org 0xba184
	strb r0, [r4, #18]	@ 000ba184 a074
.org 0xba186
	lsls r0, r0, #24	@ 000ba186 0006
.org 0xba188
	cmp r0, #0	@ 000ba188 0028
.org 0xba18a
	bne.n 0xba196	@ 000ba18a 04d1
.org 0xba18c
	movs r1, #0	@ 000ba18c 0021
.org 0xba18e
	movs r0, #2	@ 000ba18e 0220
.org 0xba190
	strb r0, [r4, #13]	@ 000ba190 6073
.org 0xba192
	strb r1, [r4, #14]	@ 000ba192 a173
.org 0xba194
	strb r1, [r4, #15]	@ 000ba194 e173
.org 0xba196
	pop {r4}	@ 000ba196 10bc
.org 0xba198
	pop {r0}	@ 000ba198 01bc
.org 0xba19a
	bx r0	@ 000ba19a 0047
