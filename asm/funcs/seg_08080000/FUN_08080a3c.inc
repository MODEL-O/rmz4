@ FUN_08080a3c  entry 0x08080a3c  size 32
.thumb
.org 0x80a3c
FUN_08080a3c:
	push {r4, lr}	@ 00080a3c 10b5
.org 0x80a3e
	adds r4, r0, #0	@ 00080a3e 041c
.org 0x80a40
	ldr r1, [pc, #24]	@ 00080a40 0649
.org 0x80a42
	ldrb r0, [r4, #14]	@ 00080a42 a07b
.org 0x80a44
	lsls r0, r0, #2	@ 00080a44 8000
.org 0x80a46
	adds r0, r0, r1	@ 00080a46 4018
.org 0x80a48
	ldr r1, [r0, #0]	@ 00080a48 0168
.org 0x80a4a
	adds r0, r4, #0	@ 00080a4a 201c
.org 0x80a4c
	bl 0x128f80	@ 00080a4c a8f098fa
.org 0x80a50
	adds r0, r4, #0	@ 00080a50 201c
.org 0x80a52
	bl 0x81184	@ 00080a52 00f097fb
.org 0x80a56
	pop {r4}	@ 00080a56 10bc
.org 0x80a58
	pop {r0}	@ 00080a58 01bc
.org 0x80a5a
	bx r0	@ 00080a5a 0047
