@ FUN_08000a10  entry 0x08000a10  size 68
.thumb
.org 0xa10
FUN_08000a10:
	sub sp, #4	@ 00000a10 81b0
.org 0xa12
	ldr r1, [pc, #64]	@ 00000a12 1049
.org 0xa14
	ldr r2, [pc, #64]	@ 00000a14 104a
.org 0xa16
	adds r0, r2, #0	@ 00000a16 101c
.org 0xa18
	strh r0, [r1, #0]	@ 00000a18 0880
.org 0xa1a
	movs r2, #0	@ 00000a1a 0022
.org 0xa1c
	str r2, [sp, #0]	@ 00000a1c 0092
.org 0xa1e
	ldr r0, [pc, #60]	@ 00000a1e 0f48
.org 0xa20
	mov r3, sp	@ 00000a20 6b46
.org 0xa22
	str r3, [r0, #0]	@ 00000a22 0360
.org 0xa24
	movs r1, #192	@ 00000a24 c021
.org 0xa26
	lsls r1, r1, #18	@ 00000a26 8904
.org 0xa28
	str r1, [r0, #4]	@ 00000a28 4160
.org 0xa2a
	ldr r1, [pc, #52]	@ 00000a2a 0d49
.org 0xa2c
	str r1, [r0, #8]	@ 00000a2c 8160
.org 0xa2e
	ldr r1, [r0, #8]	@ 00000a2e 8168
.org 0xa30
	str r2, [sp, #0]	@ 00000a30 0092
.org 0xa32
	str r3, [r0, #0]	@ 00000a32 0360
.org 0xa34
	movs r1, #128	@ 00000a34 8021
.org 0xa36
	lsls r1, r1, #18	@ 00000a36 8904
.org 0xa38
	str r1, [r0, #4]	@ 00000a38 4160
.org 0xa3a
	ldr r1, [pc, #40]	@ 00000a3a 0a49
.org 0xa3c
	str r1, [r0, #8]	@ 00000a3c 8160
.org 0xa3e
	ldr r0, [r0, #8]	@ 00000a3e 8068
.org 0xa40
	ldr r0, [pc, #36]	@ 00000a40 0948
.org 0xa42
	ldr r3, [pc, #40]	@ 00000a42 0a4b
.org 0xa44
	adds r1, r0, r3	@ 00000a44 c118
.org 0xa46
	strh r2, [r1, #0]	@ 00000a46 0a80
.org 0xa48
	movs r1, #144	@ 00000a48 9021
.org 0xa4a
	lsls r1, r1, #5	@ 00000a4a 4901
.org 0xa4c
	adds r0, r0, r1	@ 00000a4c 4018
.org 0xa4e
	strh r2, [r0, #0]	@ 00000a4e 0280
.org 0xa50
	add sp, #4	@ 00000a50 01b0
.org 0xa52
	bx lr	@ 00000a52 7047
