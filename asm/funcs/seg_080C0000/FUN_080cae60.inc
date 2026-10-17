@ FUN_080cae60  entry 0x080cae60  size 78
.thumb
.org 0xcae60
FUN_080cae60:
	push {lr}	@ 000cae60 00b5
.org 0xcae62
	ldr r2, [r0, #44]	@ 000cae62 c26a
.org 0xcae64
	ldr r0, [r0, #12]	@ 000cae64 c068
.org 0xcae66
	ldr r0, [r0, #44]	@ 000cae66 c06a
.org 0xcae68
	ldrb r0, [r0, #8]	@ 000cae68 007a
.org 0xcae6a
	lsls r0, r0, #24	@ 000cae6a 0006
.org 0xcae6c
	asrs r0, r0, #24	@ 000cae6c 0016
.org 0xcae6e
	cmp r0, #1	@ 000cae6e 0128
.org 0xcae70
	bne.n 0xcaeaa	@ 000cae70 1bd1
.org 0xcae72
	adds r3, r2, #0	@ 000cae72 131c
.org 0xcae74
	adds r3, #140	@ 000cae74 8c33
.org 0xcae76
	ldr r0, [r3, #0]	@ 000cae76 1868
.org 0xcae78
	movs r1, #128	@ 000cae78 8021
.org 0xcae7a
	lsls r1, r1, #1	@ 000cae7a 4900
.org 0xcae7c
	ands r0, r1	@ 000cae7c 0840
.org 0xcae7e
	cmp r0, #0	@ 000cae7e 0028
.org 0xcae80
	beq.n 0xcaeaa	@ 000cae80 13d0
.org 0xcae82
	ldr r1, [pc, #44]	@ 000cae82 0b49
.org 0xcae84
	ldrb r0, [r2, #9]	@ 000cae84 507a
.org 0xcae86
	lsls r0, r0, #2	@ 000cae86 8000
.org 0xcae88
	adds r0, r0, r1	@ 000cae88 4018
.org 0xcae8a
	movs r1, #2	@ 000cae8a 0221
.org 0xcae8c
	str r1, [r2, #12]	@ 000cae8c d160
.org 0xcae8e
	ldr r0, [r0, #0]	@ 000cae8e 0068
.org 0xcae90
	ldr r0, [r0, #8]	@ 000cae90 8068
.org 0xcae92
	str r0, [r2, #20]	@ 000cae92 5061
.org 0xcae94
	movs r1, #0	@ 000cae94 0021
.org 0xcae96
	str r1, [r3, #0]	@ 000cae96 1960
.org 0xcae98
	adds r0, r2, #0	@ 000cae98 101c
.org 0xcae9a
	adds r0, #144	@ 000cae9a 9030
.org 0xcae9c
	str r1, [r0, #0]	@ 000cae9c 0160
.org 0xcae9e
	adds r0, #4	@ 000cae9e 0430
.org 0xcaea0
	strb r1, [r0, #0]	@ 000caea0 0170
.org 0xcaea2
	ldrb r1, [r2, #10]	@ 000caea2 917a
.org 0xcaea4
	movs r0, #251	@ 000caea4 fb20
.org 0xcaea6
	ands r0, r1	@ 000caea6 0840
.org 0xcaea8
	strb r0, [r2, #10]	@ 000caea8 9072
.org 0xcaeaa
	pop {r0}	@ 000caeaa 01bc
.org 0xcaeac
	bx r0	@ 000caeac 0047
