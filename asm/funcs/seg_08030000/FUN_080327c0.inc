@ FUN_080327c0  entry 0x080327c0  size 12
.thumb
.org 0x327c0
FUN_080327c0:
	movs r1, #184	@ 000327c0 b821
.org 0x327c2
	lsls r1, r1, #1	@ 000327c2 4900
.org 0x327c4
	adds r0, r0, r1	@ 000327c4 4018
.org 0x327c6
	movs r1, #1	@ 000327c6 0121
.org 0x327c8
	strb r1, [r0, #0]	@ 000327c8 0170
.org 0x327ca
	bx lr	@ 000327ca 7047
