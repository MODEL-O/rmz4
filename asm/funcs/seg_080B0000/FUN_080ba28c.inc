@ FUN_080ba28c  entry 0x080ba28c  size 62
.thumb
.org 0xba28c
FUN_080ba28c:
	push {r4, r5, r6, r7, lr}	@ 000ba28c f0b5
.org 0xba28e
	sub sp, #28	@ 000ba28e 87b0
.org 0xba290
	adds r5, r0, #0	@ 000ba290 051c
.org 0xba292
	mov r1, sp	@ 000ba292 6946
.org 0xba294
	ldr r0, [pc, #44]	@ 000ba294 0b48
.org 0xba296
	ldmia r0!, {r2, r3, r4}	@ 000ba296 1cc8
.org 0xba298
	stmia r1!, {r2, r3, r4}	@ 000ba298 1cc1
.org 0xba29a
	add r4, sp, #12	@ 000ba29a 03ac
.org 0xba29c
	ldr r1, [pc, #40]	@ 000ba29c 0a49
.org 0xba29e
	adds r0, r4, #0	@ 000ba29e 201c
.org 0xba2a0
	movs r2, #7	@ 000ba2a0 0722
.org 0xba2a2
	bl 0x129258	@ 000ba2a2 6ef0d9ff
.org 0xba2a6
	ldr r7, [r5, #40]	@ 000ba2a6 af6a
.org 0xba2a8
	ldrb r0, [r5, #10]	@ 000ba2a8 a87a
.org 0xba2aa
	lsrs r6, r0, #4	@ 000ba2aa 0609
.org 0xba2ac
	movs r0, #1	@ 000ba2ac 0120
.org 0xba2ae
	ands r6, r0	@ 000ba2ae 0640
.org 0xba2b0
	ldrb r0, [r5, #15]	@ 000ba2b0 e87b
.org 0xba2b2
	cmp r0, #4	@ 000ba2b2 0428
.org 0xba2b4
	bls.n 0xba2b8	@ 000ba2b4 00d9
.org 0xba2b6
	b.n 0xba3e4	@ 000ba2b6 95e0
.org 0xba2b8
	lsls r0, r0, #2	@ 000ba2b8 8000
.org 0xba2ba
	ldr r1, [pc, #16]	@ 000ba2ba 0449
.org 0xba2bc
	adds r0, r0, r1	@ 000ba2bc 4018
.org 0xba2be
	ldr r0, [r0, #0]	@ 000ba2be 0068
.org 0xba2c0
	mov pc, r0	@ 000ba2c0 8746
.org 0xba2c2
	.byte 0x00	@ 000ba2c2 data
.org 0xba2c3
	.byte 0x00	@ 000ba2c3 data
.org 0xba2c4
	.byte 0xfc,0x9f,0x12,0x08	@ 000ba2c4 data
.org 0xba2c8
	.byte 0x08,0xa0,0x12,0x08	@ 000ba2c8 data
