@ FUN_08122d34  entry 0x08122d34  size 222
.thumb
.org 0x122d34
FUN_08122d34:
	push {r4, r5, r6, r7, lr}	@ 00122d34 f0b5
.org 0x122d36
	mov r7, r9	@ 00122d36 4f46
.org 0x122d38
	mov r6, r8	@ 00122d38 4646
.org 0x122d3a
	push {r6, r7}	@ 00122d3a c0b4
.org 0x122d3c
	sub sp, #4	@ 00122d3c 81b0
.org 0x122d3e
	ldr r1, [pc, #56]	@ 00122d3e 0e49
.org 0x122d40
	movs r0, #0	@ 00122d40 0020
.org 0x122d42
	strb r0, [r1, #0]	@ 00122d42 0870
.org 0x122d44
	movs r5, #0	@ 00122d44 0025
.org 0x122d46
	adds r3, r1, #0	@ 00122d46 0b1c
.org 0x122d48
	ldr r0, [pc, #48]	@ 00122d48 0c48
.org 0x122d4a
	mov r8, r0	@ 00122d4a 8046
.org 0x122d4c
	movs r1, #164	@ 00122d4c a421
.org 0x122d4e
	negs r1, r1	@ 00122d4e 4942
.org 0x122d50
	add r1, r8	@ 00122d50 4144
.org 0x122d52
	mov r9, r1	@ 00122d52 8946
.org 0x122d54
	adds r0, r5, #0	@ 00122d54 281c
.org 0x122d56
	movs r1, #166	@ 00122d56 a621
.org 0x122d58
	lsls r1, r1, #1	@ 00122d58 4900
.org 0x122d5a
	str r3, [sp, #0]	@ 00122d5a 0093
.org 0x122d5c
	bl 0x1594	@ 00122d5c def61afc
.org 0x122d60
	adds r1, r0, #0	@ 00122d60 011c
.org 0x122d62
	ldr r3, [sp, #0]	@ 00122d62 009b
.org 0x122d64
	cmp r1, #0	@ 00122d64 0029
.org 0x122d66
	bne.n 0x122d80	@ 00122d66 0bd1
.org 0x122d68
	lsls r0, r5, #1	@ 00122d68 6800
.org 0x122d6a
	adds r0, r0, r5	@ 00122d6a 4019
.org 0x122d6c
	lsls r0, r0, #2	@ 00122d6c 8000
.org 0x122d6e
	adds r0, r0, r3	@ 00122d6e c018
.org 0x122d70
	strb r1, [r0, #14]	@ 00122d70 8173
.org 0x122d72
	adds r6, r5, #1	@ 00122d72 6e1c
.org 0x122d74
	b.n 0x122e10	@ 00122d74 4ce0
.org 0x122d76
	.byte 0x00	@ 00122d76 data
.org 0x122d77
	.byte 0x00	@ 00122d77 data
.org 0x122d78
	.byte 0x80,0xc7,0x03,0x02	@ 00122d78 data
.org 0x122d7c
	.byte 0x64,0xc8,0x03,0x02	@ 00122d7c data
.org 0x122d80
	lsls r4, r5, #1	@ 00122d80 6c00
.org 0x122d82
	adds r0, r4, r5	@ 00122d82 6019
.org 0x122d84
	lsls r0, r0, #2	@ 00122d84 8000
.org 0x122d86
	adds r6, r0, r3	@ 00122d86 c618
.org 0x122d88
	movs r0, #1	@ 00122d88 0120
.org 0x122d8a
	strb r0, [r6, #14]	@ 00122d8a b073
.org 0x122d8c
	adds r0, r5, #0	@ 00122d8c 281c
.org 0x122d8e
	ldr r1, [pc, #28]	@ 00122d8e 0749
.org 0x122d90
	movs r2, #166	@ 00122d90 a622
.org 0x122d92
	lsls r2, r2, #1	@ 00122d92 5200
.org 0x122d94
	str r3, [sp, #0]	@ 00122d94 0093
.org 0x122d96
	bl 0x16f0	@ 00122d96 def6abfc
.org 0x122d9a
	lsls r0, r0, #24	@ 00122d9a 0006
.org 0x122d9c
	adds r7, r4, #0	@ 00122d9c 271c
.org 0x122d9e
	ldr r3, [sp, #0]	@ 00122d9e 009b
.org 0x122da0
	cmp r0, #0	@ 00122da0 0028
.org 0x122da2
	beq.n 0x122db0	@ 00122da2 05d0
.org 0x122da4
	movs r0, #2	@ 00122da4 0220
.org 0x122da6
	strb r0, [r6, #14]	@ 00122da6 b073
.org 0x122da8
	adds r6, r5, #1	@ 00122da8 6e1c
.org 0x122daa
	b.n 0x122e10	@ 00122daa 31e0
.org 0x122dac
	.byte 0xc0,0xc7,0x03,0x02	@ 00122dac data
.org 0x122db0
	adds r6, r5, #1	@ 00122db0 6e1c
.org 0x122db2
	ldr r4, [pc, #20]	@ 00122db2 054c
.org 0x122db4
	str r3, [sp, #0]	@ 00122db4 0093
.org 0x122db6
	bl 0x1574	@ 00122db6 def6ddfb
.org 0x122dba
	ldrb r0, [r4, #0]	@ 00122dba 2078
.org 0x122dbc
	ldr r3, [sp, #0]	@ 00122dbc 009b
.org 0x122dbe
	cmp r0, #1	@ 00122dbe 0128
.org 0x122dc0
	beq.n 0x122dcc	@ 00122dc0 04d0
.org 0x122dc2
	ldrb r0, [r4, #30]	@ 00122dc2 a07f
.org 0x122dc4
	b.n 0x122dce	@ 00122dc4 03e0
.org 0x122dc6
	.byte 0x00	@ 00122dc6 data
.org 0x122dc7
	.byte 0x00	@ 00122dc7 data
.org 0x122dc8
	.byte 0x90,0x07,0x00,0x02	@ 00122dc8 data
.org 0x122dcc
	movs r0, #0	@ 00122dcc 0020
.org 0x122dce
	lsls r0, r0, #24	@ 00122dce 0006
.org 0x122dd0
	lsrs r1, r0, #24	@ 00122dd0 010e
.org 0x122dd2
	cmp r0, #0	@ 00122dd2 0028
.org 0x122dd4
	beq.n 0x122db4	@ 00122dd4 eed0
.org 0x122dd6
	lsls r0, r1, #24	@ 00122dd6 0806
.org 0x122dd8
	cmp r0, #0	@ 00122dd8 0028
.org 0x122dda
	bge.n 0x122de8	@ 00122dda 05da
.org 0x122ddc
	adds r0, r7, r5	@ 00122ddc 7819
.org 0x122dde
	lsls r0, r0, #2	@ 00122dde 8000
.org 0x122de0
	adds r0, r0, r3	@ 00122de0 c018
.org 0x122de2
	movs r1, #2	@ 00122de2 0221
.org 0x122de4
	strb r1, [r0, #14]	@ 00122de4 8173
.org 0x122de6
	b.n 0x122e10	@ 00122de6 13e0
.org 0x122de8
	movs r0, #1	@ 00122de8 0120
.org 0x122dea
	strb r0, [r3, #0]	@ 00122dea 1870
.org 0x122dec
	adds r2, r7, r5	@ 00122dec 7a19
.org 0x122dee
	lsls r2, r2, #2	@ 00122dee 9200
.org 0x122df0
	adds r0, r3, #4	@ 00122df0 181d
.org 0x122df2
	adds r0, r2, r0	@ 00122df2 1018
.org 0x122df4
	mov r4, r8	@ 00122df4 4446
.org 0x122df6
	ldr r1, [r4, #8]	@ 00122df6 a168
.org 0x122df8
	str r1, [r0, #0]	@ 00122df8 0160
.org 0x122dfa
	adds r0, r3, #0	@ 00122dfa 181c
.org 0x122dfc
	adds r0, #8	@ 00122dfc 0830
.org 0x122dfe
	adds r0, r2, r0	@ 00122dfe 1018
.org 0x122e00
	ldrb r1, [r4, #1]	@ 00122e00 6178
.org 0x122e02
	str r1, [r0, #0]	@ 00122e02 0160
.org 0x122e04
	adds r2, r2, r3	@ 00122e04 d218
.org 0x122e06
	mov r1, r9	@ 00122e06 4946
.org 0x122e08
	ldrh r0, [r1, #0]	@ 00122e08 0888
.org 0x122e0a
	strb r0, [r2, #12]	@ 00122e0a 1073
.org 0x122e0c
	ldrh r0, [r1, #2]	@ 00122e0c 4888
.org 0x122e0e
	strb r0, [r2, #13]	@ 00122e0e 5073
.org 0x122e10
	lsls r0, r6, #24	@ 00122e10 3006
