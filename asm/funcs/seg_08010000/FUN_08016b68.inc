@ FUN_08016b68  entry 0x08016b68  size 124
.thumb
.org 0x16b68
FUN_08016b68:
	push {lr}	@ 00016b68 00b5
.org 0x16b6a
	ldr r1, [pc, #120]	@ 00016b6a 1e49
.org 0x16b6c
	ldr r0, [pc, #120]	@ 00016b6c 1e48
.org 0x16b6e
	adds r2, r1, r0	@ 00016b6e 0a18
.org 0x16b70
	movs r3, #0	@ 00016b70 0023
.org 0x16b72
	movs r0, #128	@ 00016b72 8020
.org 0x16b74
	strb r0, [r2, #0]	@ 00016b74 1070
.org 0x16b76
	ldr r2, [pc, #116]	@ 00016b76 1d4a
.org 0x16b78
	adds r0, r1, r2	@ 00016b78 8818
.org 0x16b7a
	strb r3, [r0, #0]	@ 00016b7a 0370
.org 0x16b7c
	adds r2, #4	@ 00016b7c 0432
.org 0x16b7e
	adds r0, r1, r2	@ 00016b7e 8818
.org 0x16b80
	strb r3, [r0, #0]	@ 00016b80 0370
.org 0x16b82
	ldr r0, [pc, #108]	@ 00016b82 1b48
.org 0x16b84
	adds r2, r1, r0	@ 00016b84 0a18
.org 0x16b86
	movs r0, #16	@ 00016b86 1020
.org 0x16b88
	strb r0, [r2, #0]	@ 00016b88 1070
.org 0x16b8a
	ldr r2, [pc, #104]	@ 00016b8a 1a4a
.org 0x16b8c
	adds r0, r1, r2	@ 00016b8c 8818
.org 0x16b8e
	strb r3, [r0, #0]	@ 00016b8e 0370
.org 0x16b90
	ldr r0, [pc, #100]	@ 00016b90 1948
.org 0x16b92
	adds r1, r1, r0	@ 00016b92 0918
.org 0x16b94
	movs r0, #120	@ 00016b94 7820
.org 0x16b96
	strh r0, [r1, #0]	@ 00016b96 0880
.org 0x16b98
	ldr r0, [pc, #96]	@ 00016b98 1848
.org 0x16b9a
	ldrb r1, [r0, #6]	@ 00016b9a 8179
.org 0x16b9c
	movs r0, #64	@ 00016b9c 4020
.org 0x16b9e
	ands r0, r1	@ 00016b9e 0840
.org 0x16ba0
	cmp r0, #0	@ 00016ba0 0028
.org 0x16ba2
	beq.n 0x16be0	@ 00016ba2 1dd0
.org 0x16ba4
	movs r0, #24	@ 00016ba4 1820
.org 0x16ba6
	movs r1, #7	@ 00016ba6 0721
.org 0x16ba8
	movs r2, #132	@ 00016ba8 8422
.org 0x16baa
	bl 0x74c0	@ 00016baa f0f789fc
.org 0x16bae
	movs r0, #25	@ 00016bae 1920
.org 0x16bb0
	movs r1, #7	@ 00016bb0 0721
.org 0x16bb2
	movs r2, #133	@ 00016bb2 8522
.org 0x16bb4
	bl 0x74c0	@ 00016bb4 f0f784fc
.org 0x16bb8
	movs r0, #28	@ 00016bb8 1c20
.org 0x16bba
	movs r1, #7	@ 00016bba 0721
.org 0x16bbc
	movs r2, #134	@ 00016bbc 8622
.org 0x16bbe
	bl 0x74c0	@ 00016bbe f0f77ffc
.org 0x16bc2
	movs r0, #29	@ 00016bc2 1d20
.org 0x16bc4
	movs r1, #7	@ 00016bc4 0721
.org 0x16bc6
	movs r2, #135	@ 00016bc6 8722
.org 0x16bc8
	bl 0x74c0	@ 00016bc8 f0f77afc
.org 0x16bcc
	movs r0, #30	@ 00016bcc 1e20
.org 0x16bce
	movs r1, #7	@ 00016bce 0721
.org 0x16bd0
	movs r2, #136	@ 00016bd0 8822
.org 0x16bd2
	bl 0x74c0	@ 00016bd2 f0f775fc
.org 0x16bd6
	movs r0, #31	@ 00016bd6 1f20
.org 0x16bd8
	movs r1, #7	@ 00016bd8 0721
.org 0x16bda
	movs r2, #137	@ 00016bda 8922
.org 0x16bdc
	bl 0x74c0	@ 00016bdc f0f770fc
.org 0x16be0
	pop {r0}	@ 00016be0 01bc
.org 0x16be2
	bx r0	@ 00016be2 0047
