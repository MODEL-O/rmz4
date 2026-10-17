@ FUN_080e7cd8  entry 0x080e7cd8  size 34
.thumb
.org 0xe7cd8
FUN_080e7cd8:
	push {lr}	@ 000e7cd8 00b5
.org 0xe7cda
	adds r2, r0, #0	@ 000e7cda 021c
.org 0xe7cdc
	adds r0, #115	@ 000e7cdc 7330
.org 0xe7cde
	ldrb r0, [r0, #0]	@ 000e7cde 0078
.org 0xe7ce0
	cmp r0, #3	@ 000e7ce0 0328
.org 0xe7ce2
	bne.n 0xe7cf6	@ 000e7ce2 08d1
.org 0xe7ce4
	ldr r1, [pc, #20]	@ 000e7ce4 0549
.org 0xe7ce6
	ldrb r0, [r2, #9]	@ 000e7ce6 507a
.org 0xe7ce8
	lsls r0, r0, #2	@ 000e7ce8 8000
.org 0xe7cea
	adds r0, r0, r1	@ 000e7cea 4018
.org 0xe7cec
	movs r1, #2	@ 000e7cec 0221
.org 0xe7cee
	str r1, [r2, #12]	@ 000e7cee d160
.org 0xe7cf0
	ldr r0, [r0, #0]	@ 000e7cf0 0068
.org 0xe7cf2
	ldr r0, [r0, #8]	@ 000e7cf2 8068
.org 0xe7cf4
	str r0, [r2, #20]	@ 000e7cf4 5061
.org 0xe7cf6
	pop {r0}	@ 000e7cf6 01bc
.org 0xe7cf8
	bx r0	@ 000e7cf8 0047
