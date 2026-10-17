@ FUN_080e1a28  entry 0x080e1a28  size 16
.thumb
.org 0xe1a28
FUN_080e1a28:
	adds r0, #116	@ 000e1a28 7430
.org 0xe1a2a
	ldrb r2, [r0, #0]	@ 000e1a2a 0278
.org 0xe1a2c
	adds r2, #1	@ 000e1a2c 0132
.org 0xe1a2e
	lsrs r1, r2, #1	@ 000e1a2e 5108
.org 0xe1a30
	lsls r1, r1, #1	@ 000e1a30 4900
.org 0xe1a32
	subs r2, r2, r1	@ 000e1a32 521a
.org 0xe1a34
	strb r2, [r0, #0]	@ 000e1a34 0270
.org 0xe1a36
	bx lr	@ 000e1a36 7047
