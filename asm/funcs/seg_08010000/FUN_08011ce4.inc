@ FUN_08011ce4  entry 0x08011ce4  size 102
.thumb
.org 0x11ce4
FUN_08011ce4:
	push {r4, r5, r6, lr}	@ 00011ce4 70b5
.org 0x11ce6
	adds r6, r0, #0	@ 00011ce6 061c
.org 0x11ce8
	ldr r0, [pc, #76]	@ 00011ce8 1348
.org 0x11cea
	ldr r1, [pc, #80]	@ 00011cea 1449
.org 0x11cec
	adds r0, r0, r1	@ 00011cec 4018
.org 0x11cee
	ldrb r1, [r0, #0]	@ 00011cee 0178
.org 0x11cf0
	movs r0, #15	@ 00011cf0 0f20
.org 0x11cf2
	ands r0, r1	@ 00011cf2 0840
.org 0x11cf4
	cmp r0, #3	@ 00011cf4 0328
.org 0x11cf6
	bne.n 0x11d52	@ 00011cf6 2cd1
.org 0x11cf8
	ldr r3, [r6, #92]	@ 00011cf8 f36d
.org 0x11cfa
	lsls r3, r3, #16	@ 00011cfa 1b04
.org 0x11cfc
	lsrs r3, r3, #20	@ 00011cfc 1b0d
.org 0x11cfe
	lsls r3, r3, #2	@ 00011cfe 9b00
.org 0x11d00
	ldr r4, [pc, #60]	@ 00011d00 0f4c
.org 0x11d02
	adds r5, r3, r4	@ 00011d02 1d19
.org 0x11d04
	adds r0, r6, #0	@ 00011d04 301c
.org 0x11d06
	adds r0, #104	@ 00011d06 6830
.org 0x11d08
	ldrh r1, [r0, #0]	@ 00011d08 0188
.org 0x11d0a
	lsrs r1, r1, #4	@ 00011d0a 0909
.org 0x11d0c
	ldr r0, [r6, #108]	@ 00011d0c f06e
.org 0x11d0e
	ldr r2, [r6, #52]	@ 00011d0e 726b
.org 0x11d10
	subs r0, r0, r2	@ 00011d10 801a
.org 0x11d12
	subs r1, r1, r0	@ 00011d12 091a
.org 0x11d14
	strh r1, [r5, #0]	@ 00011d14 2980
.org 0x11d16
	adds r4, #2	@ 00011d16 0234
.org 0x11d18
	adds r3, r3, r4	@ 00011d18 1b19
.org 0x11d1a
	ldr r1, [r6, #56]	@ 00011d1a b16b
.org 0x11d1c
	ldr r0, [r6, #72]	@ 00011d1c b06c
.org 0x11d1e
	muls r1, r0	@ 00011d1e 4143
.org 0x11d20
	asrs r1, r1, #8	@ 00011d20 0912
.org 0x11d22
	ldr r0, [r6, #80]	@ 00011d22 306d
.org 0x11d24
	adds r0, r0, r1	@ 00011d24 4018
.org 0x11d26
	strh r0, [r3, #0]	@ 00011d26 1880
.org 0x11d28
	ldrh r1, [r3, #0]	@ 00011d28 1988
.org 0x11d2a
	ldr r0, [r6, #112]	@ 00011d2a 306f
.org 0x11d2c
	subs r2, r0, r1	@ 00011d2c 421a
.org 0x11d2e
	cmp r2, #255	@ 00011d2e ff2a
.org 0x11d30
	ble.n 0x11d44	@ 00011d30 08dd
.org 0x11d32
	movs r2, #255	@ 00011d32 ff22
.org 0x11d34
	b.n 0x11d4a	@ 00011d34 09e0
.org 0x11d36
	.byte 0x00	@ 00011d36 data
.org 0x11d37
	.byte 0x00	@ 00011d37 data
.org 0x11d38
	.byte 0xb0,0x0a,0x00,0x02	@ 00011d38 data
.org 0x11d3c
	.byte 0x10,0xc0,0x02,0x00	@ 00011d3c data
.org 0x11d40
	.byte 0x0c,0x0a,0x00,0x02	@ 00011d40 data
.org 0x11d44
	cmp r2, #0	@ 00011d44 002a
.org 0x11d46
	bge.n 0x11d4a	@ 00011d46 00da
.org 0x11d48
	movs r2, #0	@ 00011d48 0022
