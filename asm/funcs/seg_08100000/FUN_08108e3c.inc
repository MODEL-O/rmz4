@ FUN_08108e3c  entry 0x08108e3c  size 46
.thumb
.org 0x108e3c
FUN_08108e3c:
	push {r4, r5, lr}	@ 00108e3c 30b5
.org 0x108e3e
	sub sp, #8	@ 00108e3e 82b0
.org 0x108e40
	adds r4, r0, #0	@ 00108e40 041c
.org 0x108e42
	ldr r0, [pc, #40]	@ 00108e42 0a48
.org 0x108e44
	str r4, [r0, #0]	@ 00108e44 0460
.org 0x108e46
	movs r5, #0	@ 00108e46 0025
.org 0x108e48
	str r5, [sp, #0]	@ 00108e48 0095
.org 0x108e4a
	movs r2, #128	@ 00108e4a 8022
.org 0x108e4c
	lsls r2, r2, #17	@ 00108e4c 5204
.org 0x108e4e
	mov r0, sp	@ 00108e4e 6846
.org 0x108e50
	adds r1, r4, #0	@ 00108e50 211c
.org 0x108e52
	bl 0x128be0	@ 00108e52 1ff0c5fe
.org 0x108e56
	str r5, [sp, #4]	@ 00108e56 0195
.org 0x108e58
	add r0, sp, #4	@ 00108e58 01a8
.org 0x108e5a
	ldr r2, [pc, #20]	@ 00108e5a 054a
.org 0x108e5c
	adds r1, r4, #0	@ 00108e5c 211c
.org 0x108e5e
	bl 0x128be4	@ 00108e5e 1ff0c1fe
.org 0x108e62
	add sp, #8	@ 00108e62 02b0
.org 0x108e64
	pop {r4, r5}	@ 00108e64 30bc
.org 0x108e66
	pop {r0}	@ 00108e66 01bc
.org 0x108e68
	bx r0	@ 00108e68 0047
