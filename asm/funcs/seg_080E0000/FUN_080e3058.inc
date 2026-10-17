@ FUN_080e3058  entry 0x080e3058  size 52
.thumb
.org 0xe3058
FUN_080e3058:
	push {r4, lr}	@ 000e3058 10b5
.org 0xe305a
	adds r4, r0, #0	@ 000e305a 041c
.org 0xe305c
	bl 0x1cff0	@ 000e305c 39f7c8ff
.org 0xe3060
	ldrb r0, [r4, #18]	@ 000e3060 a07c
.org 0xe3062
	subs r0, #1	@ 000e3062 0138
.org 0xe3064
	strb r0, [r4, #18]	@ 000e3064 a074
.org 0xe3066
	lsls r0, r0, #24	@ 000e3066 0006
.org 0xe3068
	lsrs r0, r0, #24	@ 000e3068 000e
.org 0xe306a
	cmp r0, #255	@ 000e306a ff28
.org 0xe306c
	bne.n 0xe3086	@ 000e306c 0bd1
.org 0xe306e
	ldr r1, [pc, #28]	@ 000e306e 0749
.org 0xe3070
	ldrb r0, [r4, #9]	@ 000e3070 607a
.org 0xe3072
	lsls r0, r0, #2	@ 000e3072 8000
.org 0xe3074
	adds r0, r0, r1	@ 000e3074 4018
.org 0xe3076
	movs r1, #2	@ 000e3076 0221
.org 0xe3078
	str r1, [r4, #12]	@ 000e3078 e160
.org 0xe307a
	ldr r0, [r0, #0]	@ 000e307a 0068
.org 0xe307c
	ldr r0, [r0, #8]	@ 000e307c 8068
.org 0xe307e
	str r0, [r4, #20]	@ 000e307e 6061
.org 0xe3080
	adds r0, r4, #0	@ 000e3080 201c
.org 0xe3082
	bl 0xe2f14	@ 000e3082 fff747ff
.org 0xe3086
	pop {r4}	@ 000e3086 10bc
.org 0xe3088
	pop {r0}	@ 000e3088 01bc
.org 0xe308a
	bx r0	@ 000e308a 0047
