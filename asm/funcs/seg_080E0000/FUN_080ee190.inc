@ FUN_080ee190  entry 0x080ee190  size 70
.thumb
.org 0xee190
FUN_080ee190:
	push {r4, lr}	@ 000ee190 10b5
.org 0xee192
	adds r4, r0, #0	@ 000ee192 041c
.org 0xee194
	ldrb r1, [r4, #10]	@ 000ee194 a17a
.org 0xee196
	movs r0, #1	@ 000ee196 0120
.org 0xee198
	orrs r0, r1	@ 000ee198 0843
.org 0xee19a
	movs r1, #2	@ 000ee19a 0221
.org 0xee19c
	orrs r0, r1	@ 000ee19c 0843
.org 0xee19e
	strb r0, [r4, #10]	@ 000ee19e a072
.org 0xee1a0
	adds r0, r4, #0	@ 000ee1a0 201c
.org 0xee1a2
	bl 0x1cc9c	@ 000ee1a2 2ef77bfd
.org 0xee1a6
	ldrb r1, [r4, #11]	@ 000ee1a6 e17a
.org 0xee1a8
	movs r0, #8	@ 000ee1a8 0820
.org 0xee1aa
	orrs r0, r1	@ 000ee1aa 0843
.org 0xee1ac
	strb r0, [r4, #11]	@ 000ee1ac e072
.org 0xee1ae
	ldr r0, [pc, #40]	@ 000ee1ae 0a48
.org 0xee1b0
	str r0, [r4, #48]	@ 000ee1b0 2063
.org 0xee1b2
	movs r2, #1	@ 000ee1b2 0122
.org 0xee1b4
	strh r2, [r4, #38]	@ 000ee1b4 e284
.org 0xee1b6
	ldr r1, [pc, #36]	@ 000ee1b6 0949
.org 0xee1b8
	ldrb r0, [r4, #9]	@ 000ee1b8 607a
.org 0xee1ba
	lsls r0, r0, #2	@ 000ee1ba 8000
.org 0xee1bc
	adds r0, r0, r1	@ 000ee1bc 4018
.org 0xee1be
	str r2, [r4, #12]	@ 000ee1be e260
.org 0xee1c0
	ldr r0, [r0, #0]	@ 000ee1c0 0068
.org 0xee1c2
	ldr r0, [r0, #4]	@ 000ee1c2 4068
.org 0xee1c4
	str r0, [r4, #20]	@ 000ee1c4 6061
.org 0xee1c6
	ldrb r0, [r4, #17]	@ 000ee1c6 607c
.org 0xee1c8
	strb r0, [r4, #13]	@ 000ee1c8 6073
.org 0xee1ca
	adds r0, r4, #0	@ 000ee1ca 201c
.org 0xee1cc
	bl 0xed7c8	@ 000ee1cc fff7fcfa
.org 0xee1d0
	pop {r4}	@ 000ee1d0 10bc
.org 0xee1d2
	pop {r0}	@ 000ee1d2 01bc
.org 0xee1d4
	bx r0	@ 000ee1d4 0047
