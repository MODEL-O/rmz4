@ FUN_0811eda4  entry 0x0811eda4  size 32
.thumb
.org 0x11eda4
FUN_0811eda4:
	push {r4, lr}	@ 0011eda4 10b5
.org 0x11eda6
	adds r4, r0, #0	@ 0011eda6 041c
.org 0x11eda8
	ldr r1, [pc, #24]	@ 0011eda8 0649
.org 0x11edaa
	ldrb r0, [r4, #1]	@ 0011edaa 6078
.org 0x11edac
	lsls r0, r0, #2	@ 0011edac 8000
.org 0x11edae
	adds r0, r0, r1	@ 0011edae 4018
.org 0x11edb0
	ldr r1, [r0, #0]	@ 0011edb0 0168
.org 0x11edb2
	adds r0, r4, #0	@ 0011edb2 201c
.org 0x11edb4
	bl 0x128f80	@ 0011edb4 0af0e4f8
.org 0x11edb8
	adds r0, r4, #0	@ 0011edb8 201c
.org 0x11edba
	bl 0x11f268	@ 0011edba 00f055fa
.org 0x11edbe
	pop {r4}	@ 0011edbe 10bc
.org 0x11edc0
	pop {r0}	@ 0011edc0 01bc
.org 0x11edc2
	bx r0	@ 0011edc2 0047
