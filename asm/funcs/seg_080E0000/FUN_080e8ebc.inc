@ FUN_080e8ebc  entry 0x080e8ebc  size 32
.thumb
.org 0xe8ebc
FUN_080e8ebc:
	push {r4, lr}	@ 000e8ebc 10b5
.org 0xe8ebe
	adds r4, r0, #0	@ 000e8ebe 041c
.org 0xe8ec0
	ldr r1, [pc, #24]	@ 000e8ec0 0649
.org 0xe8ec2
	ldrb r0, [r4, #13]	@ 000e8ec2 607b
.org 0xe8ec4
	lsls r0, r0, #2	@ 000e8ec4 8000
.org 0xe8ec6
	adds r0, r0, r1	@ 000e8ec6 4018
.org 0xe8ec8
	ldr r1, [r0, #0]	@ 000e8ec8 0168
.org 0xe8eca
	adds r0, r4, #0	@ 000e8eca 201c
.org 0xe8ecc
	bl 0x128f80	@ 000e8ecc 40f058f8
.org 0xe8ed0
	adds r0, r4, #0	@ 000e8ed0 201c
.org 0xe8ed2
	bl 0x1cff0	@ 000e8ed2 34f78df8
.org 0xe8ed6
	pop {r4}	@ 000e8ed6 10bc
.org 0xe8ed8
	pop {r0}	@ 000e8ed8 01bc
.org 0xe8eda
	bx r0	@ 000e8eda 0047
