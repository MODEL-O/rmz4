@ FUN_080ffa48  entry 0x080ffa48  size 8
.thumb
.org 0xffa48
FUN_080ffa48:
	push {r3, r4, r5, r6, r7, lr}	@ 000ffa48 f8b5
.org 0xffa4a
	lsrs r6, r0, #2	@ 000ffa4a 8608
.org 0xffa4c
	str r2, [sp, #1008]	@ 000ffa4c fc92
.org 0xffa4e
	lsrs r6, r0, #2	@ 000ffa4e 8608
