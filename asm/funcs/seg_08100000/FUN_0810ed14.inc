@ FUN_0810ed14  entry 0x0810ed14  size 174
.thumb
.org 0x10ed14
FUN_0810ed14:
	push {r4, r5, r6, lr}	@ 0010ed14 70b5
.org 0x10ed16
	ldr r0, [pc, #172]	@ 0010ed16 2b48
.org 0x10ed18
	lsls r1, r1, #24	@ 0010ed18 0906
.org 0x10ed1a
	lsrs r1, r1, #23	@ 0010ed1a c90d
.org 0x10ed1c
	adds r1, r1, r0	@ 0010ed1c 0918
.org 0x10ed1e
	movs r0, #0	@ 0010ed1e 0020
.org 0x10ed20
	ldrsh r1, [r1, r0]	@ 0010ed20 095e
.org 0x10ed22
	lsls r0, r1, #3	@ 0010ed22 c800
.org 0x10ed24
	subs r0, r0, r1	@ 0010ed24 401a
.org 0x10ed26
	asrs r0, r0, #3	@ 0010ed26 c010
.org 0x10ed28
	adds r0, #7	@ 0010ed28 0730
.org 0x10ed2a
	ldr r1, [pc, #156]	@ 0010ed2a 2749
.org 0x10ed2c
	ldr r5, [r1, #4]	@ 0010ed2c 4d68
.org 0x10ed2e
	ldr r2, [pc, #156]	@ 0010ed2e 274a
.org 0x10ed30
	asrs r6, r0, #3	@ 0010ed30 c610
.org 0x10ed32
	lsls r0, r6, #3	@ 0010ed32 f000
.org 0x10ed34
	adds r0, #12	@ 0010ed34 0c30
.org 0x10ed36
	movs r1, #255	@ 0010ed36 ff21
.org 0x10ed38
	ands r0, r1	@ 0010ed38 0840
.org 0x10ed3a
	movs r3, #128	@ 0010ed3a 8023
.org 0x10ed3c
	lsls r3, r3, #3	@ 0010ed3c db00
.org 0x10ed3e
	adds r1, r3, #0	@ 0010ed3e 191c
.org 0x10ed40
	orrs r0, r1	@ 0010ed40 0843
.org 0x10ed42
	strh r0, [r2, #4]	@ 0010ed42 9080
.org 0x10ed44
	cmp r6, #0	@ 0010ed44 002e
.org 0x10ed46
	beq.n 0x10ed62	@ 0010ed46 0cd0
.org 0x10ed48
	ldr r0, [pc, #132]	@ 0010ed48 2148
.org 0x10ed4a
	ldr r2, [pc, #136]	@ 0010ed4a 224a
.org 0x10ed4c
	adds r1, r5, r2	@ 0010ed4c a918
.org 0x10ed4e
	lsls r4, r6, #1	@ 0010ed4e 7400
.org 0x10ed50
	adds r2, r4, #0	@ 0010ed50 221c
.org 0x10ed52
	bl 0xab4	@ 0010ed52 f1f6affe
.org 0x10ed56
	ldr r0, [pc, #128]	@ 0010ed56 2048
.org 0x10ed58
	ldr r3, [pc, #128]	@ 0010ed58 204b
.org 0x10ed5a
	adds r1, r5, r3	@ 0010ed5a e918
.org 0x10ed5c
	adds r2, r4, #0	@ 0010ed5c 221c
.org 0x10ed5e
	bl 0xab4	@ 0010ed5e f1f6a9fe
.org 0x10ed62
	movs r0, #128	@ 0010ed62 8020
.org 0x10ed64
	lsls r0, r0, #3	@ 0010ed64 c000
.org 0x10ed66
	adds r1, r5, r0	@ 0010ed66 2918
.org 0x10ed68
	ldr r2, [pc, #116]	@ 0010ed68 1d4a
.org 0x10ed6a
	adds r0, r2, #0	@ 0010ed6a 101c
.org 0x10ed6c
	strh r0, [r1, #0]	@ 0010ed6c 0880
.org 0x10ed6e
	movs r3, #136	@ 0010ed6e 8823
.org 0x10ed70
	lsls r3, r3, #3	@ 0010ed70 db00
.org 0x10ed72
	adds r1, r5, r3	@ 0010ed72 e918
.org 0x10ed74
	adds r2, #1	@ 0010ed74 0132
.org 0x10ed76
	adds r0, r2, #0	@ 0010ed76 101c
.org 0x10ed78
	strh r0, [r1, #0]	@ 0010ed78 0880
.org 0x10ed7a
	adds r3, #64	@ 0010ed7a 4033
.org 0x10ed7c
	adds r1, r5, r3	@ 0010ed7c e918
.org 0x10ed7e
	adds r2, #1	@ 0010ed7e 0132
.org 0x10ed80
	adds r0, r2, #0	@ 0010ed80 101c
.org 0x10ed82
	strh r0, [r1, #0]	@ 0010ed82 0880
.org 0x10ed84
	adds r3, #64	@ 0010ed84 4033
.org 0x10ed86
	adds r1, r5, r3	@ 0010ed86 e918
.org 0x10ed88
	adds r2, #1	@ 0010ed88 0132
.org 0x10ed8a
	adds r0, r2, #0	@ 0010ed8a 101c
.org 0x10ed8c
	strh r0, [r1, #0]	@ 0010ed8c 0880
.org 0x10ed8e
	lsls r0, r6, #1	@ 0010ed8e 7000
.org 0x10ed90
	adds r0, r0, r5	@ 0010ed90 4019
.org 0x10ed92
	subs r3, #190	@ 0010ed92 be3b
.org 0x10ed94
	adds r2, r0, r3	@ 0010ed94 c218
.org 0x10ed96
	ldr r3, [pc, #76]	@ 0010ed96 134b
.org 0x10ed98
	adds r1, r3, #0	@ 0010ed98 191c
.org 0x10ed9a
	strh r1, [r2, #0]	@ 0010ed9a 1180
.org 0x10ed9c
	ldr r1, [pc, #72]	@ 0010ed9c 1249
.org 0x10ed9e
	adds r2, r0, r1	@ 0010ed9e 4218
.org 0x10eda0
	adds r3, #1	@ 0010eda0 0133
.org 0x10eda2
	adds r1, r3, #0	@ 0010eda2 191c
.org 0x10eda4
	strh r1, [r2, #0]	@ 0010eda4 1180
.org 0x10eda6
	ldr r1, [pc, #68]	@ 0010eda6 1149
.org 0x10eda8
	adds r2, r0, r1	@ 0010eda8 4218
.org 0x10edaa
	adds r3, #1	@ 0010edaa 0133
.org 0x10edac
	adds r1, r3, #0	@ 0010edac 191c
.org 0x10edae
	strh r1, [r2, #0]	@ 0010edae 1180
.org 0x10edb0
	ldr r1, [pc, #40]	@ 0010edb0 0a49
.org 0x10edb2
	adds r0, r0, r1	@ 0010edb2 4018
.org 0x10edb4
	movs r2, #218	@ 0010edb4 da22
.org 0x10edb6
	lsls r2, r2, #3	@ 0010edb6 d200
.org 0x10edb8
	adds r1, r2, #0	@ 0010edb8 111c
.org 0x10edba
	strh r1, [r0, #0]	@ 0010edba 0180
.org 0x10edbc
	pop {r4, r5, r6}	@ 0010edbc 70bc
.org 0x10edbe
	pop {r0}	@ 0010edbe 01bc
.org 0x10edc0
	bx r0	@ 0010edc0 0047
