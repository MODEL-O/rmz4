@ FUN_08036afc  entry 0x08036afc  size 82
.thumb
.org 0x36afc
FUN_08036afc:
	push {r4, r5, r6, lr}	@ 00036afc 70b5
.org 0x36afe
	adds r5, r0, #0	@ 00036afe 051c
.org 0x36b00
	ldr r4, [pc, #76]	@ 00036b00 134c
.org 0x36b02
	ldr r0, [pc, #80]	@ 00036b02 1448
.org 0x36b04
	adds r6, r5, r0	@ 00036b04 2e18
.org 0x36b06
	ldrb r0, [r6, #0]	@ 00036b06 3078
.org 0x36b08
	lsls r0, r0, #1	@ 00036b08 4000
.org 0x36b0a
	adds r0, r0, r4	@ 00036b0a 0019
.org 0x36b0c
	ldrh r1, [r0, #0]	@ 00036b0c 0188
.org 0x36b0e
	adds r0, r5, #0	@ 00036b0e 281c
.org 0x36b10
	bl 0x3a3b0	@ 00036b10 03f04efc
.org 0x36b14
	ldrb r0, [r6, #0]	@ 00036b14 3078
.org 0x36b16
	lsls r0, r0, #1	@ 00036b16 4000
.org 0x36b18
	adds r0, r0, r4	@ 00036b18 0019
.org 0x36b1a
	ldrh r1, [r0, #0]	@ 00036b1a 0188
.org 0x36b1c
	adds r0, r5, #0	@ 00036b1c 281c
.org 0x36b1e
	bl 0x3a3f0	@ 00036b1e 03f067fc
.org 0x36b22
	movs r0, #169	@ 00036b22 a920
.org 0x36b24
	lsls r0, r0, #1	@ 00036b24 4000
.org 0x36b26
	adds r1, r5, r0	@ 00036b26 2918
.org 0x36b28
	ldrb r0, [r1, #0]	@ 00036b28 0878
.org 0x36b2a
	subs r0, #1	@ 00036b2a 0138
.org 0x36b2c
	strb r0, [r1, #0]	@ 00036b2c 0870
.org 0x36b2e
	lsls r0, r0, #24	@ 00036b2e 0006
.org 0x36b30
	lsrs r0, r0, #24	@ 00036b30 000e
.org 0x36b32
	cmp r0, #255	@ 00036b32 ff28
.org 0x36b34
	bne.n 0x36b48	@ 00036b34 08d1
.org 0x36b36
	ldr r0, [pc, #32]	@ 00036b36 0848
.org 0x36b38
	adds r1, r5, r0	@ 00036b38 2918
.org 0x36b3a
	movs r0, #2	@ 00036b3a 0220
.org 0x36b3c
	strb r0, [r1, #0]	@ 00036b3c 0870
.org 0x36b3e
	movs r0, #129	@ 00036b3e 8120
.org 0x36b40
	lsls r0, r0, #1	@ 00036b40 4000
.org 0x36b42
	adds r1, r5, r0	@ 00036b42 2918
.org 0x36b44
	movs r0, #0	@ 00036b44 0020
.org 0x36b46
	strb r0, [r1, #0]	@ 00036b46 0870
.org 0x36b48
	pop {r4, r5, r6}	@ 00036b48 70bc
.org 0x36b4a
	pop {r0}	@ 00036b4a 01bc
.org 0x36b4c
	bx r0	@ 00036b4c 0047
