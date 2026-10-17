@ FUN_080e7b24  entry 0x080e7b24  size 32
.thumb
.org 0xe7b24
FUN_080e7b24:
	push {r4, lr}	@ 000e7b24 10b5
.org 0xe7b26
	adds r4, r0, #0	@ 000e7b26 041c
.org 0xe7b28
	ldr r1, [pc, #24]	@ 000e7b28 0649
.org 0xe7b2a
	ldrb r0, [r4, #13]	@ 000e7b2a 607b
.org 0xe7b2c
	lsls r0, r0, #2	@ 000e7b2c 8000
.org 0xe7b2e
	adds r0, r0, r1	@ 000e7b2e 4018
.org 0xe7b30
	ldr r1, [r0, #0]	@ 000e7b30 0168
.org 0xe7b32
	adds r0, r4, #0	@ 000e7b32 201c
.org 0xe7b34
	bl 0x128f80	@ 000e7b34 41f024fa
.org 0xe7b38
	adds r0, r4, #0	@ 000e7b38 201c
.org 0xe7b3a
	bl 0x1cff0	@ 000e7b3a 35f759fa
.org 0xe7b3e
	pop {r4}	@ 000e7b3e 10bc
.org 0xe7b40
	pop {r0}	@ 000e7b40 01bc
.org 0xe7b42
	bx r0	@ 000e7b42 0047
