@ FUN_08002a98  entry 0x08002a98  size 48
.thumb
.org 0x2a98
FUN_08002a98:
	push {r4, lr}	@ 00002a98 10b5
.org 0x2a9a
	lsls r0, r0, #16	@ 00002a9a 0004
.org 0x2a9c
	lsrs r4, r0, #16	@ 00002a9c 040c
.org 0x2a9e
	adds r0, r4, #0	@ 00002a9e 201c
.org 0x2aa0
	bl 0x2ad0	@ 00002aa0 00f016f8
.org 0x2aa4
	cmp r0, #0	@ 00002aa4 0028
.org 0x2aa6
	beq.n 0x2ac2	@ 00002aa6 0cd0
.org 0x2aa8
	ldr r2, [pc, #28]	@ 00002aa8 074a
.org 0x2aaa
	ldr r1, [pc, #32]	@ 00002aaa 0849
.org 0x2aac
	lsls r0, r4, #3	@ 00002aac e000
.org 0x2aae
	adds r0, r0, r1	@ 00002aae 4018
.org 0x2ab0
	ldrh r1, [r0, #4]	@ 00002ab0 8188
.org 0x2ab2
	lsls r0, r1, #1	@ 00002ab2 4800
.org 0x2ab4
	adds r0, r0, r1	@ 00002ab4 4018
.org 0x2ab6
	lsls r0, r0, #2	@ 00002ab6 8000
.org 0x2ab8
	adds r0, r0, r2	@ 00002ab8 8018
.org 0x2aba
	ldr r0, [r0, #0]	@ 00002aba 0068
.org 0x2abc
	movs r1, #6	@ 00002abc 0621
.org 0x2abe
	bl 0x12794c	@ 00002abe 24f145ff
.org 0x2ac2
	pop {r4}	@ 00002ac2 10bc
.org 0x2ac4
	pop {r0}	@ 00002ac4 01bc
.org 0x2ac6
	bx r0	@ 00002ac6 0047
