@ FUN_080debb4  entry 0x080debb4  size 20
.thumb
.org 0xdebb4
FUN_080debb4:
	push {lr}	@ 000debb4 00b5
.org 0xdebb6
	ldr r2, [r0, #40]	@ 000debb6 826a
.org 0xdebb8
	adds r2, #182	@ 000debb8 b632
.org 0xdebba
	ldrb r1, [r2, #0]	@ 000debba 1178
.org 0xdebbc
	subs r1, #1	@ 000debbc 0139
.org 0xdebbe
	strb r1, [r2, #0]	@ 000debbe 1170
.org 0xdebc0
	bl 0xd0c30	@ 000debc0 f2f736f8
.org 0xdebc4
	pop {r0}	@ 000debc4 01bc
.org 0xdebc6
	bx r0	@ 000debc6 0047
