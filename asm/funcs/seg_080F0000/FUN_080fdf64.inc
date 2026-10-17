@ FUN_080fdf64  entry 0x080fdf64  size 24
.thumb
.org 0xfdf64
FUN_080fdf64:
	push {r4, lr}	@ 000fdf64 10b5
.org 0xfdf66
	adds r4, r0, #0	@ 000fdf66 041c
.org 0xfdf68
	ldr r0, [r4, #84]	@ 000fdf68 606d
.org 0xfdf6a
	ldr r1, [r4, #88]	@ 000fdf6a a16d
.org 0xfdf6c
	bl 0x1281c	@ 000fdf6c 14f756fc
.org 0xfdf70
	adds r0, r4, #0	@ 000fdf70 201c
.org 0xfdf72
	bl 0xe954c	@ 000fdf72 ebf7ebfa
.org 0xfdf76
	pop {r4}	@ 000fdf76 10bc
.org 0xfdf78
	pop {r0}	@ 000fdf78 01bc
.org 0xfdf7a
	bx r0	@ 000fdf7a 0047
