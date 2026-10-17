@ FUN_080ba5a0  entry 0x080ba5a0  size 52
.thumb
.org 0xba5a0
FUN_080ba5a0:
	push {r4, lr}	@ 000ba5a0 10b5
.org 0xba5a2
	adds r4, r0, #0	@ 000ba5a2 041c
.org 0xba5a4
	ldr r2, [r4, #40]	@ 000ba5a4 a26a
.org 0xba5a6
	ldr r1, [pc, #44]	@ 000ba5a6 0b49
.org 0xba5a8
	movs r0, #0	@ 000ba5a8 0020
.org 0xba5aa
	strh r0, [r1, #0]	@ 000ba5aa 0880
.org 0xba5ac
	adds r3, r4, #0	@ 000ba5ac 231c
.org 0xba5ae
	adds r3, #69	@ 000ba5ae 4533
.org 0xba5b0
	ldrb r1, [r3, #0]	@ 000ba5b0 1978
.org 0xba5b2
	subs r0, #13	@ 000ba5b2 0d38
.org 0xba5b4
	ands r0, r1	@ 000ba5b4 0840
.org 0xba5b6
	strb r0, [r3, #0]	@ 000ba5b6 1870
.org 0xba5b8
	adds r2, #204	@ 000ba5b8 cc32
.org 0xba5ba
	ldrh r1, [r2, #0]	@ 000ba5ba 1188
.org 0xba5bc
	movs r3, #0	@ 000ba5bc 0023
.org 0xba5be
	ldrsh r0, [r2, r3]	@ 000ba5be d05e
.org 0xba5c0
	cmp r0, #0	@ 000ba5c0 0028
.org 0xba5c2
	beq.n 0xba5c8	@ 000ba5c2 01d0
.org 0xba5c4
	subs r0, r1, #1	@ 000ba5c4 481e
.org 0xba5c6
	strh r0, [r2, #0]	@ 000ba5c6 1080
.org 0xba5c8
	adds r0, r4, #0	@ 000ba5c8 201c
.org 0xba5ca
	bl 0x7f8ec	@ 000ba5ca c5f78ff9
.org 0xba5ce
	pop {r4}	@ 000ba5ce 10bc
.org 0xba5d0
	pop {r0}	@ 000ba5d0 01bc
.org 0xba5d2
	bx r0	@ 000ba5d2 0047
