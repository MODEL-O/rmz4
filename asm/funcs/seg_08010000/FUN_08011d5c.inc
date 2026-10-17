@ FUN_08011d5c  entry 0x08011d5c  size 54
.thumb
.org 0x11d5c
FUN_08011d5c:
	push {r4, lr}	@ 00011d5c 10b5
.org 0x11d5e
	adds r2, r0, #0	@ 00011d5e 021c
.org 0x11d60
	ldr r0, [pc, #48]	@ 00011d60 0c48
.org 0x11d62
	ldr r1, [pc, #52]	@ 00011d62 0d49
.org 0x11d64
	adds r0, r0, r1	@ 00011d64 4018
.org 0x11d66
	ldrb r1, [r0, #0]	@ 00011d66 0178
.org 0x11d68
	movs r0, #15	@ 00011d68 0f20
.org 0x11d6a
	ands r0, r1	@ 00011d6a 0840
.org 0x11d6c
	cmp r0, #3	@ 00011d6c 0328
.org 0x11d6e
	bne.n 0x11d8c	@ 00011d6e 0dd1
.org 0x11d70
	adds r0, r2, #0	@ 00011d70 101c
.org 0x11d72
	adds r0, #120	@ 00011d72 7830
.org 0x11d74
	movs r4, #0	@ 00011d74 0024
.org 0x11d76
	strh r4, [r0, #0]	@ 00011d76 0480
.org 0x11d78
	movs r0, #122	@ 00011d78 7a20
.org 0x11d7a
	bl 0x2b5c	@ 00011d7a f0f7effe
.org 0x11d7e
	ldr r0, [pc, #28]	@ 00011d7e 0748
.org 0x11d80
	strh r4, [r0, #0]	@ 00011d80 0480
.org 0x11d82
	ldr r2, [pc, #28]	@ 00011d82 074a
.org 0x11d84
	ldrh r1, [r2, #0]	@ 00011d84 1188
.org 0x11d86
	ldr r0, [pc, #28]	@ 00011d86 0748
.org 0x11d88
	ands r0, r1	@ 00011d88 0840
.org 0x11d8a
	strh r0, [r2, #0]	@ 00011d8a 1080
.org 0x11d8c
	pop {r4}	@ 00011d8c 10bc
.org 0x11d8e
	pop {r0}	@ 00011d8e 01bc
.org 0x11d90
	bx r0	@ 00011d90 0047
