@ FUN_08110f4a  entry 0x08110f4a  size 16
.thumb
.org 0x110f4a
FUN_08110f4a:
	add sp, #92	@ 00110f4a 17b0
.org 0x110f4c
	pop {r3, r4, r5}	@ 00110f4c 38bc
.org 0x110f4e
	mov r8, r3	@ 00110f4e 9846
.org 0x110f50
	mov r9, r4	@ 00110f50 a146
.org 0x110f52
	mov sl, r5	@ 00110f52 aa46
.org 0x110f54
	pop {r4, r5, r6, r7}	@ 00110f54 f0bc
.org 0x110f56
	pop {r0}	@ 00110f56 01bc
.org 0x110f58
	bx r0	@ 00110f58 0047
