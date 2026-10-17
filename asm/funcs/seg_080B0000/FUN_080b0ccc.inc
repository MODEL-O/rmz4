@ FUN_080b0ccc  entry 0x080b0ccc  size 84
.thumb
.org 0xb0ccc
FUN_080b0ccc:
	push {lr}	@ 000b0ccc 00b5
.org 0xb0cce
	adds r3, r0, #0	@ 000b0cce 031c
.org 0xb0cd0
	ldr r0, [pc, #44]	@ 000b0cd0 0b48
.org 0xb0cd2
	ldr r0, [r0, #0]	@ 000b0cd2 0068
.org 0xb0cd4
	ldr r1, [r0, #84]	@ 000b0cd4 416d
.org 0xb0cd6
	ldr r0, [r3, #84]	@ 000b0cd6 586d
.org 0xb0cd8
	cmp r1, r0	@ 000b0cd8 8142
.org 0xb0cda
	ble.n 0xb0d04	@ 000b0cda 13dd
.org 0xb0cdc
	movs r2, #1	@ 000b0cdc 0122
.org 0xb0cde
	ldrb r1, [r3, #10]	@ 000b0cde 997a
.org 0xb0ce0
	movs r0, #16	@ 000b0ce0 1020
.org 0xb0ce2
	orrs r0, r1	@ 000b0ce2 0843
.org 0xb0ce4
	strb r0, [r3, #10]	@ 000b0ce4 9872
.org 0xb0ce6
	adds r0, r3, #0	@ 000b0ce6 181c
.org 0xb0ce8
	adds r0, #76	@ 000b0ce8 4c30
.org 0xb0cea
	strb r2, [r0, #0]	@ 000b0cea 0270
.org 0xb0cec
	adds r2, r3, #0	@ 000b0cec 1a1c
.org 0xb0cee
	adds r2, #74	@ 000b0cee 4a32
.org 0xb0cf0
	movs r3, #16	@ 000b0cf0 1023
.org 0xb0cf2
	ldrb r1, [r2, #0]	@ 000b0cf2 1178
.org 0xb0cf4
	movs r0, #17	@ 000b0cf4 1120
.org 0xb0cf6
	negs r0, r0	@ 000b0cf6 4042
.org 0xb0cf8
	ands r0, r1	@ 000b0cf8 0840
.org 0xb0cfa
	orrs r0, r3	@ 000b0cfa 1843
.org 0xb0cfc
	b.n 0xb0d20	@ 000b0cfc 10e0
.org 0xb0cfe
	.byte 0x00	@ 000b0cfe data
.org 0xb0cff
	.byte 0x00	@ 000b0cff data
.org 0xb0d00
	.byte 0xf0,0xdb,0x02,0x02	@ 000b0d00 data
.org 0xb0d04
	movs r2, #0	@ 000b0d04 0022
.org 0xb0d06
	ldrb r1, [r3, #10]	@ 000b0d06 997a
.org 0xb0d08
	movs r0, #239	@ 000b0d08 ef20
.org 0xb0d0a
	ands r0, r1	@ 000b0d0a 0840
.org 0xb0d0c
	strb r0, [r3, #10]	@ 000b0d0c 9872
.org 0xb0d0e
	adds r0, r3, #0	@ 000b0d0e 181c
.org 0xb0d10
	adds r0, #76	@ 000b0d10 4c30
.org 0xb0d12
	strb r2, [r0, #0]	@ 000b0d12 0270
.org 0xb0d14
	adds r2, r3, #0	@ 000b0d14 1a1c
.org 0xb0d16
	adds r2, #74	@ 000b0d16 4a32
.org 0xb0d18
	ldrb r1, [r2, #0]	@ 000b0d18 1178
.org 0xb0d1a
	movs r0, #17	@ 000b0d1a 1120
.org 0xb0d1c
	negs r0, r0	@ 000b0d1c 4042
.org 0xb0d1e
	ands r0, r1	@ 000b0d1e 0840
