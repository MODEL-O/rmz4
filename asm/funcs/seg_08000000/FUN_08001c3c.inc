@ FUN_08001c3c  entry 0x08001c3c  size 222
.thumb
.org 0x1c3c
FUN_08001c3c:
	push {r4, r5, r6, r7, lr}	@ 00001c3c f0b5
.org 0x1c3e
	sub sp, #4	@ 00001c3e 81b0
.org 0x1c40
	ldr r3, [pc, #132]	@ 00001c40 214b
.org 0x1c42
	ldr r5, [r3, #0]	@ 00001c42 1d68
.org 0x1c44
	adds r0, r3, #0	@ 00001c44 181c
.org 0x1c46
	adds r0, #200	@ 00001c46 c830
.org 0x1c48
	ldr r4, [r0, #0]	@ 00001c48 0468
.org 0x1c4a
	cmp r4, #0	@ 00001c4a 002c
.org 0x1c4c
	beq.n 0x1c88	@ 00001c4c 1cd0
.org 0x1c4e
	ldr r1, [pc, #124]	@ 00001c4e 1f49
.org 0x1c50
	str r4, [r1, #0]	@ 00001c50 0c60
.org 0x1c52
	adds r0, #4	@ 00001c52 0430
.org 0x1c54
	ldr r0, [r0, #0]	@ 00001c54 0068
.org 0x1c56
	movs r2, #192	@ 00001c56 c022
.org 0x1c58
	lsls r2, r2, #19	@ 00001c58 d204
.org 0x1c5a
	adds r0, r0, r2	@ 00001c5a 8018
.org 0x1c5c
	str r0, [r1, #4]	@ 00001c5c 4860
.org 0x1c5e
	adds r0, r3, #0	@ 00001c5e 181c
.org 0x1c60
	adds r0, #196	@ 00001c60 c430
.org 0x1c62
	ldr r2, [r0, #0]	@ 00001c62 0268
.org 0x1c64
	lsrs r2, r2, #2	@ 00001c64 9208
.org 0x1c66
	movs r0, #132	@ 00001c66 8420
.org 0x1c68
	lsls r0, r0, #24	@ 00001c68 0006
.org 0x1c6a
	orrs r0, r2	@ 00001c6a 1043
.org 0x1c6c
	str r0, [r1, #8]	@ 00001c6c 8860
.org 0x1c6e
	ldr r0, [r1, #8]	@ 00001c6e 8868
.org 0x1c70
	adds r0, r3, #0	@ 00001c70 181c
.org 0x1c72
	adds r0, #208	@ 00001c72 d030
.org 0x1c74
	ldr r0, [r0, #0]	@ 00001c74 0068
.org 0x1c76
	str r0, [sp, #0]	@ 00001c76 0090
.org 0x1c78
	mov r3, sp	@ 00001c78 6b46
.org 0x1c7a
	str r3, [r1, #0]	@ 00001c7a 0b60
.org 0x1c7c
	str r4, [r1, #4]	@ 00001c7c 4c60
.org 0x1c7e
	movs r0, #133	@ 00001c7e 8520
.org 0x1c80
	lsls r0, r0, #24	@ 00001c80 0006
.org 0x1c82
	orrs r0, r2	@ 00001c82 1043
.org 0x1c84
	str r0, [r1, #8]	@ 00001c84 8860
.org 0x1c86
	ldr r0, [r1, #8]	@ 00001c86 8868
.org 0x1c88
	cmp r5, #0	@ 00001c88 002d
.org 0x1c8a
	beq.n 0x1d1e	@ 00001c8a 48d0
.org 0x1c8c
	ldr r7, [pc, #64]	@ 00001c8c 104f
.org 0x1c8e
	lsls r0, r5, #1	@ 00001c8e 6800
.org 0x1c90
	adds r0, r0, r5	@ 00001c90 4019
.org 0x1c92
	lsls r6, r0, #2	@ 00001c92 8600
.org 0x1c94
	subs r6, #12	@ 00001c94 0c3e
.org 0x1c96
	subs r5, #1	@ 00001c96 013d
.org 0x1c98
	ldr r0, [pc, #56]	@ 00001c98 0e48
.org 0x1c9a
	adds r3, r6, r0	@ 00001c9a 3318
.org 0x1c9c
	ldrb r0, [r3, #0]	@ 00001c9c 1878
.org 0x1c9e
	lsls r0, r0, #30	@ 00001c9e 8007
.org 0x1ca0
	lsrs r0, r0, #30	@ 00001ca0 800f
.org 0x1ca2
	cmp r0, #0	@ 00001ca2 0028
.org 0x1ca4
	beq.n 0x1d12	@ 00001ca4 35d0
.org 0x1ca6
	cmp r0, #1	@ 00001ca6 0128
.org 0x1ca8
	bne.n 0x1cf0	@ 00001ca8 22d1
.org 0x1caa
	ldr r0, [r3, #0]	@ 00001caa 1868
.org 0x1cac
	lsrs r2, r0, #2	@ 00001cac 8208
.org 0x1cae
	cmp r2, #31	@ 00001cae 1f2a
.org 0x1cb0
	bgt.n 0x1cd8	@ 00001cb0 12dc
.org 0x1cb2
	ldr r0, [r3, #8]	@ 00001cb2 9868
.org 0x1cb4
	ldr r1, [r3, #4]	@ 00001cb4 5968
.org 0x1cb6
	movs r3, #192	@ 00001cb6 c023
.org 0x1cb8
	lsls r3, r3, #19	@ 00001cb8 db04
.org 0x1cba
	adds r1, r1, r3	@ 00001cba c918
.org 0x1cbc
	lsrs r2, r2, #1	@ 00001cbc 5208
.org 0x1cbe
	ands r2, r7	@ 00001cbe 3a40
.org 0x1cc0
	bl 0x128be4	@ 00001cc0 26f190ff
.org 0x1cc4
	b.n 0x1d1a	@ 00001cc4 29e0
.org 0x1cc6
	.byte 0x00	@ 00001cc6 data
.org 0x1cc7
	.byte 0x00	@ 00001cc7 data
.org 0x1cc8
	.byte 0xc0,0x07,0x00,0x02	@ 00001cc8 data
.org 0x1ccc
	.byte 0xd4,0x00,0x00,0x04	@ 00001ccc data
.org 0x1cd0
	.byte 0xff,0xff,0x1f,0x00	@ 00001cd0 data
.org 0x1cd4
	.byte 0xc4,0x07,0x00,0x02	@ 00001cd4 data
.org 0x1cd8
	ldr r4, [r3, #8]	@ 00001cd8 9c68
.org 0x1cda
	ldr r0, [r3, #4]	@ 00001cda 5868
.org 0x1cdc
	movs r3, #192	@ 00001cdc c023
.org 0x1cde
	lsls r3, r3, #19	@ 00001cde db04
.org 0x1ce0
	adds r1, r0, r3	@ 00001ce0 c118
.org 0x1ce2
	adds r0, r2, #0	@ 00001ce2 101c
.org 0x1ce4
	asrs r2, r0, #2	@ 00001ce4 8210
.org 0x1ce6
	ands r2, r7	@ 00001ce6 3a40
.org 0x1ce8
	adds r0, r4, #0	@ 00001ce8 201c
.org 0x1cea
	bl 0x128be0	@ 00001cea 26f179ff
.org 0x1cee
	b.n 0x1d1a	@ 00001cee 14e0
.org 0x1cf0
	ldr r0, [r3, #8]	@ 00001cf0 9868
.org 0x1cf2
	str r0, [sp, #0]	@ 00001cf2 0090
.org 0x1cf4
	ldr r0, [r3, #4]	@ 00001cf4 5868
.org 0x1cf6
	movs r2, #192	@ 00001cf6 c022
.org 0x1cf8
	lsls r2, r2, #19	@ 00001cf8 d204
.org 0x1cfa
	adds r1, r0, r2	@ 00001cfa 8118
.org 0x1cfc
	ldr r0, [r3, #0]	@ 00001cfc 1868
.org 0x1cfe
	lsrs r0, r0, #2	@ 00001cfe 8008
.org 0x1d00
	asrs r2, r0, #2	@ 00001d00 8210
.org 0x1d02
	ands r2, r7	@ 00001d02 3a40
.org 0x1d04
	movs r0, #128	@ 00001d04 8020
.org 0x1d06
	lsls r0, r0, #17	@ 00001d06 4004
.org 0x1d08
	orrs r2, r0	@ 00001d08 0243
.org 0x1d0a
	mov r0, sp	@ 00001d0a 6846
.org 0x1d0c
	bl 0x128be0	@ 00001d0c 26f168ff
.org 0x1d10
	b.n 0x1d1a	@ 00001d10 03e0
.org 0x1d12
	ldr r0, [r3, #8]	@ 00001d12 9868
.org 0x1d14
	ldr r1, [r3, #4]	@ 00001d14 5968
.org 0x1d16
	bl 0x1d30	@ 00001d16 00f00bf8
