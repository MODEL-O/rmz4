@ FUN_080b4ce0  entry 0x080b4ce0  size 96
.thumb
.org 0xb4ce0
FUN_080b4ce0:
	push {r4, lr}	@ 000b4ce0 10b5
.org 0xb4ce2
	adds r4, r0, #0	@ 000b4ce2 041c
.org 0xb4ce4
	adds r0, #140	@ 000b4ce4 8c30
.org 0xb4ce6
	ldr r0, [r0, #0]	@ 000b4ce6 0068
.org 0xb4ce8
	movs r1, #128	@ 000b4ce8 8021
.org 0xb4cea
	lsls r1, r1, #2	@ 000b4cea 8900
.org 0xb4cec
	ands r0, r1	@ 000b4cec 0840
.org 0xb4cee
	cmp r0, #0	@ 000b4cee 0028
.org 0xb4cf0
	beq.n 0xb4d10	@ 000b4cf0 0ed0
.org 0xb4cf2
	ldr r1, [pc, #24]	@ 000b4cf2 0649
.org 0xb4cf4
	ldrb r0, [r4, #9]	@ 000b4cf4 607a
.org 0xb4cf6
	lsls r0, r0, #2	@ 000b4cf6 8000
.org 0xb4cf8
	adds r0, r0, r1	@ 000b4cf8 4018
.org 0xb4cfa
	movs r1, #2	@ 000b4cfa 0221
.org 0xb4cfc
	str r1, [r4, #12]	@ 000b4cfc e160
.org 0xb4cfe
	ldr r0, [r0, #0]	@ 000b4cfe 0068
.org 0xb4d00
	ldr r0, [r0, #8]	@ 000b4d00 8068
.org 0xb4d02
	str r0, [r4, #20]	@ 000b4d02 6061
.org 0xb4d04
	adds r0, r4, #0	@ 000b4d04 201c
.org 0xb4d06
	bl 0xb4d4c	@ 000b4d06 00f021f8
.org 0xb4d0a
	b.n 0xb4d44	@ 000b4d0a 1be0
.org 0xb4d0c
	.byte 0x40,0xdb,0x85,0x08	@ 000b4d0c data
.org 0xb4d10
	adds r0, r4, #0	@ 000b4d10 201c
.org 0xb4d12
	bl 0xb5554	@ 000b4d12 00f01ffc
.org 0xb4d16
	adds r0, r4, #0	@ 000b4d16 201c
.org 0xb4d18
	adds r0, #192	@ 000b4d18 c030
.org 0xb4d1a
	ldr r0, [r0, #0]	@ 000b4d1a 0068
.org 0xb4d1c
	cmp r0, #0	@ 000b4d1c 0028
.org 0xb4d1e
	bne.n 0xb4d38	@ 000b4d1e 0bd1
.org 0xb4d20
	ldr r0, [pc, #16]	@ 000b4d20 0448
.org 0xb4d22
	ldrb r1, [r4, #13]	@ 000b4d22 617b
.org 0xb4d24
	lsls r1, r1, #2	@ 000b4d24 8900
.org 0xb4d26
	adds r1, r1, r0	@ 000b4d26 0918
.org 0xb4d28
	ldr r1, [r1, #0]	@ 000b4d28 0968
.org 0xb4d2a
	adds r0, r4, #0	@ 000b4d2a 201c
.org 0xb4d2c
	bl 0x128f80	@ 000b4d2c 74f028f9
.org 0xb4d30
	b.n 0xb4d3e	@ 000b4d30 05e0
.org 0xb4d32
	.byte 0x00	@ 000b4d32 data
.org 0xb4d33
	.byte 0x00	@ 000b4d33 data
.org 0xb4d34
	.byte 0x74,0x39,0x86,0x08	@ 000b4d34 data
.org 0xb4d38
	adds r0, r4, #0	@ 000b4d38 201c
.org 0xb4d3a
	bl 0xb55a4	@ 000b4d3a 00f033fc
.org 0xb4d3e
	adds r0, r4, #0	@ 000b4d3e 201c
