@ FUN_08031138  entry 0x08031138  size 20
.thumb
.org 0x31138
FUN_08031138:
	push {lr}	@ 00031138 00b5
.org 0x3113a
	ldr r2, [pc, #16]	@ 0003113a 044a
.org 0x3113c
	ldrb r1, [r0, #15]	@ 0003113c c17b
.org 0x3113e
	lsls r1, r1, #2	@ 0003113e 8900
.org 0x31140
	adds r1, r1, r2	@ 00031140 8918
.org 0x31142
	ldr r1, [r1, #0]	@ 00031142 0968
.org 0x31144
	bl 0x128f80	@ 00031144 f7f01cff
.org 0x31148
	pop {r0}	@ 00031148 01bc
.org 0x3114a
	bx r0	@ 0003114a 0047
