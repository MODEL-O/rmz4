@ FUN_08127b30  entry 0x08127b30  size 150
.thumb
.org 0x127b30
FUN_08127b30:
	push {r4, r5, lr}	@ 00127b30 30b5
.org 0x127b32
	sub sp, #4	@ 00127b32 81b0
.org 0x127b34
	adds r5, r0, #0	@ 00127b34 051c
.org 0x127b36
	movs r3, #0	@ 00127b36 0023
.org 0x127b38
	str r3, [r5, #0]	@ 00127b38 2b60
.org 0x127b3a
	ldr r2, [pc, #140]	@ 00127b3a 234a
.org 0x127b3c
	ldr r0, [r2, #0]	@ 00127b3c 1068
.org 0x127b3e
	movs r1, #128	@ 00127b3e 8021
.org 0x127b40
	lsls r1, r1, #18	@ 00127b40 8904
.org 0x127b42
	ands r0, r1	@ 00127b42 0840
.org 0x127b44
	cmp r0, #0	@ 00127b44 0028
.org 0x127b46
	beq.n 0x127b4c	@ 00127b46 01d0
.org 0x127b48
	ldr r0, [pc, #128]	@ 00127b48 2048
.org 0x127b4a
	str r0, [r2, #0]	@ 00127b4a 1060
.org 0x127b4c
	ldr r1, [pc, #128]	@ 00127b4c 2049
.org 0x127b4e
	movs r2, #128	@ 00127b4e 8022
.org 0x127b50
	lsls r2, r2, #3	@ 00127b50 d200
.org 0x127b52
	adds r0, r2, #0	@ 00127b52 101c
.org 0x127b54
	strh r0, [r1, #0]	@ 00127b54 0880
.org 0x127b56
	subs r1, #66	@ 00127b56 4239
.org 0x127b58
	movs r0, #143	@ 00127b58 8f20
.org 0x127b5a
	strh r0, [r1, #0]	@ 00127b5a 0880
.org 0x127b5c
	subs r1, #2	@ 00127b5c 0239
.org 0x127b5e
	ldr r2, [pc, #116]	@ 00127b5e 1d4a
.org 0x127b60
	adds r0, r2, #0	@ 00127b60 101c
.org 0x127b62
	strh r0, [r1, #0]	@ 00127b62 0880
.org 0x127b64
	ldr r2, [pc, #112]	@ 00127b64 1c4a
.org 0x127b66
	ldrb r1, [r2, #0]	@ 00127b66 1178
.org 0x127b68
	movs r0, #63	@ 00127b68 3f20
.org 0x127b6a
	ands r0, r1	@ 00127b6a 0840
.org 0x127b6c
	movs r1, #64	@ 00127b6c 4021
.org 0x127b6e
	orrs r0, r1	@ 00127b6e 0843
.org 0x127b70
	strb r0, [r2, #0]	@ 00127b70 1070
.org 0x127b72
	ldr r1, [pc, #104]	@ 00127b72 1a49
.org 0x127b74
	movs r2, #212	@ 00127b74 d422
.org 0x127b76
	lsls r2, r2, #2	@ 00127b76 9200
.org 0x127b78
	adds r0, r5, r2	@ 00127b78 a818
.org 0x127b7a
	str r0, [r1, #0]	@ 00127b7a 0860
.org 0x127b7c
	adds r1, #4	@ 00127b7c 0431
.org 0x127b7e
	ldr r0, [pc, #96]	@ 00127b7e 1848
.org 0x127b80
	str r0, [r1, #0]	@ 00127b80 0860
.org 0x127b82
	ldr r0, [pc, #96]	@ 00127b82 1848
.org 0x127b84
	str r5, [r0, #0]	@ 00127b84 0560
.org 0x127b86
	str r3, [sp, #0]	@ 00127b86 0093
.org 0x127b88
	ldr r2, [pc, #92]	@ 00127b88 174a
.org 0x127b8a
	mov r0, sp	@ 00127b8a 6846
.org 0x127b8c
	adds r1, r5, #0	@ 00127b8c 291c
.org 0x127b8e
	bl 0x128be4	@ 00127b8e 01f029f8
.org 0x127b92
	movs r0, #8	@ 00127b92 0820
.org 0x127b94
	strb r0, [r5, #6]	@ 00127b94 a871
.org 0x127b96
	movs r0, #15	@ 00127b96 0f20
.org 0x127b98
	strb r0, [r5, #7]	@ 00127b98 e871
.org 0x127b9a
	ldr r0, [pc, #80]	@ 00127b9a 1448
.org 0x127b9c
	str r0, [r5, #56]	@ 00127b9c a863
.org 0x127b9e
	ldr r0, [pc, #80]	@ 00127b9e 1448
.org 0x127ba0
	str r0, [r5, #40]	@ 00127ba0 a862
.org 0x127ba2
	str r0, [r5, #44]	@ 00127ba2 e862
.org 0x127ba4
	str r0, [r5, #48]	@ 00127ba4 2863
.org 0x127ba6
	str r0, [r5, #60]	@ 00127ba6 e863
.org 0x127ba8
	ldr r4, [pc, #72]	@ 00127ba8 124c
.org 0x127baa
	adds r0, r4, #0	@ 00127baa 201c
.org 0x127bac
	bl 0x126f20	@ 00127bac fff7b8f9
.org 0x127bb0
	str r4, [r5, #52]	@ 00127bb0 6c63
.org 0x127bb2
	movs r0, #128	@ 00127bb2 8020
.org 0x127bb4
	lsls r0, r0, #11	@ 00127bb4 c002
.org 0x127bb6
	bl 0x127bfc	@ 00127bb6 00f021f8
.org 0x127bba
	ldr r0, [pc, #60]	@ 00127bba 0f48
.org 0x127bbc
	str r0, [r5, #0]	@ 00127bbc 2860
.org 0x127bbe
	add sp, #4	@ 00127bbe 01b0
.org 0x127bc0
	pop {r4, r5}	@ 00127bc0 30bc
.org 0x127bc2
	pop {r0}	@ 00127bc2 01bc
.org 0x127bc4
	bx r0	@ 00127bc4 0047
