@ FUN_080a3144  entry 0x080a3144  size 20
.thumb
.org 0xa3144
FUN_080a3144:
	push {lr}	@ 000a3144 00b5
.org 0xa3146
	ldr r2, [pc, #16]	@ 000a3146 044a
.org 0xa3148
	ldrb r1, [r0, #16]	@ 000a3148 017c
.org 0xa314a
	lsls r1, r1, #2	@ 000a314a 8900
.org 0xa314c
	adds r1, r1, r2	@ 000a314c 8918
.org 0xa314e
	ldr r1, [r1, #0]	@ 000a314e 0968
.org 0xa3150
	bl 0x128f80	@ 000a3150 85f016ff
.org 0xa3154
	pop {r0}	@ 000a3154 01bc
.org 0xa3156
	bx r0	@ 000a3156 0047
