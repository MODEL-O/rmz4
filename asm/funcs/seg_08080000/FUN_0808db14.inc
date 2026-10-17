@ FUN_0808db14  entry 0x0808db14  size 18
.thumb
.org 0x8db14
FUN_0808db14:
	adds r1, r0, #0	@ 0008db14 011c
.org 0x8db16
	adds r0, #193	@ 0008db16 c130
.org 0x8db18
	ldrb r0, [r0, #0]	@ 0008db18 0078
.org 0x8db1a
	strb r0, [r1, #13]	@ 0008db1a 4873
.org 0x8db1c
	adds r0, r1, #0	@ 0008db1c 081c
.org 0x8db1e
	adds r0, #194	@ 0008db1e c230
.org 0x8db20
	ldrb r0, [r0, #0]	@ 0008db20 0078
.org 0x8db22
	strb r0, [r1, #14]	@ 0008db22 8873
.org 0x8db24
	bx lr	@ 0008db24 7047
