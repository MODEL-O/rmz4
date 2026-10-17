@ FUN_080e7ea8  entry 0x080e7ea8  size 32
.thumb
.org 0xe7ea8
FUN_080e7ea8:
	push {r4, lr}	@ 000e7ea8 10b5
.org 0xe7eaa
	adds r4, r0, #0	@ 000e7eaa 041c
.org 0xe7eac
	ldr r1, [pc, #24]	@ 000e7eac 0649
.org 0xe7eae
	ldrb r0, [r4, #13]	@ 000e7eae 607b
.org 0xe7eb0
	lsls r0, r0, #2	@ 000e7eb0 8000
.org 0xe7eb2
	adds r0, r0, r1	@ 000e7eb2 4018
.org 0xe7eb4
	ldr r1, [r0, #0]	@ 000e7eb4 0168
.org 0xe7eb6
	adds r0, r4, #0	@ 000e7eb6 201c
.org 0xe7eb8
	bl 0x128f80	@ 000e7eb8 41f062f8
.org 0xe7ebc
	adds r0, r4, #0	@ 000e7ebc 201c
.org 0xe7ebe
	bl 0x1cff0	@ 000e7ebe 35f797f8
.org 0xe7ec2
	pop {r4}	@ 000e7ec2 10bc
.org 0xe7ec4
	pop {r0}	@ 000e7ec4 01bc
.org 0xe7ec6
	bx r0	@ 000e7ec6 0047
