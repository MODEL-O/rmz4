@ FUN_0809e058  entry 0x0809e058  size 50
.thumb
.org 0x9e058
FUN_0809e058:
	push {r4, r5, lr}	@ 0009e058 30b5
.org 0x9e05a
	adds r4, r0, #0	@ 0009e05a 041c
.org 0x9e05c
	adds r5, r4, #0	@ 0009e05c 251c
.org 0x9e05e
	adds r5, #192	@ 0009e05e c035
.org 0x9e060
	ldr r0, [r5, #0]	@ 0009e060 2868
.org 0x9e062
	bl 0x2b3e4	@ 0009e062 8df7bff9
.org 0x9e066
	cmp r0, #0	@ 0009e066 0028
.org 0x9e068
	beq.n 0x9e084	@ 0009e068 0cd0
.org 0x9e06a
	adds r0, r4, #0	@ 0009e06a 201c
.org 0x9e06c
	adds r0, #116	@ 0009e06c 7430
.org 0x9e06e
	ldr r1, [pc, #28]	@ 0009e06e 0749
.org 0x9e070
	bl 0x5784	@ 0009e070 67f788fb
.org 0x9e074
	movs r1, #0	@ 0009e074 0021
.org 0x9e076
	str r1, [r5, #0]	@ 0009e076 2960
.org 0x9e078
	movs r0, #4	@ 0009e078 0420
.org 0x9e07a
	strb r0, [r4, #13]	@ 0009e07a 6073
.org 0x9e07c
	strb r1, [r4, #14]	@ 0009e07c a173
.org 0x9e07e
	strb r1, [r4, #15]	@ 0009e07e e173
.org 0x9e080
	movs r0, #50	@ 0009e080 3220
.org 0x9e082
	strb r0, [r4, #18]	@ 0009e082 a074
.org 0x9e084
	pop {r4, r5}	@ 0009e084 30bc
.org 0x9e086
	pop {r0}	@ 0009e086 01bc
.org 0x9e088
	bx r0	@ 0009e088 0047
