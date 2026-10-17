@ FUN_08071e98  entry 0x08071e98  size 30
.thumb
.org 0x71e98
FUN_08071e98:
	push {lr}	@ 00071e98 00b5
.org 0x71e9a
	ldrb r1, [r0, #14]	@ 00071e9a 817b
.org 0x71e9c
	adds r1, #1	@ 00071e9c 0131
.org 0x71e9e
	movs r2, #0	@ 00071e9e 0022
.org 0x71ea0
	strb r1, [r0, #14]	@ 00071ea0 8173
.org 0x71ea2
	strb r2, [r0, #15]	@ 00071ea2 c273
.org 0x71ea4
	ldr r2, [pc, #16]	@ 00071ea4 044a
.org 0x71ea6
	ldrb r1, [r0, #13]	@ 00071ea6 417b
.org 0x71ea8
	lsls r1, r1, #2	@ 00071ea8 8900
.org 0x71eaa
	adds r1, r1, r2	@ 00071eaa 8918
.org 0x71eac
	ldr r1, [r1, #0]	@ 00071eac 0968
.org 0x71eae
	bl 0x128f80	@ 00071eae b7f067f8
.org 0x71eb2
	pop {r0}	@ 00071eb2 01bc
.org 0x71eb4
	bx r0	@ 00071eb4 0047
