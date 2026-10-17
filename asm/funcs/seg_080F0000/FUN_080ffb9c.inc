@ FUN_080ffb9c  entry 0x080ffb9c  size 20
.thumb
.org 0xffb9c
FUN_080ffb9c:
	push {lr}	@ 000ffb9c 00b5
.org 0xffb9e
	ldr r2, [pc, #16]	@ 000ffb9e 044a
.org 0xffba0
	ldrb r1, [r0, #13]	@ 000ffba0 417b
.org 0xffba2
	lsls r1, r1, #2	@ 000ffba2 8900
.org 0xffba4
	adds r1, r1, r2	@ 000ffba4 8918
.org 0xffba6
	ldr r1, [r1, #0]	@ 000ffba6 0968
.org 0xffba8
	bl 0x128f80	@ 000ffba8 29f0eaf9
.org 0xffbac
	pop {r0}	@ 000ffbac 01bc
.org 0xffbae
	bx r0	@ 000ffbae 0047
