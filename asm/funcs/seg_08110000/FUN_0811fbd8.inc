@ FUN_0811fbd8  entry 0x0811fbd8  size 64
.thumb
.org 0x11fbd8
FUN_0811fbd8:
	push {r4, r5, lr}	@ 0011fbd8 30b5
.org 0x11fbda
	adds r5, r0, #0	@ 0011fbda 051c
.org 0x11fbdc
	ldr r0, [pc, #56]	@ 0011fbdc 0e48
.org 0x11fbde
	adds r2, r5, r0	@ 0011fbde 2a18
.org 0x11fbe0
	ldr r0, [pc, #56]	@ 0011fbe0 0e48
.org 0x11fbe2
	ldrh r1, [r0, #0]	@ 0011fbe2 0188
.org 0x11fbe4
	ldr r0, [pc, #56]	@ 0011fbe4 0e48
.org 0x11fbe6
	ands r0, r1	@ 0011fbe6 0840
.org 0x11fbe8
	lsls r0, r0, #8	@ 0011fbe8 0002
.org 0x11fbea
	movs r1, #240	@ 0011fbea f021
.org 0x11fbec
	lsls r1, r1, #7	@ 0011fbec c901
.org 0x11fbee
	adds r0, r0, r1	@ 0011fbee 4018
.org 0x11fbf0
	str r0, [r2, #0]	@ 0011fbf0 1060
.org 0x11fbf2
	ldr r0, [pc, #48]	@ 0011fbf2 0c48
.org 0x11fbf4
	adds r5, r5, r0	@ 0011fbf4 2d18
.org 0x11fbf6
	adds r0, r5, #0	@ 0011fbf6 281c
.org 0x11fbf8
	bl 0x3470	@ 0011fbf8 e3f63afc
.org 0x11fbfc
	ldr r4, [pc, #40]	@ 0011fbfc 0a4c
.org 0x11fbfe
	ldr r0, [r4, #0]	@ 0011fbfe 2068
.org 0x11fc00
	bl 0x1c79c	@ 0011fc00 fcf6ccfd
.org 0x11fc04
	ldr r0, [r4, #0]	@ 0011fc04 2068
.org 0x11fc06
	adds r1, r5, #0	@ 0011fc06 291c
.org 0x11fc08
	bl 0x1c924	@ 0011fc08 fcf68cfe
.org 0x11fc0c
	adds r0, r5, #0	@ 0011fc0c 281c
.org 0x11fc0e
	bl 0x3420	@ 0011fc0e e3f607fc
.org 0x11fc12
	pop {r4, r5}	@ 0011fc12 30bc
.org 0x11fc14
	pop {r0}	@ 0011fc14 01bc
.org 0x11fc16
	bx r0	@ 0011fc16 0047
