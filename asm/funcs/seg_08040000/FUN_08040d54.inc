@ FUN_08040d54  entry 0x08040d54  size 64
.thumb
.org 0x40d54
FUN_08040d54:
	push {lr}	@ 00040d54 00b5
.org 0x40d56
	adds r2, r0, #0	@ 00040d56 021c
.org 0x40d58
	adds r0, #140	@ 00040d58 8c30
.org 0x40d5a
	ldr r0, [r0, #0]	@ 00040d5a 0068
.org 0x40d5c
	movs r1, #128	@ 00040d5c 8021
.org 0x40d5e
	lsls r1, r1, #2	@ 00040d5e 8900
.org 0x40d60
	ands r0, r1	@ 00040d60 0840
.org 0x40d62
	cmp r0, #0	@ 00040d62 0028
.org 0x40d64
	beq.n 0x40d84	@ 00040d64 0ed0
.org 0x40d66
	ldr r1, [pc, #24]	@ 00040d66 0649
.org 0x40d68
	ldrb r0, [r2, #9]	@ 00040d68 507a
.org 0x40d6a
	lsls r0, r0, #2	@ 00040d6a 8000
.org 0x40d6c
	adds r0, r0, r1	@ 00040d6c 4018
.org 0x40d6e
	movs r1, #2	@ 00040d6e 0221
.org 0x40d70
	str r1, [r2, #12]	@ 00040d70 d160
.org 0x40d72
	ldr r0, [r0, #0]	@ 00040d72 0068
.org 0x40d74
	ldr r0, [r0, #8]	@ 00040d74 8068
.org 0x40d76
	str r0, [r2, #20]	@ 00040d76 5061
.org 0x40d78
	adds r0, r2, #0	@ 00040d78 101c
.org 0x40d7a
	bl 0x40d9c	@ 00040d7a 00f00ff8
.org 0x40d7e
	b.n 0x40d94	@ 00040d7e 09e0
.org 0x40d80
	.byte 0xf8,0x39,0x85,0x08	@ 00040d80 data
.org 0x40d84
	ldr r0, [pc, #16]	@ 00040d84 0448
.org 0x40d86
	ldrb r1, [r2, #16]	@ 00040d86 117c
.org 0x40d88
	lsls r1, r1, #2	@ 00040d88 8900
.org 0x40d8a
	adds r1, r1, r0	@ 00040d8a 0918
.org 0x40d8c
	ldr r1, [r1, #0]	@ 00040d8c 0968
.org 0x40d8e
	adds r0, r2, #0	@ 00040d8e 101c
.org 0x40d90
	bl 0x128f80	@ 00040d90 e8f0f6f8
