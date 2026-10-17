@ FUN_08120e98  entry 0x08120e98  size 32
.thumb
.org 0x120e98
FUN_08120e98:
	push {r4, lr}	@ 00120e98 10b5
.org 0x120e9a
	adds r4, r0, #0	@ 00120e9a 041c
.org 0x120e9c
	ldr r1, [pc, #24]	@ 00120e9c 0649
.org 0x120e9e
	ldrb r0, [r4, #1]	@ 00120e9e 6078
.org 0x120ea0
	lsls r0, r0, #2	@ 00120ea0 8000
.org 0x120ea2
	adds r0, r0, r1	@ 00120ea2 4018
.org 0x120ea4
	ldr r1, [r0, #0]	@ 00120ea4 0168
.org 0x120ea6
	adds r0, r4, #0	@ 00120ea6 201c
.org 0x120ea8
	bl 0x128f80	@ 00120ea8 08f06af8
.org 0x120eac
	adds r0, r4, #0	@ 00120eac 201c
.org 0x120eae
	bl 0x1226ec	@ 00120eae 01f01dfc
.org 0x120eb2
	pop {r4}	@ 00120eb2 10bc
.org 0x120eb4
	pop {r0}	@ 00120eb4 01bc
.org 0x120eb6
	bx r0	@ 00120eb6 0047
