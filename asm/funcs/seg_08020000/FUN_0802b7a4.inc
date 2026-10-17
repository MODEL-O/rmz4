@ FUN_0802b7a4  entry 0x0802b7a4  size 24
.thumb
.org 0x2b7a4
FUN_0802b7a4:
	adds r2, r0, #0	@ 0002b7a4 021c
.org 0x2b7a6
	movs r1, #150	@ 0002b7a6 9621
.org 0x2b7a8
	lsls r1, r1, #2	@ 0002b7a8 8900
.org 0x2b7aa
	adds r0, r2, r1	@ 0002b7aa 5018
.org 0x2b7ac
	movs r1, #0	@ 0002b7ac 0021
.org 0x2b7ae
	str r1, [r0, #0]	@ 0002b7ae 0160
.org 0x2b7b0
	adds r0, r2, #0	@ 0002b7b0 101c
.org 0x2b7b2
	adds r0, #228	@ 0002b7b2 e430
.org 0x2b7b4
	strb r1, [r0, #0]	@ 0002b7b4 0170
.org 0x2b7b6
	adds r0, #1	@ 0002b7b6 0130
.org 0x2b7b8
	strb r1, [r0, #0]	@ 0002b7b8 0170
.org 0x2b7ba
	bx lr	@ 0002b7ba 7047
