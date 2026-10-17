@ FUN_08117be8  entry 0x08117be8  size 32
.thumb
.org 0x117be8
FUN_08117be8:
	push {r4, lr}	@ 00117be8 10b5
.org 0x117bea
	adds r4, r0, #0	@ 00117bea 041c
.org 0x117bec
	ldr r1, [pc, #24]	@ 00117bec 0649
.org 0x117bee
	ldrb r0, [r4, #1]	@ 00117bee 6078
.org 0x117bf0
	lsls r0, r0, #2	@ 00117bf0 8000
.org 0x117bf2
	adds r0, r0, r1	@ 00117bf2 4018
.org 0x117bf4
	ldr r1, [r0, #0]	@ 00117bf4 0168
.org 0x117bf6
	adds r0, r4, #0	@ 00117bf6 201c
.org 0x117bf8
	bl 0x128f80	@ 00117bf8 11f0c2f9
.org 0x117bfc
	adds r0, r4, #0	@ 00117bfc 201c
.org 0x117bfe
	bl 0x117ff4	@ 00117bfe 00f0f9f9
.org 0x117c02
	pop {r4}	@ 00117c02 10bc
.org 0x117c04
	pop {r0}	@ 00117c04 01bc
.org 0x117c06
	bx r0	@ 00117c06 0047
