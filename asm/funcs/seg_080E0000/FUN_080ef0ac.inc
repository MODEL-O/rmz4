@ FUN_080ef0ac  entry 0x080ef0ac  size 20
.thumb
.org 0xef0ac
FUN_080ef0ac:
	adds r0, r7, #0	@ 000ef0ac 381c
.org 0xef0ae
	bl 0x1cff0	@ 000ef0ae 2df79fff
.org 0xef0b2
	add sp, #56	@ 000ef0b2 0eb0
.org 0xef0b4
	pop {r3, r4}	@ 000ef0b4 18bc
.org 0xef0b6
	mov r8, r3	@ 000ef0b6 9846
.org 0xef0b8
	mov r9, r4	@ 000ef0b8 a146
.org 0xef0ba
	pop {r4, r5, r6, r7}	@ 000ef0ba f0bc
.org 0xef0bc
	pop {r0}	@ 000ef0bc 01bc
.org 0xef0be
	bx r0	@ 000ef0be 0047
