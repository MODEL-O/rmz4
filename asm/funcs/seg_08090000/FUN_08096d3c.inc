@ FUN_08096d3c  entry 0x08096d3c  size 70
.thumb
.org 0x96d3c
FUN_08096d3c:
	push {r4, lr}	@ 00096d3c 10b5
.org 0x96d3e
	adds r1, r0, #0	@ 00096d3e 011c
.org 0x96d40
	ldr r4, [r1, #44]	@ 00096d40 cc6a
.org 0x96d42
	ldrb r0, [r4, #13]	@ 00096d42 607b
.org 0x96d44
	cmp r0, #0	@ 00096d44 0028
.org 0x96d46
	bne.n 0x96d7c	@ 00096d46 19d1
.org 0x96d48
	ldr r0, [r1, #20]	@ 00096d48 4869
.org 0x96d4a
	movs r1, #128	@ 00096d4a 8021
.org 0x96d4c
	lsls r1, r1, #10	@ 00096d4c 8902
.org 0x96d4e
	ands r0, r1	@ 00096d4e 0840
.org 0x96d50
	cmp r0, #0	@ 00096d50 0028
.org 0x96d52
	beq.n 0x96d7c	@ 00096d52 13d0
.org 0x96d54
	ldr r0, [pc, #44]	@ 00096d54 0b48
.org 0x96d56
	ldr r0, [r0, #0]	@ 00096d56 0068
.org 0x96d58
	movs r1, #5	@ 00096d58 0521
.org 0x96d5a
	movs r2, #1	@ 00096d5a 0122
.org 0x96d5c
	bl 0x3a578	@ 00096d5c a3f70cfc
.org 0x96d60
	lsls r0, r0, #24	@ 00096d60 0006
.org 0x96d62
	cmp r0, #0	@ 00096d62 0028
.org 0x96d64
	beq.n 0x96d7c	@ 00096d64 0ad0
.org 0x96d66
	movs r0, #1	@ 00096d66 0120
.org 0x96d68
	strb r0, [r4, #19]	@ 00096d68 e074
.org 0x96d6a
	ldr r1, [pc, #28]	@ 00096d6a 0749
.org 0x96d6c
	ldrb r0, [r4, #9]	@ 00096d6c 607a
.org 0x96d6e
	lsls r0, r0, #2	@ 00096d6e 8000
.org 0x96d70
	adds r0, r0, r1	@ 00096d70 4018
.org 0x96d72
	movs r1, #2	@ 00096d72 0221
.org 0x96d74
	str r1, [r4, #12]	@ 00096d74 e160
.org 0x96d76
	ldr r0, [r0, #0]	@ 00096d76 0068
.org 0x96d78
	ldr r0, [r0, #8]	@ 00096d78 8068
.org 0x96d7a
	str r0, [r4, #20]	@ 00096d7a 6061
.org 0x96d7c
	pop {r4}	@ 00096d7c 10bc
.org 0x96d7e
	pop {r0}	@ 00096d7e 01bc
.org 0x96d80
	bx r0	@ 00096d80 0047
