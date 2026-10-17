@ FUN_080e6398  entry 0x080e6398  size 32
.thumb
.org 0xe6398
FUN_080e6398:
	push {r4, lr}	@ 000e6398 10b5
.org 0xe639a
	adds r4, r0, #0	@ 000e639a 041c
.org 0xe639c
	ldr r1, [pc, #24]	@ 000e639c 0649
.org 0xe639e
	ldrb r0, [r4, #13]	@ 000e639e 607b
.org 0xe63a0
	lsls r0, r0, #2	@ 000e63a0 8000
.org 0xe63a2
	adds r0, r0, r1	@ 000e63a2 4018
.org 0xe63a4
	ldr r1, [r0, #0]	@ 000e63a4 0168
.org 0xe63a6
	adds r0, r4, #0	@ 000e63a6 201c
.org 0xe63a8
	bl 0x128f80	@ 000e63a8 42f0eafd
.org 0xe63ac
	adds r0, r4, #0	@ 000e63ac 201c
.org 0xe63ae
	bl 0x1cff0	@ 000e63ae 36f71ffe
.org 0xe63b2
	pop {r4}	@ 000e63b2 10bc
.org 0xe63b4
	pop {r0}	@ 000e63b4 01bc
.org 0xe63b6
	bx r0	@ 000e63b6 0047
