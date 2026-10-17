@ FUN_080e4b30  entry 0x080e4b30  size 32
.thumb
.org 0xe4b30
FUN_080e4b30:
	push {r4, lr}	@ 000e4b30 10b5
.org 0xe4b32
	adds r4, r0, #0	@ 000e4b32 041c
.org 0xe4b34
	ldr r1, [pc, #24]	@ 000e4b34 0649
.org 0xe4b36
	ldrb r0, [r4, #13]	@ 000e4b36 607b
.org 0xe4b38
	lsls r0, r0, #2	@ 000e4b38 8000
.org 0xe4b3a
	adds r0, r0, r1	@ 000e4b3a 4018
.org 0xe4b3c
	ldr r1, [r0, #0]	@ 000e4b3c 0168
.org 0xe4b3e
	adds r0, r4, #0	@ 000e4b3e 201c
.org 0xe4b40
	bl 0x128f80	@ 000e4b40 44f01efa
.org 0xe4b44
	adds r0, r4, #0	@ 000e4b44 201c
.org 0xe4b46
	bl 0x1cff0	@ 000e4b46 38f753fa
.org 0xe4b4a
	pop {r4}	@ 000e4b4a 10bc
.org 0xe4b4c
	pop {r0}	@ 000e4b4c 01bc
.org 0xe4b4e
	bx r0	@ 000e4b4e 0047
