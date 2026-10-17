@ FUN_080c7d88  entry 0x080c7d88  size 20
.thumb
.org 0xc7d88
FUN_080c7d88:
	push {lr}	@ 000c7d88 00b5
.org 0xc7d8a
	lsls r1, r1, #24	@ 000c7d8a 0906
.org 0xc7d8c
	ldr r2, [pc, #12]	@ 000c7d8c 034a
.org 0xc7d8e
	lsrs r1, r1, #22	@ 000c7d8e 890d
.org 0xc7d90
	adds r1, r1, r2	@ 000c7d90 8918
.org 0xc7d92
	ldr r1, [r1, #0]	@ 000c7d92 0968
.org 0xc7d94
	bl 0x128f80	@ 000c7d94 61f0f4f8
.org 0xc7d98
	pop {r1}	@ 000c7d98 02bc
.org 0xc7d9a
	bx r1	@ 000c7d9a 0847
