@ FUN_08024d14  entry 0x08024d14  size 64
.thumb
.org 0x24d14
FUN_08024d14:
	push {r4, r5, r6, lr}	@ 00024d14 70b5
.org 0x24d16
	movs r1, #190	@ 00024d16 be21
.org 0x24d18
	lsls r1, r1, #1	@ 00024d18 4900
.org 0x24d1a
	adds r6, r0, r1	@ 00024d1a 4618
.org 0x24d1c
	ldrb r0, [r6, #0]	@ 00024d1c 3078
.org 0x24d1e
	cmp r0, #0	@ 00024d1e 0028
.org 0x24d20
	bne.n 0x24d4c	@ 00024d20 14d1
.org 0x24d22
	ldr r4, [pc, #48]	@ 00024d22 0c4c
.org 0x24d24
	ldrh r0, [r4, #8]	@ 00024d24 2089
.org 0x24d26
	movs r5, #1	@ 00024d26 0125
.org 0x24d28
	orrs r0, r5	@ 00024d28 2843
.org 0x24d2a
	strh r0, [r4, #8]	@ 00024d2a 2081
.org 0x24d2c
	ldr r2, [pc, #40]	@ 00024d2c 0a4a
.org 0x24d2e
	ldrb r1, [r2, #4]	@ 00024d2e 1179
.org 0x24d30
	movs r0, #247	@ 00024d30 f720
.org 0x24d32
	ands r0, r1	@ 00024d32 0840
.org 0x24d34
	strb r0, [r2, #4]	@ 00024d34 1071
.org 0x24d36
	movs r0, #1	@ 00024d36 0120
.org 0x24d38
	bl 0x1f63c	@ 00024d38 faf780fc
.org 0x24d3c
	adds r4, #16	@ 00024d3c 1034
.org 0x24d3e
	ldr r0, [pc, #28]	@ 00024d3e 0748
.org 0x24d40
	ldr r0, [r0, #44]	@ 00024d40 c06a
.org 0x24d42
	ldr r1, [r0, #4]	@ 00024d42 4168
.org 0x24d44
	adds r0, r4, #0	@ 00024d44 201c
.org 0x24d46
	bl 0x275f0	@ 00024d46 02f053fc
.org 0x24d4a
	strb r5, [r6, #0]	@ 00024d4a 3570
.org 0x24d4c
	movs r0, #0	@ 00024d4c 0020
.org 0x24d4e
	pop {r4, r5, r6}	@ 00024d4e 70bc
.org 0x24d50
	pop {r1}	@ 00024d50 02bc
.org 0x24d52
	bx r1	@ 00024d52 0847
