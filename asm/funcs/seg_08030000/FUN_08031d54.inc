@ FUN_08031d54  entry 0x08031d54  size 36
.thumb
.org 0x31d54
FUN_08031d54:
	push {lr}	@ 00031d54 00b5
.org 0x31d56
	movs r1, #161	@ 00031d56 a121
.org 0x31d58
	lsls r1, r1, #1	@ 00031d58 4900
.org 0x31d5a
	adds r3, r0, r1	@ 00031d5a 4318
.org 0x31d5c
	ldrb r2, [r3, #0]	@ 00031d5c 1a78
.org 0x31d5e
	movs r1, #3	@ 00031d5e 0321
.org 0x31d60
	negs r1, r1	@ 00031d60 4942
.org 0x31d62
	ands r1, r2	@ 00031d62 1140
.org 0x31d64
	strb r1, [r3, #0]	@ 00031d64 1970
.org 0x31d66
	ldr r2, [pc, #16]	@ 00031d66 044a
.org 0x31d68
	ldrb r1, [r0, #14]	@ 00031d68 817b
.org 0x31d6a
	lsls r1, r1, #2	@ 00031d6a 8900
.org 0x31d6c
	adds r1, r1, r2	@ 00031d6c 8918
.org 0x31d6e
	ldr r1, [r1, #0]	@ 00031d6e 0968
.org 0x31d70
	bl 0x128f80	@ 00031d70 f7f006f9
.org 0x31d74
	pop {r0}	@ 00031d74 01bc
.org 0x31d76
	bx r0	@ 00031d76 0047
