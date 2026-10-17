@ FUN_08112a24  entry 0x08112a24  size 138
.thumb
.org 0x112a24
FUN_08112a24:
	push {r4, r5, r6, lr}	@ 00112a24 70b5
.org 0x112a26
	mov r6, r8	@ 00112a26 4646
.org 0x112a28
	push {r6}	@ 00112a28 40b4
.org 0x112a2a
	adds r5, r0, #0	@ 00112a2a 051c
.org 0x112a2c
	ldr r0, [pc, #128]	@ 00112a2c 2048
.org 0x112a2e
	adds r1, r5, r0	@ 00112a2e 2918
.org 0x112a30
	ldr r6, [pc, #128]	@ 00112a30 204e
.org 0x112a32
	ldrh r0, [r6, #0]	@ 00112a32 3088
.org 0x112a34
	str r0, [r1, #0]	@ 00112a34 0860
.org 0x112a36
	bl 0x6d3c	@ 00112a36 f4f681f9
.org 0x112a3a
	ldr r4, [pc, #124]	@ 00112a3a 1f4c
.org 0x112a3c
	movs r2, #247	@ 00112a3c f722
.org 0x112a3e
	lsls r2, r2, #5	@ 00112a3e 5201
.org 0x112a40
	adds r1, r5, r2	@ 00112a40 a918
.org 0x112a42
	movs r0, #0	@ 00112a42 0020
.org 0x112a44
	mov r8, r0	@ 00112a44 8046
.org 0x112a46
	adds r0, r4, #0	@ 00112a46 201c
.org 0x112a48
	movs r2, #0	@ 00112a48 0022
.org 0x112a4a
	bl 0x128be0	@ 00112a4a 16f0c9f8
.org 0x112a4e
	movs r2, #247	@ 00112a4e f722
.org 0x112a50
	lsls r2, r2, #5	@ 00112a50 5201
.org 0x112a52
	adds r1, r5, r2	@ 00112a52 a918
.org 0x112a54
	ldr r2, [pc, #100]	@ 00112a54 194a
.org 0x112a56
	adds r0, r4, #0	@ 00112a56 201c
.org 0x112a58
	bl 0x128be4	@ 00112a58 16f0c4f8
.org 0x112a5c
	mov r0, r8	@ 00112a5c 4046
.org 0x112a5e
	strh r0, [r4, #0]	@ 00112a5e 2080
.org 0x112a60
	ldr r4, [pc, #92]	@ 00112a60 174c
.org 0x112a62
	ldr r2, [pc, #96]	@ 00112a62 184a
.org 0x112a64
	adds r1, r5, r2	@ 00112a64 a918
.org 0x112a66
	adds r0, r4, #0	@ 00112a66 201c
.org 0x112a68
	movs r2, #0	@ 00112a68 0022
.org 0x112a6a
	bl 0x128be0	@ 00112a6a 16f0b9f8
.org 0x112a6e
	ldr r0, [pc, #84]	@ 00112a6e 1548
.org 0x112a70
	adds r1, r5, r0	@ 00112a70 2918
.org 0x112a72
	ldr r2, [pc, #84]	@ 00112a72 154a
.org 0x112a74
	adds r0, r4, #0	@ 00112a74 201c
.org 0x112a76
	bl 0x128be4	@ 00112a76 16f0b5f8
.org 0x112a7a
	mov r2, r8	@ 00112a7a 4246
.org 0x112a7c
	strh r2, [r4, #0]	@ 00112a7c 2280
.org 0x112a7e
	movs r0, #255	@ 00112a7e ff20
.org 0x112a80
	strb r0, [r4, #14]	@ 00112a80 a073
.org 0x112a82
	ldr r0, [pc, #72]	@ 00112a82 1248
.org 0x112a84
	ldr r2, [pc, #72]	@ 00112a84 124a
.org 0x112a86
	adds r1, r5, r2	@ 00112a86 a918
.org 0x112a88
	movs r2, #128	@ 00112a88 8022
.org 0x112a8a
	lsls r2, r2, #5	@ 00112a8a 5201
.org 0x112a8c
	bl 0x128be0	@ 00112a8c 16f0a8f8
.org 0x112a90
	movs r0, #128	@ 00112a90 8020
.org 0x112a92
	lsls r0, r0, #2	@ 00112a92 8000
.org 0x112a94
	adds r6, r6, r0	@ 00112a94 3618
.org 0x112a96
	ldr r2, [pc, #60]	@ 00112a96 0f4a
.org 0x112a98
	adds r5, r5, r2	@ 00112a98 ad18
.org 0x112a9a
	adds r0, r6, #0	@ 00112a9a 301c
.org 0x112a9c
	adds r1, r5, #0	@ 00112a9c 291c
.org 0x112a9e
	movs r2, #128	@ 00112a9e 8022
.org 0x112aa0
	bl 0x128be0	@ 00112aa0 16f09ef8
.org 0x112aa4
	pop {r3}	@ 00112aa4 08bc
.org 0x112aa6
	mov r8, r3	@ 00112aa6 9846
.org 0x112aa8
	pop {r4, r5, r6}	@ 00112aa8 70bc
.org 0x112aaa
	pop {r0}	@ 00112aaa 01bc
.org 0x112aac
	bx r0	@ 00112aac 0047
