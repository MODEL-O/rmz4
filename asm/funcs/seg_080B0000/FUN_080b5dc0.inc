@ FUN_080b5dc0  entry 0x080b5dc0  size 74
.thumb
.org 0xb5dc0
FUN_080b5dc0:
	push {lr}	@ 000b5dc0 00b5
.org 0xb5dc2
	adds r2, r0, #0	@ 000b5dc2 021c
.org 0xb5dc4
	ldr r0, [r2, #40]	@ 000b5dc4 906a
.org 0xb5dc6
	ldrb r0, [r0, #12]	@ 000b5dc6 007b
.org 0xb5dc8
	cmp r0, #1	@ 000b5dc8 0128
.org 0xb5dca
	bhi.n 0xb5ddc	@ 000b5dca 07d8
.org 0xb5dcc
	adds r0, r2, #0	@ 000b5dcc 101c
.org 0xb5dce
	adds r0, #140	@ 000b5dce 8c30
.org 0xb5dd0
	ldr r0, [r0, #0]	@ 000b5dd0 0068
.org 0xb5dd2
	movs r1, #128	@ 000b5dd2 8021
.org 0xb5dd4
	lsls r1, r1, #2	@ 000b5dd4 8900
.org 0xb5dd6
	ands r0, r1	@ 000b5dd6 0840
.org 0xb5dd8
	cmp r0, #0	@ 000b5dd8 0028
.org 0xb5dda
	beq.n 0xb5dfc	@ 000b5dda 0fd0
.org 0xb5ddc
	ldr r1, [pc, #24]	@ 000b5ddc 0649
.org 0xb5dde
	ldrb r0, [r2, #9]	@ 000b5dde 507a
.org 0xb5de0
	lsls r0, r0, #2	@ 000b5de0 8000
.org 0xb5de2
	adds r0, r0, r1	@ 000b5de2 4018
.org 0xb5de4
	movs r1, #2	@ 000b5de4 0221
.org 0xb5de6
	str r1, [r2, #12]	@ 000b5de6 d160
.org 0xb5de8
	ldr r0, [r0, #0]	@ 000b5de8 0068
.org 0xb5dea
	ldr r0, [r0, #8]	@ 000b5dea 8068
.org 0xb5dec
	str r0, [r2, #20]	@ 000b5dec 5061
.org 0xb5dee
	adds r0, r2, #0	@ 000b5dee 101c
.org 0xb5df0
	bl 0xb5ff8	@ 000b5df0 00f002f9
.org 0xb5df4
	b.n 0xb5e0c	@ 000b5df4 0ae0
.org 0xb5df6
	.byte 0x00	@ 000b5df6 data
.org 0xb5df7
	.byte 0x00	@ 000b5df7 data
.org 0xb5df8
	.byte 0x40,0xdb,0x85,0x08	@ 000b5df8 data
.org 0xb5dfc
	ldr r0, [pc, #16]	@ 000b5dfc 0448
.org 0xb5dfe
	ldrb r1, [r2, #13]	@ 000b5dfe 517b
.org 0xb5e00
	lsls r1, r1, #2	@ 000b5e00 8900
.org 0xb5e02
	adds r1, r1, r0	@ 000b5e02 0918
.org 0xb5e04
	ldr r1, [r1, #0]	@ 000b5e04 0968
.org 0xb5e06
	adds r0, r2, #0	@ 000b5e06 101c
.org 0xb5e08
	bl 0x128f80	@ 000b5e08 73f0baf8
