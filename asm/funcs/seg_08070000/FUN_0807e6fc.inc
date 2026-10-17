@ FUN_0807e6fc  entry 0x0807e6fc  size 30
.thumb
.org 0x7e6fc
FUN_0807e6fc:
	push {lr}	@ 0007e6fc 00b5
.org 0x7e6fe
	ldrb r1, [r0, #14]	@ 0007e6fe 817b
.org 0x7e700
	adds r1, #1	@ 0007e700 0131
.org 0x7e702
	movs r2, #0	@ 0007e702 0022
.org 0x7e704
	strb r1, [r0, #14]	@ 0007e704 8173
.org 0x7e706
	strb r2, [r0, #15]	@ 0007e706 c273
.org 0x7e708
	ldr r2, [pc, #16]	@ 0007e708 044a
.org 0x7e70a
	ldrb r1, [r0, #13]	@ 0007e70a 417b
.org 0x7e70c
	lsls r1, r1, #2	@ 0007e70c 8900
.org 0x7e70e
	adds r1, r1, r2	@ 0007e70e 8918
.org 0x7e710
	ldr r1, [r1, #0]	@ 0007e710 0968
.org 0x7e712
	bl 0x128f80	@ 0007e712 aaf035fc
.org 0x7e716
	pop {r0}	@ 0007e716 01bc
.org 0x7e718
	bx r0	@ 0007e718 0047
