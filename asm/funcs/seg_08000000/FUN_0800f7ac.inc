@ FUN_0800f7ac  entry 0x0800f7ac  size 12
.thumb
.org 0xf7ac
FUN_0800f7ac:
	push {lr}	@ 0000f7ac 00b5
.org 0xf7ae
	movs r0, #121	@ 0000f7ae 7920
.org 0xf7b0
	bl 0x2b5c	@ 0000f7b0 f3f7d4f9
.org 0xf7b4
	pop {r0}	@ 0000f7b4 01bc
.org 0xf7b6
	bx r0	@ 0000f7b6 0047
