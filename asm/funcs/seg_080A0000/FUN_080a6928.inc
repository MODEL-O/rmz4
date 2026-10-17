@ FUN_080a6928  entry 0x080a6928  size 38
.thumb
.org 0xa6928
FUN_080a6928:
	push {r4, lr}	@ 000a6928 10b5
.org 0xa692a
	adds r4, r0, #0	@ 000a692a 041c
.org 0xa692c
	ldr r0, [r4, #44]	@ 000a692c e06a
.org 0xa692e
	bl 0x2b3e4	@ 000a692e 84f759fd
.org 0xa6932
	cmp r0, #0	@ 000a6932 0028
.org 0xa6934
	beq.n 0xa6948	@ 000a6934 08d0
.org 0xa6936
	adds r0, r4, #0	@ 000a6936 201c
.org 0xa6938
	adds r0, #116	@ 000a6938 7430
.org 0xa693a
	ldr r1, [pc, #20]	@ 000a693a 0549
.org 0xa693c
	bl 0x5784	@ 000a693c 5ef722ff
.org 0xa6940
	movs r0, #0	@ 000a6940 0020
.org 0xa6942
	str r0, [r4, #44]	@ 000a6942 e062
.org 0xa6944
	strb r0, [r4, #13]	@ 000a6944 6073
.org 0xa6946
	strb r0, [r4, #14]	@ 000a6946 a073
.org 0xa6948
	pop {r4}	@ 000a6948 10bc
.org 0xa694a
	pop {r0}	@ 000a694a 01bc
.org 0xa694c
	bx r0	@ 000a694c 0047
