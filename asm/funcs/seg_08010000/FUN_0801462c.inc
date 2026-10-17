@ FUN_0801462c  entry 0x0801462c  size 28
.thumb
.org 0x1462c
FUN_0801462c:
	push {r4, lr}	@ 0001462c 10b5
.org 0x1462e
	adds r4, r0, #0	@ 0001462e 041c
.org 0x14630
	ldrb r0, [r4, #14]	@ 00014630 a07b
.org 0x14632
	cmp r0, #0	@ 00014632 0028
.org 0x14634
	bne.n 0x14642	@ 00014634 05d1
.org 0x14636
	movs r0, #116	@ 00014636 7420
.org 0x14638
	bl 0x2b10	@ 00014638 eef76afa
.org 0x1463c
	ldrb r0, [r4, #14]	@ 0001463c a07b
.org 0x1463e
	adds r0, #1	@ 0001463e 0130
.org 0x14640
	strb r0, [r4, #14]	@ 00014640 a073
.org 0x14642
	pop {r4}	@ 00014642 10bc
.org 0x14644
	pop {r0}	@ 00014644 01bc
.org 0x14646
	bx r0	@ 00014646 0047
