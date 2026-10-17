@ FUN_08002b7c  entry 0x08002b7c  size 48
.thumb
.org 0x2b7c
FUN_08002b7c:
	push {r4, lr}	@ 00002b7c 10b5
.org 0x2b7e
	lsls r4, r1, #16	@ 00002b7e 0c04
.org 0x2b80
	ldr r3, [pc, #40]	@ 00002b80 0a4b
.org 0x2b82
	ldr r1, [pc, #44]	@ 00002b82 0b49
.org 0x2b84
	lsls r0, r0, #16	@ 00002b84 0004
.org 0x2b86
	asrs r0, r0, #13	@ 00002b86 4013
.org 0x2b88
	adds r0, r0, r1	@ 00002b88 4018
.org 0x2b8a
	ldrh r2, [r0, #4]	@ 00002b8a 8288
.org 0x2b8c
	lsls r1, r2, #1	@ 00002b8c 5100
.org 0x2b8e
	adds r1, r1, r2	@ 00002b8e 8918
.org 0x2b90
	lsls r1, r1, #2	@ 00002b90 8900
.org 0x2b92
	adds r1, r1, r3	@ 00002b92 c918
.org 0x2b94
	ldr r2, [r1, #0]	@ 00002b94 0a68
.org 0x2b96
	ldr r1, [r2, #0]	@ 00002b96 1168
.org 0x2b98
	ldr r0, [r0, #0]	@ 00002b98 0068
.org 0x2b9a
	cmp r1, r0	@ 00002b9a 8142
.org 0x2b9c
	bne.n 0x2ba6	@ 00002b9c 03d1
.org 0x2b9e
	lsrs r1, r4, #20	@ 00002b9e 210d
.org 0x2ba0
	adds r0, r2, #0	@ 00002ba0 101c
.org 0x2ba2
	bl 0x12794c	@ 00002ba2 24f1d3fe
.org 0x2ba6
	pop {r4}	@ 00002ba6 10bc
.org 0x2ba8
	pop {r0}	@ 00002ba8 01bc
.org 0x2baa
	bx r0	@ 00002baa 0047
