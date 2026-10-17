@ FUN_0808db04  entry 0x0808db04  size 16
.thumb
.org 0x8db04
FUN_0808db04:
	ldrb r1, [r0, #13]	@ 0008db04 417b
.org 0x8db06
	adds r2, r0, #0	@ 0008db06 021c
.org 0x8db08
	adds r2, #193	@ 0008db08 c132
.org 0x8db0a
	strb r1, [r2, #0]	@ 0008db0a 1170
.org 0x8db0c
	ldrb r1, [r0, #14]	@ 0008db0c 817b
.org 0x8db0e
	adds r0, #194	@ 0008db0e c230
.org 0x8db10
	strb r1, [r0, #0]	@ 0008db10 0170
.org 0x8db12
	bx lr	@ 0008db12 7047
