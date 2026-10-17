@ FUN_080d0fa4  entry 0x080d0fa4  size 42
.thumb
.org 0xd0fa4
FUN_080d0fa4:
	push {r4, lr}	@ 000d0fa4 10b5
.org 0xd0fa6
	adds r4, r0, #0	@ 000d0fa6 041c
.org 0xd0fa8
	bl 0x1cff0	@ 000d0fa8 4cf722f8
.org 0xd0fac
	adds r0, r4, #0	@ 000d0fac 201c
.org 0xd0fae
	adds r0, #115	@ 000d0fae 7330
.org 0xd0fb0
	ldrb r0, [r0, #0]	@ 000d0fb0 0078
.org 0xd0fb2
	cmp r0, #3	@ 000d0fb2 0328
.org 0xd0fb4
	bne.n 0xd0fc8	@ 000d0fb4 08d1
.org 0xd0fb6
	ldr r1, [pc, #24]	@ 000d0fb6 0649
.org 0xd0fb8
	ldrb r0, [r4, #9]	@ 000d0fb8 607a
.org 0xd0fba
	lsls r0, r0, #2	@ 000d0fba 8000
.org 0xd0fbc
	adds r0, r0, r1	@ 000d0fbc 4018
.org 0xd0fbe
	movs r1, #2	@ 000d0fbe 0221
.org 0xd0fc0
	str r1, [r4, #12]	@ 000d0fc0 e160
.org 0xd0fc2
	ldr r0, [r0, #0]	@ 000d0fc2 0068
.org 0xd0fc4
	ldr r0, [r0, #8]	@ 000d0fc4 8068
.org 0xd0fc6
	str r0, [r4, #20]	@ 000d0fc6 6061
.org 0xd0fc8
	pop {r4}	@ 000d0fc8 10bc
.org 0xd0fca
	pop {r0}	@ 000d0fca 01bc
.org 0xd0fcc
	bx r0	@ 000d0fcc 0047
