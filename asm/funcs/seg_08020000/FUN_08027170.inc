@ FUN_08027170  entry 0x08027170  size 16
.thumb
.org 0x27170
FUN_08027170:
	movs r0, #0	@ 00027170 0020
.org 0x27172
	add sp, #4	@ 00027172 01b0
.org 0x27174
	pop {r3, r4}	@ 00027174 18bc
.org 0x27176
	mov r8, r3	@ 00027176 9846
.org 0x27178
	mov r9, r4	@ 00027178 a146
.org 0x2717a
	pop {r4, r5, r6, r7}	@ 0002717a f0bc
.org 0x2717c
	pop {r1}	@ 0002717c 02bc
.org 0x2717e
	bx r1	@ 0002717e 0847
