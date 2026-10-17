@ FUN_080033bc  entry 0x080033bc  size 10
.thumb
.org 0x33bc
FUN_080033bc:
	movs r2, #129	@ 000033bc 8122
.org 0x33be
	lsls r2, r2, #2	@ 000033be 9200
.org 0x33c0
	adds r0, r0, r2	@ 000033c0 8018
.org 0x33c2
	str r1, [r0, #0]	@ 000033c2 0160
.org 0x33c4
	bx lr	@ 000033c4 7047
