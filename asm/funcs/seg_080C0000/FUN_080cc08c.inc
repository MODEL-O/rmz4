@ FUN_080cc08c  entry 0x080cc08c  size 20
.thumb
.org 0xcc08c
FUN_080cc08c:
	push {lr}	@ 000cc08c 00b5
.org 0xcc08e
	ldr r2, [pc, #16]	@ 000cc08e 044a
.org 0xcc090
	ldrb r1, [r0, #16]	@ 000cc090 017c
.org 0xcc092
	lsls r1, r1, #2	@ 000cc092 8900
.org 0xcc094
	adds r1, r1, r2	@ 000cc094 8918
.org 0xcc096
	ldr r1, [r1, #0]	@ 000cc096 0968
.org 0xcc098
	bl 0x128f80	@ 000cc098 5cf072ff
.org 0xcc09c
	pop {r0}	@ 000cc09c 01bc
.org 0xcc09e
	bx r0	@ 000cc09e 0047
