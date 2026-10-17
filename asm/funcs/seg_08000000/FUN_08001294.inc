@ FUN_08001294  entry 0x08001294  size 32
.thumb
.org 0x1294
FUN_08001294:
	push {r4, r5, lr}	@ 00001294 30b5
.org 0x1296
	ldr r5, [pc, #28]	@ 00001296 074d
.org 0x1298
	movs r4, #0	@ 00001298 0024
.org 0x129a
	ldrb r0, [r5, #0]	@ 0000129a 2878
.org 0x129c
	cmp r0, #1	@ 0000129c 0128
.org 0x129e
	beq.n 0x12a6	@ 0000129e 02d0
.org 0x12a0
	adds r0, r4, #0	@ 000012a0 201c
.org 0x12a2
	bl 0x1390	@ 000012a2 00f075f8
.org 0x12a6
	adds r4, #1	@ 000012a6 0134
.org 0x12a8
	adds r5, #24	@ 000012a8 1835
.org 0x12aa
	cmp r4, #2	@ 000012aa 022c
.org 0x12ac
	ble.n 0x129a	@ 000012ac f5dd
.org 0x12ae
	pop {r4, r5}	@ 000012ae 30bc
.org 0x12b0
	pop {r0}	@ 000012b0 01bc
.org 0x12b2
	bx r0	@ 000012b2 0047
