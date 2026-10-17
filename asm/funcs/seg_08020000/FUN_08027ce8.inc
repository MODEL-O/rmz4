@ FUN_08027ce8  entry 0x08027ce8  size 110
.thumb
.org 0x27ce8
FUN_08027ce8:
	push {r4, r5, r6, lr}	@ 00027ce8 70b5
.org 0x27cea
	movs r1, #166	@ 00027cea a621
.org 0x27cec
	lsls r1, r1, #1	@ 00027cec 4900
.org 0x27cee
	adds r5, r0, r1	@ 00027cee 4518
.org 0x27cf0
	ldrh r3, [r5, #0]	@ 00027cf0 2b88
.org 0x27cf2
	ldr r0, [pc, #100]	@ 00027cf2 1948
.org 0x27cf4
	ands r0, r3	@ 00027cf4 1840
.org 0x27cf6
	cmp r0, #0	@ 00027cf6 0028
.org 0x27cf8
	beq.n 0x27d50	@ 00027cf8 2ad0
.org 0x27cfa
	ldr r1, [pc, #96]	@ 00027cfa 1849
.org 0x27cfc
	lsls r0, r3, #26	@ 00027cfc 9806
.org 0x27cfe
	movs r2, #128	@ 00027cfe 8022
.org 0x27d00
	lsls r2, r2, #23	@ 00027d00 d205
.org 0x27d02
	adds r0, r0, r2	@ 00027d02 8018
.org 0x27d04
	lsrs r0, r0, #23	@ 00027d04 c00d
.org 0x27d06
	adds r0, r0, r1	@ 00027d06 4018
.org 0x27d08
	ldrh r0, [r0, #0]	@ 00027d08 0088
.org 0x27d0a
	lsls r0, r0, #16	@ 00027d0a 0004
.org 0x27d0c
	asrs r0, r0, #21	@ 00027d0c 4015
.org 0x27d0e
	movs r1, #8	@ 00027d0e 0821
.org 0x27d10
	subs r4, r1, r0	@ 00027d10 0c1a
.org 0x27d12
	movs r2, #255	@ 00027d12 ff22
.org 0x27d14
	lsls r2, r2, #8	@ 00027d14 1202
.org 0x27d16
	ands r2, r3	@ 00027d16 1a40
.org 0x27d18
	adds r0, r3, #1	@ 00027d18 581c
.org 0x27d1a
	movs r1, #255	@ 00027d1a ff21
.org 0x27d1c
	ands r0, r1	@ 00027d1c 0840
.org 0x27d1e
	orrs r2, r0	@ 00027d1e 0243
.org 0x27d20
	strh r2, [r5, #0]	@ 00027d20 2a80
.org 0x27d22
	ldr r3, [pc, #60]	@ 00027d22 0f4b
.org 0x27d24
	asrs r0, r4, #1	@ 00027d24 6010
.org 0x27d26
	adds r0, #32	@ 00027d26 2030
.org 0x27d28
	movs r6, #128	@ 00027d28 8026
.org 0x27d2a
	lsls r6, r6, #3	@ 00027d2a f600
.org 0x27d2c
	adds r1, r3, r6	@ 00027d2c 9919
.org 0x27d2e
	strb r0, [r1, #0]	@ 00027d2e 0870
.org 0x27d30
	movs r0, #32	@ 00027d30 2020
.org 0x27d32
	subs r0, r0, r4	@ 00027d32 001b
.org 0x27d34
	adds r6, #1	@ 00027d34 0136
.org 0x27d36
	adds r1, r3, r6	@ 00027d36 9919
.org 0x27d38
	strb r0, [r1, #0]	@ 00027d38 0870
.org 0x27d3a
	ldr r1, [pc, #40]	@ 00027d3a 0a49
.org 0x27d3c
	adds r3, r3, r1	@ 00027d3c 5b18
.org 0x27d3e
	strb r0, [r3, #0]	@ 00027d3e 1870
.org 0x27d40
	movs r0, #128	@ 00027d40 8020
.org 0x27d42
	lsls r0, r0, #7	@ 00027d42 c001
.org 0x27d44
	ands r2, r0	@ 00027d44 0240
.org 0x27d46
	cmp r2, #0	@ 00027d46 002a
.org 0x27d48
	beq.n 0x27d50	@ 00027d48 02d0
.org 0x27d4a
	cmp r4, #0	@ 00027d4a 002c
.org 0x27d4c
	bne.n 0x27d50	@ 00027d4c 00d1
.org 0x27d4e
	strh r4, [r5, #0]	@ 00027d4e 2c80
.org 0x27d50
	pop {r4, r5, r6}	@ 00027d50 70bc
.org 0x27d52
	pop {r0}	@ 00027d52 01bc
.org 0x27d54
	bx r0	@ 00027d54 0047
