@ FUN_080c7e88  entry 0x080c7e88  size 20
.thumb
.org 0xc7e88
FUN_080c7e88:
	push {lr}	@ 000c7e88 00b5
.org 0xc7e8a
	ldr r2, [pc, #16]	@ 000c7e8a 044a
.org 0xc7e8c
	ldrb r1, [r0, #16]	@ 000c7e8c 017c
.org 0xc7e8e
	lsls r1, r1, #2	@ 000c7e8e 8900
.org 0xc7e90
	adds r1, r1, r2	@ 000c7e90 8918
.org 0xc7e92
	ldr r1, [r1, #0]	@ 000c7e92 0968
.org 0xc7e94
	bl 0x128f80	@ 000c7e94 61f074f8
.org 0xc7e98
	pop {r0}	@ 000c7e98 01bc
.org 0xc7e9a
	bx r0	@ 000c7e9a 0047
