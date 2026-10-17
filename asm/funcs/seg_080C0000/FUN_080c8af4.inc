@ FUN_080c8af4  entry 0x080c8af4  size 148
.thumb
.org 0xc8af4
FUN_080c8af4:
	push {r4, r5, lr}	@ 000c8af4 30b5
.org 0xc8af6
	adds r4, r0, #0	@ 000c8af6 041c
.org 0xc8af8
	ldr r5, [r4, #40]	@ 000c8af8 a56a
.org 0xc8afa
	bl 0x1cc9c	@ 000c8afa 54f7cff8
.org 0xc8afe
	ldrb r1, [r4, #10]	@ 000c8afe a17a
.org 0xc8b00
	movs r0, #254	@ 000c8b00 fe20
.org 0xc8b02
	ands r0, r1	@ 000c8b02 0840
.org 0xc8b04
	movs r1, #2	@ 000c8b04 0221
.org 0xc8b06
	orrs r0, r1	@ 000c8b06 0843
.org 0xc8b08
	strb r0, [r4, #10]	@ 000c8b08 a072
.org 0xc8b0a
	ldr r2, [pc, #124]	@ 000c8b0a 1f4a
.org 0xc8b0c
	ldr r1, [r2, #0]	@ 000c8b0c 1168
.org 0xc8b0e
	ldr r0, [pc, #124]	@ 000c8b0e 1f48
.org 0xc8b10
	muls r0, r1	@ 000c8b10 4843
.org 0xc8b12
	ldr r1, [pc, #124]	@ 000c8b12 1f49
.org 0xc8b14
	adds r0, r0, r1	@ 000c8b14 4018
.org 0xc8b16
	lsls r0, r0, #1	@ 000c8b16 4000
.org 0xc8b18
	lsrs r1, r0, #1	@ 000c8b18 4108
.org 0xc8b1a
	str r1, [r2, #0]	@ 000c8b1a 1160
.org 0xc8b1c
	lsrs r0, r0, #17	@ 000c8b1c 400c
.org 0xc8b1e
	movs r1, #12	@ 000c8b1e 0c21
.org 0xc8b20
	bl 0x129198	@ 000c8b20 60f03afb
.org 0xc8b24
	adds r1, r0, #0	@ 000c8b24 011c
.org 0xc8b26
	movs r0, #216	@ 000c8b26 d820
.org 0xc8b28
	lsls r0, r0, #7	@ 000c8b28 c001
.org 0xc8b2a
	adds r1, r1, r0	@ 000c8b2a 0918
.org 0xc8b2c
	lsls r1, r1, #16	@ 000c8b2c 0904
.org 0xc8b2e
	lsrs r1, r1, #16	@ 000c8b2e 090c
.org 0xc8b30
	adds r0, r4, #0	@ 000c8b30 201c
.org 0xc8b32
	bl 0x1cf00	@ 000c8b32 54f7e5f9
.org 0xc8b36
	adds r0, r4, #0	@ 000c8b36 201c
.org 0xc8b38
	bl 0x1cff0	@ 000c8b38 54f75afa
.org 0xc8b3c
	movs r2, #0	@ 000c8b3c 0022
.org 0xc8b3e
	ldrb r1, [r4, #10]	@ 000c8b3e a17a
.org 0xc8b40
	movs r0, #239	@ 000c8b40 ef20
.org 0xc8b42
	ands r0, r1	@ 000c8b42 0840
.org 0xc8b44
	strb r0, [r4, #10]	@ 000c8b44 a072
.org 0xc8b46
	movs r3, #1	@ 000c8b46 0123
.org 0xc8b48
	adds r0, r4, #0	@ 000c8b48 201c
.org 0xc8b4a
	adds r0, #76	@ 000c8b4a 4c30
.org 0xc8b4c
	strb r2, [r0, #0]	@ 000c8b4c 0270
.org 0xc8b4e
	movs r1, #74	@ 000c8b4e 4a21
.org 0xc8b50
	adds r1, r1, r4	@ 000c8b50 0919
.org 0xc8b52
	mov ip, r1	@ 000c8b52 8c46
.org 0xc8b54
	ldrb r1, [r1, #0]	@ 000c8b54 0978
.org 0xc8b56
	movs r0, #17	@ 000c8b56 1120
.org 0xc8b58
	negs r0, r0	@ 000c8b58 4042
.org 0xc8b5a
	ands r0, r1	@ 000c8b5a 0840
.org 0xc8b5c
	mov r1, ip	@ 000c8b5c 6146
.org 0xc8b5e
	strb r0, [r1, #0]	@ 000c8b5e 0870
.org 0xc8b60
	ldr r0, [r5, #84]	@ 000c8b60 686d
.org 0xc8b62
	str r0, [r4, #84]	@ 000c8b62 6065
.org 0xc8b64
	adds r5, #188	@ 000c8b64 bc35
.org 0xc8b66
	ldr r0, [r5, #0]	@ 000c8b66 2868
.org 0xc8b68
	str r0, [r4, #88]	@ 000c8b68 a065
.org 0xc8b6a
	strb r2, [r4, #18]	@ 000c8b6a a274
.org 0xc8b6c
	ldr r1, [pc, #36]	@ 000c8b6c 0949
.org 0xc8b6e
	ldrb r0, [r4, #9]	@ 000c8b6e 607a
.org 0xc8b70
	lsls r0, r0, #2	@ 000c8b70 8000
.org 0xc8b72
	adds r0, r0, r1	@ 000c8b72 4018
.org 0xc8b74
	str r3, [r4, #12]	@ 000c8b74 e360
.org 0xc8b76
	ldr r0, [r0, #0]	@ 000c8b76 0068
.org 0xc8b78
	ldr r0, [r0, #4]	@ 000c8b78 4068
.org 0xc8b7a
	str r0, [r4, #20]	@ 000c8b7a 6061
.org 0xc8b7c
	adds r0, r4, #0	@ 000c8b7c 201c
.org 0xc8b7e
	bl 0xc88a4	@ 000c8b7e fff791fe
.org 0xc8b82
	pop {r4, r5}	@ 000c8b82 30bc
.org 0xc8b84
	pop {r0}	@ 000c8b84 01bc
.org 0xc8b86
	bx r0	@ 000c8b86 0047
