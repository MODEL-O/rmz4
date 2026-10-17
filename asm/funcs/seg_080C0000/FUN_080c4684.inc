@ FUN_080c4684  entry 0x080c4684  size 20
.thumb
.org 0xc4684
FUN_080c4684:
	push {lr}	@ 000c4684 00b5
.org 0xc4686
	ldr r2, [pc, #16]	@ 000c4686 044a
.org 0xc4688
	ldrb r1, [r0, #16]	@ 000c4688 017c
.org 0xc468a
	lsls r1, r1, #2	@ 000c468a 8900
.org 0xc468c
	adds r1, r1, r2	@ 000c468c 8918
.org 0xc468e
	ldr r1, [r1, #0]	@ 000c468e 0968
.org 0xc4690
	bl 0x128f80	@ 000c4690 64f076fc
.org 0xc4694
	pop {r0}	@ 000c4694 01bc
.org 0xc4696
	bx r0	@ 000c4696 0047
