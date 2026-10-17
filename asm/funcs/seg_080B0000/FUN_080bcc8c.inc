@ FUN_080bcc8c  entry 0x080bcc8c  size 20
.thumb
.org 0xbcc8c
FUN_080bcc8c:
	ldr r2, [pc, #16]	@ 000bcc8c 044a
.org 0xbcc8e
	ldrb r1, [r0, #9]	@ 000bcc8e 417a
.org 0xbcc90
	lsls r1, r1, #2	@ 000bcc90 8900
.org 0xbcc92
	adds r1, r1, r2	@ 000bcc92 8918
.org 0xbcc94
	movs r2, #4	@ 000bcc94 0422
.org 0xbcc96
	str r2, [r0, #12]	@ 000bcc96 c260
.org 0xbcc98
	ldr r1, [r1, #0]	@ 000bcc98 0968
.org 0xbcc9a
	ldr r1, [r1, #16]	@ 000bcc9a 0969
.org 0xbcc9c
	str r1, [r0, #20]	@ 000bcc9c 4161
.org 0xbcc9e
	bx lr	@ 000bcc9e 7047
