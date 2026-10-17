@ FUN_08002ad0  entry 0x08002ad0  size 54
.thumb
.org 0x2ad0
FUN_08002ad0:
	push {lr}	@ 00002ad0 00b5
.org 0x2ad2
	lsls r0, r0, #16	@ 00002ad2 0004
.org 0x2ad4
	ldr r3, [pc, #40]	@ 00002ad4 0a4b
.org 0x2ad6
	ldr r1, [pc, #44]	@ 00002ad6 0b49
.org 0x2ad8
	lsrs r0, r0, #13	@ 00002ad8 400b
.org 0x2ada
	adds r0, r0, r1	@ 00002ada 4018
.org 0x2adc
	ldrh r2, [r0, #4]	@ 00002adc 8288
.org 0x2ade
	lsls r1, r2, #1	@ 00002ade 5100
.org 0x2ae0
	adds r1, r1, r2	@ 00002ae0 8918
.org 0x2ae2
	lsls r1, r1, #2	@ 00002ae2 8900
.org 0x2ae4
	adds r1, r1, r3	@ 00002ae4 c918
.org 0x2ae6
	ldr r2, [r1, #0]	@ 00002ae6 0a68
.org 0x2ae8
	ldr r1, [r2, #0]	@ 00002ae8 1168
.org 0x2aea
	ldr r0, [r0, #0]	@ 00002aea 0068
.org 0x2aec
	cmp r1, r0	@ 00002aec 8142
.org 0x2aee
	bne.n 0x2b08	@ 00002aee 0bd1
.org 0x2af0
	ldr r1, [r2, #4]	@ 00002af0 5168
.org 0x2af2
	ldrh r0, [r2, #4]	@ 00002af2 9088
.org 0x2af4
	cmp r0, #0	@ 00002af4 0028
.org 0x2af6
	beq.n 0x2b08	@ 00002af6 07d0
.org 0x2af8
	cmp r1, #0	@ 00002af8 0029
.org 0x2afa
	blt.n 0x2b08	@ 00002afa 05db
.org 0x2afc
	movs r0, #1	@ 00002afc 0120
.org 0x2afe
	b.n 0x2b0a	@ 00002afe 04e0
.org 0x2b00
	.byte 0x58,0xbb,0x13,0x08	@ 00002b00 data
.org 0x2b04
	.byte 0x00,0xbc,0x13,0x08	@ 00002b04 data
