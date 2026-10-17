@ FUN_0810415c  entry 0x0810415c  size 20
.thumb
.org 0x10415c
FUN_0810415c:
	push {lr}	@ 0010415c 00b5
.org 0x10415e
	ldr r2, [pc, #16]	@ 0010415e 044a
.org 0x104160
	ldrb r1, [r0, #16]	@ 00104160 017c
.org 0x104162
	lsls r1, r1, #2	@ 00104162 8900
.org 0x104164
	adds r1, r1, r2	@ 00104164 8918
.org 0x104166
	ldr r1, [r1, #0]	@ 00104166 0968
.org 0x104168
	bl 0x128f80	@ 00104168 24f00aff
.org 0x10416c
	pop {r0}	@ 0010416c 01bc
.org 0x10416e
	bx r0	@ 0010416e 0047
