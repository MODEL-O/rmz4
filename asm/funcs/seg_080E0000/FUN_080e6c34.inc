@ FUN_080e6c34  entry 0x080e6c34  size 32
.thumb
.org 0xe6c34
FUN_080e6c34:
	push {r4, lr}	@ 000e6c34 10b5
.org 0xe6c36
	adds r4, r0, #0	@ 000e6c36 041c
.org 0xe6c38
	ldr r1, [pc, #24]	@ 000e6c38 0649
.org 0xe6c3a
	ldrb r0, [r4, #13]	@ 000e6c3a 607b
.org 0xe6c3c
	lsls r0, r0, #2	@ 000e6c3c 8000
.org 0xe6c3e
	adds r0, r0, r1	@ 000e6c3e 4018
.org 0xe6c40
	ldr r1, [r0, #0]	@ 000e6c40 0168
.org 0xe6c42
	adds r0, r4, #0	@ 000e6c42 201c
.org 0xe6c44
	bl 0x128f80	@ 000e6c44 42f09cf9
.org 0xe6c48
	adds r0, r4, #0	@ 000e6c48 201c
.org 0xe6c4a
	bl 0x1cff0	@ 000e6c4a 36f7d1f9
.org 0xe6c4e
	pop {r4}	@ 000e6c4e 10bc
.org 0xe6c50
	pop {r0}	@ 000e6c50 01bc
.org 0xe6c52
	bx r0	@ 000e6c52 0047
