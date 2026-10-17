@ FUN_0800db3c  entry 0x0800db3c  size 60
.thumb
.org 0xdb3c
FUN_0800db3c:
	push {lr}	@ 0000db3c 00b5
.org 0xdb3e
	movs r0, #29	@ 0000db3e 1d20
.org 0xdb40
	bl 0x2624	@ 0000db40 f4f770fd
.org 0xdb44
	movs r0, #30	@ 0000db44 1e20
.org 0xdb46
	bl 0x2624	@ 0000db46 f4f76dfd
.org 0xdb4a
	movs r0, #31	@ 0000db4a 1f20
.org 0xdb4c
	bl 0x2624	@ 0000db4c f4f76afd
.org 0xdb50
	movs r0, #32	@ 0000db50 2020
.org 0xdb52
	bl 0x2624	@ 0000db52 f4f767fd
.org 0xdb56
	movs r0, #33	@ 0000db56 2120
.org 0xdb58
	bl 0x2624	@ 0000db58 f4f764fd
.org 0xdb5c
	movs r0, #34	@ 0000db5c 2220
.org 0xdb5e
	bl 0x2624	@ 0000db5e f4f761fd
.org 0xdb62
	movs r0, #35	@ 0000db62 2320
.org 0xdb64
	bl 0x2624	@ 0000db64 f4f75efd
.org 0xdb68
	movs r0, #170	@ 0000db68 aa20
.org 0xdb6a
	bl 0x2624	@ 0000db6a f4f75bfd
.org 0xdb6e
	movs r0, #171	@ 0000db6e ab20
.org 0xdb70
	bl 0x2624	@ 0000db70 f4f758fd
.org 0xdb74
	pop {r0}	@ 0000db74 01bc
.org 0xdb76
	bx r0	@ 0000db76 0047
