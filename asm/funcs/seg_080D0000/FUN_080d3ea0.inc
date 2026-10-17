@ FUN_080d3ea0  entry 0x080d3ea0  size 28
.thumb
.org 0xd3ea0
FUN_080d3ea0:
	push {lr}	@ 000d3ea0 00b5
.org 0xd3ea2
	ldr r1, [r0, #40]	@ 000d3ea2 816a
.org 0xd3ea4
	movs r2, #161	@ 000d3ea4 a122
.org 0xd3ea6
	lsls r2, r2, #1	@ 000d3ea6 5200
.org 0xd3ea8
	adds r3, r1, r2	@ 000d3ea8 8b18
.org 0xd3eaa
	ldrb r2, [r3, #0]	@ 000d3eaa 1a78
.org 0xd3eac
	movs r1, #5	@ 000d3eac 0521
.org 0xd3eae
	negs r1, r1	@ 000d3eae 4942
.org 0xd3eb0
	ands r1, r2	@ 000d3eb0 1140
.org 0xd3eb2
	strb r1, [r3, #0]	@ 000d3eb2 1970
.org 0xd3eb4
	bl 0xd0c30	@ 000d3eb4 fcf7bcfe
.org 0xd3eb8
	pop {r0}	@ 000d3eb8 01bc
.org 0xd3eba
	bx r0	@ 000d3eba 0047
