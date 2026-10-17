@ FUN_08037a58  entry 0x08037a58  size 24
.thumb
.org 0x37a58
FUN_08037a58:
	push {lr}	@ 00037a58 00b5
.org 0x37a5a
	ldr r2, [pc, #20]	@ 00037a5a 054a
.org 0x37a5c
	ldr r3, [pc, #20]	@ 00037a5c 054b
.org 0x37a5e
	adds r1, r0, r3	@ 00037a5e c118
.org 0x37a60
	ldrb r1, [r1, #0]	@ 00037a60 0978
.org 0x37a62
	lsls r1, r1, #2	@ 00037a62 8900
.org 0x37a64
	adds r1, r1, r2	@ 00037a64 8918
.org 0x37a66
	ldr r1, [r1, #0]	@ 00037a66 0968
.org 0x37a68
	bl 0x128f80	@ 00037a68 f1f08afa
.org 0x37a6c
	pop {r0}	@ 00037a6c 01bc
.org 0x37a6e
	bx r0	@ 00037a6e 0047
