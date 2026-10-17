@ FUN_080a1da0  entry 0x080a1da0  size 96
.thumb
.org 0xa1da0
FUN_080a1da0:
	push {r4, lr}	@ 000a1da0 10b5
.org 0xa1da2
	adds r4, r0, #0	@ 000a1da2 041c
.org 0xa1da4
	adds r0, #140	@ 000a1da4 8c30
.org 0xa1da6
	ldr r0, [r0, #0]	@ 000a1da6 0068
.org 0xa1da8
	movs r1, #128	@ 000a1da8 8021
.org 0xa1daa
	lsls r1, r1, #2	@ 000a1daa 8900
.org 0xa1dac
	ands r0, r1	@ 000a1dac 0840
.org 0xa1dae
	cmp r0, #0	@ 000a1dae 0028
.org 0xa1db0
	beq.n 0xa1dd0	@ 000a1db0 0ed0
.org 0xa1db2
	ldr r1, [pc, #24]	@ 000a1db2 0649
.org 0xa1db4
	ldrb r0, [r4, #9]	@ 000a1db4 607a
.org 0xa1db6
	lsls r0, r0, #2	@ 000a1db6 8000
.org 0xa1db8
	adds r0, r0, r1	@ 000a1db8 4018
.org 0xa1dba
	movs r1, #2	@ 000a1dba 0221
.org 0xa1dbc
	str r1, [r4, #12]	@ 000a1dbc e160
.org 0xa1dbe
	ldr r0, [r0, #0]	@ 000a1dbe 0068
.org 0xa1dc0
	ldr r0, [r0, #8]	@ 000a1dc0 8068
.org 0xa1dc2
	str r0, [r4, #20]	@ 000a1dc2 6061
.org 0xa1dc4
	adds r0, r4, #0	@ 000a1dc4 201c
.org 0xa1dc6
	bl 0xa1e0c	@ 000a1dc6 00f021f8
.org 0xa1dca
	b.n 0xa1e04	@ 000a1dca 1be0
.org 0xa1dcc
	.byte 0x40,0xdb,0x85,0x08	@ 000a1dcc data
.org 0xa1dd0
	adds r0, r4, #0	@ 000a1dd0 201c
.org 0xa1dd2
	bl 0xa2104	@ 000a1dd2 00f097f9
.org 0xa1dd6
	adds r0, r4, #0	@ 000a1dd6 201c
.org 0xa1dd8
	adds r0, #192	@ 000a1dd8 c030
.org 0xa1dda
	ldr r0, [r0, #0]	@ 000a1dda 0068
.org 0xa1ddc
	cmp r0, #0	@ 000a1ddc 0028
.org 0xa1dde
	bne.n 0xa1df8	@ 000a1dde 0bd1
.org 0xa1de0
	ldr r0, [pc, #16]	@ 000a1de0 0448
.org 0xa1de2
	ldrb r1, [r4, #13]	@ 000a1de2 617b
.org 0xa1de4
	lsls r1, r1, #2	@ 000a1de4 8900
.org 0xa1de6
	adds r1, r1, r0	@ 000a1de6 0918
.org 0xa1de8
	ldr r1, [r1, #0]	@ 000a1de8 0968
.org 0xa1dea
	adds r0, r4, #0	@ 000a1dea 201c
.org 0xa1dec
	bl 0x128f80	@ 000a1dec 87f0c8f8
.org 0xa1df0
	b.n 0xa1dfe	@ 000a1df0 05e0
.org 0xa1df2
	.byte 0x00	@ 000a1df2 data
.org 0xa1df3
	.byte 0x00	@ 000a1df3 data
.org 0xa1df4
	.byte 0x44,0x1b,0x86,0x08	@ 000a1df4 data
.org 0xa1df8
	adds r0, r4, #0	@ 000a1df8 201c
.org 0xa1dfa
	bl 0xa2154	@ 000a1dfa 00f0abf9
.org 0xa1dfe
	adds r0, r4, #0	@ 000a1dfe 201c
