@ FUN_08122e28  entry 0x08122e28  size 74
.thumb
.org 0x122e28
FUN_08122e28:
	push {r4, r5, r6, lr}	@ 00122e28 70b5
.org 0x122e2a
	mov r6, r8	@ 00122e2a 4646
.org 0x122e2c
	push {r6}	@ 00122e2c 40b4
.org 0x122e2e
	mov r8, r0	@ 00122e2e 8046
.org 0x122e30
	lsls r1, r1, #24	@ 00122e30 0906
.org 0x122e32
	lsrs r1, r1, #24	@ 00122e32 090e
.org 0x122e34
	ldr r4, [pc, #60]	@ 00122e34 0f4c
.org 0x122e36
	movs r3, #1	@ 00122e36 0123
.org 0x122e38
	strb r3, [r4, #0]	@ 00122e38 2370
.org 0x122e3a
	lsls r2, r1, #1	@ 00122e3a 4a00
.org 0x122e3c
	adds r2, r2, r1	@ 00122e3c 5218
.org 0x122e3e
	lsls r2, r2, #2	@ 00122e3e 9200
.org 0x122e40
	adds r6, r2, r4	@ 00122e40 1619
.org 0x122e42
	strb r3, [r6, #14]	@ 00122e42 b373
.org 0x122e44
	adds r1, r4, #4	@ 00122e44 211d
.org 0x122e46
	adds r1, r2, r1	@ 00122e46 5118
.org 0x122e48
	movs r5, #198	@ 00122e48 c625
.org 0x122e4a
	lsls r5, r5, #7	@ 00122e4a ed01
.org 0x122e4c
	add r5, r8	@ 00122e4c 4544
.org 0x122e4e
	ldr r3, [r5, #8]	@ 00122e4e ab68
.org 0x122e50
	str r3, [r1, #0]	@ 00122e50 0b60
.org 0x122e52
	adds r4, #8	@ 00122e52 0834
.org 0x122e54
	adds r2, r2, r4	@ 00122e54 1219
.org 0x122e56
	ldrb r1, [r5, #1]	@ 00122e56 6978
.org 0x122e58
	str r1, [r2, #0]	@ 00122e58 1160
.org 0x122e5a
	ldr r1, [pc, #28]	@ 00122e5a 0749
.org 0x122e5c
	add r8, r1	@ 00122e5c 8844
.org 0x122e5e
	mov r2, r8	@ 00122e5e 4246
.org 0x122e60
	ldrh r1, [r2, #0]	@ 00122e60 1188
.org 0x122e62
	strb r1, [r6, #12]	@ 00122e62 3173
.org 0x122e64
	ldrh r1, [r2, #2]	@ 00122e64 5188
.org 0x122e66
	strb r1, [r6, #13]	@ 00122e66 7173
.org 0x122e68
	pop {r3}	@ 00122e68 08bc
.org 0x122e6a
	mov r8, r3	@ 00122e6a 9846
.org 0x122e6c
	pop {r4, r5, r6}	@ 00122e6c 70bc
.org 0x122e6e
	pop {r1}	@ 00122e6e 02bc
.org 0x122e70
	bx r1	@ 00122e70 0847
