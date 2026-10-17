@ FUN_080f6f68  entry 0x080f6f68  size 40
.thumb
.org 0xf6f68
FUN_080f6f68:
	push {lr}	@ 000f6f68 00b5
.org 0xf6f6a
	adds r2, r0, #0	@ 000f6f6a 021c
.org 0xf6f6c
	adds r0, #181	@ 000f6f6c b530
.org 0xf6f6e
	ldrb r0, [r0, #0]	@ 000f6f6e 0078
.org 0xf6f70
	cmp r0, #0	@ 000f6f70 0028
.org 0xf6f72
	bne.n 0xf6f8c	@ 000f6f72 0bd1
.org 0xf6f74
	ldr r1, [pc, #24]	@ 000f6f74 0649
.org 0xf6f76
	ldrb r0, [r2, #9]	@ 000f6f76 507a
.org 0xf6f78
	lsls r0, r0, #2	@ 000f6f78 8000
.org 0xf6f7a
	adds r0, r0, r1	@ 000f6f7a 4018
.org 0xf6f7c
	movs r1, #2	@ 000f6f7c 0221
.org 0xf6f7e
	str r1, [r2, #12]	@ 000f6f7e d160
.org 0xf6f80
	ldr r0, [r0, #0]	@ 000f6f80 0068
.org 0xf6f82
	ldr r0, [r0, #8]	@ 000f6f82 8068
.org 0xf6f84
	str r0, [r2, #20]	@ 000f6f84 5061
.org 0xf6f86
	adds r0, r2, #0	@ 000f6f86 101c
.org 0xf6f88
	bl 0xf7408	@ 000f6f88 00f03efa
.org 0xf6f8c
	pop {r0}	@ 000f6f8c 01bc
.org 0xf6f8e
	bx r0	@ 000f6f8e 0047
