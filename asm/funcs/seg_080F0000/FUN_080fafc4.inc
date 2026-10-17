@ FUN_080fafc4  entry 0x080fafc4  size 20
.thumb
.org 0xfafc4
FUN_080fafc4:
	push {lr}	@ 000fafc4 00b5
.org 0xfafc6
	ldr r2, [pc, #16]	@ 000fafc6 044a
.org 0xfafc8
	ldrb r1, [r0, #16]	@ 000fafc8 017c
.org 0xfafca
	lsls r1, r1, #2	@ 000fafca 8900
.org 0xfafcc
	adds r1, r1, r2	@ 000fafcc 8918
.org 0xfafce
	ldr r1, [r1, #0]	@ 000fafce 0968
.org 0xfafd0
	bl 0x128f80	@ 000fafd0 2df0d6ff
.org 0xfafd4
	pop {r0}	@ 000fafd4 01bc
.org 0xfafd6
	bx r0	@ 000fafd6 0047
