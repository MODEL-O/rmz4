@ FUN_0802aa9c  entry 0x0802aa9c  size 60
.thumb
.org 0x2aa9c
FUN_0802aa9c:
	push {r4, r5, lr}	@ 0002aa9c 30b5
.org 0x2aa9e
	ldr r5, [pc, #56]	@ 0002aa9e 0e4d
.org 0x2aaa0
	ldr r0, [pc, #56]	@ 0002aaa0 0e48
.org 0x2aaa2
	ldrh r1, [r0, #0]	@ 0002aaa2 0188
.org 0x2aaa4
	ldr r0, [pc, #56]	@ 0002aaa4 0e48
.org 0x2aaa6
	ands r0, r1	@ 0002aaa6 0840
.org 0x2aaa8
	lsls r0, r0, #8	@ 0002aaa8 0002
.org 0x2aaaa
	movs r1, #240	@ 0002aaaa f021
.org 0x2aaac
	lsls r1, r1, #7	@ 0002aaac c901
.org 0x2aaae
	adds r0, r0, r1	@ 0002aaae 4018
.org 0x2aab0
	str r0, [r5, #0]	@ 0002aab0 2860
.org 0x2aab2
	ldr r0, [pc, #48]	@ 0002aab2 0c48
.org 0x2aab4
	adds r5, r5, r0	@ 0002aab4 2d18
.org 0x2aab6
	adds r0, r5, #0	@ 0002aab6 281c
.org 0x2aab8
	bl 0x3470	@ 0002aab8 d8f7dafc
.org 0x2aabc
	ldr r4, [pc, #40]	@ 0002aabc 0a4c
.org 0x2aabe
	ldr r0, [r4, #0]	@ 0002aabe 2068
.org 0x2aac0
	bl 0x1c79c	@ 0002aac0 f1f76cfe
.org 0x2aac4
	ldr r0, [r4, #0]	@ 0002aac4 2068
.org 0x2aac6
	adds r1, r5, #0	@ 0002aac6 291c
.org 0x2aac8
	bl 0x1c924	@ 0002aac8 f1f72cff
.org 0x2aacc
	adds r0, r5, #0	@ 0002aacc 281c
.org 0x2aace
	bl 0x3420	@ 0002aace d8f7a7fc
.org 0x2aad2
	pop {r4, r5}	@ 0002aad2 30bc
.org 0x2aad4
	pop {r0}	@ 0002aad4 01bc
.org 0x2aad6
	bx r0	@ 0002aad6 0047
