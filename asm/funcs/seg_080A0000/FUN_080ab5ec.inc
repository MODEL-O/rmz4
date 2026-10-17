@ FUN_080ab5ec  entry 0x080ab5ec  size 34
.thumb
.org 0xab5ec
FUN_080ab5ec:
	push {lr}	@ 000ab5ec 00b5
.org 0xab5ee
	adds r3, r0, #0	@ 000ab5ee 031c
.org 0xab5f0
	ldr r0, [r3, #40]	@ 000ab5f0 986a
.org 0xab5f2
	adds r1, r0, #0	@ 000ab5f2 011c
.org 0xab5f4
	adds r1, #187	@ 000ab5f4 bb31
.org 0xab5f6
	ldrb r2, [r1, #0]	@ 000ab5f6 0a78
.org 0xab5f8
	movs r0, #0	@ 000ab5f8 0020
.org 0xab5fa
	ldrsb r0, [r1, r0]	@ 000ab5fa 0856
.org 0xab5fc
	cmp r0, #0	@ 000ab5fc 0028
.org 0xab5fe
	beq.n 0xab604	@ 000ab5fe 01d0
.org 0xab600
	subs r0, r2, #1	@ 000ab600 501e
.org 0xab602
	strb r0, [r1, #0]	@ 000ab602 0870
.org 0xab604
	adds r0, r3, #0	@ 000ab604 181c
.org 0xab606
	bl 0x7f8ec	@ 000ab606 d4f771f9
.org 0xab60a
	pop {r0}	@ 000ab60a 01bc
.org 0xab60c
	bx r0	@ 000ab60c 0047
