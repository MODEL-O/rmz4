@ FUN_080c5f68  entry 0x080c5f68  size 38
.thumb
.org 0xc5f68
FUN_080c5f68:
	push {r4, r5, lr}	@ 000c5f68 30b5
.org 0xc5f6a
	adds r5, r0, #0	@ 000c5f6a 051c
.org 0xc5f6c
	adds r4, r5, #0	@ 000c5f6c 2c1c
.org 0xc5f6e
	adds r4, #184	@ 000c5f6e b834
.org 0xc5f70
	ldrb r0, [r4, #0]	@ 000c5f70 2078
.org 0xc5f72
	cmp r0, #0	@ 000c5f72 0028
.org 0xc5f74
	beq.n 0xc5f82	@ 000c5f74 05d0
.org 0xc5f76
	movs r0, #197	@ 000c5f76 c520
.org 0xc5f78
	lsls r0, r0, #1	@ 000c5f78 4000
.org 0xc5f7a
	bl 0x2b5c	@ 000c5f7a 3cf7effd
.org 0xc5f7e
	movs r0, #0	@ 000c5f7e 0020
.org 0xc5f80
	strb r0, [r4, #0]	@ 000c5f80 2070
.org 0xc5f82
	adds r0, r5, #0	@ 000c5f82 281c
.org 0xc5f84
	bl 0xbd3f8	@ 000c5f84 f7f738fa
.org 0xc5f88
	pop {r4, r5}	@ 000c5f88 30bc
.org 0xc5f8a
	pop {r0}	@ 000c5f8a 01bc
.org 0xc5f8c
	bx r0	@ 000c5f8c 0047
