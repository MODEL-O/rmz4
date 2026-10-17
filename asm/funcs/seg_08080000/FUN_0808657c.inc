@ FUN_0808657c  entry 0x0808657c  size 60
.thumb
.org 0x8657c
FUN_0808657c:
	push {r4, lr}	@ 0008657c 10b5
.org 0x8657e
	adds r4, r0, #0	@ 0008657e 041c
.org 0x86580
	ldrb r0, [r4, #15]	@ 00086580 e07b
.org 0x86582
	cmp r0, #0	@ 00086582 0028
.org 0x86584
	bne.n 0x865a4	@ 00086584 0ed1
.org 0x86586
	adds r0, r4, #0	@ 00086586 201c
.org 0x86588
	adds r0, #116	@ 00086588 7430
.org 0x8658a
	ldr r1, [pc, #44]	@ 0008658a 0b49
.org 0x8658c
	bl 0x5784	@ 0008658c 7ff7faf8
.org 0x86590
	adds r0, r4, #0	@ 00086590 201c
.org 0x86592
	movs r1, #4	@ 00086592 0421
.org 0x86594
	bl 0x86a14	@ 00086594 00f03efa
.org 0x86598
	movs r0, #128	@ 00086598 8020
.org 0x8659a
	negs r0, r0	@ 0008659a 4042
.org 0x8659c
	str r0, [r4, #96]	@ 0008659c 2066
.org 0x8659e
	ldrb r0, [r4, #15]	@ 0008659e e07b
.org 0x865a0
	adds r0, #1	@ 000865a0 0130
.org 0x865a2
	strb r0, [r4, #15]	@ 000865a2 e073
.org 0x865a4
	adds r0, r4, #0	@ 000865a4 201c
.org 0x865a6
	bl 0x86a48	@ 000865a6 00f04ffa
.org 0x865aa
	ldr r0, [r4, #88]	@ 000865aa a06d
.org 0x865ac
	ldr r1, [r4, #96]	@ 000865ac 216e
.org 0x865ae
	adds r0, r0, r1	@ 000865ae 4018
.org 0x865b0
	str r0, [r4, #88]	@ 000865b0 a065
.org 0x865b2
	pop {r4}	@ 000865b2 10bc
.org 0x865b4
	pop {r0}	@ 000865b4 01bc
.org 0x865b6
	bx r0	@ 000865b6 0047
