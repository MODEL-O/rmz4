@ FUN_08088c9c  entry 0x08088c9c  size 60
.thumb
.org 0x88c9c
FUN_08088c9c:
	push {r4, lr}	@ 00088c9c 10b5
.org 0x88c9e
	adds r4, r0, #0	@ 00088c9e 041c
.org 0x88ca0
	ldr r1, [r4, #92]	@ 00088ca0 e16d
.org 0x88ca2
	bl 0x88db4	@ 00088ca2 00f087f8
.org 0x88ca6
	ldr r1, [r4, #96]	@ 00088ca6 216e
.org 0x88ca8
	adds r0, r4, #0	@ 00088ca8 201c
.org 0x88caa
	bl 0x88ee0	@ 00088caa 00f019f9
.org 0x88cae
	cmp r0, #0	@ 00088cae 0028
.org 0x88cb0
	beq.n 0x88cc0	@ 00088cb0 06d0
.org 0x88cb2
	ldr r0, [r4, #96]	@ 00088cb2 206e
.org 0x88cb4
	cmp r0, #0	@ 00088cb4 0028
.org 0x88cb6
	blt.n 0x88cbc	@ 00088cb6 01db
.org 0x88cb8
	movs r0, #1	@ 00088cb8 0120
.org 0x88cba
	b.n 0x88cd2	@ 00088cba 0ae0
.org 0x88cbc
	movs r0, #0	@ 00088cbc 0020
.org 0x88cbe
	str r0, [r4, #96]	@ 00088cbe 2066
.org 0x88cc0
	ldr r0, [r4, #96]	@ 00088cc0 206e
.org 0x88cc2
	adds r0, #64	@ 00088cc2 4030
.org 0x88cc4
	str r0, [r4, #96]	@ 00088cc4 2066
.org 0x88cc6
	movs r1, #224	@ 00088cc6 e021
.org 0x88cc8
	lsls r1, r1, #3	@ 00088cc8 c900
.org 0x88cca
	cmp r0, r1	@ 00088cca 8842
.org 0x88ccc
	ble.n 0x88cd0	@ 00088ccc 00dd
.org 0x88cce
	str r1, [r4, #96]	@ 00088cce 2166
.org 0x88cd0
	movs r0, #0	@ 00088cd0 0020
.org 0x88cd2
	pop {r4}	@ 00088cd2 10bc
.org 0x88cd4
	pop {r1}	@ 00088cd4 02bc
.org 0x88cd6
	bx r1	@ 00088cd6 0847
