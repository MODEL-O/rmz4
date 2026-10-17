@ FUN_0810df70  entry 0x0810df70  size 30
.thumb
.org 0x10df70
FUN_0810df70:
	push {lr}	@ 0010df70 00b5
.org 0x10df72
	ldr r3, [pc, #28]	@ 0010df72 074b
.org 0x10df74
	ldr r0, [r3, #16]	@ 0010df74 1869
.org 0x10df76
	cmp r0, #0	@ 0010df76 0028
.org 0x10df78
	beq.n 0x10df8a	@ 0010df78 07d0
.org 0x10df7a
	ldr r2, [pc, #24]	@ 0010df7a 064a
.org 0x10df7c
	ldrb r1, [r2, #14]	@ 0010df7c 917b
.org 0x10df7e
	movs r0, #1	@ 0010df7e 0120
.org 0x10df80
	orrs r0, r1	@ 0010df80 0843
.org 0x10df82
	strb r0, [r2, #14]	@ 0010df82 9073
.org 0x10df84
	adds r0, r3, #0	@ 0010df84 181c
.org 0x10df86
	bl 0x10e370	@ 0010df86 00f0f3f9
.org 0x10df8a
	pop {r0}	@ 0010df8a 01bc
.org 0x10df8c
	bx r0	@ 0010df8c 0047
