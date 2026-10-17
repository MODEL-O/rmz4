@ FUN_080e429c  entry 0x080e429c  size 20
.thumb
.org 0xe429c
FUN_080e429c:
	push {lr}	@ 000e429c 00b5
.org 0xe429e
	ldr r2, [pc, #16]	@ 000e429e 044a
.org 0xe42a0
	ldrb r1, [r0, #16]	@ 000e42a0 017c
.org 0xe42a2
	lsls r1, r1, #2	@ 000e42a2 8900
.org 0xe42a4
	adds r1, r1, r2	@ 000e42a4 8918
.org 0xe42a6
	ldr r1, [r1, #0]	@ 000e42a6 0968
.org 0xe42a8
	bl 0x128f80	@ 000e42a8 44f06afe
.org 0xe42ac
	pop {r0}	@ 000e42ac 01bc
.org 0xe42ae
	bx r0	@ 000e42ae 0047
