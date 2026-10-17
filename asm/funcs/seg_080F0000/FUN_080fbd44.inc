@ FUN_080fbd44  entry 0x080fbd44  size 24
.thumb
.org 0xfbd44
FUN_080fbd44:
	push {r4, lr}	@ 000fbd44 10b5
.org 0xfbd46
	adds r4, r0, #0	@ 000fbd46 041c
.org 0xfbd48
	movs r0, #189	@ 000fbd48 bd20
.org 0xfbd4a
	lsls r0, r0, #1	@ 000fbd4a 4000
.org 0xfbd4c
	bl 0x2b5c	@ 000fbd4c 06f706ff
.org 0xfbd50
	adds r0, r4, #0	@ 000fbd50 201c
.org 0xfbd52
	bl 0xe954c	@ 000fbd52 edf7fbfb
.org 0xfbd56
	pop {r4}	@ 000fbd56 10bc
.org 0xfbd58
	pop {r0}	@ 000fbd58 01bc
.org 0xfbd5a
	bx r0	@ 000fbd5a 0047
