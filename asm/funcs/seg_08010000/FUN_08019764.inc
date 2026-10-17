@ FUN_08019764  entry 0x08019764  size 30
.thumb
.org 0x19764
FUN_08019764:
	push {lr}	@ 00019764 00b5
.org 0x19766
	sub sp, #8	@ 00019766 82b0
.org 0x19768
	ldr r0, [pc, #24]	@ 00019768 0648
.org 0x1976a
	str r0, [sp, #4]	@ 0001976a 0190
.org 0x1976c
	ldr r0, [pc, #24]	@ 0001976c 0648
.org 0x1976e
	str r0, [sp, #0]	@ 0001976e 0090
.org 0x19770
	movs r0, #78	@ 00019770 4e20
.org 0x19772
	movs r1, #93	@ 00019772 5d21
.org 0x19774
	mov r2, sp	@ 00019774 6a46
.org 0x19776
	bl 0x736c	@ 00019776 edf7f9fd
.org 0x1977a
	movs r0, #1	@ 0001977a 0120
.org 0x1977c
	add sp, #8	@ 0001977c 02b0
.org 0x1977e
	pop {r1}	@ 0001977e 02bc
.org 0x19780
	bx r1	@ 00019780 0847
