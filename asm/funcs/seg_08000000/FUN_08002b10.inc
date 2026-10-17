@ FUN_08002b10  entry 0x08002b10  size 66
.thumb
.org 0x2b10
FUN_08002b10:
	push {r4, lr}	@ 00002b10 10b5
.org 0x2b12
	lsls r0, r0, #16	@ 00002b12 0004
.org 0x2b14
	lsrs r4, r0, #16	@ 00002b14 040c
.org 0x2b16
	ldr r1, [pc, #36]	@ 00002b16 0949
.org 0x2b18
	lsls r0, r4, #3	@ 00002b18 e000
.org 0x2b1a
	adds r0, r0, r1	@ 00002b1a 4018
.org 0x2b1c
	movs r2, #166	@ 00002b1c a622
.org 0x2b1e
	lsls r2, r2, #1	@ 00002b1e 5200
.org 0x2b20
	adds r1, r1, r2	@ 00002b20 8918
.org 0x2b22
	ldrh r0, [r0, #4]	@ 00002b22 8088
.org 0x2b24
	ldrh r1, [r1, #0]	@ 00002b24 0988
.org 0x2b26
	cmp r0, r1	@ 00002b26 8842
.org 0x2b28
	bne.n 0x2b44	@ 00002b28 0cd1
.org 0x2b2a
	ldr r1, [pc, #20]	@ 00002b2a 0549
.org 0x2b2c
	ldrh r0, [r1, #0]	@ 00002b2c 0888
.org 0x2b2e
	cmp r0, #0	@ 00002b2e 0028
.org 0x2b30
	beq.n 0x2b36	@ 00002b30 01d0
.org 0x2b32
	cmp r0, #41	@ 00002b32 2928
.org 0x2b34
	bne.n 0x2b4e	@ 00002b34 0bd1
.org 0x2b36
	strh r4, [r1, #0]	@ 00002b36 0c80
.org 0x2b38
	b.n 0x2b4e	@ 00002b38 09e0
.org 0x2b3a
	.byte 0x00	@ 00002b3a data
.org 0x2b3b
	.byte 0x00	@ 00002b3b data
.org 0x2b3c
	.byte 0x00,0xbc,0x13,0x08	@ 00002b3c data
.org 0x2b40
	.byte 0x22,0x00,0x00,0x02	@ 00002b40 data
.org 0x2b44
	cmp r4, #0	@ 00002b44 002c
.org 0x2b46
	beq.n 0x2b54	@ 00002b46 05d0
.org 0x2b48
	adds r0, r4, #0	@ 00002b48 201c
.org 0x2b4a
	bl 0x1277b4	@ 00002b4a 24f133fe
.org 0x2b4e
	lsls r0, r4, #16	@ 00002b4e 2004
.org 0x2b50
	asrs r0, r0, #16	@ 00002b50 0014
