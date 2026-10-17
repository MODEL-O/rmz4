@ FUN_08002b5c  entry 0x08002b5c  size 32
.thumb
.org 0x2b5c
FUN_08002b5c:
	push {r4, lr}	@ 00002b5c 10b5
.org 0x2b5e
	lsls r0, r0, #16	@ 00002b5e 0004
.org 0x2b60
	cmp r0, #0	@ 00002b60 0028
.org 0x2b62
	blt.n 0x2b76	@ 00002b62 08db
.org 0x2b64
	lsrs r4, r0, #16	@ 00002b64 040c
.org 0x2b66
	adds r0, r4, #0	@ 00002b66 201c
.org 0x2b68
	bl 0x2ad0	@ 00002b68 fff7b2ff
.org 0x2b6c
	cmp r0, #0	@ 00002b6c 0028
.org 0x2b6e
	beq.n 0x2b76	@ 00002b6e 02d0
.org 0x2b70
	adds r0, r4, #0	@ 00002b70 201c
.org 0x2b72
	bl 0x127880	@ 00002b72 24f185fe
.org 0x2b76
	pop {r4}	@ 00002b76 10bc
.org 0x2b78
	pop {r0}	@ 00002b78 01bc
.org 0x2b7a
	bx r0	@ 00002b7a 0047
