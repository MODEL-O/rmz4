@ FUN_0811eacc  entry 0x0811eacc  size 64
.thumb
.org 0x11eacc
FUN_0811eacc:
	push {r4, r5, lr}	@ 0011eacc 30b5
.org 0x11eace
	adds r5, r0, #0	@ 0011eace 051c
.org 0x11ead0
	ldr r0, [pc, #56]	@ 0011ead0 0e48
.org 0x11ead2
	adds r2, r5, r0	@ 0011ead2 2a18
.org 0x11ead4
	ldr r0, [pc, #56]	@ 0011ead4 0e48
.org 0x11ead6
	ldrh r1, [r0, #0]	@ 0011ead6 0188
.org 0x11ead8
	ldr r0, [pc, #56]	@ 0011ead8 0e48
.org 0x11eada
	ands r0, r1	@ 0011eada 0840
.org 0x11eadc
	lsls r0, r0, #8	@ 0011eadc 0002
.org 0x11eade
	movs r1, #240	@ 0011eade f021
.org 0x11eae0
	lsls r1, r1, #7	@ 0011eae0 c901
.org 0x11eae2
	adds r0, r0, r1	@ 0011eae2 4018
.org 0x11eae4
	str r0, [r2, #0]	@ 0011eae4 1060
.org 0x11eae6
	ldr r0, [pc, #48]	@ 0011eae6 0c48
.org 0x11eae8
	adds r5, r5, r0	@ 0011eae8 2d18
.org 0x11eaea
	adds r0, r5, #0	@ 0011eaea 281c
.org 0x11eaec
	bl 0x3470	@ 0011eaec e4f6c0fc
.org 0x11eaf0
	ldr r4, [pc, #40]	@ 0011eaf0 0a4c
.org 0x11eaf2
	ldr r0, [r4, #0]	@ 0011eaf2 2068
.org 0x11eaf4
	bl 0x1c79c	@ 0011eaf4 fdf652fe
.org 0x11eaf8
	ldr r0, [r4, #0]	@ 0011eaf8 2068
.org 0x11eafa
	adds r1, r5, #0	@ 0011eafa 291c
.org 0x11eafc
	bl 0x1c924	@ 0011eafc fdf612ff
.org 0x11eb00
	adds r0, r5, #0	@ 0011eb00 281c
.org 0x11eb02
	bl 0x3420	@ 0011eb02 e4f68dfc
.org 0x11eb06
	pop {r4, r5}	@ 0011eb06 30bc
.org 0x11eb08
	pop {r0}	@ 0011eb08 01bc
.org 0x11eb0a
	bx r0	@ 0011eb0a 0047
