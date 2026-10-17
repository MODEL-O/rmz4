@ FUN_080e29c8  entry 0x080e29c8  size 32
.thumb
.org 0xe29c8
FUN_080e29c8:
	push {r4, lr}	@ 000e29c8 10b5
.org 0xe29ca
	adds r4, r0, #0	@ 000e29ca 041c
.org 0xe29cc
	ldr r1, [pc, #24]	@ 000e29cc 0649
.org 0xe29ce
	ldrb r0, [r4, #13]	@ 000e29ce 607b
.org 0xe29d0
	lsls r0, r0, #2	@ 000e29d0 8000
.org 0xe29d2
	adds r0, r0, r1	@ 000e29d2 4018
.org 0xe29d4
	ldr r1, [r0, #0]	@ 000e29d4 0168
.org 0xe29d6
	adds r0, r4, #0	@ 000e29d6 201c
.org 0xe29d8
	bl 0x128f80	@ 000e29d8 46f0d2fa
.org 0xe29dc
	adds r0, r4, #0	@ 000e29dc 201c
.org 0xe29de
	bl 0x1cff0	@ 000e29de 3af707fb
.org 0xe29e2
	pop {r4}	@ 000e29e2 10bc
.org 0xe29e4
	pop {r0}	@ 000e29e4 01bc
.org 0xe29e6
	bx r0	@ 000e29e6 0047
